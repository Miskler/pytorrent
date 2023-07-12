/* Generated code for Python module 'flet_core.constrained_control'
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

/* The "module_flet_core$constrained_control" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$constrained_control;
PyDictObject *moduledict_flet_core$constrained_control;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[135];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[135];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.constrained_control"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 135; i++) {
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
void checkModuleConstants_flet_core$constrained_control(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 135; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_1406492b6ca7ac9685cc66ce874e502f;
static PyCodeObject *codeobj_461bca902b76746d98211d225f63fbcf;
static PyCodeObject *codeobj_5f4c8fa13f93a2f20bcf957538d6e199;
static PyCodeObject *codeobj_af9c6677a2279c38f87a12d552c5edcc;
static PyCodeObject *codeobj_3e902b64dc5249e86e718c290509b0ad;
static PyCodeObject *codeobj_ffcf66cbcaa4ec310c4d6650632c823d;
static PyCodeObject *codeobj_be6e54323b815de73fcdbf29ec3758f5;
static PyCodeObject *codeobj_706c64710783b4fb78588defd5f6ab8e;
static PyCodeObject *codeobj_a0e99557f0853099fca028a7a391b1db;
static PyCodeObject *codeobj_538659b24f876d1e332e58bf94ac175e;
static PyCodeObject *codeobj_b4790afd1803c0c8a3075311b3c86eae;
static PyCodeObject *codeobj_ac8b513996a6a489f9735e9e08f12e32;
static PyCodeObject *codeobj_4988882783099c378318f7297c0e3d39;
static PyCodeObject *codeobj_517024409821a0c8e086e591686996d7;
static PyCodeObject *codeobj_310f07a02e4e76d5afdcf1811895d7ee;
static PyCodeObject *codeobj_7f54c57141e1aca7681a0758a35d1ac0;
static PyCodeObject *codeobj_bad4523ee86fb33ce6abb6c1d380dbde;
static PyCodeObject *codeobj_c23e099331f0018824f1c20afbc558f6;
static PyCodeObject *codeobj_ade1063ca9e0a68930674fb07b52042b;
static PyCodeObject *codeobj_1839f23b7dc8a8198a8ee9b147ba1639;
static PyCodeObject *codeobj_3ce67725ed47edeef8e43eca0ddb167f;
static PyCodeObject *codeobj_47fbe01515214b5860b0190fa3619791;
static PyCodeObject *codeobj_dda4153dbf8bf99a0ae608d493f6c8ca;
static PyCodeObject *codeobj_91cfdfb8985aabf287b994599b00c5a9;
static PyCodeObject *codeobj_2a0e7dca6a8f4fa967c3275f080a28e5;
static PyCodeObject *codeobj_bc61d704d7ac7910a72f37530b22652a;
static PyCodeObject *codeobj_d1ef77f09276d1bd510080202fe52396;
static PyCodeObject *codeobj_83219f75788e957cb1ea7350cea14705;
static PyCodeObject *codeobj_faeb214cfb46ad43b7cf56b99ba25760;
static PyCodeObject *codeobj_d050fcb87d12a522a14085b86ef7fd58;
static PyCodeObject *codeobj_91c4c52c9e4dc75627e9565d8aabd94f;
static PyCodeObject *codeobj_53aec5c2677323d11a783e5308bd18d5;
static PyCodeObject *codeobj_f07367e35fe6f11b25f1e612956c2a35;
static PyCodeObject *codeobj_a5efaea5222434985d05b1fbfbc88859;
static PyCodeObject *codeobj_5cd0f7f803aeda52c7621ea45c79f97f;
static PyCodeObject *codeobj_dc23c9596b41806e4da2999b8e264b0a;
static PyCodeObject *codeobj_7e3f4c61ae95fb78ed4c1668b843adf2;
static PyCodeObject *codeobj_00fc6e24494c7a12144000bfd4ee37da;
static PyCodeObject *codeobj_57b7c0cf6c3d020d106ef2f80b41256e;
static PyCodeObject *codeobj_04520deb55fba15ec1650392fca71558;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[58]; CHECK_OBJECT(module_filename_obj);
    codeobj_1406492b6ca7ac9685cc66ce874e502f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[127], mod_consts[127], NULL, NULL, 0, 0, 0);
    codeobj_461bca902b76746d98211d225f63fbcf = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[128], NULL, 0, 0, 0);
    codeobj_5f4c8fa13f93a2f20bcf957538d6e199 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[129], NULL, 27, 0, 0);
    codeobj_af9c6677a2279c38f87a12d552c5edcc = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[22], mod_consts[22], mod_consts[130], mod_consts[128], 1, 0, 0);
    codeobj_3e902b64dc5249e86e718c290509b0ad = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[131], NULL, 1, 0, 0);
    codeobj_ffcf66cbcaa4ec310c4d6650632c823d = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[132], NULL, 2, 0, 0);
    codeobj_be6e54323b815de73fcdbf29ec3758f5 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[131], NULL, 1, 0, 0);
    codeobj_706c64710783b4fb78588defd5f6ab8e = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[132], NULL, 2, 0, 0);
    codeobj_a0e99557f0853099fca028a7a391b1db = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[131], NULL, 1, 0, 0);
    codeobj_538659b24f876d1e332e58bf94ac175e = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[132], NULL, 2, 0, 0);
    codeobj_b4790afd1803c0c8a3075311b3c86eae = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[131], NULL, 1, 0, 0);
    codeobj_ac8b513996a6a489f9735e9e08f12e32 = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[132], NULL, 2, 0, 0);
    codeobj_4988882783099c378318f7297c0e3d39 = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[131], NULL, 1, 0, 0);
    codeobj_517024409821a0c8e086e591686996d7 = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[132], NULL, 2, 0, 0);
    codeobj_310f07a02e4e76d5afdcf1811895d7ee = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[131], NULL, 1, 0, 0);
    codeobj_7f54c57141e1aca7681a0758a35d1ac0 = MAKE_CODE_OBJECT(module_filename_obj, 207, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[132], NULL, 2, 0, 0);
    codeobj_bad4523ee86fb33ce6abb6c1d380dbde = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[131], NULL, 1, 0, 0);
    codeobj_c23e099331f0018824f1c20afbc558f6 = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[132], NULL, 2, 0, 0);
    codeobj_ade1063ca9e0a68930674fb07b52042b = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[131], NULL, 1, 0, 0);
    codeobj_1839f23b7dc8a8198a8ee9b147ba1639 = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[132], NULL, 2, 0, 0);
    codeobj_3ce67725ed47edeef8e43eca0ddb167f = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[131], NULL, 1, 0, 0);
    codeobj_47fbe01515214b5860b0190fa3619791 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[132], NULL, 2, 0, 0);
    codeobj_dda4153dbf8bf99a0ae608d493f6c8ca = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[131], NULL, 1, 0, 0);
    codeobj_91cfdfb8985aabf287b994599b00c5a9 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[132], NULL, 2, 0, 0);
    codeobj_2a0e7dca6a8f4fa967c3275f080a28e5 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[131], NULL, 1, 0, 0);
    codeobj_bc61d704d7ac7910a72f37530b22652a = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[132], NULL, 2, 0, 0);
    codeobj_d1ef77f09276d1bd510080202fe52396 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[131], NULL, 1, 0, 0);
    codeobj_83219f75788e957cb1ea7350cea14705 = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[132], NULL, 2, 0, 0);
    codeobj_faeb214cfb46ad43b7cf56b99ba25760 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[131], NULL, 1, 0, 0);
    codeobj_d050fcb87d12a522a14085b86ef7fd58 = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[133], NULL, 2, 0, 0);
    codeobj_91c4c52c9e4dc75627e9565d8aabd94f = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[131], NULL, 1, 0, 0);
    codeobj_53aec5c2677323d11a783e5308bd18d5 = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[132], NULL, 2, 0, 0);
    codeobj_f07367e35fe6f11b25f1e612956c2a35 = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[131], NULL, 1, 0, 0);
    codeobj_a5efaea5222434985d05b1fbfbc88859 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[132], NULL, 2, 0, 0);
    codeobj_5cd0f7f803aeda52c7621ea45c79f97f = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[131], NULL, 1, 0, 0);
    codeobj_dc23c9596b41806e4da2999b8e264b0a = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[132], NULL, 2, 0, 0);
    codeobj_7e3f4c61ae95fb78ed4c1668b843adf2 = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[131], NULL, 1, 0, 0);
    codeobj_00fc6e24494c7a12144000bfd4ee37da = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[132], NULL, 2, 0, 0);
    codeobj_57b7c0cf6c3d020d106ef2f80b41256e = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[131], NULL, 1, 0, 0);
    codeobj_04520deb55fba15ec1650392fca71558 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[132], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__10_left(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__11_top(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__12_top(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__13_right(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__14_right(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__15_bottom(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__16_bottom(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__17_rotate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__18_rotate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__19_scale(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__20_scale(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__21_offset(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__22_offset(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__23_aspect_ratio(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__24_aspect_ratio(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__25_animate_opacity(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__26_animate_opacity(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__27_animate_size(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__28_animate_size(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__29_animate_position(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__2__before_build_command(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__30_animate_position(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__31_animate_rotation(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__32_animate_rotation(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__33_animate_scale(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__34_animate_scale(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__35_animate_offset(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__36_animate_offset(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__37_on_animation_end();


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__38_on_animation_end();


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__3_key(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__4_key(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__5_width(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__6_width(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__7_height(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__8_height(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__9_left(PyObject *annotations);


// The module function definitions.
static PyObject *impl_flet_core$constrained_control$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ref = python_pars[1];
    PyObject *par_expand = python_pars[2];
    PyObject *par_col = python_pars[3];
    PyObject *par_opacity = python_pars[4];
    PyObject *par_tooltip = python_pars[5];
    PyObject *par_visible = python_pars[6];
    PyObject *par_disabled = python_pars[7];
    PyObject *par_data = python_pars[8];
    PyObject *par_key = python_pars[9];
    PyObject *par_width = python_pars[10];
    PyObject *par_height = python_pars[11];
    PyObject *par_left = python_pars[12];
    PyObject *par_top = python_pars[13];
    PyObject *par_right = python_pars[14];
    PyObject *par_bottom = python_pars[15];
    PyObject *par_rotate = python_pars[16];
    PyObject *par_scale = python_pars[17];
    PyObject *par_offset = python_pars[18];
    PyObject *par_aspect_ratio = python_pars[19];
    PyObject *par_animate_opacity = python_pars[20];
    PyObject *par_animate_size = python_pars[21];
    PyObject *par_animate_position = python_pars[22];
    PyObject *par_animate_rotation = python_pars[23];
    PyObject *par_animate_scale = python_pars[24];
    PyObject *par_animate_offset = python_pars[25];
    PyObject *par_on_animation_end = python_pars[26];
    struct Nuitka_FrameObject *frame_5f4c8fa13f93a2f20bcf957538d6e199;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_5f4c8fa13f93a2f20bcf957538d6e199 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5f4c8fa13f93a2f20bcf957538d6e199)) {
        Py_XDECREF(cache_frame_5f4c8fa13f93a2f20bcf957538d6e199);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5f4c8fa13f93a2f20bcf957538d6e199 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5f4c8fa13f93a2f20bcf957538d6e199 = MAKE_FUNCTION_FRAME(codeobj_5f4c8fa13f93a2f20bcf957538d6e199, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5f4c8fa13f93a2f20bcf957538d6e199->m_type_description == NULL);
    frame_5f4c8fa13f93a2f20bcf957538d6e199 = cache_frame_5f4c8fa13f93a2f20bcf957538d6e199;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5f4c8fa13f93a2f20bcf957538d6e199);
    assert(Py_REFCNT(frame_5f4c8fa13f93a2f20bcf957538d6e199) == 2);

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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_ref);
        tmp_kw_call_dict_value_0_1 = par_ref;
        CHECK_OBJECT(par_expand);
        tmp_kw_call_dict_value_1_1 = par_expand;
        CHECK_OBJECT(par_col);
        tmp_kw_call_dict_value_2_1 = par_col;
        CHECK_OBJECT(par_opacity);
        tmp_kw_call_dict_value_3_1 = par_opacity;
        CHECK_OBJECT(par_tooltip);
        tmp_kw_call_dict_value_4_1 = par_tooltip;
        CHECK_OBJECT(par_visible);
        tmp_kw_call_dict_value_5_1 = par_visible;
        CHECK_OBJECT(par_disabled);
        tmp_kw_call_dict_value_6_1 = par_disabled;
        CHECK_OBJECT(par_data);
        tmp_kw_call_dict_value_7_1 = par_data;
        frame_5f4c8fa13f93a2f20bcf957538d6e199->m_frame.f_lineno = 47;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[8] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_key);
        tmp_assattr_value_1 = par_key;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_width);
        tmp_assattr_value_2 = par_width;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_height);
        tmp_assattr_value_3 = par_height;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_left);
        tmp_assattr_value_4 = par_left;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[6], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_top);
        tmp_assattr_value_5 = par_top;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_right);
        tmp_assattr_value_6 = par_right;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[8], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_bottom);
        tmp_assattr_value_7 = par_bottom;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[9], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_scale);
        tmp_assattr_value_8 = par_scale;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[10], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_rotate);
        tmp_assattr_value_9 = par_rotate;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[11], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_offset);
        tmp_assattr_value_10 = par_offset;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[12], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_aspect_ratio);
        tmp_assattr_value_11 = par_aspect_ratio;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[13], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(par_animate_opacity);
        tmp_assattr_value_12 = par_animate_opacity;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[14], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(par_animate_size);
        tmp_assattr_value_13 = par_animate_size;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[15], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT(par_animate_position);
        tmp_assattr_value_14 = par_animate_position;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[16], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT(par_animate_rotation);
        tmp_assattr_value_15 = par_animate_rotation;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[17], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        CHECK_OBJECT(par_animate_scale);
        tmp_assattr_value_16 = par_animate_scale;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[18], tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        CHECK_OBJECT(par_animate_offset);
        tmp_assattr_value_17 = par_animate_offset;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[19], tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        CHECK_OBJECT(par_on_animation_end);
        tmp_assattr_value_18 = par_on_animation_end;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_18 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[20], tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5f4c8fa13f93a2f20bcf957538d6e199, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f4c8fa13f93a2f20bcf957538d6e199->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f4c8fa13f93a2f20bcf957538d6e199, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5f4c8fa13f93a2f20bcf957538d6e199,
        type_description_1,
        par_self,
        par_ref,
        par_expand,
        par_col,
        par_opacity,
        par_tooltip,
        par_visible,
        par_disabled,
        par_data,
        par_key,
        par_width,
        par_height,
        par_left,
        par_top,
        par_right,
        par_bottom,
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
        par_on_animation_end
    );


    // Release cached frame if used for exception.
    if (frame_5f4c8fa13f93a2f20bcf957538d6e199 == cache_frame_5f4c8fa13f93a2f20bcf957538d6e199) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5f4c8fa13f93a2f20bcf957538d6e199);
        cache_frame_5f4c8fa13f93a2f20bcf957538d6e199 = NULL;
    }

    assertFrameObject(frame_5f4c8fa13f93a2f20bcf957538d6e199);

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
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    CHECK_OBJECT(par_col);
    Py_DECREF(par_col);
    CHECK_OBJECT(par_opacity);
    Py_DECREF(par_opacity);
    CHECK_OBJECT(par_tooltip);
    Py_DECREF(par_tooltip);
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_expand);
    Py_DECREF(par_expand);
    CHECK_OBJECT(par_col);
    Py_DECREF(par_col);
    CHECK_OBJECT(par_opacity);
    Py_DECREF(par_opacity);
    CHECK_OBJECT(par_tooltip);
    Py_DECREF(par_tooltip);
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
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

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$constrained_control$$$function__2__before_build_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_af9c6677a2279c38f87a12d552c5edcc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_af9c6677a2279c38f87a12d552c5edcc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_af9c6677a2279c38f87a12d552c5edcc)) {
        Py_XDECREF(cache_frame_af9c6677a2279c38f87a12d552c5edcc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_af9c6677a2279c38f87a12d552c5edcc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_af9c6677a2279c38f87a12d552c5edcc = MAKE_FUNCTION_FRAME(codeobj_af9c6677a2279c38f87a12d552c5edcc, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_af9c6677a2279c38f87a12d552c5edcc->m_type_description == NULL);
    frame_af9c6677a2279c38f87a12d552c5edcc = cache_frame_af9c6677a2279c38f87a12d552c5edcc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_af9c6677a2279c38f87a12d552c5edcc);
    assert(Py_REFCNT(frame_af9c6677a2279c38f87a12d552c5edcc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_flet_core$constrained_control, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_af9c6677a2279c38f87a12d552c5edcc->m_frame.f_lineno = 79;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[22]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[11];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[24]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 80;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_af9c6677a2279c38f87a12d552c5edcc->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
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
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[10];
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[25]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 81;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_af9c6677a2279c38f87a12d552c5edcc->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
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
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[23]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[12];
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[26]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 82;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_af9c6677a2279c38f87a12d552c5edcc->m_frame.f_lineno = 82;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
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
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[23]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[27];
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[28]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 83;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_af9c6677a2279c38f87a12d552c5edcc->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[23]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[29];
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[30]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 84;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_af9c6677a2279c38f87a12d552c5edcc->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[23]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = mod_consts[31];
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[32]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 85;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_af9c6677a2279c38f87a12d552c5edcc->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[23]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[33];
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[34]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 86;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_af9c6677a2279c38f87a12d552c5edcc->m_frame.f_lineno = 86;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[23]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = mod_consts[35];
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[36]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 87;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_af9c6677a2279c38f87a12d552c5edcc->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[23]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = mod_consts[37];
        CHECK_OBJECT(par_self);
        tmp_expression_value_18 = par_self;
        tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[38]);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 88;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_af9c6677a2279c38f87a12d552c5edcc->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_af9c6677a2279c38f87a12d552c5edcc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_af9c6677a2279c38f87a12d552c5edcc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_af9c6677a2279c38f87a12d552c5edcc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_af9c6677a2279c38f87a12d552c5edcc,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_af9c6677a2279c38f87a12d552c5edcc == cache_frame_af9c6677a2279c38f87a12d552c5edcc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_af9c6677a2279c38f87a12d552c5edcc);
        cache_frame_af9c6677a2279c38f87a12d552c5edcc = NULL;
    }

    assertFrameObject(frame_af9c6677a2279c38f87a12d552c5edcc);

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


static PyObject *impl_flet_core$constrained_control$$$function__3_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_dda4153dbf8bf99a0ae608d493f6c8ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dda4153dbf8bf99a0ae608d493f6c8ca = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dda4153dbf8bf99a0ae608d493f6c8ca)) {
        Py_XDECREF(cache_frame_dda4153dbf8bf99a0ae608d493f6c8ca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dda4153dbf8bf99a0ae608d493f6c8ca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dda4153dbf8bf99a0ae608d493f6c8ca = MAKE_FUNCTION_FRAME(codeobj_dda4153dbf8bf99a0ae608d493f6c8ca, module_flet_core$constrained_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dda4153dbf8bf99a0ae608d493f6c8ca->m_type_description == NULL);
    frame_dda4153dbf8bf99a0ae608d493f6c8ca = cache_frame_dda4153dbf8bf99a0ae608d493f6c8ca;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dda4153dbf8bf99a0ae608d493f6c8ca);
    assert(Py_REFCNT(frame_dda4153dbf8bf99a0ae608d493f6c8ca) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_dda4153dbf8bf99a0ae608d493f6c8ca->m_frame.f_lineno = 93;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[39],
            PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
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
        exception_tb = MAKE_TRACEBACK(frame_dda4153dbf8bf99a0ae608d493f6c8ca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dda4153dbf8bf99a0ae608d493f6c8ca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dda4153dbf8bf99a0ae608d493f6c8ca, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dda4153dbf8bf99a0ae608d493f6c8ca,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_dda4153dbf8bf99a0ae608d493f6c8ca == cache_frame_dda4153dbf8bf99a0ae608d493f6c8ca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dda4153dbf8bf99a0ae608d493f6c8ca);
        cache_frame_dda4153dbf8bf99a0ae608d493f6c8ca = NULL;
    }

    assertFrameObject(frame_dda4153dbf8bf99a0ae608d493f6c8ca);

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


static PyObject *impl_flet_core$constrained_control$$$function__4_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_91cfdfb8985aabf287b994599b00c5a9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_91cfdfb8985aabf287b994599b00c5a9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_91cfdfb8985aabf287b994599b00c5a9)) {
        Py_XDECREF(cache_frame_91cfdfb8985aabf287b994599b00c5a9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_91cfdfb8985aabf287b994599b00c5a9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_91cfdfb8985aabf287b994599b00c5a9 = MAKE_FUNCTION_FRAME(codeobj_91cfdfb8985aabf287b994599b00c5a9, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_91cfdfb8985aabf287b994599b00c5a9->m_type_description == NULL);
    frame_91cfdfb8985aabf287b994599b00c5a9 = cache_frame_91cfdfb8985aabf287b994599b00c5a9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_91cfdfb8985aabf287b994599b00c5a9);
    assert(Py_REFCNT(frame_91cfdfb8985aabf287b994599b00c5a9) == 2);

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
        frame_91cfdfb8985aabf287b994599b00c5a9->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[41],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
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
        exception_tb = MAKE_TRACEBACK(frame_91cfdfb8985aabf287b994599b00c5a9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_91cfdfb8985aabf287b994599b00c5a9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_91cfdfb8985aabf287b994599b00c5a9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_91cfdfb8985aabf287b994599b00c5a9,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_91cfdfb8985aabf287b994599b00c5a9 == cache_frame_91cfdfb8985aabf287b994599b00c5a9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_91cfdfb8985aabf287b994599b00c5a9);
        cache_frame_91cfdfb8985aabf287b994599b00c5a9 = NULL;
    }

    assertFrameObject(frame_91cfdfb8985aabf287b994599b00c5a9);

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


static PyObject *impl_flet_core$constrained_control$$$function__5_width(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_57b7c0cf6c3d020d106ef2f80b41256e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_57b7c0cf6c3d020d106ef2f80b41256e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_57b7c0cf6c3d020d106ef2f80b41256e)) {
        Py_XDECREF(cache_frame_57b7c0cf6c3d020d106ef2f80b41256e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_57b7c0cf6c3d020d106ef2f80b41256e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_57b7c0cf6c3d020d106ef2f80b41256e = MAKE_FUNCTION_FRAME(codeobj_57b7c0cf6c3d020d106ef2f80b41256e, module_flet_core$constrained_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_57b7c0cf6c3d020d106ef2f80b41256e->m_type_description == NULL);
    frame_57b7c0cf6c3d020d106ef2f80b41256e = cache_frame_57b7c0cf6c3d020d106ef2f80b41256e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_57b7c0cf6c3d020d106ef2f80b41256e);
    assert(Py_REFCNT(frame_57b7c0cf6c3d020d106ef2f80b41256e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_57b7c0cf6c3d020d106ef2f80b41256e->m_frame.f_lineno = 105;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[39],
            PyTuple_GET_ITEM(mod_consts[42], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
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
        exception_tb = MAKE_TRACEBACK(frame_57b7c0cf6c3d020d106ef2f80b41256e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_57b7c0cf6c3d020d106ef2f80b41256e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_57b7c0cf6c3d020d106ef2f80b41256e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_57b7c0cf6c3d020d106ef2f80b41256e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_57b7c0cf6c3d020d106ef2f80b41256e == cache_frame_57b7c0cf6c3d020d106ef2f80b41256e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_57b7c0cf6c3d020d106ef2f80b41256e);
        cache_frame_57b7c0cf6c3d020d106ef2f80b41256e = NULL;
    }

    assertFrameObject(frame_57b7c0cf6c3d020d106ef2f80b41256e);

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


static PyObject *impl_flet_core$constrained_control$$$function__6_width(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_04520deb55fba15ec1650392fca71558;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_04520deb55fba15ec1650392fca71558 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_04520deb55fba15ec1650392fca71558)) {
        Py_XDECREF(cache_frame_04520deb55fba15ec1650392fca71558);

#if _DEBUG_REFCOUNTS
        if (cache_frame_04520deb55fba15ec1650392fca71558 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_04520deb55fba15ec1650392fca71558 = MAKE_FUNCTION_FRAME(codeobj_04520deb55fba15ec1650392fca71558, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_04520deb55fba15ec1650392fca71558->m_type_description == NULL);
    frame_04520deb55fba15ec1650392fca71558 = cache_frame_04520deb55fba15ec1650392fca71558;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_04520deb55fba15ec1650392fca71558);
    assert(Py_REFCNT(frame_04520deb55fba15ec1650392fca71558) == 2);

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
        frame_04520deb55fba15ec1650392fca71558->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[41],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
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
        exception_tb = MAKE_TRACEBACK(frame_04520deb55fba15ec1650392fca71558, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_04520deb55fba15ec1650392fca71558->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_04520deb55fba15ec1650392fca71558, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_04520deb55fba15ec1650392fca71558,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_04520deb55fba15ec1650392fca71558 == cache_frame_04520deb55fba15ec1650392fca71558) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_04520deb55fba15ec1650392fca71558);
        cache_frame_04520deb55fba15ec1650392fca71558 = NULL;
    }

    assertFrameObject(frame_04520deb55fba15ec1650392fca71558);

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


static PyObject *impl_flet_core$constrained_control$$$function__7_height(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3ce67725ed47edeef8e43eca0ddb167f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3ce67725ed47edeef8e43eca0ddb167f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3ce67725ed47edeef8e43eca0ddb167f)) {
        Py_XDECREF(cache_frame_3ce67725ed47edeef8e43eca0ddb167f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3ce67725ed47edeef8e43eca0ddb167f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3ce67725ed47edeef8e43eca0ddb167f = MAKE_FUNCTION_FRAME(codeobj_3ce67725ed47edeef8e43eca0ddb167f, module_flet_core$constrained_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3ce67725ed47edeef8e43eca0ddb167f->m_type_description == NULL);
    frame_3ce67725ed47edeef8e43eca0ddb167f = cache_frame_3ce67725ed47edeef8e43eca0ddb167f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3ce67725ed47edeef8e43eca0ddb167f);
    assert(Py_REFCNT(frame_3ce67725ed47edeef8e43eca0ddb167f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_3ce67725ed47edeef8e43eca0ddb167f->m_frame.f_lineno = 114;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[39],
            PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
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
        exception_tb = MAKE_TRACEBACK(frame_3ce67725ed47edeef8e43eca0ddb167f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3ce67725ed47edeef8e43eca0ddb167f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3ce67725ed47edeef8e43eca0ddb167f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3ce67725ed47edeef8e43eca0ddb167f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3ce67725ed47edeef8e43eca0ddb167f == cache_frame_3ce67725ed47edeef8e43eca0ddb167f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3ce67725ed47edeef8e43eca0ddb167f);
        cache_frame_3ce67725ed47edeef8e43eca0ddb167f = NULL;
    }

    assertFrameObject(frame_3ce67725ed47edeef8e43eca0ddb167f);

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


static PyObject *impl_flet_core$constrained_control$$$function__8_height(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_47fbe01515214b5860b0190fa3619791;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_47fbe01515214b5860b0190fa3619791 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_47fbe01515214b5860b0190fa3619791)) {
        Py_XDECREF(cache_frame_47fbe01515214b5860b0190fa3619791);

#if _DEBUG_REFCOUNTS
        if (cache_frame_47fbe01515214b5860b0190fa3619791 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_47fbe01515214b5860b0190fa3619791 = MAKE_FUNCTION_FRAME(codeobj_47fbe01515214b5860b0190fa3619791, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_47fbe01515214b5860b0190fa3619791->m_type_description == NULL);
    frame_47fbe01515214b5860b0190fa3619791 = cache_frame_47fbe01515214b5860b0190fa3619791;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_47fbe01515214b5860b0190fa3619791);
    assert(Py_REFCNT(frame_47fbe01515214b5860b0190fa3619791) == 2);

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
        frame_47fbe01515214b5860b0190fa3619791->m_frame.f_lineno = 118;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[41],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
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
        exception_tb = MAKE_TRACEBACK(frame_47fbe01515214b5860b0190fa3619791, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_47fbe01515214b5860b0190fa3619791->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_47fbe01515214b5860b0190fa3619791, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_47fbe01515214b5860b0190fa3619791,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_47fbe01515214b5860b0190fa3619791 == cache_frame_47fbe01515214b5860b0190fa3619791) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_47fbe01515214b5860b0190fa3619791);
        cache_frame_47fbe01515214b5860b0190fa3619791 = NULL;
    }

    assertFrameObject(frame_47fbe01515214b5860b0190fa3619791);

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


static PyObject *impl_flet_core$constrained_control$$$function__9_left(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2a0e7dca6a8f4fa967c3275f080a28e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2a0e7dca6a8f4fa967c3275f080a28e5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2a0e7dca6a8f4fa967c3275f080a28e5)) {
        Py_XDECREF(cache_frame_2a0e7dca6a8f4fa967c3275f080a28e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2a0e7dca6a8f4fa967c3275f080a28e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2a0e7dca6a8f4fa967c3275f080a28e5 = MAKE_FUNCTION_FRAME(codeobj_2a0e7dca6a8f4fa967c3275f080a28e5, module_flet_core$constrained_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2a0e7dca6a8f4fa967c3275f080a28e5->m_type_description == NULL);
    frame_2a0e7dca6a8f4fa967c3275f080a28e5 = cache_frame_2a0e7dca6a8f4fa967c3275f080a28e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2a0e7dca6a8f4fa967c3275f080a28e5);
    assert(Py_REFCNT(frame_2a0e7dca6a8f4fa967c3275f080a28e5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_2a0e7dca6a8f4fa967c3275f080a28e5->m_frame.f_lineno = 123;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[39],
            PyTuple_GET_ITEM(mod_consts[45], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
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
        exception_tb = MAKE_TRACEBACK(frame_2a0e7dca6a8f4fa967c3275f080a28e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2a0e7dca6a8f4fa967c3275f080a28e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2a0e7dca6a8f4fa967c3275f080a28e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2a0e7dca6a8f4fa967c3275f080a28e5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2a0e7dca6a8f4fa967c3275f080a28e5 == cache_frame_2a0e7dca6a8f4fa967c3275f080a28e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2a0e7dca6a8f4fa967c3275f080a28e5);
        cache_frame_2a0e7dca6a8f4fa967c3275f080a28e5 = NULL;
    }

    assertFrameObject(frame_2a0e7dca6a8f4fa967c3275f080a28e5);

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


static PyObject *impl_flet_core$constrained_control$$$function__10_left(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_bc61d704d7ac7910a72f37530b22652a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bc61d704d7ac7910a72f37530b22652a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bc61d704d7ac7910a72f37530b22652a)) {
        Py_XDECREF(cache_frame_bc61d704d7ac7910a72f37530b22652a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bc61d704d7ac7910a72f37530b22652a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bc61d704d7ac7910a72f37530b22652a = MAKE_FUNCTION_FRAME(codeobj_bc61d704d7ac7910a72f37530b22652a, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bc61d704d7ac7910a72f37530b22652a->m_type_description == NULL);
    frame_bc61d704d7ac7910a72f37530b22652a = cache_frame_bc61d704d7ac7910a72f37530b22652a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bc61d704d7ac7910a72f37530b22652a);
    assert(Py_REFCNT(frame_bc61d704d7ac7910a72f37530b22652a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[6];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_bc61d704d7ac7910a72f37530b22652a->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[41],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
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
        exception_tb = MAKE_TRACEBACK(frame_bc61d704d7ac7910a72f37530b22652a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bc61d704d7ac7910a72f37530b22652a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bc61d704d7ac7910a72f37530b22652a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bc61d704d7ac7910a72f37530b22652a,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_bc61d704d7ac7910a72f37530b22652a == cache_frame_bc61d704d7ac7910a72f37530b22652a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bc61d704d7ac7910a72f37530b22652a);
        cache_frame_bc61d704d7ac7910a72f37530b22652a = NULL;
    }

    assertFrameObject(frame_bc61d704d7ac7910a72f37530b22652a);

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


static PyObject *impl_flet_core$constrained_control$$$function__11_top(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7e3f4c61ae95fb78ed4c1668b843adf2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7e3f4c61ae95fb78ed4c1668b843adf2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7e3f4c61ae95fb78ed4c1668b843adf2)) {
        Py_XDECREF(cache_frame_7e3f4c61ae95fb78ed4c1668b843adf2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7e3f4c61ae95fb78ed4c1668b843adf2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7e3f4c61ae95fb78ed4c1668b843adf2 = MAKE_FUNCTION_FRAME(codeobj_7e3f4c61ae95fb78ed4c1668b843adf2, module_flet_core$constrained_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7e3f4c61ae95fb78ed4c1668b843adf2->m_type_description == NULL);
    frame_7e3f4c61ae95fb78ed4c1668b843adf2 = cache_frame_7e3f4c61ae95fb78ed4c1668b843adf2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7e3f4c61ae95fb78ed4c1668b843adf2);
    assert(Py_REFCNT(frame_7e3f4c61ae95fb78ed4c1668b843adf2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_7e3f4c61ae95fb78ed4c1668b843adf2->m_frame.f_lineno = 132;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[39],
            PyTuple_GET_ITEM(mod_consts[46], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
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
        exception_tb = MAKE_TRACEBACK(frame_7e3f4c61ae95fb78ed4c1668b843adf2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7e3f4c61ae95fb78ed4c1668b843adf2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7e3f4c61ae95fb78ed4c1668b843adf2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7e3f4c61ae95fb78ed4c1668b843adf2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7e3f4c61ae95fb78ed4c1668b843adf2 == cache_frame_7e3f4c61ae95fb78ed4c1668b843adf2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7e3f4c61ae95fb78ed4c1668b843adf2);
        cache_frame_7e3f4c61ae95fb78ed4c1668b843adf2 = NULL;
    }

    assertFrameObject(frame_7e3f4c61ae95fb78ed4c1668b843adf2);

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


static PyObject *impl_flet_core$constrained_control$$$function__12_top(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_00fc6e24494c7a12144000bfd4ee37da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_00fc6e24494c7a12144000bfd4ee37da = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_00fc6e24494c7a12144000bfd4ee37da)) {
        Py_XDECREF(cache_frame_00fc6e24494c7a12144000bfd4ee37da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_00fc6e24494c7a12144000bfd4ee37da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_00fc6e24494c7a12144000bfd4ee37da = MAKE_FUNCTION_FRAME(codeobj_00fc6e24494c7a12144000bfd4ee37da, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_00fc6e24494c7a12144000bfd4ee37da->m_type_description == NULL);
    frame_00fc6e24494c7a12144000bfd4ee37da = cache_frame_00fc6e24494c7a12144000bfd4ee37da;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_00fc6e24494c7a12144000bfd4ee37da);
    assert(Py_REFCNT(frame_00fc6e24494c7a12144000bfd4ee37da) == 2);

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
        frame_00fc6e24494c7a12144000bfd4ee37da->m_frame.f_lineno = 136;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[41],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
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
        exception_tb = MAKE_TRACEBACK(frame_00fc6e24494c7a12144000bfd4ee37da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_00fc6e24494c7a12144000bfd4ee37da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_00fc6e24494c7a12144000bfd4ee37da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_00fc6e24494c7a12144000bfd4ee37da,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_00fc6e24494c7a12144000bfd4ee37da == cache_frame_00fc6e24494c7a12144000bfd4ee37da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_00fc6e24494c7a12144000bfd4ee37da);
        cache_frame_00fc6e24494c7a12144000bfd4ee37da = NULL;
    }

    assertFrameObject(frame_00fc6e24494c7a12144000bfd4ee37da);

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


static PyObject *impl_flet_core$constrained_control$$$function__13_right(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_91c4c52c9e4dc75627e9565d8aabd94f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_91c4c52c9e4dc75627e9565d8aabd94f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_91c4c52c9e4dc75627e9565d8aabd94f)) {
        Py_XDECREF(cache_frame_91c4c52c9e4dc75627e9565d8aabd94f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_91c4c52c9e4dc75627e9565d8aabd94f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_91c4c52c9e4dc75627e9565d8aabd94f = MAKE_FUNCTION_FRAME(codeobj_91c4c52c9e4dc75627e9565d8aabd94f, module_flet_core$constrained_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_91c4c52c9e4dc75627e9565d8aabd94f->m_type_description == NULL);
    frame_91c4c52c9e4dc75627e9565d8aabd94f = cache_frame_91c4c52c9e4dc75627e9565d8aabd94f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_91c4c52c9e4dc75627e9565d8aabd94f);
    assert(Py_REFCNT(frame_91c4c52c9e4dc75627e9565d8aabd94f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_91c4c52c9e4dc75627e9565d8aabd94f->m_frame.f_lineno = 141;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[39],
            PyTuple_GET_ITEM(mod_consts[47], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
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
        exception_tb = MAKE_TRACEBACK(frame_91c4c52c9e4dc75627e9565d8aabd94f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_91c4c52c9e4dc75627e9565d8aabd94f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_91c4c52c9e4dc75627e9565d8aabd94f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_91c4c52c9e4dc75627e9565d8aabd94f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_91c4c52c9e4dc75627e9565d8aabd94f == cache_frame_91c4c52c9e4dc75627e9565d8aabd94f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_91c4c52c9e4dc75627e9565d8aabd94f);
        cache_frame_91c4c52c9e4dc75627e9565d8aabd94f = NULL;
    }

    assertFrameObject(frame_91c4c52c9e4dc75627e9565d8aabd94f);

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


static PyObject *impl_flet_core$constrained_control$$$function__14_right(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_53aec5c2677323d11a783e5308bd18d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_53aec5c2677323d11a783e5308bd18d5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_53aec5c2677323d11a783e5308bd18d5)) {
        Py_XDECREF(cache_frame_53aec5c2677323d11a783e5308bd18d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_53aec5c2677323d11a783e5308bd18d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_53aec5c2677323d11a783e5308bd18d5 = MAKE_FUNCTION_FRAME(codeobj_53aec5c2677323d11a783e5308bd18d5, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_53aec5c2677323d11a783e5308bd18d5->m_type_description == NULL);
    frame_53aec5c2677323d11a783e5308bd18d5 = cache_frame_53aec5c2677323d11a783e5308bd18d5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_53aec5c2677323d11a783e5308bd18d5);
    assert(Py_REFCNT(frame_53aec5c2677323d11a783e5308bd18d5) == 2);

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
        frame_53aec5c2677323d11a783e5308bd18d5->m_frame.f_lineno = 145;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[41],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
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
        exception_tb = MAKE_TRACEBACK(frame_53aec5c2677323d11a783e5308bd18d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_53aec5c2677323d11a783e5308bd18d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_53aec5c2677323d11a783e5308bd18d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_53aec5c2677323d11a783e5308bd18d5,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_53aec5c2677323d11a783e5308bd18d5 == cache_frame_53aec5c2677323d11a783e5308bd18d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_53aec5c2677323d11a783e5308bd18d5);
        cache_frame_53aec5c2677323d11a783e5308bd18d5 = NULL;
    }

    assertFrameObject(frame_53aec5c2677323d11a783e5308bd18d5);

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


static PyObject *impl_flet_core$constrained_control$$$function__15_bottom(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ade1063ca9e0a68930674fb07b52042b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ade1063ca9e0a68930674fb07b52042b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ade1063ca9e0a68930674fb07b52042b)) {
        Py_XDECREF(cache_frame_ade1063ca9e0a68930674fb07b52042b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ade1063ca9e0a68930674fb07b52042b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ade1063ca9e0a68930674fb07b52042b = MAKE_FUNCTION_FRAME(codeobj_ade1063ca9e0a68930674fb07b52042b, module_flet_core$constrained_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ade1063ca9e0a68930674fb07b52042b->m_type_description == NULL);
    frame_ade1063ca9e0a68930674fb07b52042b = cache_frame_ade1063ca9e0a68930674fb07b52042b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ade1063ca9e0a68930674fb07b52042b);
    assert(Py_REFCNT(frame_ade1063ca9e0a68930674fb07b52042b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_ade1063ca9e0a68930674fb07b52042b->m_frame.f_lineno = 150;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[39],
            PyTuple_GET_ITEM(mod_consts[48], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
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
        exception_tb = MAKE_TRACEBACK(frame_ade1063ca9e0a68930674fb07b52042b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ade1063ca9e0a68930674fb07b52042b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ade1063ca9e0a68930674fb07b52042b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ade1063ca9e0a68930674fb07b52042b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ade1063ca9e0a68930674fb07b52042b == cache_frame_ade1063ca9e0a68930674fb07b52042b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ade1063ca9e0a68930674fb07b52042b);
        cache_frame_ade1063ca9e0a68930674fb07b52042b = NULL;
    }

    assertFrameObject(frame_ade1063ca9e0a68930674fb07b52042b);

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


static PyObject *impl_flet_core$constrained_control$$$function__16_bottom(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_1839f23b7dc8a8198a8ee9b147ba1639;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1839f23b7dc8a8198a8ee9b147ba1639 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1839f23b7dc8a8198a8ee9b147ba1639)) {
        Py_XDECREF(cache_frame_1839f23b7dc8a8198a8ee9b147ba1639);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1839f23b7dc8a8198a8ee9b147ba1639 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1839f23b7dc8a8198a8ee9b147ba1639 = MAKE_FUNCTION_FRAME(codeobj_1839f23b7dc8a8198a8ee9b147ba1639, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1839f23b7dc8a8198a8ee9b147ba1639->m_type_description == NULL);
    frame_1839f23b7dc8a8198a8ee9b147ba1639 = cache_frame_1839f23b7dc8a8198a8ee9b147ba1639;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1839f23b7dc8a8198a8ee9b147ba1639);
    assert(Py_REFCNT(frame_1839f23b7dc8a8198a8ee9b147ba1639) == 2);

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
        frame_1839f23b7dc8a8198a8ee9b147ba1639->m_frame.f_lineno = 154;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[41],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
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
        exception_tb = MAKE_TRACEBACK(frame_1839f23b7dc8a8198a8ee9b147ba1639, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1839f23b7dc8a8198a8ee9b147ba1639->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1839f23b7dc8a8198a8ee9b147ba1639, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1839f23b7dc8a8198a8ee9b147ba1639,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_1839f23b7dc8a8198a8ee9b147ba1639 == cache_frame_1839f23b7dc8a8198a8ee9b147ba1639) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1839f23b7dc8a8198a8ee9b147ba1639);
        cache_frame_1839f23b7dc8a8198a8ee9b147ba1639 = NULL;
    }

    assertFrameObject(frame_1839f23b7dc8a8198a8ee9b147ba1639);

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


static PyObject *impl_flet_core$constrained_control$$$function__17_rotate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f07367e35fe6f11b25f1e612956c2a35;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f07367e35fe6f11b25f1e612956c2a35 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f07367e35fe6f11b25f1e612956c2a35)) {
        Py_XDECREF(cache_frame_f07367e35fe6f11b25f1e612956c2a35);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f07367e35fe6f11b25f1e612956c2a35 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f07367e35fe6f11b25f1e612956c2a35 = MAKE_FUNCTION_FRAME(codeobj_f07367e35fe6f11b25f1e612956c2a35, module_flet_core$constrained_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f07367e35fe6f11b25f1e612956c2a35->m_type_description == NULL);
    frame_f07367e35fe6f11b25f1e612956c2a35 = cache_frame_f07367e35fe6f11b25f1e612956c2a35;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f07367e35fe6f11b25f1e612956c2a35);
    assert(Py_REFCNT(frame_f07367e35fe6f11b25f1e612956c2a35) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
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
        exception_tb = MAKE_TRACEBACK(frame_f07367e35fe6f11b25f1e612956c2a35, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f07367e35fe6f11b25f1e612956c2a35->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f07367e35fe6f11b25f1e612956c2a35, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f07367e35fe6f11b25f1e612956c2a35,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f07367e35fe6f11b25f1e612956c2a35 == cache_frame_f07367e35fe6f11b25f1e612956c2a35) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f07367e35fe6f11b25f1e612956c2a35);
        cache_frame_f07367e35fe6f11b25f1e612956c2a35 = NULL;
    }

    assertFrameObject(frame_f07367e35fe6f11b25f1e612956c2a35);

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


static PyObject *impl_flet_core$constrained_control$$$function__18_rotate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_a5efaea5222434985d05b1fbfbc88859;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a5efaea5222434985d05b1fbfbc88859 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a5efaea5222434985d05b1fbfbc88859)) {
        Py_XDECREF(cache_frame_a5efaea5222434985d05b1fbfbc88859);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a5efaea5222434985d05b1fbfbc88859 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a5efaea5222434985d05b1fbfbc88859 = MAKE_FUNCTION_FRAME(codeobj_a5efaea5222434985d05b1fbfbc88859, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a5efaea5222434985d05b1fbfbc88859->m_type_description == NULL);
    frame_a5efaea5222434985d05b1fbfbc88859 = cache_frame_a5efaea5222434985d05b1fbfbc88859;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a5efaea5222434985d05b1fbfbc88859);
    assert(Py_REFCNT(frame_a5efaea5222434985d05b1fbfbc88859) == 2);

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


            exception_lineno = 163;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a5efaea5222434985d05b1fbfbc88859, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a5efaea5222434985d05b1fbfbc88859->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a5efaea5222434985d05b1fbfbc88859, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a5efaea5222434985d05b1fbfbc88859,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_a5efaea5222434985d05b1fbfbc88859 == cache_frame_a5efaea5222434985d05b1fbfbc88859) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a5efaea5222434985d05b1fbfbc88859);
        cache_frame_a5efaea5222434985d05b1fbfbc88859 = NULL;
    }

    assertFrameObject(frame_a5efaea5222434985d05b1fbfbc88859);

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


static PyObject *impl_flet_core$constrained_control$$$function__19_scale(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5cd0f7f803aeda52c7621ea45c79f97f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5cd0f7f803aeda52c7621ea45c79f97f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5cd0f7f803aeda52c7621ea45c79f97f)) {
        Py_XDECREF(cache_frame_5cd0f7f803aeda52c7621ea45c79f97f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5cd0f7f803aeda52c7621ea45c79f97f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5cd0f7f803aeda52c7621ea45c79f97f = MAKE_FUNCTION_FRAME(codeobj_5cd0f7f803aeda52c7621ea45c79f97f, module_flet_core$constrained_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5cd0f7f803aeda52c7621ea45c79f97f->m_type_description == NULL);
    frame_5cd0f7f803aeda52c7621ea45c79f97f = cache_frame_5cd0f7f803aeda52c7621ea45c79f97f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5cd0f7f803aeda52c7621ea45c79f97f);
    assert(Py_REFCNT(frame_5cd0f7f803aeda52c7621ea45c79f97f) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
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
        exception_tb = MAKE_TRACEBACK(frame_5cd0f7f803aeda52c7621ea45c79f97f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5cd0f7f803aeda52c7621ea45c79f97f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5cd0f7f803aeda52c7621ea45c79f97f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5cd0f7f803aeda52c7621ea45c79f97f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5cd0f7f803aeda52c7621ea45c79f97f == cache_frame_5cd0f7f803aeda52c7621ea45c79f97f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5cd0f7f803aeda52c7621ea45c79f97f);
        cache_frame_5cd0f7f803aeda52c7621ea45c79f97f = NULL;
    }

    assertFrameObject(frame_5cd0f7f803aeda52c7621ea45c79f97f);

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


static PyObject *impl_flet_core$constrained_control$$$function__20_scale(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_dc23c9596b41806e4da2999b8e264b0a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dc23c9596b41806e4da2999b8e264b0a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dc23c9596b41806e4da2999b8e264b0a)) {
        Py_XDECREF(cache_frame_dc23c9596b41806e4da2999b8e264b0a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dc23c9596b41806e4da2999b8e264b0a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dc23c9596b41806e4da2999b8e264b0a = MAKE_FUNCTION_FRAME(codeobj_dc23c9596b41806e4da2999b8e264b0a, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dc23c9596b41806e4da2999b8e264b0a->m_type_description == NULL);
    frame_dc23c9596b41806e4da2999b8e264b0a = cache_frame_dc23c9596b41806e4da2999b8e264b0a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dc23c9596b41806e4da2999b8e264b0a);
    assert(Py_REFCNT(frame_dc23c9596b41806e4da2999b8e264b0a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[25], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dc23c9596b41806e4da2999b8e264b0a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dc23c9596b41806e4da2999b8e264b0a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dc23c9596b41806e4da2999b8e264b0a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dc23c9596b41806e4da2999b8e264b0a,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_dc23c9596b41806e4da2999b8e264b0a == cache_frame_dc23c9596b41806e4da2999b8e264b0a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dc23c9596b41806e4da2999b8e264b0a);
        cache_frame_dc23c9596b41806e4da2999b8e264b0a = NULL;
    }

    assertFrameObject(frame_dc23c9596b41806e4da2999b8e264b0a);

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


static PyObject *impl_flet_core$constrained_control$$$function__21_offset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d1ef77f09276d1bd510080202fe52396;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d1ef77f09276d1bd510080202fe52396 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d1ef77f09276d1bd510080202fe52396)) {
        Py_XDECREF(cache_frame_d1ef77f09276d1bd510080202fe52396);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d1ef77f09276d1bd510080202fe52396 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d1ef77f09276d1bd510080202fe52396 = MAKE_FUNCTION_FRAME(codeobj_d1ef77f09276d1bd510080202fe52396, module_flet_core$constrained_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d1ef77f09276d1bd510080202fe52396->m_type_description == NULL);
    frame_d1ef77f09276d1bd510080202fe52396 = cache_frame_d1ef77f09276d1bd510080202fe52396;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d1ef77f09276d1bd510080202fe52396);
    assert(Py_REFCNT(frame_d1ef77f09276d1bd510080202fe52396) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
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
        exception_tb = MAKE_TRACEBACK(frame_d1ef77f09276d1bd510080202fe52396, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d1ef77f09276d1bd510080202fe52396->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d1ef77f09276d1bd510080202fe52396, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d1ef77f09276d1bd510080202fe52396,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d1ef77f09276d1bd510080202fe52396 == cache_frame_d1ef77f09276d1bd510080202fe52396) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d1ef77f09276d1bd510080202fe52396);
        cache_frame_d1ef77f09276d1bd510080202fe52396 = NULL;
    }

    assertFrameObject(frame_d1ef77f09276d1bd510080202fe52396);

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


static PyObject *impl_flet_core$constrained_control$$$function__22_offset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_83219f75788e957cb1ea7350cea14705;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_83219f75788e957cb1ea7350cea14705 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_83219f75788e957cb1ea7350cea14705)) {
        Py_XDECREF(cache_frame_83219f75788e957cb1ea7350cea14705);

#if _DEBUG_REFCOUNTS
        if (cache_frame_83219f75788e957cb1ea7350cea14705 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_83219f75788e957cb1ea7350cea14705 = MAKE_FUNCTION_FRAME(codeobj_83219f75788e957cb1ea7350cea14705, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_83219f75788e957cb1ea7350cea14705->m_type_description == NULL);
    frame_83219f75788e957cb1ea7350cea14705 = cache_frame_83219f75788e957cb1ea7350cea14705;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_83219f75788e957cb1ea7350cea14705);
    assert(Py_REFCNT(frame_83219f75788e957cb1ea7350cea14705) == 2);

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


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_83219f75788e957cb1ea7350cea14705, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_83219f75788e957cb1ea7350cea14705->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_83219f75788e957cb1ea7350cea14705, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_83219f75788e957cb1ea7350cea14705,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_83219f75788e957cb1ea7350cea14705 == cache_frame_83219f75788e957cb1ea7350cea14705) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_83219f75788e957cb1ea7350cea14705);
        cache_frame_83219f75788e957cb1ea7350cea14705 = NULL;
    }

    assertFrameObject(frame_83219f75788e957cb1ea7350cea14705);

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


static PyObject *impl_flet_core$constrained_control$$$function__23_aspect_ratio(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_bad4523ee86fb33ce6abb6c1d380dbde;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bad4523ee86fb33ce6abb6c1d380dbde = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bad4523ee86fb33ce6abb6c1d380dbde)) {
        Py_XDECREF(cache_frame_bad4523ee86fb33ce6abb6c1d380dbde);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bad4523ee86fb33ce6abb6c1d380dbde == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bad4523ee86fb33ce6abb6c1d380dbde = MAKE_FUNCTION_FRAME(codeobj_bad4523ee86fb33ce6abb6c1d380dbde, module_flet_core$constrained_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bad4523ee86fb33ce6abb6c1d380dbde->m_type_description == NULL);
    frame_bad4523ee86fb33ce6abb6c1d380dbde = cache_frame_bad4523ee86fb33ce6abb6c1d380dbde;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bad4523ee86fb33ce6abb6c1d380dbde);
    assert(Py_REFCNT(frame_bad4523ee86fb33ce6abb6c1d380dbde) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_bad4523ee86fb33ce6abb6c1d380dbde->m_frame.f_lineno = 186;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[39],
            PyTuple_GET_ITEM(mod_consts[49], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
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
        exception_tb = MAKE_TRACEBACK(frame_bad4523ee86fb33ce6abb6c1d380dbde, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bad4523ee86fb33ce6abb6c1d380dbde->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bad4523ee86fb33ce6abb6c1d380dbde, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bad4523ee86fb33ce6abb6c1d380dbde,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_bad4523ee86fb33ce6abb6c1d380dbde == cache_frame_bad4523ee86fb33ce6abb6c1d380dbde) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bad4523ee86fb33ce6abb6c1d380dbde);
        cache_frame_bad4523ee86fb33ce6abb6c1d380dbde = NULL;
    }

    assertFrameObject(frame_bad4523ee86fb33ce6abb6c1d380dbde);

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


static PyObject *impl_flet_core$constrained_control$$$function__24_aspect_ratio(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_c23e099331f0018824f1c20afbc558f6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c23e099331f0018824f1c20afbc558f6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c23e099331f0018824f1c20afbc558f6)) {
        Py_XDECREF(cache_frame_c23e099331f0018824f1c20afbc558f6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c23e099331f0018824f1c20afbc558f6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c23e099331f0018824f1c20afbc558f6 = MAKE_FUNCTION_FRAME(codeobj_c23e099331f0018824f1c20afbc558f6, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c23e099331f0018824f1c20afbc558f6->m_type_description == NULL);
    frame_c23e099331f0018824f1c20afbc558f6 = cache_frame_c23e099331f0018824f1c20afbc558f6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c23e099331f0018824f1c20afbc558f6);
    assert(Py_REFCNT(frame_c23e099331f0018824f1c20afbc558f6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[50];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_c23e099331f0018824f1c20afbc558f6->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[41],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
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
        exception_tb = MAKE_TRACEBACK(frame_c23e099331f0018824f1c20afbc558f6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c23e099331f0018824f1c20afbc558f6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c23e099331f0018824f1c20afbc558f6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c23e099331f0018824f1c20afbc558f6,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_c23e099331f0018824f1c20afbc558f6 == cache_frame_c23e099331f0018824f1c20afbc558f6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c23e099331f0018824f1c20afbc558f6);
        cache_frame_c23e099331f0018824f1c20afbc558f6 = NULL;
    }

    assertFrameObject(frame_c23e099331f0018824f1c20afbc558f6);

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


static PyObject *impl_flet_core$constrained_control$$$function__25_animate_opacity(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_be6e54323b815de73fcdbf29ec3758f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_be6e54323b815de73fcdbf29ec3758f5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_be6e54323b815de73fcdbf29ec3758f5)) {
        Py_XDECREF(cache_frame_be6e54323b815de73fcdbf29ec3758f5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_be6e54323b815de73fcdbf29ec3758f5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_be6e54323b815de73fcdbf29ec3758f5 = MAKE_FUNCTION_FRAME(codeobj_be6e54323b815de73fcdbf29ec3758f5, module_flet_core$constrained_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_be6e54323b815de73fcdbf29ec3758f5->m_type_description == NULL);
    frame_be6e54323b815de73fcdbf29ec3758f5 = cache_frame_be6e54323b815de73fcdbf29ec3758f5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_be6e54323b815de73fcdbf29ec3758f5);
    assert(Py_REFCNT(frame_be6e54323b815de73fcdbf29ec3758f5) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
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
        exception_tb = MAKE_TRACEBACK(frame_be6e54323b815de73fcdbf29ec3758f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be6e54323b815de73fcdbf29ec3758f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be6e54323b815de73fcdbf29ec3758f5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_be6e54323b815de73fcdbf29ec3758f5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_be6e54323b815de73fcdbf29ec3758f5 == cache_frame_be6e54323b815de73fcdbf29ec3758f5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_be6e54323b815de73fcdbf29ec3758f5);
        cache_frame_be6e54323b815de73fcdbf29ec3758f5 = NULL;
    }

    assertFrameObject(frame_be6e54323b815de73fcdbf29ec3758f5);

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


static PyObject *impl_flet_core$constrained_control$$$function__26_animate_opacity(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_706c64710783b4fb78588defd5f6ab8e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_706c64710783b4fb78588defd5f6ab8e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_706c64710783b4fb78588defd5f6ab8e)) {
        Py_XDECREF(cache_frame_706c64710783b4fb78588defd5f6ab8e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_706c64710783b4fb78588defd5f6ab8e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_706c64710783b4fb78588defd5f6ab8e = MAKE_FUNCTION_FRAME(codeobj_706c64710783b4fb78588defd5f6ab8e, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_706c64710783b4fb78588defd5f6ab8e->m_type_description == NULL);
    frame_706c64710783b4fb78588defd5f6ab8e = cache_frame_706c64710783b4fb78588defd5f6ab8e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_706c64710783b4fb78588defd5f6ab8e);
    assert(Py_REFCNT(frame_706c64710783b4fb78588defd5f6ab8e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[28], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_706c64710783b4fb78588defd5f6ab8e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_706c64710783b4fb78588defd5f6ab8e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_706c64710783b4fb78588defd5f6ab8e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_706c64710783b4fb78588defd5f6ab8e,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_706c64710783b4fb78588defd5f6ab8e == cache_frame_706c64710783b4fb78588defd5f6ab8e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_706c64710783b4fb78588defd5f6ab8e);
        cache_frame_706c64710783b4fb78588defd5f6ab8e = NULL;
    }

    assertFrameObject(frame_706c64710783b4fb78588defd5f6ab8e);

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


static PyObject *impl_flet_core$constrained_control$$$function__27_animate_size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_310f07a02e4e76d5afdcf1811895d7ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_310f07a02e4e76d5afdcf1811895d7ee = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_310f07a02e4e76d5afdcf1811895d7ee)) {
        Py_XDECREF(cache_frame_310f07a02e4e76d5afdcf1811895d7ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_310f07a02e4e76d5afdcf1811895d7ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_310f07a02e4e76d5afdcf1811895d7ee = MAKE_FUNCTION_FRAME(codeobj_310f07a02e4e76d5afdcf1811895d7ee, module_flet_core$constrained_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_310f07a02e4e76d5afdcf1811895d7ee->m_type_description == NULL);
    frame_310f07a02e4e76d5afdcf1811895d7ee = cache_frame_310f07a02e4e76d5afdcf1811895d7ee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_310f07a02e4e76d5afdcf1811895d7ee);
    assert(Py_REFCNT(frame_310f07a02e4e76d5afdcf1811895d7ee) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
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
        exception_tb = MAKE_TRACEBACK(frame_310f07a02e4e76d5afdcf1811895d7ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_310f07a02e4e76d5afdcf1811895d7ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_310f07a02e4e76d5afdcf1811895d7ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_310f07a02e4e76d5afdcf1811895d7ee,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_310f07a02e4e76d5afdcf1811895d7ee == cache_frame_310f07a02e4e76d5afdcf1811895d7ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_310f07a02e4e76d5afdcf1811895d7ee);
        cache_frame_310f07a02e4e76d5afdcf1811895d7ee = NULL;
    }

    assertFrameObject(frame_310f07a02e4e76d5afdcf1811895d7ee);

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


static PyObject *impl_flet_core$constrained_control$$$function__28_animate_size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_7f54c57141e1aca7681a0758a35d1ac0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7f54c57141e1aca7681a0758a35d1ac0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7f54c57141e1aca7681a0758a35d1ac0)) {
        Py_XDECREF(cache_frame_7f54c57141e1aca7681a0758a35d1ac0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f54c57141e1aca7681a0758a35d1ac0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f54c57141e1aca7681a0758a35d1ac0 = MAKE_FUNCTION_FRAME(codeobj_7f54c57141e1aca7681a0758a35d1ac0, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7f54c57141e1aca7681a0758a35d1ac0->m_type_description == NULL);
    frame_7f54c57141e1aca7681a0758a35d1ac0 = cache_frame_7f54c57141e1aca7681a0758a35d1ac0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7f54c57141e1aca7681a0758a35d1ac0);
    assert(Py_REFCNT(frame_7f54c57141e1aca7681a0758a35d1ac0) == 2);

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


            exception_lineno = 208;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7f54c57141e1aca7681a0758a35d1ac0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f54c57141e1aca7681a0758a35d1ac0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f54c57141e1aca7681a0758a35d1ac0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f54c57141e1aca7681a0758a35d1ac0,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_7f54c57141e1aca7681a0758a35d1ac0 == cache_frame_7f54c57141e1aca7681a0758a35d1ac0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7f54c57141e1aca7681a0758a35d1ac0);
        cache_frame_7f54c57141e1aca7681a0758a35d1ac0 = NULL;
    }

    assertFrameObject(frame_7f54c57141e1aca7681a0758a35d1ac0);

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


static PyObject *impl_flet_core$constrained_control$$$function__29_animate_position(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a0e99557f0853099fca028a7a391b1db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a0e99557f0853099fca028a7a391b1db = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a0e99557f0853099fca028a7a391b1db)) {
        Py_XDECREF(cache_frame_a0e99557f0853099fca028a7a391b1db);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a0e99557f0853099fca028a7a391b1db == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a0e99557f0853099fca028a7a391b1db = MAKE_FUNCTION_FRAME(codeobj_a0e99557f0853099fca028a7a391b1db, module_flet_core$constrained_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a0e99557f0853099fca028a7a391b1db->m_type_description == NULL);
    frame_a0e99557f0853099fca028a7a391b1db = cache_frame_a0e99557f0853099fca028a7a391b1db;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a0e99557f0853099fca028a7a391b1db);
    assert(Py_REFCNT(frame_a0e99557f0853099fca028a7a391b1db) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[32]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
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
        exception_tb = MAKE_TRACEBACK(frame_a0e99557f0853099fca028a7a391b1db, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a0e99557f0853099fca028a7a391b1db->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a0e99557f0853099fca028a7a391b1db, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a0e99557f0853099fca028a7a391b1db,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a0e99557f0853099fca028a7a391b1db == cache_frame_a0e99557f0853099fca028a7a391b1db) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a0e99557f0853099fca028a7a391b1db);
        cache_frame_a0e99557f0853099fca028a7a391b1db = NULL;
    }

    assertFrameObject(frame_a0e99557f0853099fca028a7a391b1db);

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


static PyObject *impl_flet_core$constrained_control$$$function__30_animate_position(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_538659b24f876d1e332e58bf94ac175e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_538659b24f876d1e332e58bf94ac175e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_538659b24f876d1e332e58bf94ac175e)) {
        Py_XDECREF(cache_frame_538659b24f876d1e332e58bf94ac175e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_538659b24f876d1e332e58bf94ac175e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_538659b24f876d1e332e58bf94ac175e = MAKE_FUNCTION_FRAME(codeobj_538659b24f876d1e332e58bf94ac175e, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_538659b24f876d1e332e58bf94ac175e->m_type_description == NULL);
    frame_538659b24f876d1e332e58bf94ac175e = cache_frame_538659b24f876d1e332e58bf94ac175e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_538659b24f876d1e332e58bf94ac175e);
    assert(Py_REFCNT(frame_538659b24f876d1e332e58bf94ac175e) == 2);

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


            exception_lineno = 217;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_538659b24f876d1e332e58bf94ac175e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_538659b24f876d1e332e58bf94ac175e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_538659b24f876d1e332e58bf94ac175e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_538659b24f876d1e332e58bf94ac175e,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_538659b24f876d1e332e58bf94ac175e == cache_frame_538659b24f876d1e332e58bf94ac175e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_538659b24f876d1e332e58bf94ac175e);
        cache_frame_538659b24f876d1e332e58bf94ac175e = NULL;
    }

    assertFrameObject(frame_538659b24f876d1e332e58bf94ac175e);

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


static PyObject *impl_flet_core$constrained_control$$$function__31_animate_rotation(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b4790afd1803c0c8a3075311b3c86eae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b4790afd1803c0c8a3075311b3c86eae = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b4790afd1803c0c8a3075311b3c86eae)) {
        Py_XDECREF(cache_frame_b4790afd1803c0c8a3075311b3c86eae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b4790afd1803c0c8a3075311b3c86eae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b4790afd1803c0c8a3075311b3c86eae = MAKE_FUNCTION_FRAME(codeobj_b4790afd1803c0c8a3075311b3c86eae, module_flet_core$constrained_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b4790afd1803c0c8a3075311b3c86eae->m_type_description == NULL);
    frame_b4790afd1803c0c8a3075311b3c86eae = cache_frame_b4790afd1803c0c8a3075311b3c86eae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b4790afd1803c0c8a3075311b3c86eae);
    assert(Py_REFCNT(frame_b4790afd1803c0c8a3075311b3c86eae) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
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
        exception_tb = MAKE_TRACEBACK(frame_b4790afd1803c0c8a3075311b3c86eae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b4790afd1803c0c8a3075311b3c86eae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b4790afd1803c0c8a3075311b3c86eae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b4790afd1803c0c8a3075311b3c86eae,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b4790afd1803c0c8a3075311b3c86eae == cache_frame_b4790afd1803c0c8a3075311b3c86eae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b4790afd1803c0c8a3075311b3c86eae);
        cache_frame_b4790afd1803c0c8a3075311b3c86eae = NULL;
    }

    assertFrameObject(frame_b4790afd1803c0c8a3075311b3c86eae);

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


static PyObject *impl_flet_core$constrained_control$$$function__32_animate_rotation(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_ac8b513996a6a489f9735e9e08f12e32;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ac8b513996a6a489f9735e9e08f12e32 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ac8b513996a6a489f9735e9e08f12e32)) {
        Py_XDECREF(cache_frame_ac8b513996a6a489f9735e9e08f12e32);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ac8b513996a6a489f9735e9e08f12e32 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ac8b513996a6a489f9735e9e08f12e32 = MAKE_FUNCTION_FRAME(codeobj_ac8b513996a6a489f9735e9e08f12e32, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ac8b513996a6a489f9735e9e08f12e32->m_type_description == NULL);
    frame_ac8b513996a6a489f9735e9e08f12e32 = cache_frame_ac8b513996a6a489f9735e9e08f12e32;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ac8b513996a6a489f9735e9e08f12e32);
    assert(Py_REFCNT(frame_ac8b513996a6a489f9735e9e08f12e32) == 2);

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


            exception_lineno = 226;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ac8b513996a6a489f9735e9e08f12e32, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ac8b513996a6a489f9735e9e08f12e32->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ac8b513996a6a489f9735e9e08f12e32, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ac8b513996a6a489f9735e9e08f12e32,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_ac8b513996a6a489f9735e9e08f12e32 == cache_frame_ac8b513996a6a489f9735e9e08f12e32) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ac8b513996a6a489f9735e9e08f12e32);
        cache_frame_ac8b513996a6a489f9735e9e08f12e32 = NULL;
    }

    assertFrameObject(frame_ac8b513996a6a489f9735e9e08f12e32);

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


static PyObject *impl_flet_core$constrained_control$$$function__33_animate_scale(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4988882783099c378318f7297c0e3d39;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4988882783099c378318f7297c0e3d39 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4988882783099c378318f7297c0e3d39)) {
        Py_XDECREF(cache_frame_4988882783099c378318f7297c0e3d39);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4988882783099c378318f7297c0e3d39 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4988882783099c378318f7297c0e3d39 = MAKE_FUNCTION_FRAME(codeobj_4988882783099c378318f7297c0e3d39, module_flet_core$constrained_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4988882783099c378318f7297c0e3d39->m_type_description == NULL);
    frame_4988882783099c378318f7297c0e3d39 = cache_frame_4988882783099c378318f7297c0e3d39;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4988882783099c378318f7297c0e3d39);
    assert(Py_REFCNT(frame_4988882783099c378318f7297c0e3d39) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[36]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
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
        exception_tb = MAKE_TRACEBACK(frame_4988882783099c378318f7297c0e3d39, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4988882783099c378318f7297c0e3d39->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4988882783099c378318f7297c0e3d39, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4988882783099c378318f7297c0e3d39,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4988882783099c378318f7297c0e3d39 == cache_frame_4988882783099c378318f7297c0e3d39) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4988882783099c378318f7297c0e3d39);
        cache_frame_4988882783099c378318f7297c0e3d39 = NULL;
    }

    assertFrameObject(frame_4988882783099c378318f7297c0e3d39);

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


static PyObject *impl_flet_core$constrained_control$$$function__34_animate_scale(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_517024409821a0c8e086e591686996d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_517024409821a0c8e086e591686996d7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_517024409821a0c8e086e591686996d7)) {
        Py_XDECREF(cache_frame_517024409821a0c8e086e591686996d7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_517024409821a0c8e086e591686996d7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_517024409821a0c8e086e591686996d7 = MAKE_FUNCTION_FRAME(codeobj_517024409821a0c8e086e591686996d7, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_517024409821a0c8e086e591686996d7->m_type_description == NULL);
    frame_517024409821a0c8e086e591686996d7 = cache_frame_517024409821a0c8e086e591686996d7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_517024409821a0c8e086e591686996d7);
    assert(Py_REFCNT(frame_517024409821a0c8e086e591686996d7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[36], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_517024409821a0c8e086e591686996d7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_517024409821a0c8e086e591686996d7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_517024409821a0c8e086e591686996d7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_517024409821a0c8e086e591686996d7,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_517024409821a0c8e086e591686996d7 == cache_frame_517024409821a0c8e086e591686996d7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_517024409821a0c8e086e591686996d7);
        cache_frame_517024409821a0c8e086e591686996d7 = NULL;
    }

    assertFrameObject(frame_517024409821a0c8e086e591686996d7);

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


static PyObject *impl_flet_core$constrained_control$$$function__35_animate_offset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3e902b64dc5249e86e718c290509b0ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3e902b64dc5249e86e718c290509b0ad = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3e902b64dc5249e86e718c290509b0ad)) {
        Py_XDECREF(cache_frame_3e902b64dc5249e86e718c290509b0ad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e902b64dc5249e86e718c290509b0ad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e902b64dc5249e86e718c290509b0ad = MAKE_FUNCTION_FRAME(codeobj_3e902b64dc5249e86e718c290509b0ad, module_flet_core$constrained_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3e902b64dc5249e86e718c290509b0ad->m_type_description == NULL);
    frame_3e902b64dc5249e86e718c290509b0ad = cache_frame_3e902b64dc5249e86e718c290509b0ad;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3e902b64dc5249e86e718c290509b0ad);
    assert(Py_REFCNT(frame_3e902b64dc5249e86e718c290509b0ad) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
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
        exception_tb = MAKE_TRACEBACK(frame_3e902b64dc5249e86e718c290509b0ad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e902b64dc5249e86e718c290509b0ad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e902b64dc5249e86e718c290509b0ad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e902b64dc5249e86e718c290509b0ad,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3e902b64dc5249e86e718c290509b0ad == cache_frame_3e902b64dc5249e86e718c290509b0ad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3e902b64dc5249e86e718c290509b0ad);
        cache_frame_3e902b64dc5249e86e718c290509b0ad = NULL;
    }

    assertFrameObject(frame_3e902b64dc5249e86e718c290509b0ad);

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


static PyObject *impl_flet_core$constrained_control$$$function__36_animate_offset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_ffcf66cbcaa4ec310c4d6650632c823d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ffcf66cbcaa4ec310c4d6650632c823d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ffcf66cbcaa4ec310c4d6650632c823d)) {
        Py_XDECREF(cache_frame_ffcf66cbcaa4ec310c4d6650632c823d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ffcf66cbcaa4ec310c4d6650632c823d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ffcf66cbcaa4ec310c4d6650632c823d = MAKE_FUNCTION_FRAME(codeobj_ffcf66cbcaa4ec310c4d6650632c823d, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ffcf66cbcaa4ec310c4d6650632c823d->m_type_description == NULL);
    frame_ffcf66cbcaa4ec310c4d6650632c823d = cache_frame_ffcf66cbcaa4ec310c4d6650632c823d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ffcf66cbcaa4ec310c4d6650632c823d);
    assert(Py_REFCNT(frame_ffcf66cbcaa4ec310c4d6650632c823d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[38], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ffcf66cbcaa4ec310c4d6650632c823d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ffcf66cbcaa4ec310c4d6650632c823d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ffcf66cbcaa4ec310c4d6650632c823d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ffcf66cbcaa4ec310c4d6650632c823d,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_ffcf66cbcaa4ec310c4d6650632c823d == cache_frame_ffcf66cbcaa4ec310c4d6650632c823d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ffcf66cbcaa4ec310c4d6650632c823d);
        cache_frame_ffcf66cbcaa4ec310c4d6650632c823d = NULL;
    }

    assertFrameObject(frame_ffcf66cbcaa4ec310c4d6650632c823d);

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


static PyObject *impl_flet_core$constrained_control$$$function__37_on_animation_end(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_faeb214cfb46ad43b7cf56b99ba25760;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_faeb214cfb46ad43b7cf56b99ba25760 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_faeb214cfb46ad43b7cf56b99ba25760)) {
        Py_XDECREF(cache_frame_faeb214cfb46ad43b7cf56b99ba25760);

#if _DEBUG_REFCOUNTS
        if (cache_frame_faeb214cfb46ad43b7cf56b99ba25760 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_faeb214cfb46ad43b7cf56b99ba25760 = MAKE_FUNCTION_FRAME(codeobj_faeb214cfb46ad43b7cf56b99ba25760, module_flet_core$constrained_control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_faeb214cfb46ad43b7cf56b99ba25760->m_type_description == NULL);
    frame_faeb214cfb46ad43b7cf56b99ba25760 = cache_frame_faeb214cfb46ad43b7cf56b99ba25760;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_faeb214cfb46ad43b7cf56b99ba25760);
    assert(Py_REFCNT(frame_faeb214cfb46ad43b7cf56b99ba25760) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_faeb214cfb46ad43b7cf56b99ba25760->m_frame.f_lineno = 249;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[51],
            PyTuple_GET_ITEM(mod_consts[52], 0)
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
        exception_tb = MAKE_TRACEBACK(frame_faeb214cfb46ad43b7cf56b99ba25760, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_faeb214cfb46ad43b7cf56b99ba25760->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_faeb214cfb46ad43b7cf56b99ba25760, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_faeb214cfb46ad43b7cf56b99ba25760,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_faeb214cfb46ad43b7cf56b99ba25760 == cache_frame_faeb214cfb46ad43b7cf56b99ba25760) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_faeb214cfb46ad43b7cf56b99ba25760);
        cache_frame_faeb214cfb46ad43b7cf56b99ba25760 = NULL;
    }

    assertFrameObject(frame_faeb214cfb46ad43b7cf56b99ba25760);

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


static PyObject *impl_flet_core$constrained_control$$$function__38_on_animation_end(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_d050fcb87d12a522a14085b86ef7fd58;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d050fcb87d12a522a14085b86ef7fd58 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d050fcb87d12a522a14085b86ef7fd58)) {
        Py_XDECREF(cache_frame_d050fcb87d12a522a14085b86ef7fd58);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d050fcb87d12a522a14085b86ef7fd58 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d050fcb87d12a522a14085b86ef7fd58 = MAKE_FUNCTION_FRAME(codeobj_d050fcb87d12a522a14085b86ef7fd58, module_flet_core$constrained_control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d050fcb87d12a522a14085b86ef7fd58->m_type_description == NULL);
    frame_d050fcb87d12a522a14085b86ef7fd58 = cache_frame_d050fcb87d12a522a14085b86ef7fd58;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d050fcb87d12a522a14085b86ef7fd58);
    assert(Py_REFCNT(frame_d050fcb87d12a522a14085b86ef7fd58) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[54];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_d050fcb87d12a522a14085b86ef7fd58->m_frame.f_lineno = 253;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[53],
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
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_handler);
        tmp_cmp_expr_left_1 = par_handler;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_d050fcb87d12a522a14085b86ef7fd58->m_frame.f_lineno = 255;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[41],
            &PyTuple_GET_ITEM(mod_consts[55], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_d050fcb87d12a522a14085b86ef7fd58->m_frame.f_lineno = 257;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_3,
            mod_consts[41],
            &PyTuple_GET_ITEM(mod_consts[56], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d050fcb87d12a522a14085b86ef7fd58, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d050fcb87d12a522a14085b86ef7fd58->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d050fcb87d12a522a14085b86ef7fd58, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d050fcb87d12a522a14085b86ef7fd58,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_d050fcb87d12a522a14085b86ef7fd58 == cache_frame_d050fcb87d12a522a14085b86ef7fd58) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d050fcb87d12a522a14085b86ef7fd58);
        cache_frame_d050fcb87d12a522a14085b86ef7fd58 = NULL;
    }

    assertFrameObject(frame_d050fcb87d12a522a14085b86ef7fd58);

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



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__10_left(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__10_left,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_bc61d704d7ac7910a72f37530b22652a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__11_top(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__11_top,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_7e3f4c61ae95fb78ed4c1668b843adf2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__12_top(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__12_top,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_00fc6e24494c7a12144000bfd4ee37da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__13_right(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__13_right,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_91c4c52c9e4dc75627e9565d8aabd94f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__14_right(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__14_right,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_53aec5c2677323d11a783e5308bd18d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__15_bottom(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__15_bottom,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_ade1063ca9e0a68930674fb07b52042b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__16_bottom(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__16_bottom,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_1839f23b7dc8a8198a8ee9b147ba1639,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__17_rotate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__17_rotate,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_f07367e35fe6f11b25f1e612956c2a35,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__18_rotate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__18_rotate,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_a5efaea5222434985d05b1fbfbc88859,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__19_scale(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__19_scale,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_5cd0f7f803aeda52c7621ea45c79f97f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_5f4c8fa13f93a2f20bcf957538d6e199,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__20_scale(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__20_scale,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_dc23c9596b41806e4da2999b8e264b0a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__21_offset(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__21_offset,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_d1ef77f09276d1bd510080202fe52396,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__22_offset(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__22_offset,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[117],
#endif
        codeobj_83219f75788e957cb1ea7350cea14705,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__23_aspect_ratio(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__23_aspect_ratio,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_bad4523ee86fb33ce6abb6c1d380dbde,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__24_aspect_ratio(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__24_aspect_ratio,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_c23e099331f0018824f1c20afbc558f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__25_animate_opacity(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__25_animate_opacity,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_be6e54323b815de73fcdbf29ec3758f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__26_animate_opacity(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__26_animate_opacity,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_706c64710783b4fb78588defd5f6ab8e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__27_animate_size(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__27_animate_size,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_310f07a02e4e76d5afdcf1811895d7ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__28_animate_size(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__28_animate_size,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_7f54c57141e1aca7681a0758a35d1ac0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__29_animate_position(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__29_animate_position,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_a0e99557f0853099fca028a7a391b1db,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__2__before_build_command(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__2__before_build_command,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_af9c6677a2279c38f87a12d552c5edcc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$constrained_control,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__30_animate_position(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__30_animate_position,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_538659b24f876d1e332e58bf94ac175e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__31_animate_rotation(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__31_animate_rotation,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_b4790afd1803c0c8a3075311b3c86eae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__32_animate_rotation(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__32_animate_rotation,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_ac8b513996a6a489f9735e9e08f12e32,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__33_animate_scale(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__33_animate_scale,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_4988882783099c378318f7297c0e3d39,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__34_animate_scale(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__34_animate_scale,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_517024409821a0c8e086e591686996d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__35_animate_offset(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__35_animate_offset,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_3e902b64dc5249e86e718c290509b0ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__36_animate_offset(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__36_animate_offset,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_ffcf66cbcaa4ec310c4d6650632c823d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__37_on_animation_end() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__37_on_animation_end,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_faeb214cfb46ad43b7cf56b99ba25760,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__38_on_animation_end() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__38_on_animation_end,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_d050fcb87d12a522a14085b86ef7fd58,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__3_key(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__3_key,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_dda4153dbf8bf99a0ae608d493f6c8ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__4_key(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__4_key,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_91cfdfb8985aabf287b994599b00c5a9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__5_width(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__5_width,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_57b7c0cf6c3d020d106ef2f80b41256e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        mod_consts[43],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__6_width(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__6_width,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_04520deb55fba15ec1650392fca71558,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__7_height(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__7_height,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_3ce67725ed47edeef8e43eca0ddb167f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__8_height(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__8_height,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_47fbe01515214b5860b0190fa3619791,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$constrained_control$$$function__9_left(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$constrained_control$$$function__9_left,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_2a0e7dca6a8f4fa967c3275f080a28e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$constrained_control,
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

function_impl_code functable_flet_core$constrained_control[] = {
    impl_flet_core$constrained_control$$$function__1___init__,
    impl_flet_core$constrained_control$$$function__2__before_build_command,
    impl_flet_core$constrained_control$$$function__3_key,
    impl_flet_core$constrained_control$$$function__4_key,
    impl_flet_core$constrained_control$$$function__5_width,
    impl_flet_core$constrained_control$$$function__6_width,
    impl_flet_core$constrained_control$$$function__7_height,
    impl_flet_core$constrained_control$$$function__8_height,
    impl_flet_core$constrained_control$$$function__9_left,
    impl_flet_core$constrained_control$$$function__10_left,
    impl_flet_core$constrained_control$$$function__11_top,
    impl_flet_core$constrained_control$$$function__12_top,
    impl_flet_core$constrained_control$$$function__13_right,
    impl_flet_core$constrained_control$$$function__14_right,
    impl_flet_core$constrained_control$$$function__15_bottom,
    impl_flet_core$constrained_control$$$function__16_bottom,
    impl_flet_core$constrained_control$$$function__17_rotate,
    impl_flet_core$constrained_control$$$function__18_rotate,
    impl_flet_core$constrained_control$$$function__19_scale,
    impl_flet_core$constrained_control$$$function__20_scale,
    impl_flet_core$constrained_control$$$function__21_offset,
    impl_flet_core$constrained_control$$$function__22_offset,
    impl_flet_core$constrained_control$$$function__23_aspect_ratio,
    impl_flet_core$constrained_control$$$function__24_aspect_ratio,
    impl_flet_core$constrained_control$$$function__25_animate_opacity,
    impl_flet_core$constrained_control$$$function__26_animate_opacity,
    impl_flet_core$constrained_control$$$function__27_animate_size,
    impl_flet_core$constrained_control$$$function__28_animate_size,
    impl_flet_core$constrained_control$$$function__29_animate_position,
    impl_flet_core$constrained_control$$$function__30_animate_position,
    impl_flet_core$constrained_control$$$function__31_animate_rotation,
    impl_flet_core$constrained_control$$$function__32_animate_rotation,
    impl_flet_core$constrained_control$$$function__33_animate_scale,
    impl_flet_core$constrained_control$$$function__34_animate_scale,
    impl_flet_core$constrained_control$$$function__35_animate_offset,
    impl_flet_core$constrained_control$$$function__36_animate_offset,
    impl_flet_core$constrained_control$$$function__37_on_animation_end,
    impl_flet_core$constrained_control$$$function__38_on_animation_end,
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

    function_impl_code *current = functable_flet_core$constrained_control;
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

    if (offset > sizeof(functable_flet_core$constrained_control) || offset < 0) {
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
        functable_flet_core$constrained_control[offset],
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
        module_flet_core$constrained_control,
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
PyObject *modulecode_flet_core$constrained_control(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.constrained_control");

    // Store the module for future use.
    module_flet_core$constrained_control = module;

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
        PRINT_STRING("flet_core.constrained_control: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.constrained_control: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.constrained_control: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$constrained_control\n");

    moduledict_flet_core$constrained_control = MODULE_DICT(module_flet_core$constrained_control);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$constrained_control,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$constrained_control,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[134]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$constrained_control,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$constrained_control,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$constrained_control,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$constrained_control);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$constrained_control);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_1406492b6ca7ac9685cc66ce874e502f;
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
    PyObject *locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_461bca902b76746d98211d225f63fbcf_2;
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
        UPDATE_STRING_DICT0(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_2);
    }
    frame_1406492b6ca7ac9685cc66ce874e502f = MAKE_MODULE_FRAME(codeobj_1406492b6ca7ac9685cc66ce874e502f, module_flet_core$constrained_control);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1406492b6ca7ac9685cc66ce874e502f);
    assert(Py_REFCNT(frame_1406492b6ca7ac9685cc66ce874e502f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[58];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[61], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[62], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_3);
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
                (PyObject *)moduledict_flet_core$constrained_control,
                mod_consts[64],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[64]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$constrained_control,
                mod_consts[66],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[66]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$constrained_control,
                mod_consts[67],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[67]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_7);
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
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[68];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$constrained_control;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[69];
        tmp_level_value_1 = mod_consts[65];
        frame_1406492b6ca7ac9685cc66ce874e502f->m_frame.f_lineno = 3;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet_core$constrained_control,
                mod_consts[0],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[0]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet_core$constrained_control,
                mod_consts[70],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[70]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_10);
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[71];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$constrained_control;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[72];
        tmp_level_value_2 = mod_consts[65];
        frame_1406492b6ca7ac9685cc66ce874e502f->m_frame.f_lineno = 4;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core$constrained_control,
                mod_consts[73],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[73]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[74];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$constrained_control;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[75];
        tmp_level_value_3 = mod_consts[65];
        frame_1406492b6ca7ac9685cc66ce874e502f->m_frame.f_lineno = 5;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_7 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_flet_core$constrained_control,
                mod_consts[76],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[76]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_flet_core$constrained_control,
                mod_consts[77],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[77]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_flet_core$constrained_control,
                mod_consts[78],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[78]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_flet_core$constrained_control,
                mod_consts[79],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[79]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_flet_core$constrained_control,
                mod_consts[80],
                mod_consts[65]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[80]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_17);
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
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

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


            exception_lineno = 14;

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


            exception_lineno = 14;

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
        tmp_subscript_value_1 = mod_consts[65];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

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


            exception_lineno = 14;

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
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[81]);
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[81]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[82];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_1406492b6ca7ac9685cc66ce874e502f->m_frame.f_lineno = 14;
        tmp_assign_source_22 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

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
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[83]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

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
        tmp_mod_expr_left_1 = mod_consts[84];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[85];
        tmp_getattr_default_1 = mod_consts[86];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[85]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

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


            exception_lineno = 14;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 14;
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
            locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[88], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[82];
        tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_6;
        }
        frame_461bca902b76746d98211d225f63fbcf_2 = MAKE_CLASS_FRAME(codeobj_461bca902b76746d98211d225f63fbcf, module_flet_core$constrained_control, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_461bca902b76746d98211d225f63fbcf_2);
        assert(Py_REFCNT(frame_461bca902b76746d98211d225f63fbcf_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            tmp_defaults_1 = mod_consts[90];
            tmp_dict_key_1 = mod_consts[91];
            tmp_expression_value_6 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[66]);

            if (tmp_expression_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_expression_value_6 == NULL)) {
                        tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_expression_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 17;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_2 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[73]);

            if (tmp_subscript_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[73]);

                    if (unlikely(tmp_subscript_value_2 == NULL)) {
                        tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                    }

                    if (tmp_subscript_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_6);

                        exception_lineno = 17;
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


                exception_lineno = 17;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 25 );
            {
                PyObject *tmp_expression_value_7;
                PyObject *tmp_subscript_value_3;
                PyObject *tmp_tuple_element_4;
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
                tmp_dict_key_1 = mod_consts[92];
                tmp_expression_value_7 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[67]);

                if (tmp_expression_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_expression_value_7 == NULL)) {
                            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_expression_value_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 18;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_7);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_tuple_element_4 = Py_None;
                tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_4);
                tmp_tuple_element_4 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[93]);

                if (tmp_tuple_element_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_4 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_tuple_element_4);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_4);
                tmp_tuple_element_4 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[94]);

                if (tmp_tuple_element_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_4 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_4);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_3, 2, tmp_tuple_element_4);
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
                Py_DECREF(tmp_expression_value_7);
                Py_DECREF(tmp_subscript_value_3);
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
                tmp_dict_key_1 = mod_consts[95];
                tmp_expression_value_8 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[66]);

                if (tmp_expression_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[66]);

                        if (unlikely(tmp_expression_value_8 == NULL)) {
                            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                        }

                        if (tmp_expression_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 19;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_8);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_4 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[78]);

                if (tmp_subscript_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[78]);

                        if (unlikely(tmp_subscript_value_4 == NULL)) {
                            tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                        }

                        if (tmp_subscript_value_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_8);

                            exception_lineno = 19;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
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


                    exception_lineno = 19;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[96];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 20;
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
                tmp_expression_value_9 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[66]);

                if (tmp_expression_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[66]);

                        if (unlikely(tmp_expression_value_9 == NULL)) {
                            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                        }

                        if (tmp_expression_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 21;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_9);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_5 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[98]);

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
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[99];
                tmp_expression_value_10 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[66]);

                if (tmp_expression_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[66]);

                        if (unlikely(tmp_expression_value_10 == NULL)) {
                            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                        }

                        if (tmp_expression_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 22;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[93]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_6 = (PyObject *)&PyBool_Type;
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
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[100];
                tmp_expression_value_11 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[66]);

                if (tmp_expression_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[66]);

                        if (unlikely(tmp_expression_value_11 == NULL)) {
                            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                        }

                        if (tmp_expression_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 23;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_11);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_7 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[93]);

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


                    exception_lineno = 23;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[101];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[64]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 24;
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
                tmp_dict_key_1 = mod_consts[3];
                tmp_expression_value_12 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[66]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[66]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 28;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_8 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[98]);

                if (tmp_subscript_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_8 = (PyObject *)&PyUnicode_Type;
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


                    exception_lineno = 28;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[4];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 29;
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
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 30;
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
                tmp_dict_key_1 = mod_consts[6];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 31;
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
                tmp_dict_key_1 = mod_consts[7];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 32;
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
                tmp_dict_key_1 = mod_consts[8];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 33;
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
                tmp_dict_key_1 = mod_consts[9];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 34;
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
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[79]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[79]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 35;
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
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[80]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[80]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 36;
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
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[77]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[77]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 37;
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
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
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
                tmp_dict_key_1 = mod_consts[14];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
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
                tmp_dict_key_1 = mod_consts[15];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
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
                tmp_dict_key_1 = mod_consts[16];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
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
                tmp_dict_key_1 = mod_consts[17];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 42;
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
                tmp_dict_key_1 = mod_consts[18];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 43;
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
                tmp_dict_key_1 = mod_consts[19];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 44;
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


            tmp_dictset_value = MAKE_FUNCTION_flet_core$constrained_control$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_flet_core$constrained_control$$$function__2__before_build_command(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
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
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
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
            tmp_called_value_2 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 91;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_2 = mod_consts[105];
            tmp_expression_value_13 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[66]);

            if (tmp_expression_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_expression_value_13 == NULL)) {
                        tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_expression_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_2);

                        exception_lineno = 92;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_9 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[98]);

            if (tmp_subscript_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_9 = (PyObject *)&PyUnicode_Type;
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

                exception_lineno = 92;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_args_element_value_1 = MAKE_FUNCTION_flet_core$constrained_control$$$function__3_key(tmp_annotations_2);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 91;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_3 = mod_consts[105];
            tmp_expression_value_14 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[66]);

            if (tmp_expression_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_expression_value_14 == NULL)) {
                        tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_expression_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 92;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_10 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[98]);

            if (tmp_subscript_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_10 = (PyObject *)&PyUnicode_Type;
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


                exception_lineno = 92;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_args_element_value_2 = MAKE_FUNCTION_flet_core$constrained_control$$$function__3_key(tmp_annotations_3);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 91;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "c";
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
            tmp_expression_value_15 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[3]);

            if (unlikely(tmp_expression_value_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[3]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 95;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[107]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_4 = mod_consts[108];
            tmp_expression_value_16 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[66]);

            if (tmp_expression_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_expression_value_16 == NULL)) {
                        tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_expression_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_4);

                        exception_lineno = 96;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_11 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[98]);

            if (tmp_subscript_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_11 = (PyObject *)&PyUnicode_Type;
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

                exception_lineno = 96;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_args_element_value_3 = MAKE_FUNCTION_flet_core$constrained_control$$$function__4_key(tmp_annotations_4);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 95;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
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
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
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
            tmp_called_value_5 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (unlikely(tmp_called_value_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 100;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_5 = mod_consts[105];
            tmp_dict_value_5 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_5 == NULL)) {
                        tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_5);

                        exception_lineno = 101;
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


            tmp_args_element_value_4 = MAKE_FUNCTION_flet_core$constrained_control$$$function__5_width(tmp_annotations_5);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 100;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_6 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_6 = mod_consts[105];
            tmp_dict_value_6 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_6 == NULL)) {
                        tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 101;
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


            tmp_args_element_value_5 = MAKE_FUNCTION_flet_core$constrained_control$$$function__5_width(tmp_annotations_6);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 100;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "c";
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
            tmp_expression_value_17 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[4]);

            if (unlikely(tmp_expression_value_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[4]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 107;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[107]);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_7 = mod_consts[108];
            tmp_dict_value_7 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_7 == NULL)) {
                        tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);

                        exception_lineno = 108;
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


            tmp_args_element_value_6 = MAKE_FUNCTION_flet_core$constrained_control$$$function__6_width(tmp_annotations_7);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 107;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[4], tmp_dictset_value);
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
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
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
            tmp_called_value_8 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (unlikely(tmp_called_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 112;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_8 = mod_consts[105];
            tmp_dict_value_8 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_8 == NULL)) {
                        tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);

                        exception_lineno = 113;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_7 = MAKE_FUNCTION_flet_core$constrained_control$$$function__7_height(tmp_annotations_8);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 112;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_9 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_9 = mod_consts[105];
            tmp_dict_value_9 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_9 == NULL)) {
                        tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 113;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_8 = MAKE_FUNCTION_flet_core$constrained_control$$$function__7_height(tmp_annotations_9);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 112;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_expression_value_18 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[5]);

            if (unlikely(tmp_expression_value_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 116;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[107]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_10 = mod_consts[108];
            tmp_dict_value_10 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_10 == NULL)) {
                        tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);

                        exception_lineno = 117;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_9 = MAKE_FUNCTION_flet_core$constrained_control$$$function__8_height(tmp_annotations_10);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 116;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[5], tmp_dictset_value);
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
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
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
            tmp_called_value_11 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (unlikely(tmp_called_value_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 121;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_11 = mod_consts[105];
            tmp_dict_value_11 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_11 == NULL)) {
                        tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);

                        exception_lineno = 122;
                        type_description_2 = "c";
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


            tmp_args_element_value_10 = MAKE_FUNCTION_flet_core$constrained_control$$$function__9_left(tmp_annotations_11);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 121;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_12 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_12 = mod_consts[105];
            tmp_dict_value_12 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_12 == NULL)) {
                        tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 122;
                        type_description_2 = "c";
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


            tmp_args_element_value_11 = MAKE_FUNCTION_flet_core$constrained_control$$$function__9_left(tmp_annotations_12);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 121;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[6], tmp_dictset_value);
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
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            tmp_expression_value_19 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[6]);

            if (unlikely(tmp_expression_value_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[6]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 125;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[107]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_13 = mod_consts[108];
            tmp_dict_value_13 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_13 == NULL)) {
                        tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);

                        exception_lineno = 126;
                        type_description_2 = "c";
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


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$constrained_control$$$function__10_left(tmp_annotations_13);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 125;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
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
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
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
            tmp_called_value_14 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (unlikely(tmp_called_value_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 130;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_14 = mod_consts[105];
            tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_14 == NULL)) {
                        tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);

                        exception_lineno = 131;
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


            tmp_args_element_value_13 = MAKE_FUNCTION_flet_core$constrained_control$$$function__11_top(tmp_annotations_14);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 130;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_15 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_15 = mod_consts[105];
            tmp_dict_value_15 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_15 == NULL)) {
                        tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 131;
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


            tmp_args_element_value_14 = MAKE_FUNCTION_flet_core$constrained_control$$$function__11_top(tmp_annotations_15);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 130;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            tmp_expression_value_20 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[7]);

            if (unlikely(tmp_expression_value_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 134;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[107]);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_16 = mod_consts[108];
            tmp_dict_value_16 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_16 == NULL)) {
                        tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);

                        exception_lineno = 135;
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


            tmp_args_element_value_15 = MAKE_FUNCTION_flet_core$constrained_control$$$function__12_top(tmp_annotations_16);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 134;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
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
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
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
            tmp_called_value_17 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (unlikely(tmp_called_value_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 139;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_17 = mod_consts[105];
            tmp_dict_value_17 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_17 == NULL)) {
                        tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);

                        exception_lineno = 140;
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


            tmp_args_element_value_16 = MAKE_FUNCTION_flet_core$constrained_control$$$function__13_right(tmp_annotations_17);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 139;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_18 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_18 = mod_consts[105];
            tmp_dict_value_18 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_18 == NULL)) {
                        tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 140;
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


            tmp_args_element_value_17 = MAKE_FUNCTION_flet_core$constrained_control$$$function__13_right(tmp_annotations_18);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 139;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            tmp_expression_value_21 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[8]);

            if (unlikely(tmp_expression_value_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[8]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 143;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[107]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_19 = mod_consts[108];
            tmp_dict_value_19 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_19 == NULL)) {
                        tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);

                        exception_lineno = 144;
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


            tmp_args_element_value_18 = MAKE_FUNCTION_flet_core$constrained_control$$$function__14_right(tmp_annotations_19);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 143;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
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
            tmp_called_value_20 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (unlikely(tmp_called_value_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 148;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_20 = mod_consts[105];
            tmp_dict_value_20 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_20 == NULL)) {
                        tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_20);

                        exception_lineno = 149;
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


            tmp_args_element_value_19 = MAKE_FUNCTION_flet_core$constrained_control$$$function__15_bottom(tmp_annotations_20);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 148;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_21 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_21 = mod_consts[105];
            tmp_dict_value_21 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_21 == NULL)) {
                        tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 149;
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


            tmp_args_element_value_20 = MAKE_FUNCTION_flet_core$constrained_control$$$function__15_bottom(tmp_annotations_21);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 148;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            tmp_expression_value_22 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[9]);

            if (unlikely(tmp_expression_value_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[9]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 152;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[107]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_22 = mod_consts[108];
            tmp_dict_value_22 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_22 == NULL)) {
                        tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);

                        exception_lineno = 153;
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


            tmp_args_element_value_21 = MAKE_FUNCTION_flet_core$constrained_control$$$function__16_bottom(tmp_annotations_22);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 152;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_annotations_23;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
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
            tmp_called_value_23 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (unlikely(tmp_called_value_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 157;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_23 = mod_consts[105];
            tmp_dict_value_23 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[79]);

            if (tmp_dict_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[79]);

                    if (unlikely(tmp_dict_value_23 == NULL)) {
                        tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                    }

                    if (tmp_dict_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);

                        exception_lineno = 158;
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


            tmp_args_element_value_22 = MAKE_FUNCTION_flet_core$constrained_control$$$function__17_rotate(tmp_annotations_23);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 157;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_24 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_24 = mod_consts[105];
            tmp_dict_value_24 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[79]);

            if (tmp_dict_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[79]);

                    if (unlikely(tmp_dict_value_24 == NULL)) {
                        tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                    }

                    if (tmp_dict_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 158;
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


            tmp_args_element_value_23 = MAKE_FUNCTION_flet_core$constrained_control$$$function__17_rotate(tmp_annotations_24);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 157;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_25;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_annotations_25;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            tmp_expression_value_23 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[11]);

            if (unlikely(tmp_expression_value_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 161;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[107]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_25 = mod_consts[108];
            tmp_dict_value_25 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[79]);

            if (tmp_dict_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[79]);

                    if (unlikely(tmp_dict_value_25 == NULL)) {
                        tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
                    }

                    if (tmp_dict_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_25);

                        exception_lineno = 162;
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


            tmp_args_element_value_24 = MAKE_FUNCTION_flet_core$constrained_control$$$function__18_rotate(tmp_annotations_25);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 161;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_annotations_26;
            PyObject *tmp_dict_key_26;
            PyObject *tmp_dict_value_26;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_annotations_27;
            PyObject *tmp_dict_key_27;
            PyObject *tmp_dict_value_27;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
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
            tmp_called_value_26 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (unlikely(tmp_called_value_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 166;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_26 = mod_consts[105];
            tmp_dict_value_26 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[80]);

            if (tmp_dict_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[80]);

                    if (unlikely(tmp_dict_value_26 == NULL)) {
                        tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
                    }

                    if (tmp_dict_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);

                        exception_lineno = 167;
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


            tmp_args_element_value_25 = MAKE_FUNCTION_flet_core$constrained_control$$$function__19_scale(tmp_annotations_26);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 166;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_27 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_27 = mod_consts[105];
            tmp_dict_value_27 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[80]);

            if (tmp_dict_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[80]);

                    if (unlikely(tmp_dict_value_27 == NULL)) {
                        tmp_dict_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
                    }

                    if (tmp_dict_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 167;
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


            tmp_args_element_value_26 = MAKE_FUNCTION_flet_core$constrained_control$$$function__19_scale(tmp_annotations_27);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 166;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[10], tmp_dictset_value);
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
            PyObject *tmp_called_value_28;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_annotations_28;
            PyObject *tmp_dict_key_28;
            PyObject *tmp_dict_value_28;
            tmp_expression_value_24 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[10]);

            if (unlikely(tmp_expression_value_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[10]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 170;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[107]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_28 = mod_consts[108];
            tmp_dict_value_28 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[80]);

            if (tmp_dict_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[80]);

                    if (unlikely(tmp_dict_value_28 == NULL)) {
                        tmp_dict_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
                    }

                    if (tmp_dict_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_28);

                        exception_lineno = 171;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_28);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_28 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));


            tmp_args_element_value_27 = MAKE_FUNCTION_flet_core$constrained_control$$$function__20_scale(tmp_annotations_28);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 170;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[10], tmp_dictset_value);
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
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_annotations_29;
            PyObject *tmp_dict_key_29;
            PyObject *tmp_dict_value_29;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_annotations_30;
            PyObject *tmp_dict_key_30;
            PyObject *tmp_dict_value_30;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
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
            tmp_called_value_29 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (unlikely(tmp_called_value_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 175;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_29 = mod_consts[105];
            tmp_dict_value_29 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[77]);

            if (tmp_dict_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[77]);

                    if (unlikely(tmp_dict_value_29 == NULL)) {
                        tmp_dict_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                    }

                    if (tmp_dict_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_29);

                        exception_lineno = 176;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_29);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_29 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));


            tmp_args_element_value_28 = MAKE_FUNCTION_flet_core$constrained_control$$$function__21_offset(tmp_annotations_29);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 175;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_30 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_30 = mod_consts[105];
            tmp_dict_value_30 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[77]);

            if (tmp_dict_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[77]);

                    if (unlikely(tmp_dict_value_30 == NULL)) {
                        tmp_dict_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                    }

                    if (tmp_dict_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 176;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_30);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_30 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));


            tmp_args_element_value_29 = MAKE_FUNCTION_flet_core$constrained_control$$$function__21_offset(tmp_annotations_30);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 175;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[12], tmp_dictset_value);
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
            PyObject *tmp_called_value_31;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_annotations_31;
            PyObject *tmp_dict_key_31;
            PyObject *tmp_dict_value_31;
            tmp_expression_value_25 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[12]);

            if (unlikely(tmp_expression_value_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 179;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[107]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_31 = mod_consts[108];
            tmp_dict_value_31 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[77]);

            if (tmp_dict_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_31 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[77]);

                    if (unlikely(tmp_dict_value_31 == NULL)) {
                        tmp_dict_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
                    }

                    if (tmp_dict_value_31 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);

                        exception_lineno = 180;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_31);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_31 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));


            tmp_args_element_value_30 = MAKE_FUNCTION_flet_core$constrained_control$$$function__22_offset(tmp_annotations_31);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 179;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[12], tmp_dictset_value);
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
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_annotations_32;
            PyObject *tmp_dict_key_32;
            PyObject *tmp_dict_value_32;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_annotations_33;
            PyObject *tmp_dict_key_33;
            PyObject *tmp_dict_value_33;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
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
            tmp_called_value_32 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (unlikely(tmp_called_value_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 184;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_32 = mod_consts[105];
            tmp_dict_value_32 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_32 == NULL)) {
                        tmp_dict_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_32);

                        exception_lineno = 185;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_32);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_32 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_32, tmp_dict_value_32);
            Py_DECREF(tmp_dict_value_32);
            assert(!(tmp_res != 0));


            tmp_args_element_value_31 = MAKE_FUNCTION_flet_core$constrained_control$$$function__23_aspect_ratio(tmp_annotations_32);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 184;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_31);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_called_value_33 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_33 = mod_consts[105];
            tmp_dict_value_33 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_33 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_33 == NULL)) {
                        tmp_dict_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_33 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 185;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_33);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_33 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_33, tmp_dict_value_33);
            Py_DECREF(tmp_dict_value_33);
            assert(!(tmp_res != 0));


            tmp_args_element_value_32 = MAKE_FUNCTION_flet_core$constrained_control$$$function__23_aspect_ratio(tmp_annotations_33);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 184;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[13], tmp_dictset_value);
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
            PyObject *tmp_called_value_34;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_annotations_34;
            PyObject *tmp_dict_key_34;
            PyObject *tmp_dict_value_34;
            tmp_expression_value_26 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[13]);

            if (unlikely(tmp_expression_value_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[13]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 188;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[107]);
            Py_DECREF(tmp_expression_value_26);
            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_34 = mod_consts[108];
            tmp_dict_value_34 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[70]);

            if (tmp_dict_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_34 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_dict_value_34 == NULL)) {
                        tmp_dict_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_dict_value_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_34);

                        exception_lineno = 189;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_34);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_34 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_34, tmp_dict_value_34);
            Py_DECREF(tmp_dict_value_34);
            assert(!(tmp_res != 0));


            tmp_args_element_value_33 = MAKE_FUNCTION_flet_core$constrained_control$$$function__24_aspect_ratio(tmp_annotations_34);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 188;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_33);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[13], tmp_dictset_value);
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
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_annotations_35;
            PyObject *tmp_dict_key_35;
            PyObject *tmp_dict_value_35;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_annotations_36;
            PyObject *tmp_dict_key_36;
            PyObject *tmp_dict_value_36;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
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
            tmp_called_value_35 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (unlikely(tmp_called_value_35 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 193;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_35 = mod_consts[105];
            tmp_dict_value_35 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

            if (tmp_dict_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_35 == NULL)) {
                        tmp_dict_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_35);

                        exception_lineno = 194;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_35);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_35 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_35, tmp_dict_value_35);
            Py_DECREF(tmp_dict_value_35);
            assert(!(tmp_res != 0));


            tmp_args_element_value_34 = MAKE_FUNCTION_flet_core$constrained_control$$$function__25_animate_opacity(tmp_annotations_35);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 193;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_34);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_called_value_36 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_36 = mod_consts[105];
            tmp_dict_value_36 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

            if (tmp_dict_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_36 == NULL)) {
                        tmp_dict_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 194;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_36);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_36 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_36, tmp_dict_value_36);
            Py_DECREF(tmp_dict_value_36);
            assert(!(tmp_res != 0));


            tmp_args_element_value_35 = MAKE_FUNCTION_flet_core$constrained_control$$$function__25_animate_opacity(tmp_annotations_36);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 193;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[14], tmp_dictset_value);
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
            PyObject *tmp_called_value_37;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_annotations_37;
            PyObject *tmp_dict_key_37;
            PyObject *tmp_dict_value_37;
            tmp_expression_value_27 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[14]);

            if (unlikely(tmp_expression_value_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[14]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 197;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[107]);
            Py_DECREF(tmp_expression_value_27);
            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_37 = mod_consts[108];
            tmp_dict_value_37 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

            if (tmp_dict_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_37 == NULL)) {
                        tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_37);

                        exception_lineno = 198;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_37);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_37 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_37, tmp_dict_key_37, tmp_dict_value_37);
            Py_DECREF(tmp_dict_value_37);
            assert(!(tmp_res != 0));


            tmp_args_element_value_36 = MAKE_FUNCTION_flet_core$constrained_control$$$function__26_animate_opacity(tmp_annotations_37);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 197;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_36);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_annotations_38;
            PyObject *tmp_dict_key_38;
            PyObject *tmp_dict_value_38;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_annotations_39;
            PyObject *tmp_dict_key_39;
            PyObject *tmp_dict_value_39;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_16 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_14;
            } else {
                goto condexpr_false_14;
            }
            condexpr_true_14:;
            tmp_called_value_38 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (unlikely(tmp_called_value_38 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 202;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_38 = mod_consts[105];
            tmp_dict_value_38 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

            if (tmp_dict_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_38 == NULL)) {
                        tmp_dict_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);

                        exception_lineno = 203;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_38);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_38 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_38, tmp_dict_key_38, tmp_dict_value_38);
            Py_DECREF(tmp_dict_value_38);
            assert(!(tmp_res != 0));


            tmp_args_element_value_37 = MAKE_FUNCTION_flet_core$constrained_control$$$function__27_animate_size(tmp_annotations_38);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 202;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_37);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_called_value_39 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_39 = mod_consts[105];
            tmp_dict_value_39 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

            if (tmp_dict_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_39 == NULL)) {
                        tmp_dict_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 203;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_39);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_39 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_39, tmp_dict_key_39, tmp_dict_value_39);
            Py_DECREF(tmp_dict_value_39);
            assert(!(tmp_res != 0));


            tmp_args_element_value_38 = MAKE_FUNCTION_flet_core$constrained_control$$$function__27_animate_size(tmp_annotations_39);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 202;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_14:;
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[15], tmp_dictset_value);
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
            PyObject *tmp_called_value_40;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_annotations_40;
            PyObject *tmp_dict_key_40;
            PyObject *tmp_dict_value_40;
            tmp_expression_value_28 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[15]);

            if (unlikely(tmp_expression_value_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[15]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 206;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[107]);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_called_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_40 = mod_consts[108];
            tmp_dict_value_40 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

            if (tmp_dict_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_40 == NULL)) {
                        tmp_dict_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_40);

                        exception_lineno = 207;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_40);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_40 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_40, tmp_dict_key_40, tmp_dict_value_40);
            Py_DECREF(tmp_dict_value_40);
            assert(!(tmp_res != 0));


            tmp_args_element_value_39 = MAKE_FUNCTION_flet_core$constrained_control$$$function__28_animate_size(tmp_annotations_40);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 206;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_39);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_annotations_41;
            PyObject *tmp_dict_key_41;
            PyObject *tmp_dict_value_41;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_annotations_42;
            PyObject *tmp_dict_key_42;
            PyObject *tmp_dict_value_42;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_17 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_15;
            } else {
                goto condexpr_false_15;
            }
            condexpr_true_15:;
            tmp_called_value_41 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (unlikely(tmp_called_value_41 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 211;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_41 = mod_consts[105];
            tmp_dict_value_41 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

            if (tmp_dict_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_41 == NULL)) {
                        tmp_dict_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);

                        exception_lineno = 212;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_41);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_41 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_41, tmp_dict_key_41, tmp_dict_value_41);
            Py_DECREF(tmp_dict_value_41);
            assert(!(tmp_res != 0));


            tmp_args_element_value_40 = MAKE_FUNCTION_flet_core$constrained_control$$$function__29_animate_position(tmp_annotations_41);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 211;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_40);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_15;
            condexpr_false_15:;
            tmp_called_value_42 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_42 = mod_consts[105];
            tmp_dict_value_42 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

            if (tmp_dict_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_42 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_42 == NULL)) {
                        tmp_dict_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 212;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_42);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_42 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_42, tmp_dict_key_42, tmp_dict_value_42);
            Py_DECREF(tmp_dict_value_42);
            assert(!(tmp_res != 0));


            tmp_args_element_value_41 = MAKE_FUNCTION_flet_core$constrained_control$$$function__29_animate_position(tmp_annotations_42);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 211;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_15:;
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[16], tmp_dictset_value);
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
            PyObject *tmp_called_value_43;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_annotations_43;
            PyObject *tmp_dict_key_43;
            PyObject *tmp_dict_value_43;
            tmp_expression_value_29 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[16]);

            if (unlikely(tmp_expression_value_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[16]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 215;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[107]);
            Py_DECREF(tmp_expression_value_29);
            if (tmp_called_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_43 = mod_consts[108];
            tmp_dict_value_43 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

            if (tmp_dict_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_43 == NULL)) {
                        tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_43);

                        exception_lineno = 216;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_43);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_43 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_43, tmp_dict_value_43);
            Py_DECREF(tmp_dict_value_43);
            assert(!(tmp_res != 0));


            tmp_args_element_value_42 = MAKE_FUNCTION_flet_core$constrained_control$$$function__30_animate_position(tmp_annotations_43);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 215;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_42);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_args_element_value_42);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_annotations_44;
            PyObject *tmp_dict_key_44;
            PyObject *tmp_dict_value_44;
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_annotations_45;
            PyObject *tmp_dict_key_45;
            PyObject *tmp_dict_value_45;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_18 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_16;
            } else {
                goto condexpr_false_16;
            }
            condexpr_true_16:;
            tmp_called_value_44 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (unlikely(tmp_called_value_44 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 220;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_44 = mod_consts[105];
            tmp_dict_value_44 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

            if (tmp_dict_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_44 == NULL)) {
                        tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_44);

                        exception_lineno = 221;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_44);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_44 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_44, tmp_dict_key_44, tmp_dict_value_44);
            Py_DECREF(tmp_dict_value_44);
            assert(!(tmp_res != 0));


            tmp_args_element_value_43 = MAKE_FUNCTION_flet_core$constrained_control$$$function__31_animate_rotation(tmp_annotations_44);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 220;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_43);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_16;
            condexpr_false_16:;
            tmp_called_value_45 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_45 = mod_consts[105];
            tmp_dict_value_45 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

            if (tmp_dict_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_45 == NULL)) {
                        tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 221;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_45);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_45 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_45, tmp_dict_value_45);
            Py_DECREF(tmp_dict_value_45);
            assert(!(tmp_res != 0));


            tmp_args_element_value_44 = MAKE_FUNCTION_flet_core$constrained_control$$$function__31_animate_rotation(tmp_annotations_45);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 220;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_44);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_16:;
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[17], tmp_dictset_value);
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
            PyObject *tmp_called_value_46;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_annotations_46;
            PyObject *tmp_dict_key_46;
            PyObject *tmp_dict_value_46;
            tmp_expression_value_30 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[17]);

            if (unlikely(tmp_expression_value_30 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[17]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 224;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[107]);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_called_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_46 = mod_consts[108];
            tmp_dict_value_46 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

            if (tmp_dict_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_46 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_46 == NULL)) {
                        tmp_dict_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_46);

                        exception_lineno = 225;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_46);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_46 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_46, tmp_dict_key_46, tmp_dict_value_46);
            Py_DECREF(tmp_dict_value_46);
            assert(!(tmp_res != 0));


            tmp_args_element_value_45 = MAKE_FUNCTION_flet_core$constrained_control$$$function__32_animate_rotation(tmp_annotations_46);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 224;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_45);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_args_element_value_45);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_annotations_47;
            PyObject *tmp_dict_key_47;
            PyObject *tmp_dict_value_47;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_annotations_48;
            PyObject *tmp_dict_key_48;
            PyObject *tmp_dict_value_48;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_19 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_17;
            } else {
                goto condexpr_false_17;
            }
            condexpr_true_17:;
            tmp_called_value_47 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (unlikely(tmp_called_value_47 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 229;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_47 = mod_consts[105];
            tmp_dict_value_47 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

            if (tmp_dict_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_47 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_47 == NULL)) {
                        tmp_dict_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_47);

                        exception_lineno = 230;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_47);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_47 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_47, tmp_dict_key_47, tmp_dict_value_47);
            Py_DECREF(tmp_dict_value_47);
            assert(!(tmp_res != 0));


            tmp_args_element_value_46 = MAKE_FUNCTION_flet_core$constrained_control$$$function__33_animate_scale(tmp_annotations_47);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 229;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_46);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_46);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_17;
            condexpr_false_17:;
            tmp_called_value_48 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_48 = mod_consts[105];
            tmp_dict_value_48 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

            if (tmp_dict_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_48 == NULL)) {
                        tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 230;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_48);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_48 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_48, tmp_dict_key_48, tmp_dict_value_48);
            Py_DECREF(tmp_dict_value_48);
            assert(!(tmp_res != 0));


            tmp_args_element_value_47 = MAKE_FUNCTION_flet_core$constrained_control$$$function__33_animate_scale(tmp_annotations_48);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 229;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_47);
            Py_DECREF(tmp_args_element_value_47);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_17:;
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[18], tmp_dictset_value);
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
            PyObject *tmp_called_value_49;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_annotations_49;
            PyObject *tmp_dict_key_49;
            PyObject *tmp_dict_value_49;
            tmp_expression_value_31 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[18]);

            if (unlikely(tmp_expression_value_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[18]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 233;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[107]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_called_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_49 = mod_consts[108];
            tmp_dict_value_49 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

            if (tmp_dict_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_49 == NULL)) {
                        tmp_dict_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_49);

                        exception_lineno = 234;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_49);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_49 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_49, tmp_dict_key_49, tmp_dict_value_49);
            Py_DECREF(tmp_dict_value_49);
            assert(!(tmp_res != 0));


            tmp_args_element_value_48 = MAKE_FUNCTION_flet_core$constrained_control$$$function__34_animate_scale(tmp_annotations_49);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 233;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_48);
            Py_DECREF(tmp_called_value_49);
            Py_DECREF(tmp_args_element_value_48);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_annotations_50;
            PyObject *tmp_dict_key_50;
            PyObject *tmp_dict_value_50;
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_element_value_50;
            PyObject *tmp_annotations_51;
            PyObject *tmp_dict_key_51;
            PyObject *tmp_dict_value_51;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_20 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_18;
            } else {
                goto condexpr_false_18;
            }
            condexpr_true_18:;
            tmp_called_value_50 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (unlikely(tmp_called_value_50 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 238;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_50 = mod_consts[105];
            tmp_dict_value_50 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

            if (tmp_dict_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_50 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_50 == NULL)) {
                        tmp_dict_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_50);

                        exception_lineno = 239;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_50);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_50 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_50, tmp_dict_key_50, tmp_dict_value_50);
            Py_DECREF(tmp_dict_value_50);
            assert(!(tmp_res != 0));


            tmp_args_element_value_49 = MAKE_FUNCTION_flet_core$constrained_control$$$function__35_animate_offset(tmp_annotations_50);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 238;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_49);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_49);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_18;
            condexpr_false_18:;
            tmp_called_value_51 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_51 = mod_consts[105];
            tmp_dict_value_51 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

            if (tmp_dict_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_51 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_51 == NULL)) {
                        tmp_dict_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 239;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_51);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_51 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_51, tmp_dict_key_51, tmp_dict_value_51);
            Py_DECREF(tmp_dict_value_51);
            assert(!(tmp_res != 0));


            tmp_args_element_value_50 = MAKE_FUNCTION_flet_core$constrained_control$$$function__35_animate_offset(tmp_annotations_51);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 238;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_50);
            Py_DECREF(tmp_args_element_value_50);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_18:;
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[19], tmp_dictset_value);
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
            PyObject *tmp_called_value_52;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_args_element_value_51;
            PyObject *tmp_annotations_52;
            PyObject *tmp_dict_key_52;
            PyObject *tmp_dict_value_52;
            tmp_expression_value_32 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[19]);

            if (unlikely(tmp_expression_value_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[19]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 242;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[107]);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_called_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_52 = mod_consts[108];
            tmp_dict_value_52 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[76]);

            if (tmp_dict_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_52 = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_52 == NULL)) {
                        tmp_dict_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_52);

                        exception_lineno = 243;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_52);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_52 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_52, tmp_dict_key_52, tmp_dict_value_52);
            Py_DECREF(tmp_dict_value_52);
            assert(!(tmp_res != 0));


            tmp_args_element_value_51 = MAKE_FUNCTION_flet_core$constrained_control$$$function__36_animate_offset(tmp_annotations_52);

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 242;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_51);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_args_element_value_51);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_element_value_52;
            PyObject *tmp_called_value_54;
            PyObject *tmp_args_element_value_53;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_21 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_19;
            } else {
                goto condexpr_false_19;
            }
            condexpr_true_19:;
            tmp_called_value_53 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[104]);

            if (unlikely(tmp_called_value_53 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[104]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 247;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_52 = MAKE_FUNCTION_flet_core$constrained_control$$$function__37_on_animation_end();

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 247;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_53, tmp_args_element_value_52);
            Py_DECREF(tmp_called_value_53);
            Py_DECREF(tmp_args_element_value_52);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_19;
            condexpr_false_19:;
            tmp_called_value_54 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_53 = MAKE_FUNCTION_flet_core$constrained_control$$$function__37_on_animation_end();

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 247;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_53);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            condexpr_end_19:;
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_54;
            tmp_called_instance_1 = PyObject_GetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[20]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[20]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 251;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_54 = MAKE_FUNCTION_flet_core$constrained_control$$$function__38_on_animation_end();

            frame_461bca902b76746d98211d225f63fbcf_2->m_frame.f_lineno = 251;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[107], tmp_args_element_value_54);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_54);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_461bca902b76746d98211d225f63fbcf_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_461bca902b76746d98211d225f63fbcf_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_461bca902b76746d98211d225f63fbcf_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_461bca902b76746d98211d225f63fbcf_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_461bca902b76746d98211d225f63fbcf_2);

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
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_22 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_22 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14, mod_consts[126], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_55 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[82];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_1406492b6ca7ac9685cc66ce874e502f->m_frame.f_lineno = 14;
            tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_55, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

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
        Py_DECREF(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14);
        locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14 = NULL;
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

        Py_DECREF(locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14);
        locals_flet_core$constrained_control$$$class__1_ConstrainedControl_14 = NULL;
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
        exception_lineno = 14;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_24);
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
        exception_tb = MAKE_TRACEBACK(frame_1406492b6ca7ac9685cc66ce874e502f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1406492b6ca7ac9685cc66ce874e502f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1406492b6ca7ac9685cc66ce874e502f, exception_lineno);
    }



    assertFrameObject(frame_1406492b6ca7ac9685cc66ce874e502f);

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
    PGO_onModuleExit("flet_core.constrained_control", false);

    Py_INCREF(module_flet_core$constrained_control);
    return module_flet_core$constrained_control;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$constrained_control, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$constrained_control", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
