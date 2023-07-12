/* Generated code for Python module 'flet_core.audio'
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

/* The "module_flet_core$audio" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$audio;
PyDictObject *moduledict_flet_core$audio;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[156];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[156];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.audio"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 156; i++) {
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
void checkModuleConstants_flet_core$audio(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 156; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_78e68c9e2485899104157bd215a2ef02;
static PyCodeObject *codeobj_992b6e185d9e12880051221e0787f5c8;
static PyCodeObject *codeobj_ad4c8833c81b81297ffa92ee06709703;
static PyCodeObject *codeobj_bf66e6fcd9c8f9da225251bfdf8a679b;
static PyCodeObject *codeobj_62614d6389af5e1dca00cb632d61fa0a;
static PyCodeObject *codeobj_872e920fd1abfeadd7307158e97f30df;
static PyCodeObject *codeobj_f6d565b4c71b989ca492c929d85ca1a1;
static PyCodeObject *codeobj_683dc975391c86feb827eaaa7470085c;
static PyCodeObject *codeobj_beeba6c4217aec4d400b1d5ecd6478e7;
static PyCodeObject *codeobj_9e6acda52adffad3893f5249c235d80b;
static PyCodeObject *codeobj_4aabc095e9abccca2c60e06bbc38bea7;
static PyCodeObject *codeobj_feb0de8aedbce6c47beed7a770434f14;
static PyCodeObject *codeobj_3caa677b1f59339cda2295a1c64d41dd;
static PyCodeObject *codeobj_b109a7a02a46917a531737e4dfff8457;
static PyCodeObject *codeobj_1383f855123e00e135bea6f1e5b70954;
static PyCodeObject *codeobj_7d3cd57b4f98cfa5144fa7184bb33327;
static PyCodeObject *codeobj_4359f2fa97b83823abb7a2cb1b42881c;
static PyCodeObject *codeobj_1b76f48af407c693a768f587c1b30377;
static PyCodeObject *codeobj_0cdf8e4295624fc399f03a6515bf142a;
static PyCodeObject *codeobj_bc95acc924b285389fcf903925c97ba6;
static PyCodeObject *codeobj_11124d4dc15e64611dcf179fd921c855;
static PyCodeObject *codeobj_4ce30eaa332752caca79937cce86a14b;
static PyCodeObject *codeobj_7c57e6c9a6dd563fb38107c511f83112;
static PyCodeObject *codeobj_967646677309deca38850c2947abef35;
static PyCodeObject *codeobj_7a8e37d9ddde4a2dbb6a46ea08ae5556;
static PyCodeObject *codeobj_b6a797fde3c87482e096e71a12513786;
static PyCodeObject *codeobj_2cec0a85c476bb7cecc09a10a6c4ae27;
static PyCodeObject *codeobj_7c96c909b5675999ab18cc6f3985f4d9;
static PyCodeObject *codeobj_2eb8ef3d5d8e856badc1e58c1e9d144f;
static PyCodeObject *codeobj_7cfa402290aff1180222c91272f08a74;
static PyCodeObject *codeobj_0873db7ffda0828f321937b800176939;
static PyCodeObject *codeobj_fb8eb491c0ed6af3a2fdf521fdb0aef9;
static PyCodeObject *codeobj_0e8e8369aed1dc33dea9396efa5e08ae;
static PyCodeObject *codeobj_ae64f7370e452250d7f8f8080b5264d4;
static PyCodeObject *codeobj_989a11151cdbfb99737460440f3e52c7;
static PyCodeObject *codeobj_eab24e437fa363c351e1e50abff47685;
static PyCodeObject *codeobj_5f63f5fca25d9ec696a3165e56f087c3;
static PyCodeObject *codeobj_480e565177f82e3f1d38ab58c36d6e1f;
static PyCodeObject *codeobj_43c70df71fd3b5a3610d777d81c49956;
static PyCodeObject *codeobj_e6f79c68a2c001bac793533a5d1291cf;
static PyCodeObject *codeobj_de61785284078694e4356406c44b466f;
static PyCodeObject *codeobj_b42b26e9a0bacd0b2d02be8cc717d137;
static PyCodeObject *codeobj_b6382ade5aa317e5633b5b24af65c426;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[74]; CHECK_OBJECT(module_filename_obj);
    codeobj_78e68c9e2485899104157bd215a2ef02 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[147], mod_consts[147], NULL, NULL, 0, 0, 0);
    codeobj_992b6e185d9e12880051221e0787f5c8 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_NOFREE, mod_consts[109], mod_consts[109], mod_consts[148], NULL, 0, 0, 0);
    codeobj_ad4c8833c81b81297ffa92ee06709703 = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_NOFREE, mod_consts[94], mod_consts[94], mod_consts[148], NULL, 0, 0, 0);
    codeobj_bf66e6fcd9c8f9da225251bfdf8a679b = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[149], NULL, 15, 0, 0);
    codeobj_62614d6389af5e1dca00cb632d61fa0a = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[118], mod_consts[118], mod_consts[150], NULL, 1, 0, 0);
    codeobj_872e920fd1abfeadd7307158e97f30df = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[150], NULL, 1, 0, 0);
    codeobj_f6d565b4c71b989ca492c929d85ca1a1 = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[151], NULL, 2, 0, 0);
    codeobj_683dc975391c86feb827eaaa7470085c = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[150], NULL, 1, 0, 0);
    codeobj_beeba6c4217aec4d400b1d5ecd6478e7 = MAKE_CODE_OBJECT(module_filename_obj, 177, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[151], NULL, 2, 0, 0);
    codeobj_9e6acda52adffad3893f5249c235d80b = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[152], NULL, 1, 0, 0);
    codeobj_4aabc095e9abccca2c60e06bbc38bea7 = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[39], mod_consts[152], NULL, 1, 0, 0);
    codeobj_feb0de8aedbce6c47beed7a770434f14 = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[35], mod_consts[152], NULL, 1, 0, 0);
    codeobj_3caa677b1f59339cda2295a1c64d41dd = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[152], NULL, 1, 0, 0);
    codeobj_b109a7a02a46917a531737e4dfff8457 = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[150], NULL, 1, 0, 0);
    codeobj_1383f855123e00e135bea6f1e5b70954 = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[153], NULL, 2, 0, 0);
    codeobj_7d3cd57b4f98cfa5144fa7184bb33327 = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[150], NULL, 1, 0, 0);
    codeobj_4359f2fa97b83823abb7a2cb1b42881c = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[153], NULL, 2, 0, 0);
    codeobj_1b76f48af407c693a768f587c1b30377 = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[150], NULL, 1, 0, 0);
    codeobj_0cdf8e4295624fc399f03a6515bf142a = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[153], NULL, 2, 0, 0);
    codeobj_bc95acc924b285389fcf903925c97ba6 = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[150], NULL, 1, 0, 0);
    codeobj_11124d4dc15e64611dcf179fd921c855 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[153], NULL, 2, 0, 0);
    codeobj_4ce30eaa332752caca79937cce86a14b = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[150], NULL, 1, 0, 0);
    codeobj_7c57e6c9a6dd563fb38107c511f83112 = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[153], NULL, 2, 0, 0);
    codeobj_967646677309deca38850c2947abef35 = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[122], mod_consts[122], mod_consts[150], NULL, 1, 0, 0);
    codeobj_7a8e37d9ddde4a2dbb6a46ea08ae5556 = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[150], NULL, 1, 0, 0);
    codeobj_b6a797fde3c87482e096e71a12513786 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[120], mod_consts[120], mod_consts[150], NULL, 1, 0, 0);
    codeobj_2cec0a85c476bb7cecc09a10a6c4ae27 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[150], NULL, 1, 0, 0);
    codeobj_7c96c909b5675999ab18cc6f3985f4d9 = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[150], NULL, 1, 0, 0);
    codeobj_2eb8ef3d5d8e856badc1e58c1e9d144f = MAKE_CODE_OBJECT(module_filename_obj, 187, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[151], NULL, 2, 0, 0);
    codeobj_7cfa402290aff1180222c91272f08a74 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[102], mod_consts[102], mod_consts[150], NULL, 1, 0, 0);
    codeobj_0873db7ffda0828f321937b800176939 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[29], mod_consts[29], mod_consts[150], NULL, 1, 0, 0);
    codeobj_fb8eb491c0ed6af3a2fdf521fdb0aef9 = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[150], NULL, 1, 0, 0);
    codeobj_0e8e8369aed1dc33dea9396efa5e08ae = MAKE_CODE_OBJECT(module_filename_obj, 197, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[151], NULL, 2, 0, 0);
    codeobj_ae64f7370e452250d7f8f8080b5264d4 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[124], mod_consts[124], mod_consts[150], NULL, 1, 0, 0);
    codeobj_989a11151cdbfb99737460440f3e52c7 = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[150], NULL, 1, 0, 0);
    codeobj_eab24e437fa363c351e1e50abff47685 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[128], mod_consts[128], mod_consts[154], NULL, 2, 0, 0);
    codeobj_5f63f5fca25d9ec696a3165e56f087c3 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[154], NULL, 2, 0, 0);
    codeobj_480e565177f82e3f1d38ab58c36d6e1f = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[150], NULL, 1, 0, 0);
    codeobj_43c70df71fd3b5a3610d777d81c49956 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[151], NULL, 2, 0, 0);
    codeobj_e6f79c68a2c001bac793533a5d1291cf = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[150], NULL, 1, 0, 0);
    codeobj_de61785284078694e4356406c44b466f = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[151], NULL, 2, 0, 0);
    codeobj_b42b26e9a0bacd0b2d02be8cc717d137 = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[150], NULL, 1, 0, 0);
    codeobj_b6382ade5aa317e5633b5b24af65c426 = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[151], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_flet_core$audio$$$function__4_play_async$$$coroutine__1_play_async(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_flet_core$audio$$$function__6_pause_async$$$coroutine__1_pause_async(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_flet_core$audio$$$function__8_resume_async$$$coroutine__1_resume_async(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_flet_core$audio$$$function__10_release_async$$$coroutine__1_release_async(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_flet_core$audio$$$function__12_seek_async$$$coroutine__1_seek_async(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_flet_core$audio$$$function__14_get_duration_async$$$coroutine__1_get_duration_async(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_flet_core$audio$$$function__16_get_current_position_async$$$coroutine__1_get_current_position_async(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__10_release_async();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__11_seek(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__12_seek_async(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__13_get_duration(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__14_get_duration_async(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__15_get_current_position(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__16_get_current_position_async(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__17_src();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__18_src();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__19_src_base64();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__20_src_base64();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__21_autoplay(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__22_autoplay(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__23_volume(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__24_volume(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__25_balance(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__26_balance(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__27_playback_rate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__28_playback_rate(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__29_release_mode();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__2__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__30_release_mode(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__31_on_loaded();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__32_on_loaded();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__33_on_duration_changed();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__34_on_duration_changed();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__35_on_state_changed();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__36_on_state_changed();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__37_on_position_changed();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__38_on_position_changed();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__39_on_seek_complete();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__3_play();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__40_on_seek_complete();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__4_play_async();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__5_pause();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__6_pause_async();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__7_resume();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__8_resume_async();


static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__9_release();


// The module function definitions.
static PyObject *impl_flet_core$audio$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_src = python_pars[1];
    PyObject *par_ref = python_pars[2];
    PyObject *par_data = python_pars[3];
    PyObject *par_src_base64 = python_pars[4];
    PyObject *par_autoplay = python_pars[5];
    PyObject *par_volume = python_pars[6];
    PyObject *par_balance = python_pars[7];
    PyObject *par_playback_rate = python_pars[8];
    PyObject *par_release_mode = python_pars[9];
    PyObject *par_on_loaded = python_pars[10];
    PyObject *par_on_duration_changed = python_pars[11];
    PyObject *par_on_state_changed = python_pars[12];
    PyObject *par_on_position_changed = python_pars[13];
    PyObject *par_on_seek_complete = python_pars[14];
    struct Nuitka_FrameObject *frame_bf66e6fcd9c8f9da225251bfdf8a679b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_bf66e6fcd9c8f9da225251bfdf8a679b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bf66e6fcd9c8f9da225251bfdf8a679b)) {
        Py_XDECREF(cache_frame_bf66e6fcd9c8f9da225251bfdf8a679b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf66e6fcd9c8f9da225251bfdf8a679b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf66e6fcd9c8f9da225251bfdf8a679b = MAKE_FUNCTION_FRAME(codeobj_bf66e6fcd9c8f9da225251bfdf8a679b, module_flet_core$audio, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bf66e6fcd9c8f9da225251bfdf8a679b->m_type_description == NULL);
    frame_bf66e6fcd9c8f9da225251bfdf8a679b = cache_frame_bf66e6fcd9c8f9da225251bfdf8a679b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bf66e6fcd9c8f9da225251bfdf8a679b);
    assert(Py_REFCNT(frame_bf66e6fcd9c8f9da225251bfdf8a679b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_ref);
        tmp_kw_call_dict_value_0_1 = par_ref;
        CHECK_OBJECT(par_data);
        tmp_kw_call_dict_value_1_1 = par_data;
        frame_bf66e6fcd9c8f9da225251bfdf8a679b->m_frame.f_lineno = 62;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_src);
        tmp_assattr_value_1 = par_src;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_src_base64);
        tmp_assattr_value_2 = par_src_base64;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_autoplay);
        tmp_assattr_value_3 = par_autoplay;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_volume);
        tmp_assattr_value_4 = par_volume;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[6], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_balance);
        tmp_assattr_value_5 = par_balance;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_playback_rate);
        tmp_assattr_value_6 = par_playback_rate;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[8], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_release_mode);
        tmp_assattr_value_7 = par_release_mode;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[9], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_on_loaded);
        tmp_assattr_value_8 = par_on_loaded;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[10], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_on_duration_changed);
        tmp_assattr_value_9 = par_on_duration_changed;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[11], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_on_state_changed);
        tmp_assattr_value_10 = par_on_state_changed;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[12], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_on_position_changed);
        tmp_assattr_value_11 = par_on_position_changed;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[13], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(par_on_seek_complete);
        tmp_assattr_value_12 = par_on_seek_complete;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[14], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bf66e6fcd9c8f9da225251bfdf8a679b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf66e6fcd9c8f9da225251bfdf8a679b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf66e6fcd9c8f9da225251bfdf8a679b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf66e6fcd9c8f9da225251bfdf8a679b,
        type_description_1,
        par_self,
        par_src,
        par_ref,
        par_data,
        par_src_base64,
        par_autoplay,
        par_volume,
        par_balance,
        par_playback_rate,
        par_release_mode,
        par_on_loaded,
        par_on_duration_changed,
        par_on_state_changed,
        par_on_position_changed,
        par_on_seek_complete
    );


    // Release cached frame if used for exception.
    if (frame_bf66e6fcd9c8f9da225251bfdf8a679b == cache_frame_bf66e6fcd9c8f9da225251bfdf8a679b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bf66e6fcd9c8f9da225251bfdf8a679b);
        cache_frame_bf66e6fcd9c8f9da225251bfdf8a679b = NULL;
    }

    assertFrameObject(frame_bf66e6fcd9c8f9da225251bfdf8a679b);

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
    CHECK_OBJECT(par_src);
    Py_DECREF(par_src);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_src_base64);
    Py_DECREF(par_src_base64);
    CHECK_OBJECT(par_autoplay);
    Py_DECREF(par_autoplay);
    CHECK_OBJECT(par_volume);
    Py_DECREF(par_volume);
    CHECK_OBJECT(par_balance);
    Py_DECREF(par_balance);
    CHECK_OBJECT(par_playback_rate);
    Py_DECREF(par_playback_rate);
    CHECK_OBJECT(par_release_mode);
    Py_DECREF(par_release_mode);
    CHECK_OBJECT(par_on_loaded);
    Py_DECREF(par_on_loaded);
    CHECK_OBJECT(par_on_duration_changed);
    Py_DECREF(par_on_duration_changed);
    CHECK_OBJECT(par_on_state_changed);
    Py_DECREF(par_on_state_changed);
    CHECK_OBJECT(par_on_position_changed);
    Py_DECREF(par_on_position_changed);
    CHECK_OBJECT(par_on_seek_complete);
    Py_DECREF(par_on_seek_complete);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_src);
    Py_DECREF(par_src);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_src_base64);
    Py_DECREF(par_src_base64);
    CHECK_OBJECT(par_autoplay);
    Py_DECREF(par_autoplay);
    CHECK_OBJECT(par_volume);
    Py_DECREF(par_volume);
    CHECK_OBJECT(par_balance);
    Py_DECREF(par_balance);
    CHECK_OBJECT(par_playback_rate);
    Py_DECREF(par_playback_rate);
    CHECK_OBJECT(par_release_mode);
    Py_DECREF(par_release_mode);
    CHECK_OBJECT(par_on_loaded);
    Py_DECREF(par_on_loaded);
    CHECK_OBJECT(par_on_duration_changed);
    Py_DECREF(par_on_duration_changed);
    CHECK_OBJECT(par_on_state_changed);
    Py_DECREF(par_on_state_changed);
    CHECK_OBJECT(par_on_position_changed);
    Py_DECREF(par_on_position_changed);
    CHECK_OBJECT(par_on_seek_complete);
    Py_DECREF(par_on_seek_complete);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$audio$$$function__3_play(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b6a797fde3c87482e096e71a12513786;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b6a797fde3c87482e096e71a12513786 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b6a797fde3c87482e096e71a12513786)) {
        Py_XDECREF(cache_frame_b6a797fde3c87482e096e71a12513786);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b6a797fde3c87482e096e71a12513786 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b6a797fde3c87482e096e71a12513786 = MAKE_FUNCTION_FRAME(codeobj_b6a797fde3c87482e096e71a12513786, module_flet_core$audio, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b6a797fde3c87482e096e71a12513786->m_type_description == NULL);
    frame_b6a797fde3c87482e096e71a12513786 = cache_frame_b6a797fde3c87482e096e71a12513786;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b6a797fde3c87482e096e71a12513786);
    assert(Py_REFCNT(frame_b6a797fde3c87482e096e71a12513786) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_call_args_values_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_call_args_values_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[16], "ili");
        frame_b6a797fde3c87482e096e71a12513786->m_frame.f_lineno = 85;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(tmp_call_args_values_1, 0), mod_consts[17]);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_args_values_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b6a797fde3c87482e096e71a12513786, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b6a797fde3c87482e096e71a12513786->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b6a797fde3c87482e096e71a12513786, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b6a797fde3c87482e096e71a12513786,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b6a797fde3c87482e096e71a12513786 == cache_frame_b6a797fde3c87482e096e71a12513786) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b6a797fde3c87482e096e71a12513786);
        cache_frame_b6a797fde3c87482e096e71a12513786 = NULL;
    }

    assertFrameObject(frame_b6a797fde3c87482e096e71a12513786);

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


static PyObject *impl_flet_core$audio$$$function__4_play_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_flet_core$audio$$$function__4_play_async$$$coroutine__1_play_async(tmp_closure_1);

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
struct flet_core$audio$$$function__4_play_async$$$coroutine__1_play_async_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *flet_core$audio$$$function__4_play_async$$$coroutine__1_play_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet_core$audio$$$function__4_play_async$$$coroutine__1_play_async_locals *coroutine_heap = (struct flet_core$audio$$$function__4_play_async$$$coroutine__1_play_async_locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_2cec0a85c476bb7cecc09a10a6c4ae27, module_flet_core$audio, sizeof(void *));
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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_args_values_1;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 88;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[18]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 88;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 88;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_call_args_values_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[16], "ili");
        coroutine->m_frame->m_frame.f_lineno = 88;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(tmp_call_args_values_1, 0), mod_consts[17]);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_args_values_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 88;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 88;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_call_args_values_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_call_args_values_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 88;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 88;
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

static PyObject *MAKE_COROUTINE_flet_core$audio$$$function__4_play_async$$$coroutine__1_play_async(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        flet_core$audio$$$function__4_play_async$$$coroutine__1_play_async_context,
        module_flet_core$audio,
        mod_consts[20],
        mod_consts[21],
        codeobj_2cec0a85c476bb7cecc09a10a6c4ae27,
        closure,
        1,
#if 1
        sizeof(struct flet_core$audio$$$function__4_play_async$$$coroutine__1_play_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$audio$$$function__5_pause(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_967646677309deca38850c2947abef35;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_967646677309deca38850c2947abef35 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_967646677309deca38850c2947abef35)) {
        Py_XDECREF(cache_frame_967646677309deca38850c2947abef35);

#if _DEBUG_REFCOUNTS
        if (cache_frame_967646677309deca38850c2947abef35 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_967646677309deca38850c2947abef35 = MAKE_FUNCTION_FRAME(codeobj_967646677309deca38850c2947abef35, module_flet_core$audio, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_967646677309deca38850c2947abef35->m_type_description == NULL);
    frame_967646677309deca38850c2947abef35 = cache_frame_967646677309deca38850c2947abef35;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_967646677309deca38850c2947abef35);
    assert(Py_REFCNT(frame_967646677309deca38850c2947abef35) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_call_args_values_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_call_args_values_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[22], "ili");
        frame_967646677309deca38850c2947abef35->m_frame.f_lineno = 91;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(tmp_call_args_values_1, 0), mod_consts[17]);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_args_values_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_967646677309deca38850c2947abef35, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_967646677309deca38850c2947abef35->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_967646677309deca38850c2947abef35, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_967646677309deca38850c2947abef35,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_967646677309deca38850c2947abef35 == cache_frame_967646677309deca38850c2947abef35) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_967646677309deca38850c2947abef35);
        cache_frame_967646677309deca38850c2947abef35 = NULL;
    }

    assertFrameObject(frame_967646677309deca38850c2947abef35);

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


static PyObject *impl_flet_core$audio$$$function__6_pause_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_flet_core$audio$$$function__6_pause_async$$$coroutine__1_pause_async(tmp_closure_1);

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
struct flet_core$audio$$$function__6_pause_async$$$coroutine__1_pause_async_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *flet_core$audio$$$function__6_pause_async$$$coroutine__1_pause_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet_core$audio$$$function__6_pause_async$$$coroutine__1_pause_async_locals *coroutine_heap = (struct flet_core$audio$$$function__6_pause_async$$$coroutine__1_pause_async_locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_7a8e37d9ddde4a2dbb6a46ea08ae5556, module_flet_core$audio, sizeof(void *));
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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_args_values_1;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 94;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[18]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 94;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 94;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_call_args_values_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[22], "ili");
        coroutine->m_frame->m_frame.f_lineno = 94;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(tmp_call_args_values_1, 0), mod_consts[17]);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_args_values_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 94;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 94;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_call_args_values_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_call_args_values_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 94;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 94;
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

static PyObject *MAKE_COROUTINE_flet_core$audio$$$function__6_pause_async$$$coroutine__1_pause_async(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        flet_core$audio$$$function__6_pause_async$$$coroutine__1_pause_async_context,
        module_flet_core$audio,
        mod_consts[23],
        mod_consts[24],
        codeobj_7a8e37d9ddde4a2dbb6a46ea08ae5556,
        closure,
        1,
#if 1
        sizeof(struct flet_core$audio$$$function__6_pause_async$$$coroutine__1_pause_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$audio$$$function__7_resume(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ae64f7370e452250d7f8f8080b5264d4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae64f7370e452250d7f8f8080b5264d4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ae64f7370e452250d7f8f8080b5264d4)) {
        Py_XDECREF(cache_frame_ae64f7370e452250d7f8f8080b5264d4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ae64f7370e452250d7f8f8080b5264d4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ae64f7370e452250d7f8f8080b5264d4 = MAKE_FUNCTION_FRAME(codeobj_ae64f7370e452250d7f8f8080b5264d4, module_flet_core$audio, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ae64f7370e452250d7f8f8080b5264d4->m_type_description == NULL);
    frame_ae64f7370e452250d7f8f8080b5264d4 = cache_frame_ae64f7370e452250d7f8f8080b5264d4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ae64f7370e452250d7f8f8080b5264d4);
    assert(Py_REFCNT(frame_ae64f7370e452250d7f8f8080b5264d4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_call_args_values_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_call_args_values_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[25], "ili");
        frame_ae64f7370e452250d7f8f8080b5264d4->m_frame.f_lineno = 97;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(tmp_call_args_values_1, 0), mod_consts[17]);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_args_values_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ae64f7370e452250d7f8f8080b5264d4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ae64f7370e452250d7f8f8080b5264d4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ae64f7370e452250d7f8f8080b5264d4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ae64f7370e452250d7f8f8080b5264d4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ae64f7370e452250d7f8f8080b5264d4 == cache_frame_ae64f7370e452250d7f8f8080b5264d4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ae64f7370e452250d7f8f8080b5264d4);
        cache_frame_ae64f7370e452250d7f8f8080b5264d4 = NULL;
    }

    assertFrameObject(frame_ae64f7370e452250d7f8f8080b5264d4);

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


static PyObject *impl_flet_core$audio$$$function__8_resume_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_flet_core$audio$$$function__8_resume_async$$$coroutine__1_resume_async(tmp_closure_1);

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
struct flet_core$audio$$$function__8_resume_async$$$coroutine__1_resume_async_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *flet_core$audio$$$function__8_resume_async$$$coroutine__1_resume_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet_core$audio$$$function__8_resume_async$$$coroutine__1_resume_async_locals *coroutine_heap = (struct flet_core$audio$$$function__8_resume_async$$$coroutine__1_resume_async_locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_989a11151cdbfb99737460440f3e52c7, module_flet_core$audio, sizeof(void *));
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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_args_values_1;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 100;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[18]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 100;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 100;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_call_args_values_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[25], "ili");
        coroutine->m_frame->m_frame.f_lineno = 100;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(tmp_call_args_values_1, 0), mod_consts[17]);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_args_values_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 100;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 100;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_call_args_values_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_call_args_values_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 100;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 100;
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

static PyObject *MAKE_COROUTINE_flet_core$audio$$$function__8_resume_async$$$coroutine__1_resume_async(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        flet_core$audio$$$function__8_resume_async$$$coroutine__1_resume_async_context,
        module_flet_core$audio,
        mod_consts[26],
        mod_consts[27],
        codeobj_989a11151cdbfb99737460440f3e52c7,
        closure,
        1,
#if 1
        sizeof(struct flet_core$audio$$$function__8_resume_async$$$coroutine__1_resume_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$audio$$$function__9_release(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7cfa402290aff1180222c91272f08a74;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7cfa402290aff1180222c91272f08a74 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7cfa402290aff1180222c91272f08a74)) {
        Py_XDECREF(cache_frame_7cfa402290aff1180222c91272f08a74);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7cfa402290aff1180222c91272f08a74 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7cfa402290aff1180222c91272f08a74 = MAKE_FUNCTION_FRAME(codeobj_7cfa402290aff1180222c91272f08a74, module_flet_core$audio, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7cfa402290aff1180222c91272f08a74->m_type_description == NULL);
    frame_7cfa402290aff1180222c91272f08a74 = cache_frame_7cfa402290aff1180222c91272f08a74;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7cfa402290aff1180222c91272f08a74);
    assert(Py_REFCNT(frame_7cfa402290aff1180222c91272f08a74) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_call_args_values_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_call_args_values_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[28], "ili");
        frame_7cfa402290aff1180222c91272f08a74->m_frame.f_lineno = 103;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(tmp_call_args_values_1, 0), mod_consts[17]);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_args_values_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7cfa402290aff1180222c91272f08a74, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7cfa402290aff1180222c91272f08a74->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7cfa402290aff1180222c91272f08a74, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7cfa402290aff1180222c91272f08a74,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7cfa402290aff1180222c91272f08a74 == cache_frame_7cfa402290aff1180222c91272f08a74) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7cfa402290aff1180222c91272f08a74);
        cache_frame_7cfa402290aff1180222c91272f08a74 = NULL;
    }

    assertFrameObject(frame_7cfa402290aff1180222c91272f08a74);

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


static PyObject *impl_flet_core$audio$$$function__10_release_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_flet_core$audio$$$function__10_release_async$$$coroutine__1_release_async(tmp_closure_1);

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
struct flet_core$audio$$$function__10_release_async$$$coroutine__1_release_async_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *flet_core$audio$$$function__10_release_async$$$coroutine__1_release_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet_core$audio$$$function__10_release_async$$$coroutine__1_release_async_locals *coroutine_heap = (struct flet_core$audio$$$function__10_release_async$$$coroutine__1_release_async_locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_0873db7ffda0828f321937b800176939, module_flet_core$audio, sizeof(void *));
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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_args_values_1;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 106;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[18]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 106;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 106;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_call_args_values_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[28], "ili");
        coroutine->m_frame->m_frame.f_lineno = 106;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(tmp_call_args_values_1, 0), mod_consts[17]);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_args_values_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 106;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 106;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_call_args_values_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_call_args_values_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 106;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 106;
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

static PyObject *MAKE_COROUTINE_flet_core$audio$$$function__10_release_async$$$coroutine__1_release_async(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        flet_core$audio$$$function__10_release_async$$$coroutine__1_release_async_context,
        module_flet_core$audio,
        mod_consts[29],
        mod_consts[30],
        codeobj_0873db7ffda0828f321937b800176939,
        closure,
        1,
#if 1
        sizeof(struct flet_core$audio$$$function__10_release_async$$$coroutine__1_release_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$audio$$$function__11_seek(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_position_milliseconds = python_pars[1];
    struct Nuitka_FrameObject *frame_eab24e437fa363c351e1e50abff47685;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eab24e437fa363c351e1e50abff47685 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eab24e437fa363c351e1e50abff47685)) {
        Py_XDECREF(cache_frame_eab24e437fa363c351e1e50abff47685);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eab24e437fa363c351e1e50abff47685 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eab24e437fa363c351e1e50abff47685 = MAKE_FUNCTION_FRAME(codeobj_eab24e437fa363c351e1e50abff47685, module_flet_core$audio, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eab24e437fa363c351e1e50abff47685->m_type_description == NULL);
    frame_eab24e437fa363c351e1e50abff47685 = cache_frame_eab24e437fa363c351e1e50abff47685;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_eab24e437fa363c351e1e50abff47685);
    assert(Py_REFCNT(frame_eab24e437fa363c351e1e50abff47685) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_kw_call_value_1_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_position_milliseconds);
        tmp_unicode_arg_1 = par_position_milliseconds;
        tmp_list_element_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_kw_call_value_0_1, 0, tmp_list_element_1);
        tmp_kw_call_value_1_1 = Py_False;
        frame_eab24e437fa363c351e1e50abff47685->m_frame.f_lineno = 109;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_1, mod_consts[31], kw_values, mod_consts[17]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
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
        exception_tb = MAKE_TRACEBACK(frame_eab24e437fa363c351e1e50abff47685, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eab24e437fa363c351e1e50abff47685->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eab24e437fa363c351e1e50abff47685, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eab24e437fa363c351e1e50abff47685,
        type_description_1,
        par_self,
        par_position_milliseconds
    );


    // Release cached frame if used for exception.
    if (frame_eab24e437fa363c351e1e50abff47685 == cache_frame_eab24e437fa363c351e1e50abff47685) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eab24e437fa363c351e1e50abff47685);
        cache_frame_eab24e437fa363c351e1e50abff47685 = NULL;
    }

    assertFrameObject(frame_eab24e437fa363c351e1e50abff47685);

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
    CHECK_OBJECT(par_position_milliseconds);
    Py_DECREF(par_position_milliseconds);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_position_milliseconds);
    Py_DECREF(par_position_milliseconds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$audio$$$function__12_seek_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_position_milliseconds = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_position_milliseconds;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_COROUTINE_flet_core$audio$$$function__12_seek_async$$$coroutine__1_seek_async(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_position_milliseconds);
    Py_DECREF(par_position_milliseconds);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct flet_core$audio$$$function__12_seek_async$$$coroutine__1_seek_async_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *flet_core$audio$$$function__12_seek_async$$$coroutine__1_seek_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet_core$audio$$$function__12_seek_async$$$coroutine__1_seek_async_locals *coroutine_heap = (struct flet_core$audio$$$function__12_seek_async$$$coroutine__1_seek_async_locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_5f63f5fca25d9ec696a3165e56f087c3, module_flet_core$audio, sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 114;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[18]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 114;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 114;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[32]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 115;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_unicode_arg_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_list_element_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 115;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_kw_call_value_0_1, 0, tmp_list_element_1);
        tmp_kw_call_value_1_1 = Py_False;
        coroutine->m_frame->m_frame.f_lineno = 114;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};
            tmp_expression_value_2 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_1, mod_consts[31], kw_values, mod_consts[17]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 114;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 114;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_list_element_1, sizeof(PyObject *), &tmp_unicode_arg_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_list_element_1, sizeof(PyObject *), &tmp_unicode_arg_1, sizeof(PyObject *), &tmp_kw_call_value_1_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 114;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 114;
            coroutine_heap->type_description_1 = "cc";
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
            coroutine->m_closure[1],
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

static PyObject *MAKE_COROUTINE_flet_core$audio$$$function__12_seek_async$$$coroutine__1_seek_async(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        flet_core$audio$$$function__12_seek_async$$$coroutine__1_seek_async_context,
        module_flet_core$audio,
        mod_consts[33],
        mod_consts[34],
        codeobj_5f63f5fca25d9ec696a3165e56f087c3,
        closure,
        2,
#if 1
        sizeof(struct flet_core$audio$$$function__12_seek_async$$$coroutine__1_seek_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$audio$$$function__13_get_duration(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_sr = NULL;
    struct Nuitka_FrameObject *frame_feb0de8aedbce6c47beed7a770434f14;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_feb0de8aedbce6c47beed7a770434f14 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_feb0de8aedbce6c47beed7a770434f14)) {
        Py_XDECREF(cache_frame_feb0de8aedbce6c47beed7a770434f14);

#if _DEBUG_REFCOUNTS
        if (cache_frame_feb0de8aedbce6c47beed7a770434f14 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_feb0de8aedbce6c47beed7a770434f14 = MAKE_FUNCTION_FRAME(codeobj_feb0de8aedbce6c47beed7a770434f14, module_flet_core$audio, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_feb0de8aedbce6c47beed7a770434f14->m_type_description == NULL);
    frame_feb0de8aedbce6c47beed7a770434f14 = cache_frame_feb0de8aedbce6c47beed7a770434f14;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_feb0de8aedbce6c47beed7a770434f14);
    assert(Py_REFCNT(frame_feb0de8aedbce6c47beed7a770434f14) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_call_arg_element_1 = mod_consts[35];
        tmp_call_arg_element_2 = MAKE_LIST_EMPTY(0);
        frame_feb0de8aedbce6c47beed7a770434f14->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[15],
                call_args
            );
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_sr == NULL);
        var_sr = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(var_sr);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_sr);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_sr);
        tmp_int_arg_1 = var_sr;
        tmp_return_value = PyNumber_Int(tmp_int_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_return_value = Py_None;
        Py_INCREF(tmp_return_value);
        condexpr_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_feb0de8aedbce6c47beed7a770434f14, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_feb0de8aedbce6c47beed7a770434f14->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_feb0de8aedbce6c47beed7a770434f14, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_feb0de8aedbce6c47beed7a770434f14,
        type_description_1,
        par_self,
        var_sr
    );


    // Release cached frame if used for exception.
    if (frame_feb0de8aedbce6c47beed7a770434f14 == cache_frame_feb0de8aedbce6c47beed7a770434f14) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_feb0de8aedbce6c47beed7a770434f14);
        cache_frame_feb0de8aedbce6c47beed7a770434f14 = NULL;
    }

    assertFrameObject(frame_feb0de8aedbce6c47beed7a770434f14);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_sr);
    Py_DECREF(var_sr);
    var_sr = NULL;
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

    Py_XDECREF(var_sr);
    var_sr = NULL;
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


static PyObject *impl_flet_core$audio$$$function__14_get_duration_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_flet_core$audio$$$function__14_get_duration_async$$$coroutine__1_get_duration_async(tmp_closure_1);

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
struct flet_core$audio$$$function__14_get_duration_async$$$coroutine__1_get_duration_async_locals {
    PyObject *var_sr;
    char const *type_description_1;
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

static PyObject *flet_core$audio$$$function__14_get_duration_async$$$coroutine__1_get_duration_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet_core$audio$$$function__14_get_duration_async$$$coroutine__1_get_duration_async_locals *coroutine_heap = (struct flet_core$audio$$$function__14_get_duration_async$$$coroutine__1_get_duration_async_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_sr = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_3caa677b1f59339cda2295a1c64d41dd, module_flet_core$audio, sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        coroutine->m_frame->m_frame.f_lineno = 123;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[18]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_call_arg_element_1 = mod_consts[35];
        tmp_call_arg_element_2 = MAKE_LIST_EMPTY(0);
        coroutine->m_frame->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_expression_value_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[19],
                call_args
            );
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_call_arg_element_1, sizeof(PyObject *), &tmp_call_arg_element_2, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_call_arg_element_1, sizeof(PyObject *), &tmp_call_arg_element_2, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = yield_return_value;
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 123;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_sr == NULL);
        coroutine_heap->var_sr = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(coroutine_heap->var_sr);
        tmp_truth_name_1 = CHECK_IF_TRUE(coroutine_heap->var_sr);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 124;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(coroutine_heap->var_sr);
        tmp_int_arg_1 = coroutine_heap->var_sr;
        coroutine_heap->tmp_return_value = PyNumber_Int(tmp_int_arg_1);
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 124;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        coroutine_heap->tmp_return_value = Py_None;
        Py_INCREF(coroutine_heap->tmp_return_value);
        condexpr_end_1:;
        goto frame_return_exit_1;
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    goto try_return_handler_1;

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
            coroutine->m_closure[0],
            coroutine_heap->var_sr
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
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(coroutine_heap->var_sr);
    Py_DECREF(coroutine_heap->var_sr);
    coroutine_heap->var_sr = NULL;
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

    Py_XDECREF(coroutine_heap->var_sr);
    coroutine_heap->var_sr = NULL;
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

static PyObject *MAKE_COROUTINE_flet_core$audio$$$function__14_get_duration_async$$$coroutine__1_get_duration_async(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        flet_core$audio$$$function__14_get_duration_async$$$coroutine__1_get_duration_async_context,
        module_flet_core$audio,
        mod_consts[36],
        mod_consts[37],
        codeobj_3caa677b1f59339cda2295a1c64d41dd,
        closure,
        1,
#if 1
        sizeof(struct flet_core$audio$$$function__14_get_duration_async$$$coroutine__1_get_duration_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$audio$$$function__15_get_current_position(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_sr = NULL;
    struct Nuitka_FrameObject *frame_9e6acda52adffad3893f5249c235d80b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9e6acda52adffad3893f5249c235d80b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9e6acda52adffad3893f5249c235d80b)) {
        Py_XDECREF(cache_frame_9e6acda52adffad3893f5249c235d80b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9e6acda52adffad3893f5249c235d80b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9e6acda52adffad3893f5249c235d80b = MAKE_FUNCTION_FRAME(codeobj_9e6acda52adffad3893f5249c235d80b, module_flet_core$audio, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9e6acda52adffad3893f5249c235d80b->m_type_description == NULL);
    frame_9e6acda52adffad3893f5249c235d80b = cache_frame_9e6acda52adffad3893f5249c235d80b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9e6acda52adffad3893f5249c235d80b);
    assert(Py_REFCNT(frame_9e6acda52adffad3893f5249c235d80b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_call_arg_element_1 = mod_consts[38];
        tmp_call_arg_element_2 = MAKE_LIST_EMPTY(0);
        frame_9e6acda52adffad3893f5249c235d80b->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[15],
                call_args
            );
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_sr == NULL);
        var_sr = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(var_sr);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_sr);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_sr);
        tmp_int_arg_1 = var_sr;
        tmp_return_value = PyNumber_Int(tmp_int_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_return_value = Py_None;
        Py_INCREF(tmp_return_value);
        condexpr_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_9e6acda52adffad3893f5249c235d80b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9e6acda52adffad3893f5249c235d80b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9e6acda52adffad3893f5249c235d80b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9e6acda52adffad3893f5249c235d80b,
        type_description_1,
        par_self,
        var_sr
    );


    // Release cached frame if used for exception.
    if (frame_9e6acda52adffad3893f5249c235d80b == cache_frame_9e6acda52adffad3893f5249c235d80b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9e6acda52adffad3893f5249c235d80b);
        cache_frame_9e6acda52adffad3893f5249c235d80b = NULL;
    }

    assertFrameObject(frame_9e6acda52adffad3893f5249c235d80b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_sr);
    Py_DECREF(var_sr);
    var_sr = NULL;
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

    Py_XDECREF(var_sr);
    var_sr = NULL;
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


static PyObject *impl_flet_core$audio$$$function__16_get_current_position_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_flet_core$audio$$$function__16_get_current_position_async$$$coroutine__1_get_current_position_async(tmp_closure_1);

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
struct flet_core$audio$$$function__16_get_current_position_async$$$coroutine__1_get_current_position_async_locals {
    PyObject *var_sr;
    char const *type_description_1;
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

static PyObject *flet_core$audio$$$function__16_get_current_position_async$$$coroutine__1_get_current_position_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet_core$audio$$$function__16_get_current_position_async$$$coroutine__1_get_current_position_async_locals *coroutine_heap = (struct flet_core$audio$$$function__16_get_current_position_async$$$coroutine__1_get_current_position_async_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_sr = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_4aabc095e9abccca2c60e06bbc38bea7, module_flet_core$audio, sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        coroutine->m_frame->m_frame.f_lineno = 131;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[18]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 131;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_call_arg_element_1 = mod_consts[38];
        tmp_call_arg_element_2 = MAKE_LIST_EMPTY(0);
        coroutine->m_frame->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_expression_value_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[19],
                call_args
            );
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 131;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 131;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_call_arg_element_1, sizeof(PyObject *), &tmp_call_arg_element_2, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_call_arg_element_1, sizeof(PyObject *), &tmp_call_arg_element_2, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 131;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = yield_return_value;
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 131;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_sr == NULL);
        coroutine_heap->var_sr = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(coroutine_heap->var_sr);
        tmp_truth_name_1 = CHECK_IF_TRUE(coroutine_heap->var_sr);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 132;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(coroutine_heap->var_sr);
        tmp_int_arg_1 = coroutine_heap->var_sr;
        coroutine_heap->tmp_return_value = PyNumber_Int(tmp_int_arg_1);
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 132;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        coroutine_heap->tmp_return_value = Py_None;
        Py_INCREF(coroutine_heap->tmp_return_value);
        condexpr_end_1:;
        goto frame_return_exit_1;
    }

    // Release exception attached to the frame
    DROP_COROUTINE_EXCEPTION(coroutine);



    goto frame_no_exception_1;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
    Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

    goto try_return_handler_1;

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
            coroutine->m_closure[0],
            coroutine_heap->var_sr
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
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(coroutine_heap->var_sr);
    Py_DECREF(coroutine_heap->var_sr);
    coroutine_heap->var_sr = NULL;
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

    Py_XDECREF(coroutine_heap->var_sr);
    coroutine_heap->var_sr = NULL;
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

static PyObject *MAKE_COROUTINE_flet_core$audio$$$function__16_get_current_position_async$$$coroutine__1_get_current_position_async(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        flet_core$audio$$$function__16_get_current_position_async$$$coroutine__1_get_current_position_async_context,
        module_flet_core$audio,
        mod_consts[39],
        mod_consts[40],
        codeobj_4aabc095e9abccca2c60e06bbc38bea7,
        closure,
        1,
#if 1
        sizeof(struct flet_core$audio$$$function__16_get_current_position_async$$$coroutine__1_get_current_position_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$audio$$$function__17_src(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_480e565177f82e3f1d38ab58c36d6e1f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_480e565177f82e3f1d38ab58c36d6e1f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_480e565177f82e3f1d38ab58c36d6e1f)) {
        Py_XDECREF(cache_frame_480e565177f82e3f1d38ab58c36d6e1f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_480e565177f82e3f1d38ab58c36d6e1f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_480e565177f82e3f1d38ab58c36d6e1f = MAKE_FUNCTION_FRAME(codeobj_480e565177f82e3f1d38ab58c36d6e1f, module_flet_core$audio, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_480e565177f82e3f1d38ab58c36d6e1f->m_type_description == NULL);
    frame_480e565177f82e3f1d38ab58c36d6e1f = cache_frame_480e565177f82e3f1d38ab58c36d6e1f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_480e565177f82e3f1d38ab58c36d6e1f);
    assert(Py_REFCNT(frame_480e565177f82e3f1d38ab58c36d6e1f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_480e565177f82e3f1d38ab58c36d6e1f->m_frame.f_lineno = 137;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[41],
            PyTuple_GET_ITEM(mod_consts[42], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
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
        exception_tb = MAKE_TRACEBACK(frame_480e565177f82e3f1d38ab58c36d6e1f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_480e565177f82e3f1d38ab58c36d6e1f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_480e565177f82e3f1d38ab58c36d6e1f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_480e565177f82e3f1d38ab58c36d6e1f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_480e565177f82e3f1d38ab58c36d6e1f == cache_frame_480e565177f82e3f1d38ab58c36d6e1f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_480e565177f82e3f1d38ab58c36d6e1f);
        cache_frame_480e565177f82e3f1d38ab58c36d6e1f = NULL;
    }

    assertFrameObject(frame_480e565177f82e3f1d38ab58c36d6e1f);

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


static PyObject *impl_flet_core$audio$$$function__18_src(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_43c70df71fd3b5a3610d777d81c49956;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_43c70df71fd3b5a3610d777d81c49956 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_43c70df71fd3b5a3610d777d81c49956)) {
        Py_XDECREF(cache_frame_43c70df71fd3b5a3610d777d81c49956);

#if _DEBUG_REFCOUNTS
        if (cache_frame_43c70df71fd3b5a3610d777d81c49956 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_43c70df71fd3b5a3610d777d81c49956 = MAKE_FUNCTION_FRAME(codeobj_43c70df71fd3b5a3610d777d81c49956, module_flet_core$audio, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_43c70df71fd3b5a3610d777d81c49956->m_type_description == NULL);
    frame_43c70df71fd3b5a3610d777d81c49956 = cache_frame_43c70df71fd3b5a3610d777d81c49956;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_43c70df71fd3b5a3610d777d81c49956);
    assert(Py_REFCNT(frame_43c70df71fd3b5a3610d777d81c49956) == 2);

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
        frame_43c70df71fd3b5a3610d777d81c49956->m_frame.f_lineno = 141;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[43],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
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
        exception_tb = MAKE_TRACEBACK(frame_43c70df71fd3b5a3610d777d81c49956, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_43c70df71fd3b5a3610d777d81c49956->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_43c70df71fd3b5a3610d777d81c49956, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_43c70df71fd3b5a3610d777d81c49956,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_43c70df71fd3b5a3610d777d81c49956 == cache_frame_43c70df71fd3b5a3610d777d81c49956) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_43c70df71fd3b5a3610d777d81c49956);
        cache_frame_43c70df71fd3b5a3610d777d81c49956 = NULL;
    }

    assertFrameObject(frame_43c70df71fd3b5a3610d777d81c49956);

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


static PyObject *impl_flet_core$audio$$$function__19_src_base64(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e6f79c68a2c001bac793533a5d1291cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e6f79c68a2c001bac793533a5d1291cf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e6f79c68a2c001bac793533a5d1291cf)) {
        Py_XDECREF(cache_frame_e6f79c68a2c001bac793533a5d1291cf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e6f79c68a2c001bac793533a5d1291cf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e6f79c68a2c001bac793533a5d1291cf = MAKE_FUNCTION_FRAME(codeobj_e6f79c68a2c001bac793533a5d1291cf, module_flet_core$audio, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e6f79c68a2c001bac793533a5d1291cf->m_type_description == NULL);
    frame_e6f79c68a2c001bac793533a5d1291cf = cache_frame_e6f79c68a2c001bac793533a5d1291cf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e6f79c68a2c001bac793533a5d1291cf);
    assert(Py_REFCNT(frame_e6f79c68a2c001bac793533a5d1291cf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_e6f79c68a2c001bac793533a5d1291cf->m_frame.f_lineno = 146;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[41],
            PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
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
        exception_tb = MAKE_TRACEBACK(frame_e6f79c68a2c001bac793533a5d1291cf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e6f79c68a2c001bac793533a5d1291cf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e6f79c68a2c001bac793533a5d1291cf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e6f79c68a2c001bac793533a5d1291cf,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e6f79c68a2c001bac793533a5d1291cf == cache_frame_e6f79c68a2c001bac793533a5d1291cf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e6f79c68a2c001bac793533a5d1291cf);
        cache_frame_e6f79c68a2c001bac793533a5d1291cf = NULL;
    }

    assertFrameObject(frame_e6f79c68a2c001bac793533a5d1291cf);

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


static PyObject *impl_flet_core$audio$$$function__20_src_base64(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_de61785284078694e4356406c44b466f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_de61785284078694e4356406c44b466f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_de61785284078694e4356406c44b466f)) {
        Py_XDECREF(cache_frame_de61785284078694e4356406c44b466f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_de61785284078694e4356406c44b466f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_de61785284078694e4356406c44b466f = MAKE_FUNCTION_FRAME(codeobj_de61785284078694e4356406c44b466f, module_flet_core$audio, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_de61785284078694e4356406c44b466f->m_type_description == NULL);
    frame_de61785284078694e4356406c44b466f = cache_frame_de61785284078694e4356406c44b466f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_de61785284078694e4356406c44b466f);
    assert(Py_REFCNT(frame_de61785284078694e4356406c44b466f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[45];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_de61785284078694e4356406c44b466f->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[43],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
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
        exception_tb = MAKE_TRACEBACK(frame_de61785284078694e4356406c44b466f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_de61785284078694e4356406c44b466f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_de61785284078694e4356406c44b466f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_de61785284078694e4356406c44b466f,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_de61785284078694e4356406c44b466f == cache_frame_de61785284078694e4356406c44b466f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_de61785284078694e4356406c44b466f);
        cache_frame_de61785284078694e4356406c44b466f = NULL;
    }

    assertFrameObject(frame_de61785284078694e4356406c44b466f);

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


static PyObject *impl_flet_core$audio$$$function__21_autoplay(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_872e920fd1abfeadd7307158e97f30df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_872e920fd1abfeadd7307158e97f30df = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_872e920fd1abfeadd7307158e97f30df)) {
        Py_XDECREF(cache_frame_872e920fd1abfeadd7307158e97f30df);

#if _DEBUG_REFCOUNTS
        if (cache_frame_872e920fd1abfeadd7307158e97f30df == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_872e920fd1abfeadd7307158e97f30df = MAKE_FUNCTION_FRAME(codeobj_872e920fd1abfeadd7307158e97f30df, module_flet_core$audio, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_872e920fd1abfeadd7307158e97f30df->m_type_description == NULL);
    frame_872e920fd1abfeadd7307158e97f30df = cache_frame_872e920fd1abfeadd7307158e97f30df;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_872e920fd1abfeadd7307158e97f30df);
    assert(Py_REFCNT(frame_872e920fd1abfeadd7307158e97f30df) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_872e920fd1abfeadd7307158e97f30df->m_frame.f_lineno = 155;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[46], 0), mod_consts[47]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
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
        exception_tb = MAKE_TRACEBACK(frame_872e920fd1abfeadd7307158e97f30df, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_872e920fd1abfeadd7307158e97f30df->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_872e920fd1abfeadd7307158e97f30df, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_872e920fd1abfeadd7307158e97f30df,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_872e920fd1abfeadd7307158e97f30df == cache_frame_872e920fd1abfeadd7307158e97f30df) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_872e920fd1abfeadd7307158e97f30df);
        cache_frame_872e920fd1abfeadd7307158e97f30df = NULL;
    }

    assertFrameObject(frame_872e920fd1abfeadd7307158e97f30df);

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


static PyObject *impl_flet_core$audio$$$function__22_autoplay(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_f6d565b4c71b989ca492c929d85ca1a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f6d565b4c71b989ca492c929d85ca1a1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f6d565b4c71b989ca492c929d85ca1a1)) {
        Py_XDECREF(cache_frame_f6d565b4c71b989ca492c929d85ca1a1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f6d565b4c71b989ca492c929d85ca1a1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f6d565b4c71b989ca492c929d85ca1a1 = MAKE_FUNCTION_FRAME(codeobj_f6d565b4c71b989ca492c929d85ca1a1, module_flet_core$audio, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f6d565b4c71b989ca492c929d85ca1a1->m_type_description == NULL);
    frame_f6d565b4c71b989ca492c929d85ca1a1 = cache_frame_f6d565b4c71b989ca492c929d85ca1a1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f6d565b4c71b989ca492c929d85ca1a1);
    assert(Py_REFCNT(frame_f6d565b4c71b989ca492c929d85ca1a1) == 2);

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
        frame_f6d565b4c71b989ca492c929d85ca1a1->m_frame.f_lineno = 159;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[43],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
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
        exception_tb = MAKE_TRACEBACK(frame_f6d565b4c71b989ca492c929d85ca1a1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f6d565b4c71b989ca492c929d85ca1a1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f6d565b4c71b989ca492c929d85ca1a1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f6d565b4c71b989ca492c929d85ca1a1,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_f6d565b4c71b989ca492c929d85ca1a1 == cache_frame_f6d565b4c71b989ca492c929d85ca1a1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f6d565b4c71b989ca492c929d85ca1a1);
        cache_frame_f6d565b4c71b989ca492c929d85ca1a1 = NULL;
    }

    assertFrameObject(frame_f6d565b4c71b989ca492c929d85ca1a1);

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


static PyObject *impl_flet_core$audio$$$function__23_volume(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b42b26e9a0bacd0b2d02be8cc717d137;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b42b26e9a0bacd0b2d02be8cc717d137 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b42b26e9a0bacd0b2d02be8cc717d137)) {
        Py_XDECREF(cache_frame_b42b26e9a0bacd0b2d02be8cc717d137);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b42b26e9a0bacd0b2d02be8cc717d137 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b42b26e9a0bacd0b2d02be8cc717d137 = MAKE_FUNCTION_FRAME(codeobj_b42b26e9a0bacd0b2d02be8cc717d137, module_flet_core$audio, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b42b26e9a0bacd0b2d02be8cc717d137->m_type_description == NULL);
    frame_b42b26e9a0bacd0b2d02be8cc717d137 = cache_frame_b42b26e9a0bacd0b2d02be8cc717d137;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b42b26e9a0bacd0b2d02be8cc717d137);
    assert(Py_REFCNT(frame_b42b26e9a0bacd0b2d02be8cc717d137) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_b42b26e9a0bacd0b2d02be8cc717d137->m_frame.f_lineno = 164;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[41],
            PyTuple_GET_ITEM(mod_consts[48], 0)
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
        exception_tb = MAKE_TRACEBACK(frame_b42b26e9a0bacd0b2d02be8cc717d137, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b42b26e9a0bacd0b2d02be8cc717d137->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b42b26e9a0bacd0b2d02be8cc717d137, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b42b26e9a0bacd0b2d02be8cc717d137,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b42b26e9a0bacd0b2d02be8cc717d137 == cache_frame_b42b26e9a0bacd0b2d02be8cc717d137) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b42b26e9a0bacd0b2d02be8cc717d137);
        cache_frame_b42b26e9a0bacd0b2d02be8cc717d137 = NULL;
    }

    assertFrameObject(frame_b42b26e9a0bacd0b2d02be8cc717d137);

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


static PyObject *impl_flet_core$audio$$$function__24_volume(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_b6382ade5aa317e5633b5b24af65c426;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b6382ade5aa317e5633b5b24af65c426 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b6382ade5aa317e5633b5b24af65c426)) {
        Py_XDECREF(cache_frame_b6382ade5aa317e5633b5b24af65c426);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b6382ade5aa317e5633b5b24af65c426 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b6382ade5aa317e5633b5b24af65c426 = MAKE_FUNCTION_FRAME(codeobj_b6382ade5aa317e5633b5b24af65c426, module_flet_core$audio, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b6382ade5aa317e5633b5b24af65c426->m_type_description == NULL);
    frame_b6382ade5aa317e5633b5b24af65c426 = cache_frame_b6382ade5aa317e5633b5b24af65c426;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b6382ade5aa317e5633b5b24af65c426);
    assert(Py_REFCNT(frame_b6382ade5aa317e5633b5b24af65c426) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_2 = par_value;
        tmp_cmp_expr_right_2 = mod_consts[49];
        tmp_and_left_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_3 = par_value;
        tmp_cmp_expr_right_3 = mod_consts[50];
        tmp_and_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_right_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
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
        frame_b6382ade5aa317e5633b5b24af65c426->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[43],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b6382ade5aa317e5633b5b24af65c426, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b6382ade5aa317e5633b5b24af65c426->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b6382ade5aa317e5633b5b24af65c426, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b6382ade5aa317e5633b5b24af65c426,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_b6382ade5aa317e5633b5b24af65c426 == cache_frame_b6382ade5aa317e5633b5b24af65c426) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b6382ade5aa317e5633b5b24af65c426);
        cache_frame_b6382ade5aa317e5633b5b24af65c426 = NULL;
    }

    assertFrameObject(frame_b6382ade5aa317e5633b5b24af65c426);

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


static PyObject *impl_flet_core$audio$$$function__25_balance(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_683dc975391c86feb827eaaa7470085c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_683dc975391c86feb827eaaa7470085c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_683dc975391c86feb827eaaa7470085c)) {
        Py_XDECREF(cache_frame_683dc975391c86feb827eaaa7470085c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_683dc975391c86feb827eaaa7470085c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_683dc975391c86feb827eaaa7470085c = MAKE_FUNCTION_FRAME(codeobj_683dc975391c86feb827eaaa7470085c, module_flet_core$audio, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_683dc975391c86feb827eaaa7470085c->m_type_description == NULL);
    frame_683dc975391c86feb827eaaa7470085c = cache_frame_683dc975391c86feb827eaaa7470085c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_683dc975391c86feb827eaaa7470085c);
    assert(Py_REFCNT(frame_683dc975391c86feb827eaaa7470085c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_683dc975391c86feb827eaaa7470085c->m_frame.f_lineno = 174;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[41],
            PyTuple_GET_ITEM(mod_consts[51], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
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
        exception_tb = MAKE_TRACEBACK(frame_683dc975391c86feb827eaaa7470085c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_683dc975391c86feb827eaaa7470085c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_683dc975391c86feb827eaaa7470085c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_683dc975391c86feb827eaaa7470085c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_683dc975391c86feb827eaaa7470085c == cache_frame_683dc975391c86feb827eaaa7470085c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_683dc975391c86feb827eaaa7470085c);
        cache_frame_683dc975391c86feb827eaaa7470085c = NULL;
    }

    assertFrameObject(frame_683dc975391c86feb827eaaa7470085c);

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


static PyObject *impl_flet_core$audio$$$function__26_balance(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_beeba6c4217aec4d400b1d5ecd6478e7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_beeba6c4217aec4d400b1d5ecd6478e7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_beeba6c4217aec4d400b1d5ecd6478e7)) {
        Py_XDECREF(cache_frame_beeba6c4217aec4d400b1d5ecd6478e7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_beeba6c4217aec4d400b1d5ecd6478e7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_beeba6c4217aec4d400b1d5ecd6478e7 = MAKE_FUNCTION_FRAME(codeobj_beeba6c4217aec4d400b1d5ecd6478e7, module_flet_core$audio, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_beeba6c4217aec4d400b1d5ecd6478e7->m_type_description == NULL);
    frame_beeba6c4217aec4d400b1d5ecd6478e7 = cache_frame_beeba6c4217aec4d400b1d5ecd6478e7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_beeba6c4217aec4d400b1d5ecd6478e7);
    assert(Py_REFCNT(frame_beeba6c4217aec4d400b1d5ecd6478e7) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_2 = par_value;
        tmp_cmp_expr_right_2 = mod_consts[52];
        tmp_and_left_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_3 = par_value;
        tmp_cmp_expr_right_3 = mod_consts[50];
        tmp_and_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_right_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
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
        frame_beeba6c4217aec4d400b1d5ecd6478e7->m_frame.f_lineno = 179;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[43],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_beeba6c4217aec4d400b1d5ecd6478e7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_beeba6c4217aec4d400b1d5ecd6478e7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_beeba6c4217aec4d400b1d5ecd6478e7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_beeba6c4217aec4d400b1d5ecd6478e7,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_beeba6c4217aec4d400b1d5ecd6478e7 == cache_frame_beeba6c4217aec4d400b1d5ecd6478e7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_beeba6c4217aec4d400b1d5ecd6478e7);
        cache_frame_beeba6c4217aec4d400b1d5ecd6478e7 = NULL;
    }

    assertFrameObject(frame_beeba6c4217aec4d400b1d5ecd6478e7);

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


static PyObject *impl_flet_core$audio$$$function__27_playback_rate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7c96c909b5675999ab18cc6f3985f4d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7c96c909b5675999ab18cc6f3985f4d9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7c96c909b5675999ab18cc6f3985f4d9)) {
        Py_XDECREF(cache_frame_7c96c909b5675999ab18cc6f3985f4d9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7c96c909b5675999ab18cc6f3985f4d9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7c96c909b5675999ab18cc6f3985f4d9 = MAKE_FUNCTION_FRAME(codeobj_7c96c909b5675999ab18cc6f3985f4d9, module_flet_core$audio, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7c96c909b5675999ab18cc6f3985f4d9->m_type_description == NULL);
    frame_7c96c909b5675999ab18cc6f3985f4d9 = cache_frame_7c96c909b5675999ab18cc6f3985f4d9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7c96c909b5675999ab18cc6f3985f4d9);
    assert(Py_REFCNT(frame_7c96c909b5675999ab18cc6f3985f4d9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_7c96c909b5675999ab18cc6f3985f4d9->m_frame.f_lineno = 184;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[41],
            PyTuple_GET_ITEM(mod_consts[53], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
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
        exception_tb = MAKE_TRACEBACK(frame_7c96c909b5675999ab18cc6f3985f4d9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c96c909b5675999ab18cc6f3985f4d9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c96c909b5675999ab18cc6f3985f4d9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7c96c909b5675999ab18cc6f3985f4d9,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7c96c909b5675999ab18cc6f3985f4d9 == cache_frame_7c96c909b5675999ab18cc6f3985f4d9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7c96c909b5675999ab18cc6f3985f4d9);
        cache_frame_7c96c909b5675999ab18cc6f3985f4d9 = NULL;
    }

    assertFrameObject(frame_7c96c909b5675999ab18cc6f3985f4d9);

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


static PyObject *impl_flet_core$audio$$$function__28_playback_rate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_2eb8ef3d5d8e856badc1e58c1e9d144f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2eb8ef3d5d8e856badc1e58c1e9d144f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2eb8ef3d5d8e856badc1e58c1e9d144f)) {
        Py_XDECREF(cache_frame_2eb8ef3d5d8e856badc1e58c1e9d144f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2eb8ef3d5d8e856badc1e58c1e9d144f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2eb8ef3d5d8e856badc1e58c1e9d144f = MAKE_FUNCTION_FRAME(codeobj_2eb8ef3d5d8e856badc1e58c1e9d144f, module_flet_core$audio, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2eb8ef3d5d8e856badc1e58c1e9d144f->m_type_description == NULL);
    frame_2eb8ef3d5d8e856badc1e58c1e9d144f = cache_frame_2eb8ef3d5d8e856badc1e58c1e9d144f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2eb8ef3d5d8e856badc1e58c1e9d144f);
    assert(Py_REFCNT(frame_2eb8ef3d5d8e856badc1e58c1e9d144f) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_2 = par_value;
        tmp_cmp_expr_right_2 = mod_consts[49];
        tmp_and_left_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_3 = par_value;
        tmp_cmp_expr_right_3 = mod_consts[54];
        tmp_and_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_or_right_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[55];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_2eb8ef3d5d8e856badc1e58c1e9d144f->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[43],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2eb8ef3d5d8e856badc1e58c1e9d144f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2eb8ef3d5d8e856badc1e58c1e9d144f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2eb8ef3d5d8e856badc1e58c1e9d144f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2eb8ef3d5d8e856badc1e58c1e9d144f,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_2eb8ef3d5d8e856badc1e58c1e9d144f == cache_frame_2eb8ef3d5d8e856badc1e58c1e9d144f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2eb8ef3d5d8e856badc1e58c1e9d144f);
        cache_frame_2eb8ef3d5d8e856badc1e58c1e9d144f = NULL;
    }

    assertFrameObject(frame_2eb8ef3d5d8e856badc1e58c1e9d144f);

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


static PyObject *impl_flet_core$audio$$$function__29_release_mode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_fb8eb491c0ed6af3a2fdf521fdb0aef9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fb8eb491c0ed6af3a2fdf521fdb0aef9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fb8eb491c0ed6af3a2fdf521fdb0aef9)) {
        Py_XDECREF(cache_frame_fb8eb491c0ed6af3a2fdf521fdb0aef9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fb8eb491c0ed6af3a2fdf521fdb0aef9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fb8eb491c0ed6af3a2fdf521fdb0aef9 = MAKE_FUNCTION_FRAME(codeobj_fb8eb491c0ed6af3a2fdf521fdb0aef9, module_flet_core$audio, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fb8eb491c0ed6af3a2fdf521fdb0aef9->m_type_description == NULL);
    frame_fb8eb491c0ed6af3a2fdf521fdb0aef9 = cache_frame_fb8eb491c0ed6af3a2fdf521fdb0aef9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fb8eb491c0ed6af3a2fdf521fdb0aef9);
    assert(Py_REFCNT(frame_fb8eb491c0ed6af3a2fdf521fdb0aef9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_fb8eb491c0ed6af3a2fdf521fdb0aef9->m_frame.f_lineno = 194;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[41],
            PyTuple_GET_ITEM(mod_consts[56], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
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
        exception_tb = MAKE_TRACEBACK(frame_fb8eb491c0ed6af3a2fdf521fdb0aef9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fb8eb491c0ed6af3a2fdf521fdb0aef9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fb8eb491c0ed6af3a2fdf521fdb0aef9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fb8eb491c0ed6af3a2fdf521fdb0aef9,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_fb8eb491c0ed6af3a2fdf521fdb0aef9 == cache_frame_fb8eb491c0ed6af3a2fdf521fdb0aef9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fb8eb491c0ed6af3a2fdf521fdb0aef9);
        cache_frame_fb8eb491c0ed6af3a2fdf521fdb0aef9 = NULL;
    }

    assertFrameObject(frame_fb8eb491c0ed6af3a2fdf521fdb0aef9);

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


static PyObject *impl_flet_core$audio$$$function__30_release_mode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_0e8e8369aed1dc33dea9396efa5e08ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0e8e8369aed1dc33dea9396efa5e08ae = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0e8e8369aed1dc33dea9396efa5e08ae)) {
        Py_XDECREF(cache_frame_0e8e8369aed1dc33dea9396efa5e08ae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0e8e8369aed1dc33dea9396efa5e08ae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0e8e8369aed1dc33dea9396efa5e08ae = MAKE_FUNCTION_FRAME(codeobj_0e8e8369aed1dc33dea9396efa5e08ae, module_flet_core$audio, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0e8e8369aed1dc33dea9396efa5e08ae->m_type_description == NULL);
    frame_0e8e8369aed1dc33dea9396efa5e08ae = cache_frame_0e8e8369aed1dc33dea9396efa5e08ae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0e8e8369aed1dc33dea9396efa5e08ae);
    assert(Py_REFCNT(frame_0e8e8369aed1dc33dea9396efa5e08ae) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[57];
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
        tmp_expression_value_2 = par_value;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[58]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 198;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_args_element_value_2 = Py_None;
        Py_INCREF(tmp_args_element_value_2);
        condexpr_end_1:;
        frame_0e8e8369aed1dc33dea9396efa5e08ae->m_frame.f_lineno = 198;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
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
        exception_tb = MAKE_TRACEBACK(frame_0e8e8369aed1dc33dea9396efa5e08ae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0e8e8369aed1dc33dea9396efa5e08ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0e8e8369aed1dc33dea9396efa5e08ae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0e8e8369aed1dc33dea9396efa5e08ae,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_0e8e8369aed1dc33dea9396efa5e08ae == cache_frame_0e8e8369aed1dc33dea9396efa5e08ae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0e8e8369aed1dc33dea9396efa5e08ae);
        cache_frame_0e8e8369aed1dc33dea9396efa5e08ae = NULL;
    }

    assertFrameObject(frame_0e8e8369aed1dc33dea9396efa5e08ae);

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


static PyObject *impl_flet_core$audio$$$function__31_on_loaded(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7d3cd57b4f98cfa5144fa7184bb33327;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7d3cd57b4f98cfa5144fa7184bb33327 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d3cd57b4f98cfa5144fa7184bb33327)) {
        Py_XDECREF(cache_frame_7d3cd57b4f98cfa5144fa7184bb33327);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d3cd57b4f98cfa5144fa7184bb33327 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d3cd57b4f98cfa5144fa7184bb33327 = MAKE_FUNCTION_FRAME(codeobj_7d3cd57b4f98cfa5144fa7184bb33327, module_flet_core$audio, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7d3cd57b4f98cfa5144fa7184bb33327->m_type_description == NULL);
    frame_7d3cd57b4f98cfa5144fa7184bb33327 = cache_frame_7d3cd57b4f98cfa5144fa7184bb33327;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7d3cd57b4f98cfa5144fa7184bb33327);
    assert(Py_REFCNT(frame_7d3cd57b4f98cfa5144fa7184bb33327) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_7d3cd57b4f98cfa5144fa7184bb33327->m_frame.f_lineno = 203;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[59],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
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
        exception_tb = MAKE_TRACEBACK(frame_7d3cd57b4f98cfa5144fa7184bb33327, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d3cd57b4f98cfa5144fa7184bb33327->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d3cd57b4f98cfa5144fa7184bb33327, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d3cd57b4f98cfa5144fa7184bb33327,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7d3cd57b4f98cfa5144fa7184bb33327 == cache_frame_7d3cd57b4f98cfa5144fa7184bb33327) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7d3cd57b4f98cfa5144fa7184bb33327);
        cache_frame_7d3cd57b4f98cfa5144fa7184bb33327 = NULL;
    }

    assertFrameObject(frame_7d3cd57b4f98cfa5144fa7184bb33327);

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


static PyObject *impl_flet_core$audio$$$function__32_on_loaded(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_4359f2fa97b83823abb7a2cb1b42881c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4359f2fa97b83823abb7a2cb1b42881c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4359f2fa97b83823abb7a2cb1b42881c)) {
        Py_XDECREF(cache_frame_4359f2fa97b83823abb7a2cb1b42881c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4359f2fa97b83823abb7a2cb1b42881c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4359f2fa97b83823abb7a2cb1b42881c = MAKE_FUNCTION_FRAME(codeobj_4359f2fa97b83823abb7a2cb1b42881c, module_flet_core$audio, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4359f2fa97b83823abb7a2cb1b42881c->m_type_description == NULL);
    frame_4359f2fa97b83823abb7a2cb1b42881c = cache_frame_4359f2fa97b83823abb7a2cb1b42881c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4359f2fa97b83823abb7a2cb1b42881c);
    assert(Py_REFCNT(frame_4359f2fa97b83823abb7a2cb1b42881c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[62];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_4359f2fa97b83823abb7a2cb1b42881c->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[61],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
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
        exception_tb = MAKE_TRACEBACK(frame_4359f2fa97b83823abb7a2cb1b42881c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4359f2fa97b83823abb7a2cb1b42881c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4359f2fa97b83823abb7a2cb1b42881c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4359f2fa97b83823abb7a2cb1b42881c,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_4359f2fa97b83823abb7a2cb1b42881c == cache_frame_4359f2fa97b83823abb7a2cb1b42881c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4359f2fa97b83823abb7a2cb1b42881c);
        cache_frame_4359f2fa97b83823abb7a2cb1b42881c = NULL;
    }

    assertFrameObject(frame_4359f2fa97b83823abb7a2cb1b42881c);

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


static PyObject *impl_flet_core$audio$$$function__33_on_duration_changed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b109a7a02a46917a531737e4dfff8457;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b109a7a02a46917a531737e4dfff8457 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b109a7a02a46917a531737e4dfff8457)) {
        Py_XDECREF(cache_frame_b109a7a02a46917a531737e4dfff8457);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b109a7a02a46917a531737e4dfff8457 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b109a7a02a46917a531737e4dfff8457 = MAKE_FUNCTION_FRAME(codeobj_b109a7a02a46917a531737e4dfff8457, module_flet_core$audio, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b109a7a02a46917a531737e4dfff8457->m_type_description == NULL);
    frame_b109a7a02a46917a531737e4dfff8457 = cache_frame_b109a7a02a46917a531737e4dfff8457;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b109a7a02a46917a531737e4dfff8457);
    assert(Py_REFCNT(frame_b109a7a02a46917a531737e4dfff8457) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_b109a7a02a46917a531737e4dfff8457->m_frame.f_lineno = 212;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[59],
            PyTuple_GET_ITEM(mod_consts[63], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
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
        exception_tb = MAKE_TRACEBACK(frame_b109a7a02a46917a531737e4dfff8457, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b109a7a02a46917a531737e4dfff8457->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b109a7a02a46917a531737e4dfff8457, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b109a7a02a46917a531737e4dfff8457,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b109a7a02a46917a531737e4dfff8457 == cache_frame_b109a7a02a46917a531737e4dfff8457) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b109a7a02a46917a531737e4dfff8457);
        cache_frame_b109a7a02a46917a531737e4dfff8457 = NULL;
    }

    assertFrameObject(frame_b109a7a02a46917a531737e4dfff8457);

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


static PyObject *impl_flet_core$audio$$$function__34_on_duration_changed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_1383f855123e00e135bea6f1e5b70954;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1383f855123e00e135bea6f1e5b70954 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1383f855123e00e135bea6f1e5b70954)) {
        Py_XDECREF(cache_frame_1383f855123e00e135bea6f1e5b70954);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1383f855123e00e135bea6f1e5b70954 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1383f855123e00e135bea6f1e5b70954 = MAKE_FUNCTION_FRAME(codeobj_1383f855123e00e135bea6f1e5b70954, module_flet_core$audio, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1383f855123e00e135bea6f1e5b70954->m_type_description == NULL);
    frame_1383f855123e00e135bea6f1e5b70954 = cache_frame_1383f855123e00e135bea6f1e5b70954;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1383f855123e00e135bea6f1e5b70954);
    assert(Py_REFCNT(frame_1383f855123e00e135bea6f1e5b70954) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[64];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_1383f855123e00e135bea6f1e5b70954->m_frame.f_lineno = 216;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[61],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
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
        exception_tb = MAKE_TRACEBACK(frame_1383f855123e00e135bea6f1e5b70954, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1383f855123e00e135bea6f1e5b70954->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1383f855123e00e135bea6f1e5b70954, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1383f855123e00e135bea6f1e5b70954,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_1383f855123e00e135bea6f1e5b70954 == cache_frame_1383f855123e00e135bea6f1e5b70954) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1383f855123e00e135bea6f1e5b70954);
        cache_frame_1383f855123e00e135bea6f1e5b70954 = NULL;
    }

    assertFrameObject(frame_1383f855123e00e135bea6f1e5b70954);

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


static PyObject *impl_flet_core$audio$$$function__35_on_state_changed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4ce30eaa332752caca79937cce86a14b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4ce30eaa332752caca79937cce86a14b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4ce30eaa332752caca79937cce86a14b)) {
        Py_XDECREF(cache_frame_4ce30eaa332752caca79937cce86a14b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4ce30eaa332752caca79937cce86a14b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4ce30eaa332752caca79937cce86a14b = MAKE_FUNCTION_FRAME(codeobj_4ce30eaa332752caca79937cce86a14b, module_flet_core$audio, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4ce30eaa332752caca79937cce86a14b->m_type_description == NULL);
    frame_4ce30eaa332752caca79937cce86a14b = cache_frame_4ce30eaa332752caca79937cce86a14b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4ce30eaa332752caca79937cce86a14b);
    assert(Py_REFCNT(frame_4ce30eaa332752caca79937cce86a14b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_4ce30eaa332752caca79937cce86a14b->m_frame.f_lineno = 221;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[59],
            PyTuple_GET_ITEM(mod_consts[65], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
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
        exception_tb = MAKE_TRACEBACK(frame_4ce30eaa332752caca79937cce86a14b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ce30eaa332752caca79937cce86a14b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ce30eaa332752caca79937cce86a14b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4ce30eaa332752caca79937cce86a14b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4ce30eaa332752caca79937cce86a14b == cache_frame_4ce30eaa332752caca79937cce86a14b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4ce30eaa332752caca79937cce86a14b);
        cache_frame_4ce30eaa332752caca79937cce86a14b = NULL;
    }

    assertFrameObject(frame_4ce30eaa332752caca79937cce86a14b);

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


static PyObject *impl_flet_core$audio$$$function__36_on_state_changed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_7c57e6c9a6dd563fb38107c511f83112;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7c57e6c9a6dd563fb38107c511f83112 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7c57e6c9a6dd563fb38107c511f83112)) {
        Py_XDECREF(cache_frame_7c57e6c9a6dd563fb38107c511f83112);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7c57e6c9a6dd563fb38107c511f83112 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7c57e6c9a6dd563fb38107c511f83112 = MAKE_FUNCTION_FRAME(codeobj_7c57e6c9a6dd563fb38107c511f83112, module_flet_core$audio, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7c57e6c9a6dd563fb38107c511f83112->m_type_description == NULL);
    frame_7c57e6c9a6dd563fb38107c511f83112 = cache_frame_7c57e6c9a6dd563fb38107c511f83112;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7c57e6c9a6dd563fb38107c511f83112);
    assert(Py_REFCNT(frame_7c57e6c9a6dd563fb38107c511f83112) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[66];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_7c57e6c9a6dd563fb38107c511f83112->m_frame.f_lineno = 225;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[61],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
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
        exception_tb = MAKE_TRACEBACK(frame_7c57e6c9a6dd563fb38107c511f83112, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c57e6c9a6dd563fb38107c511f83112->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c57e6c9a6dd563fb38107c511f83112, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7c57e6c9a6dd563fb38107c511f83112,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_7c57e6c9a6dd563fb38107c511f83112 == cache_frame_7c57e6c9a6dd563fb38107c511f83112) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7c57e6c9a6dd563fb38107c511f83112);
        cache_frame_7c57e6c9a6dd563fb38107c511f83112 = NULL;
    }

    assertFrameObject(frame_7c57e6c9a6dd563fb38107c511f83112);

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


static PyObject *impl_flet_core$audio$$$function__37_on_position_changed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1b76f48af407c693a768f587c1b30377;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1b76f48af407c693a768f587c1b30377 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1b76f48af407c693a768f587c1b30377)) {
        Py_XDECREF(cache_frame_1b76f48af407c693a768f587c1b30377);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1b76f48af407c693a768f587c1b30377 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1b76f48af407c693a768f587c1b30377 = MAKE_FUNCTION_FRAME(codeobj_1b76f48af407c693a768f587c1b30377, module_flet_core$audio, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1b76f48af407c693a768f587c1b30377->m_type_description == NULL);
    frame_1b76f48af407c693a768f587c1b30377 = cache_frame_1b76f48af407c693a768f587c1b30377;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1b76f48af407c693a768f587c1b30377);
    assert(Py_REFCNT(frame_1b76f48af407c693a768f587c1b30377) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_1b76f48af407c693a768f587c1b30377->m_frame.f_lineno = 230;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[59],
            PyTuple_GET_ITEM(mod_consts[67], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
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
        exception_tb = MAKE_TRACEBACK(frame_1b76f48af407c693a768f587c1b30377, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1b76f48af407c693a768f587c1b30377->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b76f48af407c693a768f587c1b30377, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1b76f48af407c693a768f587c1b30377,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1b76f48af407c693a768f587c1b30377 == cache_frame_1b76f48af407c693a768f587c1b30377) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1b76f48af407c693a768f587c1b30377);
        cache_frame_1b76f48af407c693a768f587c1b30377 = NULL;
    }

    assertFrameObject(frame_1b76f48af407c693a768f587c1b30377);

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


static PyObject *impl_flet_core$audio$$$function__38_on_position_changed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_0cdf8e4295624fc399f03a6515bf142a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0cdf8e4295624fc399f03a6515bf142a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0cdf8e4295624fc399f03a6515bf142a)) {
        Py_XDECREF(cache_frame_0cdf8e4295624fc399f03a6515bf142a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0cdf8e4295624fc399f03a6515bf142a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0cdf8e4295624fc399f03a6515bf142a = MAKE_FUNCTION_FRAME(codeobj_0cdf8e4295624fc399f03a6515bf142a, module_flet_core$audio, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0cdf8e4295624fc399f03a6515bf142a->m_type_description == NULL);
    frame_0cdf8e4295624fc399f03a6515bf142a = cache_frame_0cdf8e4295624fc399f03a6515bf142a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0cdf8e4295624fc399f03a6515bf142a);
    assert(Py_REFCNT(frame_0cdf8e4295624fc399f03a6515bf142a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[68];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_0cdf8e4295624fc399f03a6515bf142a->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[61],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
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
        frame_0cdf8e4295624fc399f03a6515bf142a->m_frame.f_lineno = 236;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[43],
            &PyTuple_GET_ITEM(mod_consts[69], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
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
        frame_0cdf8e4295624fc399f03a6515bf142a->m_frame.f_lineno = 238;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_3,
            mod_consts[43],
            &PyTuple_GET_ITEM(mod_consts[70], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
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
        exception_tb = MAKE_TRACEBACK(frame_0cdf8e4295624fc399f03a6515bf142a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0cdf8e4295624fc399f03a6515bf142a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0cdf8e4295624fc399f03a6515bf142a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0cdf8e4295624fc399f03a6515bf142a,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_0cdf8e4295624fc399f03a6515bf142a == cache_frame_0cdf8e4295624fc399f03a6515bf142a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0cdf8e4295624fc399f03a6515bf142a);
        cache_frame_0cdf8e4295624fc399f03a6515bf142a = NULL;
    }

    assertFrameObject(frame_0cdf8e4295624fc399f03a6515bf142a);

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


static PyObject *impl_flet_core$audio$$$function__39_on_seek_complete(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_bc95acc924b285389fcf903925c97ba6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bc95acc924b285389fcf903925c97ba6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bc95acc924b285389fcf903925c97ba6)) {
        Py_XDECREF(cache_frame_bc95acc924b285389fcf903925c97ba6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bc95acc924b285389fcf903925c97ba6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bc95acc924b285389fcf903925c97ba6 = MAKE_FUNCTION_FRAME(codeobj_bc95acc924b285389fcf903925c97ba6, module_flet_core$audio, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bc95acc924b285389fcf903925c97ba6->m_type_description == NULL);
    frame_bc95acc924b285389fcf903925c97ba6 = cache_frame_bc95acc924b285389fcf903925c97ba6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bc95acc924b285389fcf903925c97ba6);
    assert(Py_REFCNT(frame_bc95acc924b285389fcf903925c97ba6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_bc95acc924b285389fcf903925c97ba6->m_frame.f_lineno = 243;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[59],
            PyTuple_GET_ITEM(mod_consts[71], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
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
        exception_tb = MAKE_TRACEBACK(frame_bc95acc924b285389fcf903925c97ba6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bc95acc924b285389fcf903925c97ba6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bc95acc924b285389fcf903925c97ba6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bc95acc924b285389fcf903925c97ba6,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_bc95acc924b285389fcf903925c97ba6 == cache_frame_bc95acc924b285389fcf903925c97ba6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bc95acc924b285389fcf903925c97ba6);
        cache_frame_bc95acc924b285389fcf903925c97ba6 = NULL;
    }

    assertFrameObject(frame_bc95acc924b285389fcf903925c97ba6);

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


static PyObject *impl_flet_core$audio$$$function__40_on_seek_complete(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_11124d4dc15e64611dcf179fd921c855;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_11124d4dc15e64611dcf179fd921c855 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_11124d4dc15e64611dcf179fd921c855)) {
        Py_XDECREF(cache_frame_11124d4dc15e64611dcf179fd921c855);

#if _DEBUG_REFCOUNTS
        if (cache_frame_11124d4dc15e64611dcf179fd921c855 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_11124d4dc15e64611dcf179fd921c855 = MAKE_FUNCTION_FRAME(codeobj_11124d4dc15e64611dcf179fd921c855, module_flet_core$audio, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_11124d4dc15e64611dcf179fd921c855->m_type_description == NULL);
    frame_11124d4dc15e64611dcf179fd921c855 = cache_frame_11124d4dc15e64611dcf179fd921c855;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_11124d4dc15e64611dcf179fd921c855);
    assert(Py_REFCNT(frame_11124d4dc15e64611dcf179fd921c855) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[72];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_11124d4dc15e64611dcf179fd921c855->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[61],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
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
        exception_tb = MAKE_TRACEBACK(frame_11124d4dc15e64611dcf179fd921c855, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_11124d4dc15e64611dcf179fd921c855->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_11124d4dc15e64611dcf179fd921c855, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_11124d4dc15e64611dcf179fd921c855,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_11124d4dc15e64611dcf179fd921c855 == cache_frame_11124d4dc15e64611dcf179fd921c855) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_11124d4dc15e64611dcf179fd921c855);
        cache_frame_11124d4dc15e64611dcf179fd921c855 = NULL;
    }

    assertFrameObject(frame_11124d4dc15e64611dcf179fd921c855);

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



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__10_release_async() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__10_release_async,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[30],
#endif
        codeobj_0873db7ffda0828f321937b800176939,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__11_seek(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__11_seek,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        mod_consts[129],
#endif
        codeobj_eab24e437fa363c351e1e50abff47685,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__12_seek_async(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__12_seek_async,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[34],
#endif
        codeobj_5f63f5fca25d9ec696a3165e56f087c3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__13_get_duration(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__13_get_duration,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_feb0de8aedbce6c47beed7a770434f14,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__14_get_duration_async(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__14_get_duration_async,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[37],
#endif
        codeobj_3caa677b1f59339cda2295a1c64d41dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__15_get_current_position(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__15_get_current_position,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_9e6acda52adffad3893f5249c235d80b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__16_get_current_position_async(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__16_get_current_position_async,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[40],
#endif
        codeobj_4aabc095e9abccca2c60e06bbc38bea7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__17_src() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__17_src,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_480e565177f82e3f1d38ab58c36d6e1f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__18_src() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__18_src,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_43c70df71fd3b5a3610d777d81c49956,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__19_src_base64() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__19_src_base64,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_e6f79c68a2c001bac793533a5d1291cf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_bf66e6fcd9c8f9da225251bfdf8a679b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__20_src_base64() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__20_src_base64,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_de61785284078694e4356406c44b466f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__21_autoplay(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__21_autoplay,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_872e920fd1abfeadd7307158e97f30df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__22_autoplay(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__22_autoplay,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_f6d565b4c71b989ca492c929d85ca1a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__23_volume(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__23_volume,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_b42b26e9a0bacd0b2d02be8cc717d137,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__24_volume(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__24_volume,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_b6382ade5aa317e5633b5b24af65c426,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__25_balance(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__25_balance,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_683dc975391c86feb827eaaa7470085c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__26_balance(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__26_balance,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_beeba6c4217aec4d400b1d5ecd6478e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__27_playback_rate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__27_playback_rate,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_7c96c909b5675999ab18cc6f3985f4d9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__28_playback_rate(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__28_playback_rate,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_2eb8ef3d5d8e856badc1e58c1e9d144f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__29_release_mode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__29_release_mode,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_fb8eb491c0ed6af3a2fdf521fdb0aef9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__2__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_62614d6389af5e1dca00cb632d61fa0a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[117]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__30_release_mode(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__30_release_mode,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_0e8e8369aed1dc33dea9396efa5e08ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__31_on_loaded() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__31_on_loaded,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_7d3cd57b4f98cfa5144fa7184bb33327,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__32_on_loaded() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__32_on_loaded,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_4359f2fa97b83823abb7a2cb1b42881c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__33_on_duration_changed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__33_on_duration_changed,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_b109a7a02a46917a531737e4dfff8457,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__34_on_duration_changed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__34_on_duration_changed,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_1383f855123e00e135bea6f1e5b70954,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__35_on_state_changed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__35_on_state_changed,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_4ce30eaa332752caca79937cce86a14b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__36_on_state_changed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__36_on_state_changed,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_7c57e6c9a6dd563fb38107c511f83112,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__37_on_position_changed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__37_on_position_changed,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_1b76f48af407c693a768f587c1b30377,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__38_on_position_changed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__38_on_position_changed,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_0cdf8e4295624fc399f03a6515bf142a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__39_on_seek_complete() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__39_on_seek_complete,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_bc95acc924b285389fcf903925c97ba6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__3_play() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__3_play,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_b6a797fde3c87482e096e71a12513786,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__40_on_seek_complete() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__40_on_seek_complete,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_11124d4dc15e64611dcf179fd921c855,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__4_play_async() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__4_play_async,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[21],
#endif
        codeobj_2cec0a85c476bb7cecc09a10a6c4ae27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__5_pause() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__5_pause,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_967646677309deca38850c2947abef35,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__6_pause_async() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__6_pause_async,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[24],
#endif
        codeobj_7a8e37d9ddde4a2dbb6a46ea08ae5556,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__7_resume() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__7_resume,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_ae64f7370e452250d7f8f8080b5264d4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__8_resume_async() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__8_resume_async,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        mod_consts[27],
#endif
        codeobj_989a11151cdbfb99737460440f3e52c7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$audio$$$function__9_release() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$audio$$$function__9_release,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_7cfa402290aff1180222c91272f08a74,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$audio,
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

function_impl_code functable_flet_core$audio[] = {
    impl_flet_core$audio$$$function__1___init__,
    NULL,
    impl_flet_core$audio$$$function__3_play,
    impl_flet_core$audio$$$function__4_play_async,
    impl_flet_core$audio$$$function__5_pause,
    impl_flet_core$audio$$$function__6_pause_async,
    impl_flet_core$audio$$$function__7_resume,
    impl_flet_core$audio$$$function__8_resume_async,
    impl_flet_core$audio$$$function__9_release,
    impl_flet_core$audio$$$function__10_release_async,
    impl_flet_core$audio$$$function__11_seek,
    impl_flet_core$audio$$$function__12_seek_async,
    impl_flet_core$audio$$$function__13_get_duration,
    impl_flet_core$audio$$$function__14_get_duration_async,
    impl_flet_core$audio$$$function__15_get_current_position,
    impl_flet_core$audio$$$function__16_get_current_position_async,
    impl_flet_core$audio$$$function__17_src,
    impl_flet_core$audio$$$function__18_src,
    impl_flet_core$audio$$$function__19_src_base64,
    impl_flet_core$audio$$$function__20_src_base64,
    impl_flet_core$audio$$$function__21_autoplay,
    impl_flet_core$audio$$$function__22_autoplay,
    impl_flet_core$audio$$$function__23_volume,
    impl_flet_core$audio$$$function__24_volume,
    impl_flet_core$audio$$$function__25_balance,
    impl_flet_core$audio$$$function__26_balance,
    impl_flet_core$audio$$$function__27_playback_rate,
    impl_flet_core$audio$$$function__28_playback_rate,
    impl_flet_core$audio$$$function__29_release_mode,
    impl_flet_core$audio$$$function__30_release_mode,
    impl_flet_core$audio$$$function__31_on_loaded,
    impl_flet_core$audio$$$function__32_on_loaded,
    impl_flet_core$audio$$$function__33_on_duration_changed,
    impl_flet_core$audio$$$function__34_on_duration_changed,
    impl_flet_core$audio$$$function__35_on_state_changed,
    impl_flet_core$audio$$$function__36_on_state_changed,
    impl_flet_core$audio$$$function__37_on_position_changed,
    impl_flet_core$audio$$$function__38_on_position_changed,
    impl_flet_core$audio$$$function__39_on_seek_complete,
    impl_flet_core$audio$$$function__40_on_seek_complete,
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

    function_impl_code *current = functable_flet_core$audio;
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

    if (offset > sizeof(functable_flet_core$audio) || offset < 0) {
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
        functable_flet_core$audio[offset],
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
        module_flet_core$audio,
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
PyObject *modulecode_flet_core$audio(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.audio");

    // Store the module for future use.
    module_flet_core$audio = module;

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
        PRINT_STRING("flet_core.audio: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.audio: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.audio: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$audio\n");

    moduledict_flet_core$audio = MODULE_DICT(module_flet_core$audio);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$audio,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$audio,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[155]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$audio,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$audio,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$audio,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$audio);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$audio, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$audio, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$audio, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$audio);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$audio, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_78e68c9e2485899104157bd215a2ef02;
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
    PyObject *locals_flet_core$audio$$$class__1_ReleaseMode_9 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_ad4c8833c81b81297ffa92ee06709703_2;
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
    PyObject *locals_flet_core$audio$$$class__2_Audio_15 = NULL;
    struct Nuitka_FrameObject *frame_992b6e185d9e12880051221e0787f5c8_3;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_2);
    }
    frame_78e68c9e2485899104157bd215a2ef02 = MAKE_MODULE_FRAME(codeobj_78e68c9e2485899104157bd215a2ef02, module_flet_core$audio);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_78e68c9e2485899104157bd215a2ef02);
    assert(Py_REFCNT(frame_78e68c9e2485899104157bd215a2ef02) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[74];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[77], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[78], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[80];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$audio;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[81];
        tmp_level_value_1 = mod_consts[49];
        frame_78e68c9e2485899104157bd215a2ef02->m_frame.f_lineno = 1;
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
                (PyObject *)moduledict_flet_core$audio,
                mod_consts[82],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[82]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_4);
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
                (PyObject *)moduledict_flet_core$audio,
                mod_consts[83],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[83]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$audio,
                mod_consts[84],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[84]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_7);
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
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[85];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$audio;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[86];
        tmp_level_value_2 = mod_consts[49];
        frame_78e68c9e2485899104157bd215a2ef02->m_frame.f_lineno = 4;
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
                (PyObject *)moduledict_flet_core$audio,
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


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[87];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$audio;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[88];
        tmp_level_value_3 = mod_consts[49];
        frame_78e68c9e2485899104157bd215a2ef02->m_frame.f_lineno = 5;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet_core$audio,
                mod_consts[89],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[89]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[90];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$audio;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[91];
        tmp_level_value_4 = mod_consts[49];
        frame_78e68c9e2485899104157bd215a2ef02->m_frame.f_lineno = 6;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core$audio,
                mod_consts[92],
                mod_consts[49]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[92]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_10);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        tmp_assign_source_11 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_11, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_12 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
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
        tmp_subscript_value_1 = mod_consts[49];
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
        tmp_assign_source_14 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[93]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[93]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[94];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_78e68c9e2485899104157bd215a2ef02->m_frame.f_lineno = 9;
        tmp_assign_source_15 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_15;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[95]);
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
        tmp_mod_expr_left_1 = mod_consts[96];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[97];
        tmp_getattr_default_1 = mod_consts[98];
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[97]);
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
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$audio$$$class__1_ReleaseMode_9 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[99];
        tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__1_ReleaseMode_9, mod_consts[100], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[94];
        tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__1_ReleaseMode_9, mod_consts[101], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        frame_ad4c8833c81b81297ffa92ee06709703_2 = MAKE_CLASS_FRAME(codeobj_ad4c8833c81b81297ffa92ee06709703, module_flet_core$audio, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ad4c8833c81b81297ffa92ee06709703_2);
        assert(Py_REFCNT(frame_ad4c8833c81b81297ffa92ee06709703_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[102];
        tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__1_ReleaseMode_9, mod_consts[103], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[104];
        tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__1_ReleaseMode_9, mod_consts[105], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[106];
        tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__1_ReleaseMode_9, mod_consts[107], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ad4c8833c81b81297ffa92ee06709703_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ad4c8833c81b81297ffa92ee06709703_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ad4c8833c81b81297ffa92ee06709703_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ad4c8833c81b81297ffa92ee06709703_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_ad4c8833c81b81297ffa92ee06709703_2);

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


                exception_lineno = 9;

                goto try_except_handler_4;
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
        tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__1_ReleaseMode_9, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[94];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_flet_core$audio$$$class__1_ReleaseMode_9;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_78e68c9e2485899104157bd215a2ef02->m_frame.f_lineno = 9;
            tmp_assign_source_18 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_18;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_17 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_flet_core$audio$$$class__1_ReleaseMode_9);
        locals_flet_core$audio$$$class__1_ReleaseMode_9 = NULL;
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

        Py_DECREF(locals_flet_core$audio$$$class__1_ReleaseMode_9);
        locals_flet_core$audio$$$class__1_ReleaseMode_9 = NULL;
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
        exception_lineno = 9;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_17);
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        tmp_assign_source_19 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_19, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_20 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_6 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[49];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_22 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[93]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[93]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        tmp_tuple_element_6 = mod_consts[109];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_78e68c9e2485899104157bd215a2ef02->m_frame.f_lineno = 15;
        tmp_assign_source_23 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_23;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[95]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
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
        tmp_mod_expr_left_2 = mod_consts[96];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[97];
        tmp_getattr_default_2 = mod_consts[98];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[97]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 15;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_24;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_flet_core$audio$$$class__2_Audio_15 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[99];
        tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[100], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[109];
        tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[101], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_7;
        }
        frame_992b6e185d9e12880051221e0787f5c8_3 = MAKE_CLASS_FRAME(codeobj_992b6e185d9e12880051221e0787f5c8, module_flet_core$audio, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_992b6e185d9e12880051221e0787f5c8_3);
        assert(Py_REFCNT(frame_992b6e185d9e12880051221e0787f5c8_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_3;
            tmp_defaults_1 = mod_consts[111];
            tmp_dict_key_1 = mod_consts[3];
            tmp_expression_value_11 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[84]);

            if (tmp_expression_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_expression_value_11 == NULL)) {
                        tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                    }

                    if (tmp_expression_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 45;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_11);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_3 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[112]);

            if (tmp_subscript_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_3 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_3);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_3);
            Py_DECREF(tmp_expression_value_11);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 9 );
            {
                PyObject *tmp_expression_value_12;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_expression_value_13;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_subscript_value_6;
                PyObject *tmp_expression_value_15;
                PyObject *tmp_subscript_value_7;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[113];
                tmp_expression_value_12 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[84]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[84]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 46;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_4 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[92]);

                if (tmp_subscript_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[92]);

                        if (unlikely(tmp_subscript_value_4 == NULL)) {
                            tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
                        }

                        if (tmp_subscript_value_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_12);

                            exception_lineno = 46;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_4);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_4);
                Py_DECREF(tmp_expression_value_12);
                Py_DECREF(tmp_subscript_value_4);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 46;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[114];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[83]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[83]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 47;
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
                tmp_expression_value_13 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[84]);

                if (tmp_expression_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[84]);

                        if (unlikely(tmp_expression_value_13 == NULL)) {
                            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                        }

                        if (tmp_expression_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 49;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_5 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[112]);

                if (tmp_subscript_value_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_5 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_5);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_13);
                Py_DECREF(tmp_subscript_value_5);
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
                tmp_dict_key_1 = mod_consts[5];
                tmp_expression_value_14 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[84]);

                if (tmp_expression_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[84]);

                        if (unlikely(tmp_expression_value_14 == NULL)) {
                            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                        }

                        if (tmp_expression_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 50;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_14);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[115]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_6 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_6);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_14);
                Py_DECREF(tmp_subscript_value_6);
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
                tmp_dict_key_1 = mod_consts[6];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[89]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[89]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
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
                tmp_dict_key_1 = mod_consts[7];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[89]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[89]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 52;
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
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[89]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[89]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 53;
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
                tmp_dict_key_1 = mod_consts[9];
                tmp_expression_value_15 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[84]);

                if (tmp_expression_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[84]);

                        if (unlikely(tmp_expression_value_15 == NULL)) {
                            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                        }

                        if (tmp_expression_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 54;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_15);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_7 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[94]);

                if (tmp_subscript_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[94]);

                        if (unlikely(tmp_subscript_value_7 == NULL)) {
                            tmp_subscript_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
                        }

                        if (tmp_subscript_value_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_15);

                            exception_lineno = 54;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_7);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_15);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 54;
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
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$audio$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$audio$$$function__2__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[118], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$audio$$$function__3_play();

        tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[120], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$audio$$$function__4_play_async();

        tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[20], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$audio$$$function__5_pause();

        tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[122], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$audio$$$function__6_pause_async();

        tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[23], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$audio$$$function__7_resume();

        tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[124], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$audio$$$function__8_resume_async();

        tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[26], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$audio$$$function__9_release();

        tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[102], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$audio$$$function__10_release_async();

        tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[29], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_dict_key_2 = mod_consts[32];
            tmp_dict_value_2 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[127]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_2 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_2);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$audio$$$function__11_seek(tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[128], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_key_3 = mod_consts[32];
            tmp_dict_value_3 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[127]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$audio$$$function__12_seek_async(tmp_annotations_3);

            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[33], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_8;
            tmp_dict_key_4 = mod_consts[130];
            tmp_expression_value_16 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[84]);

            if (tmp_expression_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_expression_value_16 == NULL)) {
                        tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                    }

                    if (tmp_expression_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 118;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_16);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_8 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[127]);

            if (tmp_subscript_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_8 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_8);
            Py_DECREF(tmp_expression_value_16);
            Py_DECREF(tmp_subscript_value_8);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$audio$$$function__13_get_duration(tmp_annotations_4);

            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_9;
            tmp_dict_key_5 = mod_consts[130];
            tmp_expression_value_17 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[84]);

            if (tmp_expression_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_expression_value_17 == NULL)) {
                        tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                    }

                    if (tmp_expression_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 122;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_17);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_9 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[127]);

            if (tmp_subscript_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_9 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_9);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_9);
            Py_DECREF(tmp_expression_value_17);
            Py_DECREF(tmp_subscript_value_9);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$audio$$$function__14_get_duration_async(tmp_annotations_5);

            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[36], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_10;
            tmp_dict_key_6 = mod_consts[130];
            tmp_expression_value_18 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[84]);

            if (tmp_expression_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_expression_value_18 == NULL)) {
                        tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                    }

                    if (tmp_expression_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 126;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_18);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_10 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[127]);

            if (tmp_subscript_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_10 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_10);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_10);
            Py_DECREF(tmp_expression_value_18);
            Py_DECREF(tmp_subscript_value_10);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$audio$$$function__15_get_current_position(tmp_annotations_6);

            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_11;
            tmp_dict_key_7 = mod_consts[130];
            tmp_expression_value_19 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[84]);

            if (tmp_expression_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_expression_value_19 == NULL)) {
                        tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                    }

                    if (tmp_expression_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 130;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_19);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_11 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[127]);

            if (tmp_subscript_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_11 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_11);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_11);
            Py_DECREF(tmp_expression_value_19);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$audio$$$function__16_get_current_position_async(tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_4 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_flet_core$audio$$$function__17_src();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 135;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_flet_core$audio$$$function__17_src();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 135;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_3;
            tmp_called_instance_1 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[3]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[3]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_flet_core$audio$$$function__18_src();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 139;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[135], tmp_args_element_value_3);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_5;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_6 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_4 = MAKE_FUNCTION_flet_core$audio$$$function__19_src_base64();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 144;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_7 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_5 = MAKE_FUNCTION_flet_core$audio$$$function__19_src_base64();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 144;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_6;
            tmp_called_instance_2 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[4]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[4]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_6 = MAKE_FUNCTION_flet_core$audio$$$function__20_src_base64();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 148;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[135], tmp_args_element_value_6);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_13;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_8 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (unlikely(tmp_called_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_8 = mod_consts[130];
            tmp_expression_value_20 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[84]);

            if (tmp_expression_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_expression_value_20 == NULL)) {
                        tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                    }

                    if (tmp_expression_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);

                        exception_lineno = 154;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_20);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_12 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[115]);

            if (tmp_subscript_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_12 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_12);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_12);
            Py_DECREF(tmp_expression_value_20);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_7 = MAKE_FUNCTION_flet_core$audio$$$function__21_autoplay(tmp_annotations_8);

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 153;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_9 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_9 = mod_consts[130];
            tmp_expression_value_21 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[84]);

            if (tmp_expression_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                    }

                    if (tmp_expression_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 154;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_21);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_13 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[115]);

            if (tmp_subscript_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_13 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_13);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_13);
            Py_DECREF(tmp_expression_value_21);
            Py_DECREF(tmp_subscript_value_13);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_8 = MAKE_FUNCTION_flet_core$audio$$$function__21_autoplay(tmp_annotations_9);

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 153;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_14;
            tmp_expression_value_22 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[5]);

            if (unlikely(tmp_expression_value_22 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[135]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_10 = mod_consts[58];
            tmp_expression_value_23 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[84]);

            if (tmp_expression_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_expression_value_23 == NULL)) {
                        tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                    }

                    if (tmp_expression_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_10);

                        exception_lineno = 158;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_23);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_14 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[115]);

            if (tmp_subscript_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_14 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_14);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_23);
            Py_DECREF(tmp_subscript_value_14);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);

                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_9 = MAKE_FUNCTION_flet_core$audio$$$function__22_autoplay(tmp_annotations_10);

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 157;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_11;
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
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_11 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_11 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (unlikely(tmp_called_value_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_11 = mod_consts[130];
            tmp_dict_value_11 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[89]);

            if (tmp_dict_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_dict_value_11 == NULL)) {
                        tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_dict_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);

                        exception_lineno = 163;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_11);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_args_element_value_10 = MAKE_FUNCTION_flet_core$audio$$$function__23_volume(tmp_annotations_11);

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 162;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_12 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_12 = mod_consts[130];
            tmp_dict_value_12 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[89]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_dict_value_12 == NULL)) {
                        tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_dict_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 163;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_12);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_args_element_value_11 = MAKE_FUNCTION_flet_core$audio$$$function__23_volume(tmp_annotations_12);

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 162;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            tmp_expression_value_24 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[6]);

            if (unlikely(tmp_expression_value_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[6]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[135]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_13 = mod_consts[58];
            tmp_dict_value_13 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[89]);

            if (tmp_dict_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_dict_value_13 == NULL)) {
                        tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_dict_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);

                        exception_lineno = 167;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_13);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$audio$$$function__24_volume(tmp_annotations_13);

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 166;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_12;
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
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_12 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_value_14 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (unlikely(tmp_called_value_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_14 = mod_consts[130];
            tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[89]);

            if (tmp_dict_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_dict_value_14 == NULL)) {
                        tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_dict_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);

                        exception_lineno = 173;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_14);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_14 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_args_element_value_13 = MAKE_FUNCTION_flet_core$audio$$$function__25_balance(tmp_annotations_14);

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 172;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_15 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_15 = mod_consts[130];
            tmp_dict_value_15 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[89]);

            if (tmp_dict_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_dict_value_15 == NULL)) {
                        tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_dict_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 173;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_15);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_15 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));


            tmp_args_element_value_14 = MAKE_FUNCTION_flet_core$audio$$$function__25_balance(tmp_annotations_15);

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 172;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            tmp_expression_value_25 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[7]);

            if (unlikely(tmp_expression_value_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[135]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_16 = mod_consts[58];
            tmp_dict_value_16 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[89]);

            if (tmp_dict_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_dict_value_16 == NULL)) {
                        tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_dict_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);

                        exception_lineno = 177;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_16);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_16 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));


            tmp_args_element_value_15 = MAKE_FUNCTION_flet_core$audio$$$function__26_balance(tmp_annotations_16);

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 176;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_13;
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
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_13 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_17 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (unlikely(tmp_called_value_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_17 = mod_consts[130];
            tmp_dict_value_17 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[89]);

            if (tmp_dict_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_dict_value_17 == NULL)) {
                        tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_dict_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);

                        exception_lineno = 183;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_17);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_17 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));


            tmp_args_element_value_16 = MAKE_FUNCTION_flet_core$audio$$$function__27_playback_rate(tmp_annotations_17);

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 182;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_18 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_18 = mod_consts[130];
            tmp_dict_value_18 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[89]);

            if (tmp_dict_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_dict_value_18 == NULL)) {
                        tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_dict_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 183;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_18);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_18 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));


            tmp_args_element_value_17 = MAKE_FUNCTION_flet_core$audio$$$function__27_playback_rate(tmp_annotations_18);

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 182;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            tmp_expression_value_26 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[8]);

            if (unlikely(tmp_expression_value_26 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[8]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[135]);
            Py_DECREF(tmp_expression_value_26);
            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_19 = mod_consts[58];
            tmp_dict_value_19 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[89]);

            if (tmp_dict_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[89]);

                    if (unlikely(tmp_dict_value_19 == NULL)) {
                        tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
                    }

                    if (tmp_dict_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);

                        exception_lineno = 187;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_19);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_19 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));


            tmp_args_element_value_18 = MAKE_FUNCTION_flet_core$audio$$$function__28_playback_rate(tmp_annotations_19);

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 186;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_20;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_14 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_called_value_20 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (unlikely(tmp_called_value_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 192;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_19 = MAKE_FUNCTION_flet_core$audio$$$function__29_release_mode();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 192;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_21 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_20 = MAKE_FUNCTION_flet_core$audio$$$function__29_release_mode();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 192;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_15;
            tmp_expression_value_27 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[9]);

            if (unlikely(tmp_expression_value_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[9]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[135]);
            Py_DECREF(tmp_expression_value_27);
            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_20 = mod_consts[58];
            tmp_expression_value_28 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[84]);

            if (tmp_expression_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[84]);

                    if (unlikely(tmp_expression_value_28 == NULL)) {
                        tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
                    }

                    if (tmp_expression_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);

                        exception_lineno = 197;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_28);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_15 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[94]);

            if (tmp_subscript_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[94]);

                    if (unlikely(tmp_subscript_value_15 == NULL)) {
                        tmp_subscript_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
                    }

                    if (tmp_subscript_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_22);
                        Py_DECREF(tmp_expression_value_28);

                        exception_lineno = 197;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_15);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_15);
            Py_DECREF(tmp_expression_value_28);
            Py_DECREF(tmp_subscript_value_15);
            if (tmp_dict_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_22);

                exception_lineno = 197;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_20 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));


            tmp_args_element_value_21 = MAKE_FUNCTION_flet_core$audio$$$function__30_release_mode(tmp_annotations_20);

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 196;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_23;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
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
            tmp_called_value_23 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (unlikely(tmp_called_value_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_22 = MAKE_FUNCTION_flet_core$audio$$$function__31_on_loaded();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 201;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_24 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_23 = MAKE_FUNCTION_flet_core$audio$$$function__31_on_loaded();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 201;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_24;
            tmp_called_instance_3 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[10]);

            if (unlikely(tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[10]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_24 = MAKE_FUNCTION_flet_core$audio$$$function__32_on_loaded();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 205;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[135], tmp_args_element_value_24);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_26;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
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
            tmp_called_value_25 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (unlikely(tmp_called_value_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 210;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_25 = MAKE_FUNCTION_flet_core$audio$$$function__33_on_duration_changed();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 210;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_26 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_26 = MAKE_FUNCTION_flet_core$audio$$$function__33_on_duration_changed();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 210;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_27;
            tmp_called_instance_4 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[11]);

            if (unlikely(tmp_called_instance_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_27 = MAKE_FUNCTION_flet_core$audio$$$function__34_on_duration_changed();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 214;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[135], tmp_args_element_value_27);
            Py_DECREF(tmp_called_instance_4);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_29;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_17 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_12;
            } else {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            tmp_called_value_27 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (unlikely(tmp_called_value_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_28 = MAKE_FUNCTION_flet_core$audio$$$function__35_on_state_changed();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 219;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_called_value_28 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_29 = MAKE_FUNCTION_flet_core$audio$$$function__35_on_state_changed();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 219;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_30;
            tmp_called_instance_5 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[12]);

            if (unlikely(tmp_called_instance_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_30 = MAKE_FUNCTION_flet_core$audio$$$function__36_on_state_changed();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 223;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[135], tmp_args_element_value_30);
            Py_DECREF(tmp_called_instance_5);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_32;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_18 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_13;
            } else {
                goto condexpr_false_13;
            }
            condexpr_true_13:;
            tmp_called_value_29 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (unlikely(tmp_called_value_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_31 = MAKE_FUNCTION_flet_core$audio$$$function__37_on_position_changed();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 228;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_31);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_called_value_30 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_32 = MAKE_FUNCTION_flet_core$audio$$$function__37_on_position_changed();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 228;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_value_33;
            tmp_called_instance_6 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[13]);

            if (unlikely(tmp_called_instance_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[13]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 232;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_33 = MAKE_FUNCTION_flet_core$audio$$$function__38_on_position_changed();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 232;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[135], tmp_args_element_value_33);
            Py_DECREF(tmp_called_instance_6);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_35;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_19 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_14;
            } else {
                goto condexpr_false_14;
            }
            condexpr_true_14:;
            tmp_called_value_31 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[133]);

            if (unlikely(tmp_called_value_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[133]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_34 = MAKE_FUNCTION_flet_core$audio$$$function__39_on_seek_complete();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 241;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_34);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_called_value_32 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_35 = MAKE_FUNCTION_flet_core$audio$$$function__39_on_seek_complete();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 241;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_14:;
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_value_36;
            tmp_called_instance_7 = PyObject_GetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[14]);

            if (unlikely(tmp_called_instance_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[14]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 245;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_36 = MAKE_FUNCTION_flet_core$audio$$$function__40_on_seek_complete();

            frame_992b6e185d9e12880051221e0787f5c8_3->m_frame.f_lineno = 245;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[135], tmp_args_element_value_36);
            Py_DECREF(tmp_called_instance_7);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_992b6e185d9e12880051221e0787f5c8_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_992b6e185d9e12880051221e0787f5c8_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_992b6e185d9e12880051221e0787f5c8_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_992b6e185d9e12880051221e0787f5c8_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_992b6e185d9e12880051221e0787f5c8_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$audio$$$class__2_Audio_15, mod_consts[108], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_7;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_33 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[109];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_flet_core$audio$$$class__2_Audio_15;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_78e68c9e2485899104157bd215a2ef02->m_frame.f_lineno = 15;
            tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_33, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 15;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_26;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_25 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_25);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_flet_core$audio$$$class__2_Audio_15);
        locals_flet_core$audio$$$class__2_Audio_15 = NULL;
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

        Py_DECREF(locals_flet_core$audio$$$class__2_Audio_15);
        locals_flet_core$audio$$$class__2_Audio_15 = NULL;
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
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 15;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_flet_core$audio, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_25);
    }
    goto try_end_3;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_78e68c9e2485899104157bd215a2ef02, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_78e68c9e2485899104157bd215a2ef02->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_78e68c9e2485899104157bd215a2ef02, exception_lineno);
    }



    assertFrameObject(frame_78e68c9e2485899104157bd215a2ef02);

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
    PGO_onModuleExit("flet_core.audio", false);

    Py_INCREF(module_flet_core$audio);
    return module_flet_core$audio;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$audio, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$audio", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
