/* Generated code for Python module 'flet_core.textfield'
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

/* The "module_flet_core$textfield" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$textfield;
PyDictObject *moduledict_flet_core$textfield;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[272];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[272];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.textfield"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 272; i++) {
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
void checkModuleConstants_flet_core$textfield(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 272; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_da07c9e11083b79a8b747b90a3af245b;
static PyCodeObject *codeobj_1549ad7d7b764497fc04a36cec6c4292;
static PyCodeObject *codeobj_065bdd573202c11fb1b23cb381833453;
static PyCodeObject *codeobj_8d2e0dc07a6ce9d0c2a00e61e5f34011;
static PyCodeObject *codeobj_ddd52236778ca02ca54253a441f04b87;
static PyCodeObject *codeobj_f6e85ea044ea66096f7062cc569c28b9;
static PyCodeObject *codeobj_a2962a45bf0f994f7b35da936bafb7b6;
static PyCodeObject *codeobj_8ac8cffd9946fdce4517f77e36ab3f1a;
static PyCodeObject *codeobj_8ec606fb2ad84ee87a80743c6b36b6f6;
static PyCodeObject *codeobj_8ac75c2b516ce98b4900218bc6685eff;
static PyCodeObject *codeobj_7618ce78373378e93e47b04c259e44df;
static PyCodeObject *codeobj_9873058b678dde8a49f37aa773b879f4;
static PyCodeObject *codeobj_9a54718546698e897732538ded6e6918;
static PyCodeObject *codeobj_f07c3b65b6fdd2f1078216ca1af2757f;
static PyCodeObject *codeobj_69cb71883f10b2c39eecad784bb469ea;
static PyCodeObject *codeobj_d46ae9e4deb97d933df1becdad13ad15;
static PyCodeObject *codeobj_cefc61e4bb6f3feed2ae72865c27826d;
static PyCodeObject *codeobj_8380c9690a13b427b46c0a4c626859bd;
static PyCodeObject *codeobj_2b9292e8ff87e53ba6cb079fc0bab36e;
static PyCodeObject *codeobj_6a8b16009a7d194b7fd58d6921304807;
static PyCodeObject *codeobj_6575888e608f968a032b8f5975020b3b;
static PyCodeObject *codeobj_f8c4dde3fd1dfa95daf5ca048aa3de63;
static PyCodeObject *codeobj_023c2004da8a15737f725c1a668a8089;
static PyCodeObject *codeobj_b0fcaea84d5e150c9531b984ebc13f72;
static PyCodeObject *codeobj_fe4f168f1aa85f8a2848059c0a886373;
static PyCodeObject *codeobj_83fe156653f1ebae1ce22be79027567c;
static PyCodeObject *codeobj_f5d0903e98362386f012729dd902b2ca;
static PyCodeObject *codeobj_e76989ce359171bf5c02b158093ad0dc;
static PyCodeObject *codeobj_59f4192d740f80b3ef4d4c9a78a2059d;
static PyCodeObject *codeobj_07e672ae2fc16ae26409c6dad3dfc4b6;
static PyCodeObject *codeobj_93d80a32870d84be4e0c30a1fece61fc;
static PyCodeObject *codeobj_f1fc8fb994db2813f6cbbb4cf5c44121;
static PyCodeObject *codeobj_4afa7d7d696a109efca62dbb1b773474;
static PyCodeObject *codeobj_43964fc2afd699d544d8416ce341b6e5;
static PyCodeObject *codeobj_9a103a505c8641038a865963423e713f;
static PyCodeObject *codeobj_093c7909b39b5e65d8c4961d6925c1c0;
static PyCodeObject *codeobj_6fd0caa67bfc7665746bddb6f8fbe284;
static PyCodeObject *codeobj_29e40b8bf7976205af87b2b980dfb6b1;
static PyCodeObject *codeobj_d380c98b8ff47191f6d9dd3c4b1bce88;
static PyCodeObject *codeobj_84565e598c4f1bd5e885e0dba36b9f58;
static PyCodeObject *codeobj_ce6994a3fb229c4cba2fbb8fb507315b;
static PyCodeObject *codeobj_0c43c2b894cf4035bc8139bb51653f74;
static PyCodeObject *codeobj_55076d3a0bc53867ebf9823c06ca199c;
static PyCodeObject *codeobj_cc17f94313871c9b6b39d569db7155fc;
static PyCodeObject *codeobj_3eebd4ebae48bd821adb8d9519cd6e8e;
static PyCodeObject *codeobj_0159107ba530b839e346c8e5f73a590d;
static PyCodeObject *codeobj_e967dabde38427606e93f9809f02e273;
static PyCodeObject *codeobj_b3ded0d8966bbd8a43a7e879937d1e70;
static PyCodeObject *codeobj_6ffb267d4cea1a9768c22c55c195dbbc;
static PyCodeObject *codeobj_4e8b709391157c2dec65f68c7ac3dc93;
static PyCodeObject *codeobj_ef9a29374886c7a1dd0661886a10986d;
static PyCodeObject *codeobj_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c;
static PyCodeObject *codeobj_18e70851bdbeeac896f02611e294f58f;
static PyCodeObject *codeobj_cd05350b401326bfd4c9b4d8fa100729;
static PyCodeObject *codeobj_0baef6d2caa4b4237b5c2954d9b24d86;
static PyCodeObject *codeobj_90e593f062ba807912699f28c5be0ff0;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[91]; CHECK_OBJECT(module_filename_obj);
    codeobj_da07c9e11083b79a8b747b90a3af245b = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[264], mod_consts[264], NULL, NULL, 0, 0, 0);
    codeobj_1549ad7d7b764497fc04a36cec6c4292 = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_NOFREE, mod_consts[43], mod_consts[43], mod_consts[265], NULL, 0, 0, 0);
    codeobj_065bdd573202c11fb1b23cb381833453 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[265], NULL, 0, 0, 0);
    codeobj_8d2e0dc07a6ce9d0c2a00e61e5f34011 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_NOFREE, mod_consts[170], mod_consts[170], mod_consts[265], NULL, 0, 0, 0);
    codeobj_ddd52236778ca02ca54253a441f04b87 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[266], NULL, 79, 0, 0);
    codeobj_f6e85ea044ea66096f7062cc569c28b9 = MAKE_CODE_OBJECT(module_filename_obj, 420, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[253], mod_consts[253], mod_consts[267], NULL, 2, 0, 0);
    codeobj_a2962a45bf0f994f7b35da936bafb7b6 = MAKE_CODE_OBJECT(module_filename_obj, 307, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[238], mod_consts[238], mod_consts[267], NULL, 2, 0, 0);
    codeobj_8ac8cffd9946fdce4517f77e36ab3f1a = MAKE_CODE_OBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[241], mod_consts[241], mod_consts[267], NULL, 2, 0, 0);
    codeobj_8ec606fb2ad84ee87a80743c6b36b6f6 = MAKE_CODE_OBJECT(module_filename_obj, 272, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[27], mod_consts[27], mod_consts[268], mod_consts[265], 1, 0, 0);
    codeobj_8ac75c2b516ce98b4900218bc6685eff = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[229], mod_consts[229], mod_consts[269], NULL, 1, 0, 0);
    codeobj_7618ce78373378e93e47b04c259e44df = MAKE_CODE_OBJECT(module_filename_obj, 400, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[269], NULL, 1, 0, 0);
    codeobj_9873058b678dde8a49f37aa773b879f4 = MAKE_CODE_OBJECT(module_filename_obj, 404, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[15], mod_consts[15], mod_consts[267], NULL, 2, 0, 0);
    codeobj_9a54718546698e897732538ded6e6918 = MAKE_CODE_OBJECT(module_filename_obj, 391, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[269], NULL, 1, 0, 0);
    codeobj_f07c3b65b6fdd2f1078216ca1af2757f = MAKE_CODE_OBJECT(module_filename_obj, 395, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[267], NULL, 2, 0, 0);
    codeobj_69cb71883f10b2c39eecad784bb469ea = MAKE_CODE_OBJECT(module_filename_obj, 409, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[269], NULL, 1, 0, 0);
    codeobj_d46ae9e4deb97d933df1becdad13ad15 = MAKE_CODE_OBJECT(module_filename_obj, 413, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[267], NULL, 2, 0, 0);
    codeobj_cefc61e4bb6f3feed2ae72865c27826d = MAKE_CODE_OBJECT(module_filename_obj, 425, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[269], NULL, 1, 0, 0);
    codeobj_8380c9690a13b427b46c0a4c626859bd = MAKE_CODE_OBJECT(module_filename_obj, 429, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[267], NULL, 2, 0, 0);
    codeobj_2b9292e8ff87e53ba6cb079fc0bab36e = MAKE_CODE_OBJECT(module_filename_obj, 434, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[269], NULL, 1, 0, 0);
    codeobj_6a8b16009a7d194b7fd58d6921304807 = MAKE_CODE_OBJECT(module_filename_obj, 438, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[267], NULL, 2, 0, 0);
    codeobj_6575888e608f968a032b8f5975020b3b = MAKE_CODE_OBJECT(module_filename_obj, 452, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[269], NULL, 1, 0, 0);
    codeobj_f8c4dde3fd1dfa95daf5ca048aa3de63 = MAKE_CODE_OBJECT(module_filename_obj, 456, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[267], NULL, 2, 0, 0);
    codeobj_023c2004da8a15737f725c1a668a8089 = MAKE_CODE_OBJECT(module_filename_obj, 443, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[269], NULL, 1, 0, 0);
    codeobj_b0fcaea84d5e150c9531b984ebc13f72 = MAKE_CODE_OBJECT(module_filename_obj, 447, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[267], NULL, 2, 0, 0);
    codeobj_fe4f168f1aa85f8a2848059c0a886373 = MAKE_CODE_OBJECT(module_filename_obj, 277, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[269], NULL, 1, 0, 0);
    codeobj_83fe156653f1ebae1ce22be79027567c = MAKE_CODE_OBJECT(module_filename_obj, 281, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[269], NULL, 1, 0, 0);
    codeobj_f5d0903e98362386f012729dd902b2ca = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[269], NULL, 1, 0, 0);
    codeobj_e76989ce359171bf5c02b158093ad0dc = MAKE_CODE_OBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[267], NULL, 2, 0, 0);
    codeobj_59f4192d740f80b3ef4d4c9a78a2059d = MAKE_CODE_OBJECT(module_filename_obj, 355, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[269], NULL, 1, 0, 0);
    codeobj_07e672ae2fc16ae26409c6dad3dfc4b6 = MAKE_CODE_OBJECT(module_filename_obj, 359, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[267], NULL, 2, 0, 0);
    codeobj_93d80a32870d84be4e0c30a1fece61fc = MAKE_CODE_OBJECT(module_filename_obj, 346, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[269], NULL, 1, 0, 0);
    codeobj_f1fc8fb994db2813f6cbbb4cf5c44121 = MAKE_CODE_OBJECT(module_filename_obj, 350, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[267], NULL, 2, 0, 0);
    codeobj_4afa7d7d696a109efca62dbb1b773474 = MAKE_CODE_OBJECT(module_filename_obj, 337, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[269], NULL, 1, 0, 0);
    codeobj_43964fc2afd699d544d8416ce341b6e5 = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[267], NULL, 2, 0, 0);
    codeobj_9a103a505c8641038a865963423e713f = MAKE_CODE_OBJECT(module_filename_obj, 328, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[269], NULL, 1, 0, 0);
    codeobj_093c7909b39b5e65d8c4961d6925c1c0 = MAKE_CODE_OBJECT(module_filename_obj, 332, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[267], NULL, 2, 0, 0);
    codeobj_6fd0caa67bfc7665746bddb6f8fbe284 = MAKE_CODE_OBJECT(module_filename_obj, 501, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[269], NULL, 1, 0, 0);
    codeobj_29e40b8bf7976205af87b2b980dfb6b1 = MAKE_CODE_OBJECT(module_filename_obj, 505, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[270], NULL, 2, 0, 0);
    codeobj_d380c98b8ff47191f6d9dd3c4b1bce88 = MAKE_CODE_OBJECT(module_filename_obj, 470, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[269], NULL, 1, 0, 0);
    codeobj_84565e598c4f1bd5e885e0dba36b9f58 = MAKE_CODE_OBJECT(module_filename_obj, 474, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[270], NULL, 2, 0, 0);
    codeobj_ce6994a3fb229c4cba2fbb8fb507315b = MAKE_CODE_OBJECT(module_filename_obj, 492, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[269], NULL, 1, 0, 0);
    codeobj_0c43c2b894cf4035bc8139bb51653f74 = MAKE_CODE_OBJECT(module_filename_obj, 496, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[270], NULL, 2, 0, 0);
    codeobj_55076d3a0bc53867ebf9823c06ca199c = MAKE_CODE_OBJECT(module_filename_obj, 483, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[269], NULL, 1, 0, 0);
    codeobj_cc17f94313871c9b6b39d569db7155fc = MAKE_CODE_OBJECT(module_filename_obj, 487, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[270], NULL, 2, 0, 0);
    codeobj_3eebd4ebae48bd821adb8d9519cd6e8e = MAKE_CODE_OBJECT(module_filename_obj, 382, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[269], NULL, 1, 0, 0);
    codeobj_0159107ba530b839e346c8e5f73a590d = MAKE_CODE_OBJECT(module_filename_obj, 386, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[267], NULL, 2, 0, 0);
    codeobj_e967dabde38427606e93f9809f02e273 = MAKE_CODE_OBJECT(module_filename_obj, 364, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[269], NULL, 1, 0, 0);
    codeobj_b3ded0d8966bbd8a43a7e879937d1e70 = MAKE_CODE_OBJECT(module_filename_obj, 368, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[267], NULL, 2, 0, 0);
    codeobj_6ffb267d4cea1a9768c22c55c195dbbc = MAKE_CODE_OBJECT(module_filename_obj, 461, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[269], NULL, 1, 0, 0);
    codeobj_4e8b709391157c2dec65f68c7ac3dc93 = MAKE_CODE_OBJECT(module_filename_obj, 465, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[267], NULL, 2, 0, 0);
    codeobj_ef9a29374886c7a1dd0661886a10986d = MAKE_CODE_OBJECT(module_filename_obj, 373, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[269], NULL, 1, 0, 0);
    codeobj_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c = MAKE_CODE_OBJECT(module_filename_obj, 377, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[267], NULL, 2, 0, 0);
    codeobj_18e70851bdbeeac896f02611e294f58f = MAKE_CODE_OBJECT(module_filename_obj, 312, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[269], NULL, 1, 0, 0);
    codeobj_cd05350b401326bfd4c9b4d8fa100729 = MAKE_CODE_OBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[267], NULL, 2, 0, 0);
    codeobj_0baef6d2caa4b4237b5c2954d9b24d86 = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[269], NULL, 1, 0, 0);
    codeobj_90e593f062ba807912699f28c5be0ff0 = MAKE_CODE_OBJECT(module_filename_obj, 291, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[267], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_flet_core$textfield$$$function__5_focus_async$$$coroutine__1_focus_async(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__10___set_keyboard_type(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__11_text_align(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__12_text_align(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__13___set_text_align(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__14_multiline(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__15_multiline(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__16_min_lines(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__17_min_lines(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__18_max_lines(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__19_max_lines(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__20_max_length(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__21_max_length(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__22_read_only(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__23_read_only(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__24_shift_enter(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__25_shift_enter(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__26_password(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__27_password(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__28_can_reveal_password(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__29_can_reveal_password(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__2__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__30_autofocus(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__31_autofocus(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__32_capitalization(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__33_capitalization(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__34___set_capitalization(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__35_cursor_color();


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__36_cursor_color();


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__37_cursor_height(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__38_cursor_height(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__39_cursor_width(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__3__before_build_command(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__40_cursor_width(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__41_cursor_radius(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__42_cursor_radius(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__43_selection_color();


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__44_selection_color();


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__45_on_change();


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__46_on_change();


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__47_on_submit();


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__48_on_submit();


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__49_on_focus();


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__4_focus();


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__50_on_focus();


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__51_on_blur();


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__52_on_blur();


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__5_focus_async();


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__6_value(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__7_value(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__8_keyboard_type(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__9_keyboard_type(PyObject *annotations);


// The module function definitions.
static PyObject *impl_flet_core$textfield$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
    PyObject *par_keyboard_type = python_pars[58];
    PyObject *par_multiline = python_pars[59];
    PyObject *par_min_lines = python_pars[60];
    PyObject *par_max_lines = python_pars[61];
    PyObject *par_max_length = python_pars[62];
    PyObject *par_password = python_pars[63];
    PyObject *par_can_reveal_password = python_pars[64];
    PyObject *par_read_only = python_pars[65];
    PyObject *par_shift_enter = python_pars[66];
    PyObject *par_text_align = python_pars[67];
    PyObject *par_autofocus = python_pars[68];
    PyObject *par_capitalization = python_pars[69];
    PyObject *par_cursor_color = python_pars[70];
    PyObject *par_cursor_width = python_pars[71];
    PyObject *par_cursor_height = python_pars[72];
    PyObject *par_cursor_radius = python_pars[73];
    PyObject *par_selection_color = python_pars[74];
    PyObject *par_on_change = python_pars[75];
    PyObject *par_on_submit = python_pars[76];
    PyObject *par_on_focus = python_pars[77];
    PyObject *par_on_blur = python_pars[78];
    struct Nuitka_FrameObject *frame_ddd52236778ca02ca54253a441f04b87;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ddd52236778ca02ca54253a441f04b87 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ddd52236778ca02ca54253a441f04b87)) {
        Py_XDECREF(cache_frame_ddd52236778ca02ca54253a441f04b87);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ddd52236778ca02ca54253a441f04b87 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ddd52236778ca02ca54253a441f04b87 = MAKE_FUNCTION_FRAME(codeobj_ddd52236778ca02ca54253a441f04b87, module_flet_core$textfield, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ddd52236778ca02ca54253a441f04b87->m_type_description == NULL);
    frame_ddd52236778ca02ca54253a441f04b87 = cache_frame_ddd52236778ca02ca54253a441f04b87;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ddd52236778ca02ca54253a441f04b87);
    assert(Py_REFCNT(frame_ddd52236778ca02ca54253a441f04b87) == 2);

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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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
        frame_ddd52236778ca02ca54253a441f04b87->m_frame.f_lineno = 183;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[56] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1, tmp_kw_call_dict_value_13_1, tmp_kw_call_dict_value_14_1, tmp_kw_call_dict_value_15_1, tmp_kw_call_dict_value_16_1, tmp_kw_call_dict_value_17_1, tmp_kw_call_dict_value_18_1, tmp_kw_call_dict_value_19_1, tmp_kw_call_dict_value_20_1, tmp_kw_call_dict_value_21_1, tmp_kw_call_dict_value_22_1, tmp_kw_call_dict_value_23_1, tmp_kw_call_dict_value_24_1, tmp_kw_call_dict_value_25_1, tmp_kw_call_dict_value_26_1, tmp_kw_call_dict_value_27_1, tmp_kw_call_dict_value_28_1, tmp_kw_call_dict_value_29_1, tmp_kw_call_dict_value_30_1, tmp_kw_call_dict_value_31_1, tmp_kw_call_dict_value_32_1, tmp_kw_call_dict_value_33_1, tmp_kw_call_dict_value_34_1, tmp_kw_call_dict_value_35_1, tmp_kw_call_dict_value_36_1, tmp_kw_call_dict_value_37_1, tmp_kw_call_dict_value_38_1, tmp_kw_call_dict_value_39_1, tmp_kw_call_dict_value_40_1, tmp_kw_call_dict_value_41_1, tmp_kw_call_dict_value_42_1, tmp_kw_call_dict_value_43_1, tmp_kw_call_dict_value_44_1, tmp_kw_call_dict_value_45_1, tmp_kw_call_dict_value_46_1, tmp_kw_call_dict_value_47_1, tmp_kw_call_dict_value_48_1, tmp_kw_call_dict_value_49_1, tmp_kw_call_dict_value_50_1, tmp_kw_call_dict_value_51_1, tmp_kw_call_dict_value_52_1, tmp_kw_call_dict_value_53_1, tmp_kw_call_dict_value_54_1, tmp_kw_call_dict_value_55_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
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


            exception_lineno = 245;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_text_style);
        tmp_assattr_value_2 = par_text_style;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_keyboard_type);
        tmp_assattr_value_3 = par_keyboard_type;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_text_align);
        tmp_assattr_value_4 = par_text_align;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[6], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_multiline);
        tmp_assattr_value_5 = par_multiline;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_min_lines);
        tmp_assattr_value_6 = par_min_lines;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[8], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_max_lines);
        tmp_assattr_value_7 = par_max_lines;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[9], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_max_length);
        tmp_assattr_value_8 = par_max_length;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[10], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_read_only);
        tmp_assattr_value_9 = par_read_only;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[11], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_shift_enter);
        tmp_assattr_value_10 = par_shift_enter;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[12], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_password);
        tmp_assattr_value_11 = par_password;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[13], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(par_can_reveal_password);
        tmp_assattr_value_12 = par_can_reveal_password;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[14], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(par_autofocus);
        tmp_assattr_value_13 = par_autofocus;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[15], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        CHECK_OBJECT(par_capitalization);
        tmp_assattr_value_14 = par_capitalization;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[16], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT(par_cursor_color);
        tmp_assattr_value_15 = par_cursor_color;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[17], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        CHECK_OBJECT(par_cursor_height);
        tmp_assattr_value_16 = par_cursor_height;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[18], tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        CHECK_OBJECT(par_cursor_width);
        tmp_assattr_value_17 = par_cursor_width;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[19], tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        CHECK_OBJECT(par_cursor_radius);
        tmp_assattr_value_18 = par_cursor_radius;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_18 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[20], tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_assattr_target_19;
        CHECK_OBJECT(par_selection_color);
        tmp_assattr_value_19 = par_selection_color;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_19 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[21], tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_assattr_target_20;
        CHECK_OBJECT(par_on_change);
        tmp_assattr_value_20 = par_on_change;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_20 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_20, mod_consts[22], tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_assattr_target_21;
        CHECK_OBJECT(par_on_submit);
        tmp_assattr_value_21 = par_on_submit;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_21 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_21, mod_consts[23], tmp_assattr_value_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_assattr_target_22;
        CHECK_OBJECT(par_on_focus);
        tmp_assattr_value_22 = par_on_focus;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_22 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_22, mod_consts[24], tmp_assattr_value_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_assattr_target_23;
        CHECK_OBJECT(par_on_blur);
        tmp_assattr_value_23 = par_on_blur;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_23 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_23, mod_consts[25], tmp_assattr_value_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ddd52236778ca02ca54253a441f04b87, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ddd52236778ca02ca54253a441f04b87->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ddd52236778ca02ca54253a441f04b87, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ddd52236778ca02ca54253a441f04b87,
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
        par_keyboard_type,
        par_multiline,
        par_min_lines,
        par_max_lines,
        par_max_length,
        par_password,
        par_can_reveal_password,
        par_read_only,
        par_shift_enter,
        par_text_align,
        par_autofocus,
        par_capitalization,
        par_cursor_color,
        par_cursor_width,
        par_cursor_height,
        par_cursor_radius,
        par_selection_color,
        par_on_change,
        par_on_submit,
        par_on_focus,
        par_on_blur
    );


    // Release cached frame if used for exception.
    if (frame_ddd52236778ca02ca54253a441f04b87 == cache_frame_ddd52236778ca02ca54253a441f04b87) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ddd52236778ca02ca54253a441f04b87);
        cache_frame_ddd52236778ca02ca54253a441f04b87 = NULL;
    }

    assertFrameObject(frame_ddd52236778ca02ca54253a441f04b87);

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
    CHECK_OBJECT(par_keyboard_type);
    Py_DECREF(par_keyboard_type);
    CHECK_OBJECT(par_multiline);
    Py_DECREF(par_multiline);
    CHECK_OBJECT(par_min_lines);
    Py_DECREF(par_min_lines);
    CHECK_OBJECT(par_max_lines);
    Py_DECREF(par_max_lines);
    CHECK_OBJECT(par_max_length);
    Py_DECREF(par_max_length);
    CHECK_OBJECT(par_password);
    Py_DECREF(par_password);
    CHECK_OBJECT(par_can_reveal_password);
    Py_DECREF(par_can_reveal_password);
    CHECK_OBJECT(par_read_only);
    Py_DECREF(par_read_only);
    CHECK_OBJECT(par_shift_enter);
    Py_DECREF(par_shift_enter);
    CHECK_OBJECT(par_text_align);
    Py_DECREF(par_text_align);
    CHECK_OBJECT(par_autofocus);
    Py_DECREF(par_autofocus);
    CHECK_OBJECT(par_capitalization);
    Py_DECREF(par_capitalization);
    CHECK_OBJECT(par_cursor_color);
    Py_DECREF(par_cursor_color);
    CHECK_OBJECT(par_cursor_width);
    Py_DECREF(par_cursor_width);
    CHECK_OBJECT(par_cursor_height);
    Py_DECREF(par_cursor_height);
    CHECK_OBJECT(par_cursor_radius);
    Py_DECREF(par_cursor_radius);
    CHECK_OBJECT(par_selection_color);
    Py_DECREF(par_selection_color);
    CHECK_OBJECT(par_on_change);
    Py_DECREF(par_on_change);
    CHECK_OBJECT(par_on_submit);
    Py_DECREF(par_on_submit);
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
    CHECK_OBJECT(par_keyboard_type);
    Py_DECREF(par_keyboard_type);
    CHECK_OBJECT(par_multiline);
    Py_DECREF(par_multiline);
    CHECK_OBJECT(par_min_lines);
    Py_DECREF(par_min_lines);
    CHECK_OBJECT(par_max_lines);
    Py_DECREF(par_max_lines);
    CHECK_OBJECT(par_max_length);
    Py_DECREF(par_max_length);
    CHECK_OBJECT(par_password);
    Py_DECREF(par_password);
    CHECK_OBJECT(par_can_reveal_password);
    Py_DECREF(par_can_reveal_password);
    CHECK_OBJECT(par_read_only);
    Py_DECREF(par_read_only);
    CHECK_OBJECT(par_shift_enter);
    Py_DECREF(par_shift_enter);
    CHECK_OBJECT(par_text_align);
    Py_DECREF(par_text_align);
    CHECK_OBJECT(par_autofocus);
    Py_DECREF(par_autofocus);
    CHECK_OBJECT(par_capitalization);
    Py_DECREF(par_capitalization);
    CHECK_OBJECT(par_cursor_color);
    Py_DECREF(par_cursor_color);
    CHECK_OBJECT(par_cursor_width);
    Py_DECREF(par_cursor_width);
    CHECK_OBJECT(par_cursor_height);
    Py_DECREF(par_cursor_height);
    CHECK_OBJECT(par_cursor_radius);
    Py_DECREF(par_cursor_radius);
    CHECK_OBJECT(par_selection_color);
    Py_DECREF(par_selection_color);
    CHECK_OBJECT(par_on_change);
    Py_DECREF(par_on_change);
    CHECK_OBJECT(par_on_submit);
    Py_DECREF(par_on_submit);
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


static PyObject *impl_flet_core$textfield$$$function__3__before_build_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8ec606fb2ad84ee87a80743c6b36b6f6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_8ec606fb2ad84ee87a80743c6b36b6f6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8ec606fb2ad84ee87a80743c6b36b6f6)) {
        Py_XDECREF(cache_frame_8ec606fb2ad84ee87a80743c6b36b6f6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8ec606fb2ad84ee87a80743c6b36b6f6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8ec606fb2ad84ee87a80743c6b36b6f6 = MAKE_FUNCTION_FRAME(codeobj_8ec606fb2ad84ee87a80743c6b36b6f6, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8ec606fb2ad84ee87a80743c6b36b6f6->m_type_description == NULL);
    frame_8ec606fb2ad84ee87a80743c6b36b6f6 = cache_frame_8ec606fb2ad84ee87a80743c6b36b6f6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8ec606fb2ad84ee87a80743c6b36b6f6);
    assert(Py_REFCNT(frame_8ec606fb2ad84ee87a80743c6b36b6f6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 273;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_flet_core$textfield, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_8ec606fb2ad84ee87a80743c6b36b6f6->m_frame.f_lineno = 273;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[27]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[29]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[29], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8ec606fb2ad84ee87a80743c6b36b6f6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8ec606fb2ad84ee87a80743c6b36b6f6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8ec606fb2ad84ee87a80743c6b36b6f6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8ec606fb2ad84ee87a80743c6b36b6f6,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_8ec606fb2ad84ee87a80743c6b36b6f6 == cache_frame_8ec606fb2ad84ee87a80743c6b36b6f6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8ec606fb2ad84ee87a80743c6b36b6f6);
        cache_frame_8ec606fb2ad84ee87a80743c6b36b6f6 = NULL;
    }

    assertFrameObject(frame_8ec606fb2ad84ee87a80743c6b36b6f6);

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


static PyObject *impl_flet_core$textfield$$$function__4_focus(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_fe4f168f1aa85f8a2848059c0a886373;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fe4f168f1aa85f8a2848059c0a886373 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fe4f168f1aa85f8a2848059c0a886373)) {
        Py_XDECREF(cache_frame_fe4f168f1aa85f8a2848059c0a886373);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fe4f168f1aa85f8a2848059c0a886373 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fe4f168f1aa85f8a2848059c0a886373 = MAKE_FUNCTION_FRAME(codeobj_fe4f168f1aa85f8a2848059c0a886373, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fe4f168f1aa85f8a2848059c0a886373->m_type_description == NULL);
    frame_fe4f168f1aa85f8a2848059c0a886373 = cache_frame_fe4f168f1aa85f8a2848059c0a886373;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fe4f168f1aa85f8a2848059c0a886373);
    assert(Py_REFCNT(frame_fe4f168f1aa85f8a2848059c0a886373) == 2);

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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[31];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 278;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_fe4f168f1aa85f8a2848059c0a886373->m_frame.f_lineno = 278;
        tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[32]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 278;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 278;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_fe4f168f1aa85f8a2848059c0a886373->m_frame.f_lineno = 278;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
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
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[33]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_fe4f168f1aa85f8a2848059c0a886373->m_frame.f_lineno = 279;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
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
        exception_tb = MAKE_TRACEBACK(frame_fe4f168f1aa85f8a2848059c0a886373, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fe4f168f1aa85f8a2848059c0a886373->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fe4f168f1aa85f8a2848059c0a886373, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fe4f168f1aa85f8a2848059c0a886373,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_fe4f168f1aa85f8a2848059c0a886373 == cache_frame_fe4f168f1aa85f8a2848059c0a886373) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fe4f168f1aa85f8a2848059c0a886373);
        cache_frame_fe4f168f1aa85f8a2848059c0a886373 = NULL;
    }

    assertFrameObject(frame_fe4f168f1aa85f8a2848059c0a886373);

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


static PyObject *impl_flet_core$textfield$$$function__5_focus_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_flet_core$textfield$$$function__5_focus_async$$$coroutine__1_focus_async(tmp_closure_1);

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
struct flet_core$textfield$$$function__5_focus_async$$$coroutine__1_focus_async_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *flet_core$textfield$$$function__5_focus_async$$$coroutine__1_focus_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet_core$textfield$$$function__5_focus_async$$$coroutine__1_focus_async_locals *coroutine_heap = (struct flet_core$textfield$$$function__5_focus_async$$$coroutine__1_focus_async_locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_83fe156653f1ebae1ce22be79027567c, module_flet_core$textfield, sizeof(void *));
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

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[34]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 282;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 282;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[31];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 282;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 282;
        tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[32]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 282;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 282;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 282;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 282;
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
        coroutine->m_frame->m_frame.f_lineno = 283;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[34]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 283;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 283;
        tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[35]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 283;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = ASYNC_AWAIT(tmp_expression_value_3, await_normal);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 283;
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


            coroutine_heap->exception_lineno = 283;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 283;
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

static PyObject *MAKE_COROUTINE_flet_core$textfield$$$function__5_focus_async$$$coroutine__1_focus_async(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        flet_core$textfield$$$function__5_focus_async$$$coroutine__1_focus_async_context,
        module_flet_core$textfield,
        mod_consts[36],
        mod_consts[37],
        codeobj_83fe156653f1ebae1ce22be79027567c,
        closure,
        1,
#if 1
        sizeof(struct flet_core$textfield$$$function__5_focus_async$$$coroutine__1_focus_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$textfield$$$function__6_value(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0baef6d2caa4b4237b5c2954d9b24d86;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0baef6d2caa4b4237b5c2954d9b24d86 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0baef6d2caa4b4237b5c2954d9b24d86)) {
        Py_XDECREF(cache_frame_0baef6d2caa4b4237b5c2954d9b24d86);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0baef6d2caa4b4237b5c2954d9b24d86 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0baef6d2caa4b4237b5c2954d9b24d86 = MAKE_FUNCTION_FRAME(codeobj_0baef6d2caa4b4237b5c2954d9b24d86, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0baef6d2caa4b4237b5c2954d9b24d86->m_type_description == NULL);
    frame_0baef6d2caa4b4237b5c2954d9b24d86 = cache_frame_0baef6d2caa4b4237b5c2954d9b24d86;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0baef6d2caa4b4237b5c2954d9b24d86);
    assert(Py_REFCNT(frame_0baef6d2caa4b4237b5c2954d9b24d86) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0baef6d2caa4b4237b5c2954d9b24d86->m_frame.f_lineno = 288;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[39], 0), mod_consts[40]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
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
        exception_tb = MAKE_TRACEBACK(frame_0baef6d2caa4b4237b5c2954d9b24d86, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0baef6d2caa4b4237b5c2954d9b24d86->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0baef6d2caa4b4237b5c2954d9b24d86, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0baef6d2caa4b4237b5c2954d9b24d86,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0baef6d2caa4b4237b5c2954d9b24d86 == cache_frame_0baef6d2caa4b4237b5c2954d9b24d86) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0baef6d2caa4b4237b5c2954d9b24d86);
        cache_frame_0baef6d2caa4b4237b5c2954d9b24d86 = NULL;
    }

    assertFrameObject(frame_0baef6d2caa4b4237b5c2954d9b24d86);

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


static PyObject *impl_flet_core$textfield$$$function__7_value(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_90e593f062ba807912699f28c5be0ff0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_90e593f062ba807912699f28c5be0ff0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_90e593f062ba807912699f28c5be0ff0)) {
        Py_XDECREF(cache_frame_90e593f062ba807912699f28c5be0ff0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_90e593f062ba807912699f28c5be0ff0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_90e593f062ba807912699f28c5be0ff0 = MAKE_FUNCTION_FRAME(codeobj_90e593f062ba807912699f28c5be0ff0, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_90e593f062ba807912699f28c5be0ff0->m_type_description == NULL);
    frame_90e593f062ba807912699f28c5be0ff0 = cache_frame_90e593f062ba807912699f28c5be0ff0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_90e593f062ba807912699f28c5be0ff0);
    assert(Py_REFCNT(frame_90e593f062ba807912699f28c5be0ff0) == 2);

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
        frame_90e593f062ba807912699f28c5be0ff0->m_frame.f_lineno = 292;
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


            exception_lineno = 292;
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
        exception_tb = MAKE_TRACEBACK(frame_90e593f062ba807912699f28c5be0ff0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_90e593f062ba807912699f28c5be0ff0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_90e593f062ba807912699f28c5be0ff0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_90e593f062ba807912699f28c5be0ff0,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_90e593f062ba807912699f28c5be0ff0 == cache_frame_90e593f062ba807912699f28c5be0ff0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_90e593f062ba807912699f28c5be0ff0);
        cache_frame_90e593f062ba807912699f28c5be0ff0 = NULL;
    }

    assertFrameObject(frame_90e593f062ba807912699f28c5be0ff0);

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


static PyObject *impl_flet_core$textfield$$$function__8_keyboard_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f5d0903e98362386f012729dd902b2ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f5d0903e98362386f012729dd902b2ca = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f5d0903e98362386f012729dd902b2ca)) {
        Py_XDECREF(cache_frame_f5d0903e98362386f012729dd902b2ca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f5d0903e98362386f012729dd902b2ca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f5d0903e98362386f012729dd902b2ca = MAKE_FUNCTION_FRAME(codeobj_f5d0903e98362386f012729dd902b2ca, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f5d0903e98362386f012729dd902b2ca->m_type_description == NULL);
    frame_f5d0903e98362386f012729dd902b2ca = cache_frame_f5d0903e98362386f012729dd902b2ca;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f5d0903e98362386f012729dd902b2ca);
    assert(Py_REFCNT(frame_f5d0903e98362386f012729dd902b2ca) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[42]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
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
        exception_tb = MAKE_TRACEBACK(frame_f5d0903e98362386f012729dd902b2ca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f5d0903e98362386f012729dd902b2ca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f5d0903e98362386f012729dd902b2ca, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f5d0903e98362386f012729dd902b2ca,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f5d0903e98362386f012729dd902b2ca == cache_frame_f5d0903e98362386f012729dd902b2ca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f5d0903e98362386f012729dd902b2ca);
        cache_frame_f5d0903e98362386f012729dd902b2ca = NULL;
    }

    assertFrameObject(frame_f5d0903e98362386f012729dd902b2ca);

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


static PyObject *impl_flet_core$textfield$$$function__9_keyboard_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_e76989ce359171bf5c02b158093ad0dc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e76989ce359171bf5c02b158093ad0dc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e76989ce359171bf5c02b158093ad0dc)) {
        Py_XDECREF(cache_frame_e76989ce359171bf5c02b158093ad0dc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e76989ce359171bf5c02b158093ad0dc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e76989ce359171bf5c02b158093ad0dc = MAKE_FUNCTION_FRAME(codeobj_e76989ce359171bf5c02b158093ad0dc, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e76989ce359171bf5c02b158093ad0dc->m_type_description == NULL);
    frame_e76989ce359171bf5c02b158093ad0dc = cache_frame_e76989ce359171bf5c02b158093ad0dc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e76989ce359171bf5c02b158093ad0dc);
    assert(Py_REFCNT(frame_e76989ce359171bf5c02b158093ad0dc) == 2);

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


            exception_lineno = 301;
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
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[44];
        CHECK_OBJECT(par_value);
        tmp_expression_value_2 = par_value;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 303;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e76989ce359171bf5c02b158093ad0dc->m_frame.f_lineno = 303;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
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
        frame_e76989ce359171bf5c02b158093ad0dc->m_frame.f_lineno = 305;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[45], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
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
        exception_tb = MAKE_TRACEBACK(frame_e76989ce359171bf5c02b158093ad0dc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e76989ce359171bf5c02b158093ad0dc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e76989ce359171bf5c02b158093ad0dc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e76989ce359171bf5c02b158093ad0dc,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_e76989ce359171bf5c02b158093ad0dc == cache_frame_e76989ce359171bf5c02b158093ad0dc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e76989ce359171bf5c02b158093ad0dc);
        cache_frame_e76989ce359171bf5c02b158093ad0dc = NULL;
    }

    assertFrameObject(frame_e76989ce359171bf5c02b158093ad0dc);

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


static PyObject *impl_flet_core$textfield$$$function__10___set_keyboard_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_a2962a45bf0f994f7b35da936bafb7b6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a2962a45bf0f994f7b35da936bafb7b6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a2962a45bf0f994f7b35da936bafb7b6)) {
        Py_XDECREF(cache_frame_a2962a45bf0f994f7b35da936bafb7b6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a2962a45bf0f994f7b35da936bafb7b6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a2962a45bf0f994f7b35da936bafb7b6 = MAKE_FUNCTION_FRAME(codeobj_a2962a45bf0f994f7b35da936bafb7b6, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a2962a45bf0f994f7b35da936bafb7b6->m_type_description == NULL);
    frame_a2962a45bf0f994f7b35da936bafb7b6 = cache_frame_a2962a45bf0f994f7b35da936bafb7b6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a2962a45bf0f994f7b35da936bafb7b6);
    assert(Py_REFCNT(frame_a2962a45bf0f994f7b35da936bafb7b6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[44];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_a2962a45bf0f994f7b35da936bafb7b6->m_frame.f_lineno = 308;
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
        exception_tb = MAKE_TRACEBACK(frame_a2962a45bf0f994f7b35da936bafb7b6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a2962a45bf0f994f7b35da936bafb7b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a2962a45bf0f994f7b35da936bafb7b6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a2962a45bf0f994f7b35da936bafb7b6,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_a2962a45bf0f994f7b35da936bafb7b6 == cache_frame_a2962a45bf0f994f7b35da936bafb7b6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a2962a45bf0f994f7b35da936bafb7b6);
        cache_frame_a2962a45bf0f994f7b35da936bafb7b6 = NULL;
    }

    assertFrameObject(frame_a2962a45bf0f994f7b35da936bafb7b6);

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


static PyObject *impl_flet_core$textfield$$$function__11_text_align(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_18e70851bdbeeac896f02611e294f58f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_18e70851bdbeeac896f02611e294f58f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_18e70851bdbeeac896f02611e294f58f)) {
        Py_XDECREF(cache_frame_18e70851bdbeeac896f02611e294f58f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_18e70851bdbeeac896f02611e294f58f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_18e70851bdbeeac896f02611e294f58f = MAKE_FUNCTION_FRAME(codeobj_18e70851bdbeeac896f02611e294f58f, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_18e70851bdbeeac896f02611e294f58f->m_type_description == NULL);
    frame_18e70851bdbeeac896f02611e294f58f = cache_frame_18e70851bdbeeac896f02611e294f58f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_18e70851bdbeeac896f02611e294f58f);
    assert(Py_REFCNT(frame_18e70851bdbeeac896f02611e294f58f) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
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
        exception_tb = MAKE_TRACEBACK(frame_18e70851bdbeeac896f02611e294f58f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_18e70851bdbeeac896f02611e294f58f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18e70851bdbeeac896f02611e294f58f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_18e70851bdbeeac896f02611e294f58f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_18e70851bdbeeac896f02611e294f58f == cache_frame_18e70851bdbeeac896f02611e294f58f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_18e70851bdbeeac896f02611e294f58f);
        cache_frame_18e70851bdbeeac896f02611e294f58f = NULL;
    }

    assertFrameObject(frame_18e70851bdbeeac896f02611e294f58f);

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


static PyObject *impl_flet_core$textfield$$$function__12_text_align(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_cd05350b401326bfd4c9b4d8fa100729;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_cd05350b401326bfd4c9b4d8fa100729 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cd05350b401326bfd4c9b4d8fa100729)) {
        Py_XDECREF(cache_frame_cd05350b401326bfd4c9b4d8fa100729);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cd05350b401326bfd4c9b4d8fa100729 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cd05350b401326bfd4c9b4d8fa100729 = MAKE_FUNCTION_FRAME(codeobj_cd05350b401326bfd4c9b4d8fa100729, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cd05350b401326bfd4c9b4d8fa100729->m_type_description == NULL);
    frame_cd05350b401326bfd4c9b4d8fa100729 = cache_frame_cd05350b401326bfd4c9b4d8fa100729;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cd05350b401326bfd4c9b4d8fa100729);
    assert(Py_REFCNT(frame_cd05350b401326bfd4c9b4d8fa100729) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[46], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
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
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[48];
        CHECK_OBJECT(par_value);
        tmp_expression_value_2 = par_value;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 319;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_cd05350b401326bfd4c9b4d8fa100729->m_frame.f_lineno = 319;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
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
        frame_cd05350b401326bfd4c9b4d8fa100729->m_frame.f_lineno = 321;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[49], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
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
        exception_tb = MAKE_TRACEBACK(frame_cd05350b401326bfd4c9b4d8fa100729, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cd05350b401326bfd4c9b4d8fa100729->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cd05350b401326bfd4c9b4d8fa100729, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cd05350b401326bfd4c9b4d8fa100729,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_cd05350b401326bfd4c9b4d8fa100729 == cache_frame_cd05350b401326bfd4c9b4d8fa100729) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cd05350b401326bfd4c9b4d8fa100729);
        cache_frame_cd05350b401326bfd4c9b4d8fa100729 = NULL;
    }

    assertFrameObject(frame_cd05350b401326bfd4c9b4d8fa100729);

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


static PyObject *impl_flet_core$textfield$$$function__13___set_text_align(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_8ac8cffd9946fdce4517f77e36ab3f1a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8ac8cffd9946fdce4517f77e36ab3f1a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8ac8cffd9946fdce4517f77e36ab3f1a)) {
        Py_XDECREF(cache_frame_8ac8cffd9946fdce4517f77e36ab3f1a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8ac8cffd9946fdce4517f77e36ab3f1a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8ac8cffd9946fdce4517f77e36ab3f1a = MAKE_FUNCTION_FRAME(codeobj_8ac8cffd9946fdce4517f77e36ab3f1a, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8ac8cffd9946fdce4517f77e36ab3f1a->m_type_description == NULL);
    frame_8ac8cffd9946fdce4517f77e36ab3f1a = cache_frame_8ac8cffd9946fdce4517f77e36ab3f1a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8ac8cffd9946fdce4517f77e36ab3f1a);
    assert(Py_REFCNT(frame_8ac8cffd9946fdce4517f77e36ab3f1a) == 2);

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
        frame_8ac8cffd9946fdce4517f77e36ab3f1a->m_frame.f_lineno = 324;
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


            exception_lineno = 324;
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
        exception_tb = MAKE_TRACEBACK(frame_8ac8cffd9946fdce4517f77e36ab3f1a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8ac8cffd9946fdce4517f77e36ab3f1a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8ac8cffd9946fdce4517f77e36ab3f1a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8ac8cffd9946fdce4517f77e36ab3f1a,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_8ac8cffd9946fdce4517f77e36ab3f1a == cache_frame_8ac8cffd9946fdce4517f77e36ab3f1a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8ac8cffd9946fdce4517f77e36ab3f1a);
        cache_frame_8ac8cffd9946fdce4517f77e36ab3f1a = NULL;
    }

    assertFrameObject(frame_8ac8cffd9946fdce4517f77e36ab3f1a);

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


static PyObject *impl_flet_core$textfield$$$function__14_multiline(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9a103a505c8641038a865963423e713f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9a103a505c8641038a865963423e713f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9a103a505c8641038a865963423e713f)) {
        Py_XDECREF(cache_frame_9a103a505c8641038a865963423e713f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9a103a505c8641038a865963423e713f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9a103a505c8641038a865963423e713f = MAKE_FUNCTION_FRAME(codeobj_9a103a505c8641038a865963423e713f, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9a103a505c8641038a865963423e713f->m_type_description == NULL);
    frame_9a103a505c8641038a865963423e713f = cache_frame_9a103a505c8641038a865963423e713f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9a103a505c8641038a865963423e713f);
    assert(Py_REFCNT(frame_9a103a505c8641038a865963423e713f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_9a103a505c8641038a865963423e713f->m_frame.f_lineno = 329;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[50], 0), mod_consts[51]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
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
        exception_tb = MAKE_TRACEBACK(frame_9a103a505c8641038a865963423e713f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9a103a505c8641038a865963423e713f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9a103a505c8641038a865963423e713f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9a103a505c8641038a865963423e713f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9a103a505c8641038a865963423e713f == cache_frame_9a103a505c8641038a865963423e713f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9a103a505c8641038a865963423e713f);
        cache_frame_9a103a505c8641038a865963423e713f = NULL;
    }

    assertFrameObject(frame_9a103a505c8641038a865963423e713f);

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


static PyObject *impl_flet_core$textfield$$$function__15_multiline(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_093c7909b39b5e65d8c4961d6925c1c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_093c7909b39b5e65d8c4961d6925c1c0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_093c7909b39b5e65d8c4961d6925c1c0)) {
        Py_XDECREF(cache_frame_093c7909b39b5e65d8c4961d6925c1c0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_093c7909b39b5e65d8c4961d6925c1c0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_093c7909b39b5e65d8c4961d6925c1c0 = MAKE_FUNCTION_FRAME(codeobj_093c7909b39b5e65d8c4961d6925c1c0, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_093c7909b39b5e65d8c4961d6925c1c0->m_type_description == NULL);
    frame_093c7909b39b5e65d8c4961d6925c1c0 = cache_frame_093c7909b39b5e65d8c4961d6925c1c0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_093c7909b39b5e65d8c4961d6925c1c0);
    assert(Py_REFCNT(frame_093c7909b39b5e65d8c4961d6925c1c0) == 2);

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
        frame_093c7909b39b5e65d8c4961d6925c1c0->m_frame.f_lineno = 333;
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


            exception_lineno = 333;
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
        exception_tb = MAKE_TRACEBACK(frame_093c7909b39b5e65d8c4961d6925c1c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_093c7909b39b5e65d8c4961d6925c1c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_093c7909b39b5e65d8c4961d6925c1c0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_093c7909b39b5e65d8c4961d6925c1c0,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_093c7909b39b5e65d8c4961d6925c1c0 == cache_frame_093c7909b39b5e65d8c4961d6925c1c0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_093c7909b39b5e65d8c4961d6925c1c0);
        cache_frame_093c7909b39b5e65d8c4961d6925c1c0 = NULL;
    }

    assertFrameObject(frame_093c7909b39b5e65d8c4961d6925c1c0);

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


static PyObject *impl_flet_core$textfield$$$function__16_min_lines(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4afa7d7d696a109efca62dbb1b773474;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4afa7d7d696a109efca62dbb1b773474 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4afa7d7d696a109efca62dbb1b773474)) {
        Py_XDECREF(cache_frame_4afa7d7d696a109efca62dbb1b773474);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4afa7d7d696a109efca62dbb1b773474 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4afa7d7d696a109efca62dbb1b773474 = MAKE_FUNCTION_FRAME(codeobj_4afa7d7d696a109efca62dbb1b773474, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4afa7d7d696a109efca62dbb1b773474->m_type_description == NULL);
    frame_4afa7d7d696a109efca62dbb1b773474 = cache_frame_4afa7d7d696a109efca62dbb1b773474;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4afa7d7d696a109efca62dbb1b773474);
    assert(Py_REFCNT(frame_4afa7d7d696a109efca62dbb1b773474) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_4afa7d7d696a109efca62dbb1b773474->m_frame.f_lineno = 338;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[38],
            PyTuple_GET_ITEM(mod_consts[52], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
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
        exception_tb = MAKE_TRACEBACK(frame_4afa7d7d696a109efca62dbb1b773474, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4afa7d7d696a109efca62dbb1b773474->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4afa7d7d696a109efca62dbb1b773474, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4afa7d7d696a109efca62dbb1b773474,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4afa7d7d696a109efca62dbb1b773474 == cache_frame_4afa7d7d696a109efca62dbb1b773474) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4afa7d7d696a109efca62dbb1b773474);
        cache_frame_4afa7d7d696a109efca62dbb1b773474 = NULL;
    }

    assertFrameObject(frame_4afa7d7d696a109efca62dbb1b773474);

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


static PyObject *impl_flet_core$textfield$$$function__17_min_lines(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_43964fc2afd699d544d8416ce341b6e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_43964fc2afd699d544d8416ce341b6e5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_43964fc2afd699d544d8416ce341b6e5)) {
        Py_XDECREF(cache_frame_43964fc2afd699d544d8416ce341b6e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_43964fc2afd699d544d8416ce341b6e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_43964fc2afd699d544d8416ce341b6e5 = MAKE_FUNCTION_FRAME(codeobj_43964fc2afd699d544d8416ce341b6e5, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_43964fc2afd699d544d8416ce341b6e5->m_type_description == NULL);
    frame_43964fc2afd699d544d8416ce341b6e5 = cache_frame_43964fc2afd699d544d8416ce341b6e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_43964fc2afd699d544d8416ce341b6e5);
    assert(Py_REFCNT(frame_43964fc2afd699d544d8416ce341b6e5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[53];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_43964fc2afd699d544d8416ce341b6e5->m_frame.f_lineno = 342;
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


            exception_lineno = 342;
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
        exception_tb = MAKE_TRACEBACK(frame_43964fc2afd699d544d8416ce341b6e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_43964fc2afd699d544d8416ce341b6e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_43964fc2afd699d544d8416ce341b6e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_43964fc2afd699d544d8416ce341b6e5,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_43964fc2afd699d544d8416ce341b6e5 == cache_frame_43964fc2afd699d544d8416ce341b6e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_43964fc2afd699d544d8416ce341b6e5);
        cache_frame_43964fc2afd699d544d8416ce341b6e5 = NULL;
    }

    assertFrameObject(frame_43964fc2afd699d544d8416ce341b6e5);

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


static PyObject *impl_flet_core$textfield$$$function__18_max_lines(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_93d80a32870d84be4e0c30a1fece61fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_93d80a32870d84be4e0c30a1fece61fc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_93d80a32870d84be4e0c30a1fece61fc)) {
        Py_XDECREF(cache_frame_93d80a32870d84be4e0c30a1fece61fc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_93d80a32870d84be4e0c30a1fece61fc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_93d80a32870d84be4e0c30a1fece61fc = MAKE_FUNCTION_FRAME(codeobj_93d80a32870d84be4e0c30a1fece61fc, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_93d80a32870d84be4e0c30a1fece61fc->m_type_description == NULL);
    frame_93d80a32870d84be4e0c30a1fece61fc = cache_frame_93d80a32870d84be4e0c30a1fece61fc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_93d80a32870d84be4e0c30a1fece61fc);
    assert(Py_REFCNT(frame_93d80a32870d84be4e0c30a1fece61fc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_93d80a32870d84be4e0c30a1fece61fc->m_frame.f_lineno = 347;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[38],
            PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
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
        exception_tb = MAKE_TRACEBACK(frame_93d80a32870d84be4e0c30a1fece61fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_93d80a32870d84be4e0c30a1fece61fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_93d80a32870d84be4e0c30a1fece61fc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_93d80a32870d84be4e0c30a1fece61fc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_93d80a32870d84be4e0c30a1fece61fc == cache_frame_93d80a32870d84be4e0c30a1fece61fc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_93d80a32870d84be4e0c30a1fece61fc);
        cache_frame_93d80a32870d84be4e0c30a1fece61fc = NULL;
    }

    assertFrameObject(frame_93d80a32870d84be4e0c30a1fece61fc);

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


static PyObject *impl_flet_core$textfield$$$function__19_max_lines(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_f1fc8fb994db2813f6cbbb4cf5c44121;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f1fc8fb994db2813f6cbbb4cf5c44121 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f1fc8fb994db2813f6cbbb4cf5c44121)) {
        Py_XDECREF(cache_frame_f1fc8fb994db2813f6cbbb4cf5c44121);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f1fc8fb994db2813f6cbbb4cf5c44121 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f1fc8fb994db2813f6cbbb4cf5c44121 = MAKE_FUNCTION_FRAME(codeobj_f1fc8fb994db2813f6cbbb4cf5c44121, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f1fc8fb994db2813f6cbbb4cf5c44121->m_type_description == NULL);
    frame_f1fc8fb994db2813f6cbbb4cf5c44121 = cache_frame_f1fc8fb994db2813f6cbbb4cf5c44121;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f1fc8fb994db2813f6cbbb4cf5c44121);
    assert(Py_REFCNT(frame_f1fc8fb994db2813f6cbbb4cf5c44121) == 2);

    // Framed code:
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
        frame_f1fc8fb994db2813f6cbbb4cf5c44121->m_frame.f_lineno = 351;
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


            exception_lineno = 351;
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
        exception_tb = MAKE_TRACEBACK(frame_f1fc8fb994db2813f6cbbb4cf5c44121, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f1fc8fb994db2813f6cbbb4cf5c44121->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f1fc8fb994db2813f6cbbb4cf5c44121, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f1fc8fb994db2813f6cbbb4cf5c44121,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_f1fc8fb994db2813f6cbbb4cf5c44121 == cache_frame_f1fc8fb994db2813f6cbbb4cf5c44121) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f1fc8fb994db2813f6cbbb4cf5c44121);
        cache_frame_f1fc8fb994db2813f6cbbb4cf5c44121 = NULL;
    }

    assertFrameObject(frame_f1fc8fb994db2813f6cbbb4cf5c44121);

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


static PyObject *impl_flet_core$textfield$$$function__20_max_length(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_59f4192d740f80b3ef4d4c9a78a2059d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_59f4192d740f80b3ef4d4c9a78a2059d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_59f4192d740f80b3ef4d4c9a78a2059d)) {
        Py_XDECREF(cache_frame_59f4192d740f80b3ef4d4c9a78a2059d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_59f4192d740f80b3ef4d4c9a78a2059d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_59f4192d740f80b3ef4d4c9a78a2059d = MAKE_FUNCTION_FRAME(codeobj_59f4192d740f80b3ef4d4c9a78a2059d, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_59f4192d740f80b3ef4d4c9a78a2059d->m_type_description == NULL);
    frame_59f4192d740f80b3ef4d4c9a78a2059d = cache_frame_59f4192d740f80b3ef4d4c9a78a2059d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_59f4192d740f80b3ef4d4c9a78a2059d);
    assert(Py_REFCNT(frame_59f4192d740f80b3ef4d4c9a78a2059d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_59f4192d740f80b3ef4d4c9a78a2059d->m_frame.f_lineno = 356;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[38],
            PyTuple_GET_ITEM(mod_consts[56], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
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
        exception_tb = MAKE_TRACEBACK(frame_59f4192d740f80b3ef4d4c9a78a2059d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_59f4192d740f80b3ef4d4c9a78a2059d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_59f4192d740f80b3ef4d4c9a78a2059d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_59f4192d740f80b3ef4d4c9a78a2059d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_59f4192d740f80b3ef4d4c9a78a2059d == cache_frame_59f4192d740f80b3ef4d4c9a78a2059d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_59f4192d740f80b3ef4d4c9a78a2059d);
        cache_frame_59f4192d740f80b3ef4d4c9a78a2059d = NULL;
    }

    assertFrameObject(frame_59f4192d740f80b3ef4d4c9a78a2059d);

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


static PyObject *impl_flet_core$textfield$$$function__21_max_length(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_07e672ae2fc16ae26409c6dad3dfc4b6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_07e672ae2fc16ae26409c6dad3dfc4b6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_07e672ae2fc16ae26409c6dad3dfc4b6)) {
        Py_XDECREF(cache_frame_07e672ae2fc16ae26409c6dad3dfc4b6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_07e672ae2fc16ae26409c6dad3dfc4b6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_07e672ae2fc16ae26409c6dad3dfc4b6 = MAKE_FUNCTION_FRAME(codeobj_07e672ae2fc16ae26409c6dad3dfc4b6, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_07e672ae2fc16ae26409c6dad3dfc4b6->m_type_description == NULL);
    frame_07e672ae2fc16ae26409c6dad3dfc4b6 = cache_frame_07e672ae2fc16ae26409c6dad3dfc4b6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_07e672ae2fc16ae26409c6dad3dfc4b6);
    assert(Py_REFCNT(frame_07e672ae2fc16ae26409c6dad3dfc4b6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[57];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_07e672ae2fc16ae26409c6dad3dfc4b6->m_frame.f_lineno = 360;
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


            exception_lineno = 360;
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
        exception_tb = MAKE_TRACEBACK(frame_07e672ae2fc16ae26409c6dad3dfc4b6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_07e672ae2fc16ae26409c6dad3dfc4b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_07e672ae2fc16ae26409c6dad3dfc4b6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_07e672ae2fc16ae26409c6dad3dfc4b6,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_07e672ae2fc16ae26409c6dad3dfc4b6 == cache_frame_07e672ae2fc16ae26409c6dad3dfc4b6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_07e672ae2fc16ae26409c6dad3dfc4b6);
        cache_frame_07e672ae2fc16ae26409c6dad3dfc4b6 = NULL;
    }

    assertFrameObject(frame_07e672ae2fc16ae26409c6dad3dfc4b6);

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


static PyObject *impl_flet_core$textfield$$$function__22_read_only(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e967dabde38427606e93f9809f02e273;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e967dabde38427606e93f9809f02e273 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e967dabde38427606e93f9809f02e273)) {
        Py_XDECREF(cache_frame_e967dabde38427606e93f9809f02e273);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e967dabde38427606e93f9809f02e273 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e967dabde38427606e93f9809f02e273 = MAKE_FUNCTION_FRAME(codeobj_e967dabde38427606e93f9809f02e273, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e967dabde38427606e93f9809f02e273->m_type_description == NULL);
    frame_e967dabde38427606e93f9809f02e273 = cache_frame_e967dabde38427606e93f9809f02e273;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e967dabde38427606e93f9809f02e273);
    assert(Py_REFCNT(frame_e967dabde38427606e93f9809f02e273) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e967dabde38427606e93f9809f02e273->m_frame.f_lineno = 365;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[58], 0), mod_consts[51]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
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
        exception_tb = MAKE_TRACEBACK(frame_e967dabde38427606e93f9809f02e273, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e967dabde38427606e93f9809f02e273->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e967dabde38427606e93f9809f02e273, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e967dabde38427606e93f9809f02e273,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e967dabde38427606e93f9809f02e273 == cache_frame_e967dabde38427606e93f9809f02e273) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e967dabde38427606e93f9809f02e273);
        cache_frame_e967dabde38427606e93f9809f02e273 = NULL;
    }

    assertFrameObject(frame_e967dabde38427606e93f9809f02e273);

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


static PyObject *impl_flet_core$textfield$$$function__23_read_only(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_b3ded0d8966bbd8a43a7e879937d1e70;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b3ded0d8966bbd8a43a7e879937d1e70 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b3ded0d8966bbd8a43a7e879937d1e70)) {
        Py_XDECREF(cache_frame_b3ded0d8966bbd8a43a7e879937d1e70);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b3ded0d8966bbd8a43a7e879937d1e70 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b3ded0d8966bbd8a43a7e879937d1e70 = MAKE_FUNCTION_FRAME(codeobj_b3ded0d8966bbd8a43a7e879937d1e70, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b3ded0d8966bbd8a43a7e879937d1e70->m_type_description == NULL);
    frame_b3ded0d8966bbd8a43a7e879937d1e70 = cache_frame_b3ded0d8966bbd8a43a7e879937d1e70;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b3ded0d8966bbd8a43a7e879937d1e70);
    assert(Py_REFCNT(frame_b3ded0d8966bbd8a43a7e879937d1e70) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[59];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_b3ded0d8966bbd8a43a7e879937d1e70->m_frame.f_lineno = 369;
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


            exception_lineno = 369;
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
        exception_tb = MAKE_TRACEBACK(frame_b3ded0d8966bbd8a43a7e879937d1e70, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b3ded0d8966bbd8a43a7e879937d1e70->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b3ded0d8966bbd8a43a7e879937d1e70, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b3ded0d8966bbd8a43a7e879937d1e70,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_b3ded0d8966bbd8a43a7e879937d1e70 == cache_frame_b3ded0d8966bbd8a43a7e879937d1e70) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b3ded0d8966bbd8a43a7e879937d1e70);
        cache_frame_b3ded0d8966bbd8a43a7e879937d1e70 = NULL;
    }

    assertFrameObject(frame_b3ded0d8966bbd8a43a7e879937d1e70);

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


static PyObject *impl_flet_core$textfield$$$function__24_shift_enter(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ef9a29374886c7a1dd0661886a10986d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ef9a29374886c7a1dd0661886a10986d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ef9a29374886c7a1dd0661886a10986d)) {
        Py_XDECREF(cache_frame_ef9a29374886c7a1dd0661886a10986d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ef9a29374886c7a1dd0661886a10986d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ef9a29374886c7a1dd0661886a10986d = MAKE_FUNCTION_FRAME(codeobj_ef9a29374886c7a1dd0661886a10986d, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ef9a29374886c7a1dd0661886a10986d->m_type_description == NULL);
    frame_ef9a29374886c7a1dd0661886a10986d = cache_frame_ef9a29374886c7a1dd0661886a10986d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ef9a29374886c7a1dd0661886a10986d);
    assert(Py_REFCNT(frame_ef9a29374886c7a1dd0661886a10986d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ef9a29374886c7a1dd0661886a10986d->m_frame.f_lineno = 374;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[60], 0), mod_consts[51]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
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
        exception_tb = MAKE_TRACEBACK(frame_ef9a29374886c7a1dd0661886a10986d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef9a29374886c7a1dd0661886a10986d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef9a29374886c7a1dd0661886a10986d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ef9a29374886c7a1dd0661886a10986d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ef9a29374886c7a1dd0661886a10986d == cache_frame_ef9a29374886c7a1dd0661886a10986d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ef9a29374886c7a1dd0661886a10986d);
        cache_frame_ef9a29374886c7a1dd0661886a10986d = NULL;
    }

    assertFrameObject(frame_ef9a29374886c7a1dd0661886a10986d);

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


static PyObject *impl_flet_core$textfield$$$function__25_shift_enter(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c)) {
        Py_XDECREF(cache_frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c = MAKE_FUNCTION_FRAME(codeobj_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c->m_type_description == NULL);
    frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c = cache_frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c);
    assert(Py_REFCNT(frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[61];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c->m_frame.f_lineno = 378;
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


            exception_lineno = 378;
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
        exception_tb = MAKE_TRACEBACK(frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c == cache_frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c);
        cache_frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c = NULL;
    }

    assertFrameObject(frame_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c);

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


static PyObject *impl_flet_core$textfield$$$function__26_password(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3eebd4ebae48bd821adb8d9519cd6e8e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3eebd4ebae48bd821adb8d9519cd6e8e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3eebd4ebae48bd821adb8d9519cd6e8e)) {
        Py_XDECREF(cache_frame_3eebd4ebae48bd821adb8d9519cd6e8e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3eebd4ebae48bd821adb8d9519cd6e8e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3eebd4ebae48bd821adb8d9519cd6e8e = MAKE_FUNCTION_FRAME(codeobj_3eebd4ebae48bd821adb8d9519cd6e8e, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3eebd4ebae48bd821adb8d9519cd6e8e->m_type_description == NULL);
    frame_3eebd4ebae48bd821adb8d9519cd6e8e = cache_frame_3eebd4ebae48bd821adb8d9519cd6e8e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3eebd4ebae48bd821adb8d9519cd6e8e);
    assert(Py_REFCNT(frame_3eebd4ebae48bd821adb8d9519cd6e8e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3eebd4ebae48bd821adb8d9519cd6e8e->m_frame.f_lineno = 383;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[62], 0), mod_consts[51]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
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
        exception_tb = MAKE_TRACEBACK(frame_3eebd4ebae48bd821adb8d9519cd6e8e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3eebd4ebae48bd821adb8d9519cd6e8e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3eebd4ebae48bd821adb8d9519cd6e8e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3eebd4ebae48bd821adb8d9519cd6e8e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3eebd4ebae48bd821adb8d9519cd6e8e == cache_frame_3eebd4ebae48bd821adb8d9519cd6e8e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3eebd4ebae48bd821adb8d9519cd6e8e);
        cache_frame_3eebd4ebae48bd821adb8d9519cd6e8e = NULL;
    }

    assertFrameObject(frame_3eebd4ebae48bd821adb8d9519cd6e8e);

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


static PyObject *impl_flet_core$textfield$$$function__27_password(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_0159107ba530b839e346c8e5f73a590d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0159107ba530b839e346c8e5f73a590d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0159107ba530b839e346c8e5f73a590d)) {
        Py_XDECREF(cache_frame_0159107ba530b839e346c8e5f73a590d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0159107ba530b839e346c8e5f73a590d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0159107ba530b839e346c8e5f73a590d = MAKE_FUNCTION_FRAME(codeobj_0159107ba530b839e346c8e5f73a590d, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0159107ba530b839e346c8e5f73a590d->m_type_description == NULL);
    frame_0159107ba530b839e346c8e5f73a590d = cache_frame_0159107ba530b839e346c8e5f73a590d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0159107ba530b839e346c8e5f73a590d);
    assert(Py_REFCNT(frame_0159107ba530b839e346c8e5f73a590d) == 2);

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
        frame_0159107ba530b839e346c8e5f73a590d->m_frame.f_lineno = 387;
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


            exception_lineno = 387;
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
        exception_tb = MAKE_TRACEBACK(frame_0159107ba530b839e346c8e5f73a590d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0159107ba530b839e346c8e5f73a590d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0159107ba530b839e346c8e5f73a590d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0159107ba530b839e346c8e5f73a590d,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_0159107ba530b839e346c8e5f73a590d == cache_frame_0159107ba530b839e346c8e5f73a590d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0159107ba530b839e346c8e5f73a590d);
        cache_frame_0159107ba530b839e346c8e5f73a590d = NULL;
    }

    assertFrameObject(frame_0159107ba530b839e346c8e5f73a590d);

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


static PyObject *impl_flet_core$textfield$$$function__28_can_reveal_password(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9a54718546698e897732538ded6e6918;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9a54718546698e897732538ded6e6918 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9a54718546698e897732538ded6e6918)) {
        Py_XDECREF(cache_frame_9a54718546698e897732538ded6e6918);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9a54718546698e897732538ded6e6918 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9a54718546698e897732538ded6e6918 = MAKE_FUNCTION_FRAME(codeobj_9a54718546698e897732538ded6e6918, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9a54718546698e897732538ded6e6918->m_type_description == NULL);
    frame_9a54718546698e897732538ded6e6918 = cache_frame_9a54718546698e897732538ded6e6918;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9a54718546698e897732538ded6e6918);
    assert(Py_REFCNT(frame_9a54718546698e897732538ded6e6918) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_9a54718546698e897732538ded6e6918->m_frame.f_lineno = 392;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[51]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
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
        exception_tb = MAKE_TRACEBACK(frame_9a54718546698e897732538ded6e6918, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9a54718546698e897732538ded6e6918->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9a54718546698e897732538ded6e6918, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9a54718546698e897732538ded6e6918,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9a54718546698e897732538ded6e6918 == cache_frame_9a54718546698e897732538ded6e6918) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9a54718546698e897732538ded6e6918);
        cache_frame_9a54718546698e897732538ded6e6918 = NULL;
    }

    assertFrameObject(frame_9a54718546698e897732538ded6e6918);

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


static PyObject *impl_flet_core$textfield$$$function__29_can_reveal_password(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_f07c3b65b6fdd2f1078216ca1af2757f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f07c3b65b6fdd2f1078216ca1af2757f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f07c3b65b6fdd2f1078216ca1af2757f)) {
        Py_XDECREF(cache_frame_f07c3b65b6fdd2f1078216ca1af2757f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f07c3b65b6fdd2f1078216ca1af2757f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f07c3b65b6fdd2f1078216ca1af2757f = MAKE_FUNCTION_FRAME(codeobj_f07c3b65b6fdd2f1078216ca1af2757f, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f07c3b65b6fdd2f1078216ca1af2757f->m_type_description == NULL);
    frame_f07c3b65b6fdd2f1078216ca1af2757f = cache_frame_f07c3b65b6fdd2f1078216ca1af2757f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f07c3b65b6fdd2f1078216ca1af2757f);
    assert(Py_REFCNT(frame_f07c3b65b6fdd2f1078216ca1af2757f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[64];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_f07c3b65b6fdd2f1078216ca1af2757f->m_frame.f_lineno = 396;
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


            exception_lineno = 396;
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
        exception_tb = MAKE_TRACEBACK(frame_f07c3b65b6fdd2f1078216ca1af2757f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f07c3b65b6fdd2f1078216ca1af2757f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f07c3b65b6fdd2f1078216ca1af2757f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f07c3b65b6fdd2f1078216ca1af2757f,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_f07c3b65b6fdd2f1078216ca1af2757f == cache_frame_f07c3b65b6fdd2f1078216ca1af2757f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f07c3b65b6fdd2f1078216ca1af2757f);
        cache_frame_f07c3b65b6fdd2f1078216ca1af2757f = NULL;
    }

    assertFrameObject(frame_f07c3b65b6fdd2f1078216ca1af2757f);

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


static PyObject *impl_flet_core$textfield$$$function__30_autofocus(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7618ce78373378e93e47b04c259e44df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7618ce78373378e93e47b04c259e44df = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7618ce78373378e93e47b04c259e44df)) {
        Py_XDECREF(cache_frame_7618ce78373378e93e47b04c259e44df);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7618ce78373378e93e47b04c259e44df == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7618ce78373378e93e47b04c259e44df = MAKE_FUNCTION_FRAME(codeobj_7618ce78373378e93e47b04c259e44df, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7618ce78373378e93e47b04c259e44df->m_type_description == NULL);
    frame_7618ce78373378e93e47b04c259e44df = cache_frame_7618ce78373378e93e47b04c259e44df;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7618ce78373378e93e47b04c259e44df);
    assert(Py_REFCNT(frame_7618ce78373378e93e47b04c259e44df) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7618ce78373378e93e47b04c259e44df->m_frame.f_lineno = 401;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[65], 0), mod_consts[51]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
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
        exception_tb = MAKE_TRACEBACK(frame_7618ce78373378e93e47b04c259e44df, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7618ce78373378e93e47b04c259e44df->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7618ce78373378e93e47b04c259e44df, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7618ce78373378e93e47b04c259e44df,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7618ce78373378e93e47b04c259e44df == cache_frame_7618ce78373378e93e47b04c259e44df) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7618ce78373378e93e47b04c259e44df);
        cache_frame_7618ce78373378e93e47b04c259e44df = NULL;
    }

    assertFrameObject(frame_7618ce78373378e93e47b04c259e44df);

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


static PyObject *impl_flet_core$textfield$$$function__31_autofocus(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_9873058b678dde8a49f37aa773b879f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9873058b678dde8a49f37aa773b879f4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9873058b678dde8a49f37aa773b879f4)) {
        Py_XDECREF(cache_frame_9873058b678dde8a49f37aa773b879f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9873058b678dde8a49f37aa773b879f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9873058b678dde8a49f37aa773b879f4 = MAKE_FUNCTION_FRAME(codeobj_9873058b678dde8a49f37aa773b879f4, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9873058b678dde8a49f37aa773b879f4->m_type_description == NULL);
    frame_9873058b678dde8a49f37aa773b879f4 = cache_frame_9873058b678dde8a49f37aa773b879f4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9873058b678dde8a49f37aa773b879f4);
    assert(Py_REFCNT(frame_9873058b678dde8a49f37aa773b879f4) == 2);

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
        frame_9873058b678dde8a49f37aa773b879f4->m_frame.f_lineno = 405;
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


            exception_lineno = 405;
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
        exception_tb = MAKE_TRACEBACK(frame_9873058b678dde8a49f37aa773b879f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9873058b678dde8a49f37aa773b879f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9873058b678dde8a49f37aa773b879f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9873058b678dde8a49f37aa773b879f4,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_9873058b678dde8a49f37aa773b879f4 == cache_frame_9873058b678dde8a49f37aa773b879f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9873058b678dde8a49f37aa773b879f4);
        cache_frame_9873058b678dde8a49f37aa773b879f4 = NULL;
    }

    assertFrameObject(frame_9873058b678dde8a49f37aa773b879f4);

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


static PyObject *impl_flet_core$textfield$$$function__32_capitalization(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_69cb71883f10b2c39eecad784bb469ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_69cb71883f10b2c39eecad784bb469ea = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_69cb71883f10b2c39eecad784bb469ea)) {
        Py_XDECREF(cache_frame_69cb71883f10b2c39eecad784bb469ea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_69cb71883f10b2c39eecad784bb469ea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_69cb71883f10b2c39eecad784bb469ea = MAKE_FUNCTION_FRAME(codeobj_69cb71883f10b2c39eecad784bb469ea, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_69cb71883f10b2c39eecad784bb469ea->m_type_description == NULL);
    frame_69cb71883f10b2c39eecad784bb469ea = cache_frame_69cb71883f10b2c39eecad784bb469ea;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_69cb71883f10b2c39eecad784bb469ea);
    assert(Py_REFCNT(frame_69cb71883f10b2c39eecad784bb469ea) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[66]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
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
        exception_tb = MAKE_TRACEBACK(frame_69cb71883f10b2c39eecad784bb469ea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_69cb71883f10b2c39eecad784bb469ea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_69cb71883f10b2c39eecad784bb469ea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_69cb71883f10b2c39eecad784bb469ea,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_69cb71883f10b2c39eecad784bb469ea == cache_frame_69cb71883f10b2c39eecad784bb469ea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_69cb71883f10b2c39eecad784bb469ea);
        cache_frame_69cb71883f10b2c39eecad784bb469ea = NULL;
    }

    assertFrameObject(frame_69cb71883f10b2c39eecad784bb469ea);

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


static PyObject *impl_flet_core$textfield$$$function__33_capitalization(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_d46ae9e4deb97d933df1becdad13ad15;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_d46ae9e4deb97d933df1becdad13ad15 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d46ae9e4deb97d933df1becdad13ad15)) {
        Py_XDECREF(cache_frame_d46ae9e4deb97d933df1becdad13ad15);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d46ae9e4deb97d933df1becdad13ad15 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d46ae9e4deb97d933df1becdad13ad15 = MAKE_FUNCTION_FRAME(codeobj_d46ae9e4deb97d933df1becdad13ad15, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d46ae9e4deb97d933df1becdad13ad15->m_type_description == NULL);
    frame_d46ae9e4deb97d933df1becdad13ad15 = cache_frame_d46ae9e4deb97d933df1becdad13ad15;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d46ae9e4deb97d933df1becdad13ad15);
    assert(Py_REFCNT(frame_d46ae9e4deb97d933df1becdad13ad15) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[66], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
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
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[16];
        CHECK_OBJECT(par_value);
        tmp_expression_value_2 = par_value;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 416;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d46ae9e4deb97d933df1becdad13ad15->m_frame.f_lineno = 416;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
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
        frame_d46ae9e4deb97d933df1becdad13ad15->m_frame.f_lineno = 418;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[68], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
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
        exception_tb = MAKE_TRACEBACK(frame_d46ae9e4deb97d933df1becdad13ad15, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d46ae9e4deb97d933df1becdad13ad15->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d46ae9e4deb97d933df1becdad13ad15, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d46ae9e4deb97d933df1becdad13ad15,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_d46ae9e4deb97d933df1becdad13ad15 == cache_frame_d46ae9e4deb97d933df1becdad13ad15) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d46ae9e4deb97d933df1becdad13ad15);
        cache_frame_d46ae9e4deb97d933df1becdad13ad15 = NULL;
    }

    assertFrameObject(frame_d46ae9e4deb97d933df1becdad13ad15);

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


static PyObject *impl_flet_core$textfield$$$function__34___set_capitalization(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_f6e85ea044ea66096f7062cc569c28b9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f6e85ea044ea66096f7062cc569c28b9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f6e85ea044ea66096f7062cc569c28b9)) {
        Py_XDECREF(cache_frame_f6e85ea044ea66096f7062cc569c28b9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f6e85ea044ea66096f7062cc569c28b9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f6e85ea044ea66096f7062cc569c28b9 = MAKE_FUNCTION_FRAME(codeobj_f6e85ea044ea66096f7062cc569c28b9, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f6e85ea044ea66096f7062cc569c28b9->m_type_description == NULL);
    frame_f6e85ea044ea66096f7062cc569c28b9 = cache_frame_f6e85ea044ea66096f7062cc569c28b9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f6e85ea044ea66096f7062cc569c28b9);
    assert(Py_REFCNT(frame_f6e85ea044ea66096f7062cc569c28b9) == 2);

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
        frame_f6e85ea044ea66096f7062cc569c28b9->m_frame.f_lineno = 421;
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


            exception_lineno = 421;
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
        exception_tb = MAKE_TRACEBACK(frame_f6e85ea044ea66096f7062cc569c28b9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f6e85ea044ea66096f7062cc569c28b9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f6e85ea044ea66096f7062cc569c28b9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f6e85ea044ea66096f7062cc569c28b9,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_f6e85ea044ea66096f7062cc569c28b9 == cache_frame_f6e85ea044ea66096f7062cc569c28b9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f6e85ea044ea66096f7062cc569c28b9);
        cache_frame_f6e85ea044ea66096f7062cc569c28b9 = NULL;
    }

    assertFrameObject(frame_f6e85ea044ea66096f7062cc569c28b9);

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


static PyObject *impl_flet_core$textfield$$$function__35_cursor_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_cefc61e4bb6f3feed2ae72865c27826d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cefc61e4bb6f3feed2ae72865c27826d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cefc61e4bb6f3feed2ae72865c27826d)) {
        Py_XDECREF(cache_frame_cefc61e4bb6f3feed2ae72865c27826d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cefc61e4bb6f3feed2ae72865c27826d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cefc61e4bb6f3feed2ae72865c27826d = MAKE_FUNCTION_FRAME(codeobj_cefc61e4bb6f3feed2ae72865c27826d, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cefc61e4bb6f3feed2ae72865c27826d->m_type_description == NULL);
    frame_cefc61e4bb6f3feed2ae72865c27826d = cache_frame_cefc61e4bb6f3feed2ae72865c27826d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cefc61e4bb6f3feed2ae72865c27826d);
    assert(Py_REFCNT(frame_cefc61e4bb6f3feed2ae72865c27826d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_cefc61e4bb6f3feed2ae72865c27826d->m_frame.f_lineno = 426;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[38],
            PyTuple_GET_ITEM(mod_consts[69], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
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
        exception_tb = MAKE_TRACEBACK(frame_cefc61e4bb6f3feed2ae72865c27826d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cefc61e4bb6f3feed2ae72865c27826d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cefc61e4bb6f3feed2ae72865c27826d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cefc61e4bb6f3feed2ae72865c27826d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_cefc61e4bb6f3feed2ae72865c27826d == cache_frame_cefc61e4bb6f3feed2ae72865c27826d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cefc61e4bb6f3feed2ae72865c27826d);
        cache_frame_cefc61e4bb6f3feed2ae72865c27826d = NULL;
    }

    assertFrameObject(frame_cefc61e4bb6f3feed2ae72865c27826d);

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


static PyObject *impl_flet_core$textfield$$$function__36_cursor_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_8380c9690a13b427b46c0a4c626859bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8380c9690a13b427b46c0a4c626859bd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8380c9690a13b427b46c0a4c626859bd)) {
        Py_XDECREF(cache_frame_8380c9690a13b427b46c0a4c626859bd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8380c9690a13b427b46c0a4c626859bd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8380c9690a13b427b46c0a4c626859bd = MAKE_FUNCTION_FRAME(codeobj_8380c9690a13b427b46c0a4c626859bd, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8380c9690a13b427b46c0a4c626859bd->m_type_description == NULL);
    frame_8380c9690a13b427b46c0a4c626859bd = cache_frame_8380c9690a13b427b46c0a4c626859bd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8380c9690a13b427b46c0a4c626859bd);
    assert(Py_REFCNT(frame_8380c9690a13b427b46c0a4c626859bd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[70];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_8380c9690a13b427b46c0a4c626859bd->m_frame.f_lineno = 430;
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


            exception_lineno = 430;
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
        exception_tb = MAKE_TRACEBACK(frame_8380c9690a13b427b46c0a4c626859bd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8380c9690a13b427b46c0a4c626859bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8380c9690a13b427b46c0a4c626859bd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8380c9690a13b427b46c0a4c626859bd,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_8380c9690a13b427b46c0a4c626859bd == cache_frame_8380c9690a13b427b46c0a4c626859bd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8380c9690a13b427b46c0a4c626859bd);
        cache_frame_8380c9690a13b427b46c0a4c626859bd = NULL;
    }

    assertFrameObject(frame_8380c9690a13b427b46c0a4c626859bd);

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


static PyObject *impl_flet_core$textfield$$$function__37_cursor_height(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2b9292e8ff87e53ba6cb079fc0bab36e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2b9292e8ff87e53ba6cb079fc0bab36e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2b9292e8ff87e53ba6cb079fc0bab36e)) {
        Py_XDECREF(cache_frame_2b9292e8ff87e53ba6cb079fc0bab36e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2b9292e8ff87e53ba6cb079fc0bab36e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2b9292e8ff87e53ba6cb079fc0bab36e = MAKE_FUNCTION_FRAME(codeobj_2b9292e8ff87e53ba6cb079fc0bab36e, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2b9292e8ff87e53ba6cb079fc0bab36e->m_type_description == NULL);
    frame_2b9292e8ff87e53ba6cb079fc0bab36e = cache_frame_2b9292e8ff87e53ba6cb079fc0bab36e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2b9292e8ff87e53ba6cb079fc0bab36e);
    assert(Py_REFCNT(frame_2b9292e8ff87e53ba6cb079fc0bab36e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_2b9292e8ff87e53ba6cb079fc0bab36e->m_frame.f_lineno = 435;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[38],
            PyTuple_GET_ITEM(mod_consts[71], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
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
        exception_tb = MAKE_TRACEBACK(frame_2b9292e8ff87e53ba6cb079fc0bab36e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b9292e8ff87e53ba6cb079fc0bab36e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b9292e8ff87e53ba6cb079fc0bab36e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2b9292e8ff87e53ba6cb079fc0bab36e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2b9292e8ff87e53ba6cb079fc0bab36e == cache_frame_2b9292e8ff87e53ba6cb079fc0bab36e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2b9292e8ff87e53ba6cb079fc0bab36e);
        cache_frame_2b9292e8ff87e53ba6cb079fc0bab36e = NULL;
    }

    assertFrameObject(frame_2b9292e8ff87e53ba6cb079fc0bab36e);

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


static PyObject *impl_flet_core$textfield$$$function__38_cursor_height(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_6a8b16009a7d194b7fd58d6921304807;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6a8b16009a7d194b7fd58d6921304807 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6a8b16009a7d194b7fd58d6921304807)) {
        Py_XDECREF(cache_frame_6a8b16009a7d194b7fd58d6921304807);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6a8b16009a7d194b7fd58d6921304807 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6a8b16009a7d194b7fd58d6921304807 = MAKE_FUNCTION_FRAME(codeobj_6a8b16009a7d194b7fd58d6921304807, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6a8b16009a7d194b7fd58d6921304807->m_type_description == NULL);
    frame_6a8b16009a7d194b7fd58d6921304807 = cache_frame_6a8b16009a7d194b7fd58d6921304807;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6a8b16009a7d194b7fd58d6921304807);
    assert(Py_REFCNT(frame_6a8b16009a7d194b7fd58d6921304807) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[72];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_6a8b16009a7d194b7fd58d6921304807->m_frame.f_lineno = 439;
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


            exception_lineno = 439;
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
        exception_tb = MAKE_TRACEBACK(frame_6a8b16009a7d194b7fd58d6921304807, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6a8b16009a7d194b7fd58d6921304807->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6a8b16009a7d194b7fd58d6921304807, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6a8b16009a7d194b7fd58d6921304807,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_6a8b16009a7d194b7fd58d6921304807 == cache_frame_6a8b16009a7d194b7fd58d6921304807) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6a8b16009a7d194b7fd58d6921304807);
        cache_frame_6a8b16009a7d194b7fd58d6921304807 = NULL;
    }

    assertFrameObject(frame_6a8b16009a7d194b7fd58d6921304807);

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


static PyObject *impl_flet_core$textfield$$$function__39_cursor_width(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_023c2004da8a15737f725c1a668a8089;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_023c2004da8a15737f725c1a668a8089 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_023c2004da8a15737f725c1a668a8089)) {
        Py_XDECREF(cache_frame_023c2004da8a15737f725c1a668a8089);

#if _DEBUG_REFCOUNTS
        if (cache_frame_023c2004da8a15737f725c1a668a8089 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_023c2004da8a15737f725c1a668a8089 = MAKE_FUNCTION_FRAME(codeobj_023c2004da8a15737f725c1a668a8089, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_023c2004da8a15737f725c1a668a8089->m_type_description == NULL);
    frame_023c2004da8a15737f725c1a668a8089 = cache_frame_023c2004da8a15737f725c1a668a8089;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_023c2004da8a15737f725c1a668a8089);
    assert(Py_REFCNT(frame_023c2004da8a15737f725c1a668a8089) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_023c2004da8a15737f725c1a668a8089->m_frame.f_lineno = 444;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[38],
            PyTuple_GET_ITEM(mod_consts[73], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
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
        exception_tb = MAKE_TRACEBACK(frame_023c2004da8a15737f725c1a668a8089, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_023c2004da8a15737f725c1a668a8089->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_023c2004da8a15737f725c1a668a8089, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_023c2004da8a15737f725c1a668a8089,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_023c2004da8a15737f725c1a668a8089 == cache_frame_023c2004da8a15737f725c1a668a8089) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_023c2004da8a15737f725c1a668a8089);
        cache_frame_023c2004da8a15737f725c1a668a8089 = NULL;
    }

    assertFrameObject(frame_023c2004da8a15737f725c1a668a8089);

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


static PyObject *impl_flet_core$textfield$$$function__40_cursor_width(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_b0fcaea84d5e150c9531b984ebc13f72;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b0fcaea84d5e150c9531b984ebc13f72 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b0fcaea84d5e150c9531b984ebc13f72)) {
        Py_XDECREF(cache_frame_b0fcaea84d5e150c9531b984ebc13f72);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b0fcaea84d5e150c9531b984ebc13f72 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b0fcaea84d5e150c9531b984ebc13f72 = MAKE_FUNCTION_FRAME(codeobj_b0fcaea84d5e150c9531b984ebc13f72, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b0fcaea84d5e150c9531b984ebc13f72->m_type_description == NULL);
    frame_b0fcaea84d5e150c9531b984ebc13f72 = cache_frame_b0fcaea84d5e150c9531b984ebc13f72;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b0fcaea84d5e150c9531b984ebc13f72);
    assert(Py_REFCNT(frame_b0fcaea84d5e150c9531b984ebc13f72) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[74];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_b0fcaea84d5e150c9531b984ebc13f72->m_frame.f_lineno = 448;
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


            exception_lineno = 448;
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
        exception_tb = MAKE_TRACEBACK(frame_b0fcaea84d5e150c9531b984ebc13f72, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b0fcaea84d5e150c9531b984ebc13f72->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0fcaea84d5e150c9531b984ebc13f72, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b0fcaea84d5e150c9531b984ebc13f72,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_b0fcaea84d5e150c9531b984ebc13f72 == cache_frame_b0fcaea84d5e150c9531b984ebc13f72) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b0fcaea84d5e150c9531b984ebc13f72);
        cache_frame_b0fcaea84d5e150c9531b984ebc13f72 = NULL;
    }

    assertFrameObject(frame_b0fcaea84d5e150c9531b984ebc13f72);

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


static PyObject *impl_flet_core$textfield$$$function__41_cursor_radius(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6575888e608f968a032b8f5975020b3b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6575888e608f968a032b8f5975020b3b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6575888e608f968a032b8f5975020b3b)) {
        Py_XDECREF(cache_frame_6575888e608f968a032b8f5975020b3b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6575888e608f968a032b8f5975020b3b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6575888e608f968a032b8f5975020b3b = MAKE_FUNCTION_FRAME(codeobj_6575888e608f968a032b8f5975020b3b, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6575888e608f968a032b8f5975020b3b->m_type_description == NULL);
    frame_6575888e608f968a032b8f5975020b3b = cache_frame_6575888e608f968a032b8f5975020b3b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6575888e608f968a032b8f5975020b3b);
    assert(Py_REFCNT(frame_6575888e608f968a032b8f5975020b3b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_6575888e608f968a032b8f5975020b3b->m_frame.f_lineno = 453;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[38],
            PyTuple_GET_ITEM(mod_consts[75], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
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
        exception_tb = MAKE_TRACEBACK(frame_6575888e608f968a032b8f5975020b3b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6575888e608f968a032b8f5975020b3b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6575888e608f968a032b8f5975020b3b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6575888e608f968a032b8f5975020b3b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6575888e608f968a032b8f5975020b3b == cache_frame_6575888e608f968a032b8f5975020b3b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6575888e608f968a032b8f5975020b3b);
        cache_frame_6575888e608f968a032b8f5975020b3b = NULL;
    }

    assertFrameObject(frame_6575888e608f968a032b8f5975020b3b);

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


static PyObject *impl_flet_core$textfield$$$function__42_cursor_radius(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_f8c4dde3fd1dfa95daf5ca048aa3de63;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f8c4dde3fd1dfa95daf5ca048aa3de63 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f8c4dde3fd1dfa95daf5ca048aa3de63)) {
        Py_XDECREF(cache_frame_f8c4dde3fd1dfa95daf5ca048aa3de63);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f8c4dde3fd1dfa95daf5ca048aa3de63 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f8c4dde3fd1dfa95daf5ca048aa3de63 = MAKE_FUNCTION_FRAME(codeobj_f8c4dde3fd1dfa95daf5ca048aa3de63, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f8c4dde3fd1dfa95daf5ca048aa3de63->m_type_description == NULL);
    frame_f8c4dde3fd1dfa95daf5ca048aa3de63 = cache_frame_f8c4dde3fd1dfa95daf5ca048aa3de63;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f8c4dde3fd1dfa95daf5ca048aa3de63);
    assert(Py_REFCNT(frame_f8c4dde3fd1dfa95daf5ca048aa3de63) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[76];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_f8c4dde3fd1dfa95daf5ca048aa3de63->m_frame.f_lineno = 457;
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


            exception_lineno = 457;
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
        exception_tb = MAKE_TRACEBACK(frame_f8c4dde3fd1dfa95daf5ca048aa3de63, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f8c4dde3fd1dfa95daf5ca048aa3de63->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f8c4dde3fd1dfa95daf5ca048aa3de63, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f8c4dde3fd1dfa95daf5ca048aa3de63,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_f8c4dde3fd1dfa95daf5ca048aa3de63 == cache_frame_f8c4dde3fd1dfa95daf5ca048aa3de63) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f8c4dde3fd1dfa95daf5ca048aa3de63);
        cache_frame_f8c4dde3fd1dfa95daf5ca048aa3de63 = NULL;
    }

    assertFrameObject(frame_f8c4dde3fd1dfa95daf5ca048aa3de63);

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


static PyObject *impl_flet_core$textfield$$$function__43_selection_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6ffb267d4cea1a9768c22c55c195dbbc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6ffb267d4cea1a9768c22c55c195dbbc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6ffb267d4cea1a9768c22c55c195dbbc)) {
        Py_XDECREF(cache_frame_6ffb267d4cea1a9768c22c55c195dbbc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6ffb267d4cea1a9768c22c55c195dbbc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6ffb267d4cea1a9768c22c55c195dbbc = MAKE_FUNCTION_FRAME(codeobj_6ffb267d4cea1a9768c22c55c195dbbc, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6ffb267d4cea1a9768c22c55c195dbbc->m_type_description == NULL);
    frame_6ffb267d4cea1a9768c22c55c195dbbc = cache_frame_6ffb267d4cea1a9768c22c55c195dbbc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6ffb267d4cea1a9768c22c55c195dbbc);
    assert(Py_REFCNT(frame_6ffb267d4cea1a9768c22c55c195dbbc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_6ffb267d4cea1a9768c22c55c195dbbc->m_frame.f_lineno = 462;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[38],
            PyTuple_GET_ITEM(mod_consts[77], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
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
        exception_tb = MAKE_TRACEBACK(frame_6ffb267d4cea1a9768c22c55c195dbbc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6ffb267d4cea1a9768c22c55c195dbbc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6ffb267d4cea1a9768c22c55c195dbbc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6ffb267d4cea1a9768c22c55c195dbbc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6ffb267d4cea1a9768c22c55c195dbbc == cache_frame_6ffb267d4cea1a9768c22c55c195dbbc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6ffb267d4cea1a9768c22c55c195dbbc);
        cache_frame_6ffb267d4cea1a9768c22c55c195dbbc = NULL;
    }

    assertFrameObject(frame_6ffb267d4cea1a9768c22c55c195dbbc);

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


static PyObject *impl_flet_core$textfield$$$function__44_selection_color(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_4e8b709391157c2dec65f68c7ac3dc93;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4e8b709391157c2dec65f68c7ac3dc93 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4e8b709391157c2dec65f68c7ac3dc93)) {
        Py_XDECREF(cache_frame_4e8b709391157c2dec65f68c7ac3dc93);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4e8b709391157c2dec65f68c7ac3dc93 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4e8b709391157c2dec65f68c7ac3dc93 = MAKE_FUNCTION_FRAME(codeobj_4e8b709391157c2dec65f68c7ac3dc93, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4e8b709391157c2dec65f68c7ac3dc93->m_type_description == NULL);
    frame_4e8b709391157c2dec65f68c7ac3dc93 = cache_frame_4e8b709391157c2dec65f68c7ac3dc93;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4e8b709391157c2dec65f68c7ac3dc93);
    assert(Py_REFCNT(frame_4e8b709391157c2dec65f68c7ac3dc93) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[78];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_4e8b709391157c2dec65f68c7ac3dc93->m_frame.f_lineno = 466;
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


            exception_lineno = 466;
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
        exception_tb = MAKE_TRACEBACK(frame_4e8b709391157c2dec65f68c7ac3dc93, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4e8b709391157c2dec65f68c7ac3dc93->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4e8b709391157c2dec65f68c7ac3dc93, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4e8b709391157c2dec65f68c7ac3dc93,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_4e8b709391157c2dec65f68c7ac3dc93 == cache_frame_4e8b709391157c2dec65f68c7ac3dc93) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4e8b709391157c2dec65f68c7ac3dc93);
        cache_frame_4e8b709391157c2dec65f68c7ac3dc93 = NULL;
    }

    assertFrameObject(frame_4e8b709391157c2dec65f68c7ac3dc93);

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


static PyObject *impl_flet_core$textfield$$$function__45_on_change(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d380c98b8ff47191f6d9dd3c4b1bce88;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d380c98b8ff47191f6d9dd3c4b1bce88 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d380c98b8ff47191f6d9dd3c4b1bce88)) {
        Py_XDECREF(cache_frame_d380c98b8ff47191f6d9dd3c4b1bce88);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d380c98b8ff47191f6d9dd3c4b1bce88 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d380c98b8ff47191f6d9dd3c4b1bce88 = MAKE_FUNCTION_FRAME(codeobj_d380c98b8ff47191f6d9dd3c4b1bce88, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d380c98b8ff47191f6d9dd3c4b1bce88->m_type_description == NULL);
    frame_d380c98b8ff47191f6d9dd3c4b1bce88 = cache_frame_d380c98b8ff47191f6d9dd3c4b1bce88;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d380c98b8ff47191f6d9dd3c4b1bce88);
    assert(Py_REFCNT(frame_d380c98b8ff47191f6d9dd3c4b1bce88) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_d380c98b8ff47191f6d9dd3c4b1bce88->m_frame.f_lineno = 471;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[79],
            PyTuple_GET_ITEM(mod_consts[80], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
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
        exception_tb = MAKE_TRACEBACK(frame_d380c98b8ff47191f6d9dd3c4b1bce88, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d380c98b8ff47191f6d9dd3c4b1bce88->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d380c98b8ff47191f6d9dd3c4b1bce88, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d380c98b8ff47191f6d9dd3c4b1bce88,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d380c98b8ff47191f6d9dd3c4b1bce88 == cache_frame_d380c98b8ff47191f6d9dd3c4b1bce88) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d380c98b8ff47191f6d9dd3c4b1bce88);
        cache_frame_d380c98b8ff47191f6d9dd3c4b1bce88 = NULL;
    }

    assertFrameObject(frame_d380c98b8ff47191f6d9dd3c4b1bce88);

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


static PyObject *impl_flet_core$textfield$$$function__46_on_change(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_84565e598c4f1bd5e885e0dba36b9f58;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_84565e598c4f1bd5e885e0dba36b9f58 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_84565e598c4f1bd5e885e0dba36b9f58)) {
        Py_XDECREF(cache_frame_84565e598c4f1bd5e885e0dba36b9f58);

#if _DEBUG_REFCOUNTS
        if (cache_frame_84565e598c4f1bd5e885e0dba36b9f58 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_84565e598c4f1bd5e885e0dba36b9f58 = MAKE_FUNCTION_FRAME(codeobj_84565e598c4f1bd5e885e0dba36b9f58, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_84565e598c4f1bd5e885e0dba36b9f58->m_type_description == NULL);
    frame_84565e598c4f1bd5e885e0dba36b9f58 = cache_frame_84565e598c4f1bd5e885e0dba36b9f58;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_84565e598c4f1bd5e885e0dba36b9f58);
    assert(Py_REFCNT(frame_84565e598c4f1bd5e885e0dba36b9f58) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[82];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_84565e598c4f1bd5e885e0dba36b9f58->m_frame.f_lineno = 475;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[81],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
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
        frame_84565e598c4f1bd5e885e0dba36b9f58->m_frame.f_lineno = 477;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[41],
            &PyTuple_GET_ITEM(mod_consts[83], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
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
        frame_84565e598c4f1bd5e885e0dba36b9f58->m_frame.f_lineno = 479;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_3,
            mod_consts[41],
            &PyTuple_GET_ITEM(mod_consts[84], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
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
        exception_tb = MAKE_TRACEBACK(frame_84565e598c4f1bd5e885e0dba36b9f58, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_84565e598c4f1bd5e885e0dba36b9f58->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_84565e598c4f1bd5e885e0dba36b9f58, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_84565e598c4f1bd5e885e0dba36b9f58,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_84565e598c4f1bd5e885e0dba36b9f58 == cache_frame_84565e598c4f1bd5e885e0dba36b9f58) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_84565e598c4f1bd5e885e0dba36b9f58);
        cache_frame_84565e598c4f1bd5e885e0dba36b9f58 = NULL;
    }

    assertFrameObject(frame_84565e598c4f1bd5e885e0dba36b9f58);

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


static PyObject *impl_flet_core$textfield$$$function__47_on_submit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_55076d3a0bc53867ebf9823c06ca199c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_55076d3a0bc53867ebf9823c06ca199c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_55076d3a0bc53867ebf9823c06ca199c)) {
        Py_XDECREF(cache_frame_55076d3a0bc53867ebf9823c06ca199c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_55076d3a0bc53867ebf9823c06ca199c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_55076d3a0bc53867ebf9823c06ca199c = MAKE_FUNCTION_FRAME(codeobj_55076d3a0bc53867ebf9823c06ca199c, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_55076d3a0bc53867ebf9823c06ca199c->m_type_description == NULL);
    frame_55076d3a0bc53867ebf9823c06ca199c = cache_frame_55076d3a0bc53867ebf9823c06ca199c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_55076d3a0bc53867ebf9823c06ca199c);
    assert(Py_REFCNT(frame_55076d3a0bc53867ebf9823c06ca199c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_55076d3a0bc53867ebf9823c06ca199c->m_frame.f_lineno = 484;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[79],
            PyTuple_GET_ITEM(mod_consts[85], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
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
        exception_tb = MAKE_TRACEBACK(frame_55076d3a0bc53867ebf9823c06ca199c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_55076d3a0bc53867ebf9823c06ca199c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_55076d3a0bc53867ebf9823c06ca199c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_55076d3a0bc53867ebf9823c06ca199c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_55076d3a0bc53867ebf9823c06ca199c == cache_frame_55076d3a0bc53867ebf9823c06ca199c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_55076d3a0bc53867ebf9823c06ca199c);
        cache_frame_55076d3a0bc53867ebf9823c06ca199c = NULL;
    }

    assertFrameObject(frame_55076d3a0bc53867ebf9823c06ca199c);

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


static PyObject *impl_flet_core$textfield$$$function__48_on_submit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_cc17f94313871c9b6b39d569db7155fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cc17f94313871c9b6b39d569db7155fc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cc17f94313871c9b6b39d569db7155fc)) {
        Py_XDECREF(cache_frame_cc17f94313871c9b6b39d569db7155fc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cc17f94313871c9b6b39d569db7155fc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cc17f94313871c9b6b39d569db7155fc = MAKE_FUNCTION_FRAME(codeobj_cc17f94313871c9b6b39d569db7155fc, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cc17f94313871c9b6b39d569db7155fc->m_type_description == NULL);
    frame_cc17f94313871c9b6b39d569db7155fc = cache_frame_cc17f94313871c9b6b39d569db7155fc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cc17f94313871c9b6b39d569db7155fc);
    assert(Py_REFCNT(frame_cc17f94313871c9b6b39d569db7155fc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[86];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_cc17f94313871c9b6b39d569db7155fc->m_frame.f_lineno = 488;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[81],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
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
        exception_tb = MAKE_TRACEBACK(frame_cc17f94313871c9b6b39d569db7155fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cc17f94313871c9b6b39d569db7155fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc17f94313871c9b6b39d569db7155fc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cc17f94313871c9b6b39d569db7155fc,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_cc17f94313871c9b6b39d569db7155fc == cache_frame_cc17f94313871c9b6b39d569db7155fc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cc17f94313871c9b6b39d569db7155fc);
        cache_frame_cc17f94313871c9b6b39d569db7155fc = NULL;
    }

    assertFrameObject(frame_cc17f94313871c9b6b39d569db7155fc);

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


static PyObject *impl_flet_core$textfield$$$function__49_on_focus(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ce6994a3fb229c4cba2fbb8fb507315b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ce6994a3fb229c4cba2fbb8fb507315b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ce6994a3fb229c4cba2fbb8fb507315b)) {
        Py_XDECREF(cache_frame_ce6994a3fb229c4cba2fbb8fb507315b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ce6994a3fb229c4cba2fbb8fb507315b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ce6994a3fb229c4cba2fbb8fb507315b = MAKE_FUNCTION_FRAME(codeobj_ce6994a3fb229c4cba2fbb8fb507315b, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ce6994a3fb229c4cba2fbb8fb507315b->m_type_description == NULL);
    frame_ce6994a3fb229c4cba2fbb8fb507315b = cache_frame_ce6994a3fb229c4cba2fbb8fb507315b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ce6994a3fb229c4cba2fbb8fb507315b);
    assert(Py_REFCNT(frame_ce6994a3fb229c4cba2fbb8fb507315b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_ce6994a3fb229c4cba2fbb8fb507315b->m_frame.f_lineno = 493;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[79],
            PyTuple_GET_ITEM(mod_consts[87], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
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
        exception_tb = MAKE_TRACEBACK(frame_ce6994a3fb229c4cba2fbb8fb507315b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ce6994a3fb229c4cba2fbb8fb507315b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ce6994a3fb229c4cba2fbb8fb507315b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ce6994a3fb229c4cba2fbb8fb507315b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ce6994a3fb229c4cba2fbb8fb507315b == cache_frame_ce6994a3fb229c4cba2fbb8fb507315b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ce6994a3fb229c4cba2fbb8fb507315b);
        cache_frame_ce6994a3fb229c4cba2fbb8fb507315b = NULL;
    }

    assertFrameObject(frame_ce6994a3fb229c4cba2fbb8fb507315b);

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


static PyObject *impl_flet_core$textfield$$$function__50_on_focus(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_0c43c2b894cf4035bc8139bb51653f74;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0c43c2b894cf4035bc8139bb51653f74 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0c43c2b894cf4035bc8139bb51653f74)) {
        Py_XDECREF(cache_frame_0c43c2b894cf4035bc8139bb51653f74);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0c43c2b894cf4035bc8139bb51653f74 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0c43c2b894cf4035bc8139bb51653f74 = MAKE_FUNCTION_FRAME(codeobj_0c43c2b894cf4035bc8139bb51653f74, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0c43c2b894cf4035bc8139bb51653f74->m_type_description == NULL);
    frame_0c43c2b894cf4035bc8139bb51653f74 = cache_frame_0c43c2b894cf4035bc8139bb51653f74;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0c43c2b894cf4035bc8139bb51653f74);
    assert(Py_REFCNT(frame_0c43c2b894cf4035bc8139bb51653f74) == 2);

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
        frame_0c43c2b894cf4035bc8139bb51653f74->m_frame.f_lineno = 497;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[81],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
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
        exception_tb = MAKE_TRACEBACK(frame_0c43c2b894cf4035bc8139bb51653f74, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0c43c2b894cf4035bc8139bb51653f74->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0c43c2b894cf4035bc8139bb51653f74, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0c43c2b894cf4035bc8139bb51653f74,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_0c43c2b894cf4035bc8139bb51653f74 == cache_frame_0c43c2b894cf4035bc8139bb51653f74) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0c43c2b894cf4035bc8139bb51653f74);
        cache_frame_0c43c2b894cf4035bc8139bb51653f74 = NULL;
    }

    assertFrameObject(frame_0c43c2b894cf4035bc8139bb51653f74);

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


static PyObject *impl_flet_core$textfield$$$function__51_on_blur(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6fd0caa67bfc7665746bddb6f8fbe284;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6fd0caa67bfc7665746bddb6f8fbe284 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6fd0caa67bfc7665746bddb6f8fbe284)) {
        Py_XDECREF(cache_frame_6fd0caa67bfc7665746bddb6f8fbe284);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6fd0caa67bfc7665746bddb6f8fbe284 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6fd0caa67bfc7665746bddb6f8fbe284 = MAKE_FUNCTION_FRAME(codeobj_6fd0caa67bfc7665746bddb6f8fbe284, module_flet_core$textfield, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6fd0caa67bfc7665746bddb6f8fbe284->m_type_description == NULL);
    frame_6fd0caa67bfc7665746bddb6f8fbe284 = cache_frame_6fd0caa67bfc7665746bddb6f8fbe284;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6fd0caa67bfc7665746bddb6f8fbe284);
    assert(Py_REFCNT(frame_6fd0caa67bfc7665746bddb6f8fbe284) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_6fd0caa67bfc7665746bddb6f8fbe284->m_frame.f_lineno = 502;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[79],
            PyTuple_GET_ITEM(mod_consts[88], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
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
        exception_tb = MAKE_TRACEBACK(frame_6fd0caa67bfc7665746bddb6f8fbe284, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6fd0caa67bfc7665746bddb6f8fbe284->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6fd0caa67bfc7665746bddb6f8fbe284, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6fd0caa67bfc7665746bddb6f8fbe284,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6fd0caa67bfc7665746bddb6f8fbe284 == cache_frame_6fd0caa67bfc7665746bddb6f8fbe284) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6fd0caa67bfc7665746bddb6f8fbe284);
        cache_frame_6fd0caa67bfc7665746bddb6f8fbe284 = NULL;
    }

    assertFrameObject(frame_6fd0caa67bfc7665746bddb6f8fbe284);

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


static PyObject *impl_flet_core$textfield$$$function__52_on_blur(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_29e40b8bf7976205af87b2b980dfb6b1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_29e40b8bf7976205af87b2b980dfb6b1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_29e40b8bf7976205af87b2b980dfb6b1)) {
        Py_XDECREF(cache_frame_29e40b8bf7976205af87b2b980dfb6b1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_29e40b8bf7976205af87b2b980dfb6b1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_29e40b8bf7976205af87b2b980dfb6b1 = MAKE_FUNCTION_FRAME(codeobj_29e40b8bf7976205af87b2b980dfb6b1, module_flet_core$textfield, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_29e40b8bf7976205af87b2b980dfb6b1->m_type_description == NULL);
    frame_29e40b8bf7976205af87b2b980dfb6b1 = cache_frame_29e40b8bf7976205af87b2b980dfb6b1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_29e40b8bf7976205af87b2b980dfb6b1);
    assert(Py_REFCNT(frame_29e40b8bf7976205af87b2b980dfb6b1) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[89];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_29e40b8bf7976205af87b2b980dfb6b1->m_frame.f_lineno = 506;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[81],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
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
        exception_tb = MAKE_TRACEBACK(frame_29e40b8bf7976205af87b2b980dfb6b1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_29e40b8bf7976205af87b2b980dfb6b1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_29e40b8bf7976205af87b2b980dfb6b1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_29e40b8bf7976205af87b2b980dfb6b1,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_29e40b8bf7976205af87b2b980dfb6b1 == cache_frame_29e40b8bf7976205af87b2b980dfb6b1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_29e40b8bf7976205af87b2b980dfb6b1);
        cache_frame_29e40b8bf7976205af87b2b980dfb6b1 = NULL;
    }

    assertFrameObject(frame_29e40b8bf7976205af87b2b980dfb6b1);

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



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__10___set_keyboard_type(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__10___set_keyboard_type,
        mod_consts[238],
#if PYTHON_VERSION >= 0x300
        mod_consts[239],
#endif
        codeobj_a2962a45bf0f994f7b35da936bafb7b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__11_text_align(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__11_text_align,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[240],
#endif
        codeobj_18e70851bdbeeac896f02611e294f58f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__12_text_align(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__12_text_align,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[240],
#endif
        codeobj_cd05350b401326bfd4c9b4d8fa100729,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__13___set_text_align(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__13___set_text_align,
        mod_consts[241],
#if PYTHON_VERSION >= 0x300
        mod_consts[242],
#endif
        codeobj_8ac8cffd9946fdce4517f77e36ab3f1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__14_multiline(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__14_multiline,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[243],
#endif
        codeobj_9a103a505c8641038a865963423e713f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__15_multiline(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__15_multiline,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[243],
#endif
        codeobj_093c7909b39b5e65d8c4961d6925c1c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__16_min_lines(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__16_min_lines,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[244],
#endif
        codeobj_4afa7d7d696a109efca62dbb1b773474,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__17_min_lines(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__17_min_lines,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[244],
#endif
        codeobj_43964fc2afd699d544d8416ce341b6e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__18_max_lines(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__18_max_lines,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[245],
#endif
        codeobj_93d80a32870d84be4e0c30a1fece61fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__19_max_lines(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__19_max_lines,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[245],
#endif
        codeobj_f1fc8fb994db2813f6cbbb4cf5c44121,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[227],
#endif
        codeobj_ddd52236778ca02ca54253a441f04b87,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__20_max_length(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__20_max_length,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[246],
#endif
        codeobj_59f4192d740f80b3ef4d4c9a78a2059d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__21_max_length(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__21_max_length,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[246],
#endif
        codeobj_07e672ae2fc16ae26409c6dad3dfc4b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__22_read_only(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__22_read_only,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[247],
#endif
        codeobj_e967dabde38427606e93f9809f02e273,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__23_read_only(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__23_read_only,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[247],
#endif
        codeobj_b3ded0d8966bbd8a43a7e879937d1e70,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__24_shift_enter(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__24_shift_enter,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[248],
#endif
        codeobj_ef9a29374886c7a1dd0661886a10986d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__25_shift_enter(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__25_shift_enter,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[248],
#endif
        codeobj_ae8d6a4c6225cc9ee2ba44ea4c3a0e8c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__26_password(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__26_password,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[249],
#endif
        codeobj_3eebd4ebae48bd821adb8d9519cd6e8e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__27_password(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__27_password,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[249],
#endif
        codeobj_0159107ba530b839e346c8e5f73a590d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__28_can_reveal_password(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__28_can_reveal_password,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[250],
#endif
        codeobj_9a54718546698e897732538ded6e6918,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__29_can_reveal_password(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__29_can_reveal_password,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[250],
#endif
        codeobj_f07c3b65b6fdd2f1078216ca1af2757f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__2__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[229],
#if PYTHON_VERSION >= 0x300
        mod_consts[230],
#endif
        codeobj_8ac75c2b516ce98b4900218bc6685eff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[228]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__30_autofocus(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__30_autofocus,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[251],
#endif
        codeobj_7618ce78373378e93e47b04c259e44df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__31_autofocus(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__31_autofocus,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[251],
#endif
        codeobj_9873058b678dde8a49f37aa773b879f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__32_capitalization(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__32_capitalization,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[252],
#endif
        codeobj_69cb71883f10b2c39eecad784bb469ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__33_capitalization(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__33_capitalization,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[252],
#endif
        codeobj_d46ae9e4deb97d933df1becdad13ad15,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__34___set_capitalization(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__34___set_capitalization,
        mod_consts[253],
#if PYTHON_VERSION >= 0x300
        mod_consts[254],
#endif
        codeobj_f6e85ea044ea66096f7062cc569c28b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__35_cursor_color() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__35_cursor_color,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[255],
#endif
        codeobj_cefc61e4bb6f3feed2ae72865c27826d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__36_cursor_color() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__36_cursor_color,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[255],
#endif
        codeobj_8380c9690a13b427b46c0a4c626859bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__37_cursor_height(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__37_cursor_height,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[256],
#endif
        codeobj_2b9292e8ff87e53ba6cb079fc0bab36e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__38_cursor_height(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__38_cursor_height,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[256],
#endif
        codeobj_6a8b16009a7d194b7fd58d6921304807,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__39_cursor_width(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__39_cursor_width,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[257],
#endif
        codeobj_023c2004da8a15737f725c1a668a8089,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__3__before_build_command(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__3__before_build_command,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[231],
#endif
        codeobj_8ec606fb2ad84ee87a80743c6b36b6f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$textfield,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__40_cursor_width(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__40_cursor_width,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[257],
#endif
        codeobj_b0fcaea84d5e150c9531b984ebc13f72,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__41_cursor_radius(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__41_cursor_radius,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[258],
#endif
        codeobj_6575888e608f968a032b8f5975020b3b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__42_cursor_radius(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__42_cursor_radius,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[258],
#endif
        codeobj_f8c4dde3fd1dfa95daf5ca048aa3de63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__43_selection_color() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__43_selection_color,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[259],
#endif
        codeobj_6ffb267d4cea1a9768c22c55c195dbbc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__44_selection_color() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__44_selection_color,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[259],
#endif
        codeobj_4e8b709391157c2dec65f68c7ac3dc93,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__45_on_change() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__45_on_change,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[260],
#endif
        codeobj_d380c98b8ff47191f6d9dd3c4b1bce88,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__46_on_change() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__46_on_change,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[260],
#endif
        codeobj_84565e598c4f1bd5e885e0dba36b9f58,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__47_on_submit() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__47_on_submit,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[261],
#endif
        codeobj_55076d3a0bc53867ebf9823c06ca199c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__48_on_submit() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__48_on_submit,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[261],
#endif
        codeobj_cc17f94313871c9b6b39d569db7155fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__49_on_focus() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__49_on_focus,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        mod_consts[262],
#endif
        codeobj_ce6994a3fb229c4cba2fbb8fb507315b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__4_focus() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__4_focus,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[232],
#endif
        codeobj_fe4f168f1aa85f8a2848059c0a886373,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__50_on_focus() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__50_on_focus,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        mod_consts[262],
#endif
        codeobj_0c43c2b894cf4035bc8139bb51653f74,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__51_on_blur() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__51_on_blur,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[263],
#endif
        codeobj_6fd0caa67bfc7665746bddb6f8fbe284,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__52_on_blur() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__52_on_blur,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[263],
#endif
        codeobj_29e40b8bf7976205af87b2b980dfb6b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__5_focus_async() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__5_focus_async,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[37],
#endif
        codeobj_83fe156653f1ebae1ce22be79027567c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__6_value(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__6_value,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[235],
#endif
        codeobj_0baef6d2caa4b4237b5c2954d9b24d86,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__7_value(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__7_value,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[235],
#endif
        codeobj_90e593f062ba807912699f28c5be0ff0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__8_keyboard_type(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__8_keyboard_type,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[237],
#endif
        codeobj_f5d0903e98362386f012729dd902b2ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$textfield$$$function__9_keyboard_type(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$textfield$$$function__9_keyboard_type,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[237],
#endif
        codeobj_e76989ce359171bf5c02b158093ad0dc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$textfield,
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

function_impl_code functable_flet_core$textfield[] = {
    impl_flet_core$textfield$$$function__1___init__,
    NULL,
    impl_flet_core$textfield$$$function__3__before_build_command,
    impl_flet_core$textfield$$$function__4_focus,
    impl_flet_core$textfield$$$function__5_focus_async,
    impl_flet_core$textfield$$$function__6_value,
    impl_flet_core$textfield$$$function__7_value,
    impl_flet_core$textfield$$$function__8_keyboard_type,
    impl_flet_core$textfield$$$function__9_keyboard_type,
    impl_flet_core$textfield$$$function__10___set_keyboard_type,
    impl_flet_core$textfield$$$function__11_text_align,
    impl_flet_core$textfield$$$function__12_text_align,
    impl_flet_core$textfield$$$function__13___set_text_align,
    impl_flet_core$textfield$$$function__14_multiline,
    impl_flet_core$textfield$$$function__15_multiline,
    impl_flet_core$textfield$$$function__16_min_lines,
    impl_flet_core$textfield$$$function__17_min_lines,
    impl_flet_core$textfield$$$function__18_max_lines,
    impl_flet_core$textfield$$$function__19_max_lines,
    impl_flet_core$textfield$$$function__20_max_length,
    impl_flet_core$textfield$$$function__21_max_length,
    impl_flet_core$textfield$$$function__22_read_only,
    impl_flet_core$textfield$$$function__23_read_only,
    impl_flet_core$textfield$$$function__24_shift_enter,
    impl_flet_core$textfield$$$function__25_shift_enter,
    impl_flet_core$textfield$$$function__26_password,
    impl_flet_core$textfield$$$function__27_password,
    impl_flet_core$textfield$$$function__28_can_reveal_password,
    impl_flet_core$textfield$$$function__29_can_reveal_password,
    impl_flet_core$textfield$$$function__30_autofocus,
    impl_flet_core$textfield$$$function__31_autofocus,
    impl_flet_core$textfield$$$function__32_capitalization,
    impl_flet_core$textfield$$$function__33_capitalization,
    impl_flet_core$textfield$$$function__34___set_capitalization,
    impl_flet_core$textfield$$$function__35_cursor_color,
    impl_flet_core$textfield$$$function__36_cursor_color,
    impl_flet_core$textfield$$$function__37_cursor_height,
    impl_flet_core$textfield$$$function__38_cursor_height,
    impl_flet_core$textfield$$$function__39_cursor_width,
    impl_flet_core$textfield$$$function__40_cursor_width,
    impl_flet_core$textfield$$$function__41_cursor_radius,
    impl_flet_core$textfield$$$function__42_cursor_radius,
    impl_flet_core$textfield$$$function__43_selection_color,
    impl_flet_core$textfield$$$function__44_selection_color,
    impl_flet_core$textfield$$$function__45_on_change,
    impl_flet_core$textfield$$$function__46_on_change,
    impl_flet_core$textfield$$$function__47_on_submit,
    impl_flet_core$textfield$$$function__48_on_submit,
    impl_flet_core$textfield$$$function__49_on_focus,
    impl_flet_core$textfield$$$function__50_on_focus,
    impl_flet_core$textfield$$$function__51_on_blur,
    impl_flet_core$textfield$$$function__52_on_blur,
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

    function_impl_code *current = functable_flet_core$textfield;
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

    if (offset > sizeof(functable_flet_core$textfield) || offset < 0) {
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
        functable_flet_core$textfield[offset],
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
        module_flet_core$textfield,
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
PyObject *modulecode_flet_core$textfield(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.textfield");

    // Store the module for future use.
    module_flet_core$textfield = module;

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
        PRINT_STRING("flet_core.textfield: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.textfield: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.textfield: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$textfield\n");

    moduledict_flet_core$textfield = MODULE_DICT(module_flet_core$textfield);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$textfield,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$textfield,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[271]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$textfield,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$textfield,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$textfield,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$textfield);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$textfield, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$textfield, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$textfield, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$textfield);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    struct Nuitka_CellObject *outline_2_var___class__ = Nuitka_Cell_Empty();
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
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    struct Nuitka_FrameObject *frame_da07c9e11083b79a8b747b90a3af245b;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_flet_core$textfield$$$class__1_KeyboardType_42 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_1549ad7d7b764497fc04a36cec6c4292_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_flet_core$textfield$$$class__2_TextCapitalization_59 = NULL;
    struct Nuitka_FrameObject *frame_065bdd573202c11fb1b23cb381833453_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_flet_core$textfield$$$class__3_TextField_66 = NULL;
    struct Nuitka_FrameObject *frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[91];
        UPDATE_STRING_DICT0(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_2);
    }
    frame_da07c9e11083b79a8b747b90a3af245b = MAKE_MODULE_FRAME(codeobj_da07c9e11083b79a8b747b90a3af245b, module_flet_core$textfield);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_da07c9e11083b79a8b747b90a3af245b);
    assert(Py_REFCNT(frame_da07c9e11083b79a8b747b90a3af245b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[91];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[94], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[95], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[32];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$textfield;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[97];
        frame_da07c9e11083b79a8b747b90a3af245b->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[98];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$textfield;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[99];
        tmp_level_value_2 = mod_consts[97];
        frame_da07c9e11083b79a8b747b90a3af245b->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[100],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[100]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_5);
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
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[101],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[101]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[102],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[102]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[103],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[103]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_9);
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
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[104];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$textfield;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[105];
        tmp_level_value_3 = mod_consts[97];
        frame_da07c9e11083b79a8b747b90a3af245b->m_frame.f_lineno = 5;
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
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[106],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[106]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[107],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[107]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_12);
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
        tmp_name_value_4 = mod_consts[108];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$textfield;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[109];
        tmp_level_value_4 = mod_consts[97];
        frame_da07c9e11083b79a8b747b90a3af245b->m_frame.f_lineno = 6;
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
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[0],
                mod_consts[97]
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
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[110],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[110]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_15);
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
        tmp_name_value_5 = mod_consts[111];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_flet_core$textfield;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[112];
        tmp_level_value_5 = mod_consts[97];
        frame_da07c9e11083b79a8b747b90a3af245b->m_frame.f_lineno = 7;
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
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[113],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[113]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[114];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_flet_core$textfield;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[115];
        tmp_level_value_6 = mod_consts[97];
        frame_da07c9e11083b79a8b747b90a3af245b->m_frame.f_lineno = 8;
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
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[116],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[116]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[117];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_flet_core$textfield;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[118];
        tmp_level_value_7 = mod_consts[97];
        frame_da07c9e11083b79a8b747b90a3af245b->m_frame.f_lineno = 9;
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
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[119],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[119]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_12 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[120],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[120]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_13 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[121],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[121]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_14 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[122],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[122]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_15 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[123],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[123]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_16 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[124],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_16, mod_consts[124]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_17 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[125],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_17, mod_consts[125]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_18 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[47],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_18, mod_consts[47]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_19 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[126],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_19, mod_consts[126]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_27);
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
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_20;
        tmp_import_name_from_20 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_20 == NULL));
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[127],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_20, mod_consts[127]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_28);
    }
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_da07c9e11083b79a8b747b90a3af245b, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_da07c9e11083b79a8b747b90a3af245b, exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
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
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[128];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_flet_core$textfield;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[129];
        tmp_level_value_8 = mod_consts[97];
        frame_da07c9e11083b79a8b747b90a3af245b->m_frame.f_lineno = 24;
        tmp_import_name_from_21 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_6;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_flet_core$textfield,
                mod_consts[127],
                mod_consts[97]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_21, mod_consts[127]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_29);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 21;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_da07c9e11083b79a8b747b90a3af245b->m_frame) frame_da07c9e11083b79a8b747b90a3af245b->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_6;
    branch_end_1:;
    goto try_end_6;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_subscript_value_1 = mod_consts[130];
        tmp_assign_source_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_30);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_7;
        }
        tmp_assign_source_31 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_31, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_32 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
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


            exception_lineno = 42;

            goto try_except_handler_7;
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
        tmp_subscript_value_2 = mod_consts[97];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_7;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_34 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_34;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[132]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[132]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_7;
        }
        tmp_tuple_element_2 = mod_consts[43];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_da07c9e11083b79a8b747b90a3af245b->m_frame.f_lineno = 42;
        tmp_assign_source_35 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_35;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[133]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_7;
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
        tmp_mod_expr_left_1 = mod_consts[134];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[135];
        tmp_getattr_default_1 = mod_consts[136];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_7;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[135]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 42;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_36;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_37;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$textfield$$$class__1_KeyboardType_42 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__1_KeyboardType_42, mod_consts[138], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__1_KeyboardType_42, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_9;
        }
        frame_1549ad7d7b764497fc04a36cec6c4292_2 = MAKE_CLASS_FRAME(codeobj_1549ad7d7b764497fc04a36cec6c4292, module_flet_core$textfield, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_1549ad7d7b764497fc04a36cec6c4292_2);
        assert(Py_REFCNT(frame_1549ad7d7b764497fc04a36cec6c4292_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[140];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__1_KeyboardType_42, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[142];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__1_KeyboardType_42, mod_consts[143], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[7];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__1_KeyboardType_42, mod_consts[144], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[145];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__1_KeyboardType_42, mod_consts[146], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[147];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__1_KeyboardType_42, mod_consts[148], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[149];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__1_KeyboardType_42, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[151];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__1_KeyboardType_42, mod_consts[152], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[153];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__1_KeyboardType_42, mod_consts[154], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[155];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__1_KeyboardType_42, mod_consts[156], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[157];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__1_KeyboardType_42, mod_consts[158], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[159];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__1_KeyboardType_42, mod_consts[160], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1549ad7d7b764497fc04a36cec6c4292_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1549ad7d7b764497fc04a36cec6c4292_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1549ad7d7b764497fc04a36cec6c4292_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1549ad7d7b764497fc04a36cec6c4292_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_1549ad7d7b764497fc04a36cec6c4292_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_9;
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


                exception_lineno = 42;

                goto try_except_handler_9;
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
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__1_KeyboardType_42, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto try_except_handler_9;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_38;
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
            tmp_tuple_element_4 = locals_flet_core$textfield$$$class__1_KeyboardType_42;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_da07c9e11083b79a8b747b90a3af245b->m_frame.f_lineno = 42;
            tmp_assign_source_38 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto try_except_handler_9;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_38;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_37 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_37);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_flet_core$textfield$$$class__1_KeyboardType_42);
        locals_flet_core$textfield$$$class__1_KeyboardType_42 = NULL;
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

        Py_DECREF(locals_flet_core$textfield$$$class__1_KeyboardType_42);
        locals_flet_core$textfield$$$class__1_KeyboardType_42 = NULL;
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
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 42;
        goto try_except_handler_7;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_37);
    }
    goto try_end_7;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
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
        PyObject *tmp_assign_source_39;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[162];
        tmp_assign_source_39 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_39);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_10;
        }
        tmp_assign_source_40 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_40, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_41 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
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


            exception_lineno = 59;

            goto try_except_handler_10;
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
        tmp_subscript_value_4 = mod_consts[97];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_4, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_10;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_10;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_43 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_43;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[132]);
        tmp_condition_result_7 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_10 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[132]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_10;
        }
        tmp_tuple_element_6 = mod_consts[67];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_da07c9e11083b79a8b747b90a3af245b->m_frame.f_lineno = 59;
        tmp_assign_source_44 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_10;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_44;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_11 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_11, mod_consts[133]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_10;
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
        tmp_mod_expr_left_2 = mod_consts[134];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[135];
        tmp_getattr_default_2 = mod_consts[136];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_10;
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
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[135]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 59;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_10;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_45;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_46;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_flet_core$textfield$$$class__2_TextCapitalization_59 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__2_TextCapitalization_59, mod_consts[138], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[67];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__2_TextCapitalization_59, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_12;
        }
        frame_065bdd573202c11fb1b23cb381833453_3 = MAKE_CLASS_FRAME(codeobj_065bdd573202c11fb1b23cb381833453, module_flet_core$textfield, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_065bdd573202c11fb1b23cb381833453_3);
        assert(Py_REFCNT(frame_065bdd573202c11fb1b23cb381833453_3) == 2);

        // Framed code:
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__2_TextCapitalization_59, mod_consts[141], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[164];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__2_TextCapitalization_59, mod_consts[165], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[166];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__2_TextCapitalization_59, mod_consts[167], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = mod_consts[168];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__2_TextCapitalization_59, mod_consts[169], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_065bdd573202c11fb1b23cb381833453_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_065bdd573202c11fb1b23cb381833453_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_065bdd573202c11fb1b23cb381833453_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_065bdd573202c11fb1b23cb381833453_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_065bdd573202c11fb1b23cb381833453_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_12;
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


                exception_lineno = 59;

                goto try_except_handler_12;
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
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__2_TextCapitalization_59, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_12;
        }
        branch_no_7:;
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[67];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_flet_core$textfield$$$class__2_TextCapitalization_59;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_da07c9e11083b79a8b747b90a3af245b->m_frame.f_lineno = 59;
            tmp_assign_source_47 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto try_except_handler_12;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_47;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_46 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_46);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_flet_core$textfield$$$class__2_TextCapitalization_59);
        locals_flet_core$textfield$$$class__2_TextCapitalization_59 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$textfield$$$class__2_TextCapitalization_59);
        locals_flet_core$textfield$$$class__2_TextCapitalization_59 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 59;
        goto try_except_handler_10;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_46);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
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
        PyObject *tmp_assign_source_48;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_13;
        }
        tmp_assign_source_48 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_48, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_49 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
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


            exception_lineno = 66;

            goto try_except_handler_13;
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
        tmp_subscript_value_5 = mod_consts[97];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_5, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_13;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_51 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_51;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_14 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[132]);
        tmp_condition_result_11 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_15 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[132]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_13;
        }
        tmp_tuple_element_10 = mod_consts[170];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_da07c9e11083b79a8b747b90a3af245b->m_frame.f_lineno = 66;
        tmp_assign_source_52 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_52;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_16 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_16, mod_consts[133]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_13;
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
        tmp_mod_expr_left_3 = mod_consts[134];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[135];
        tmp_getattr_default_3 = mod_consts[136];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_13;
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
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[135]);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 66;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_53;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_54;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_flet_core$textfield$$$class__3_TextField_66 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[138], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[171];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[90], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[170];
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_15;
        }
        frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4 = MAKE_CLASS_FRAME(codeobj_8d2e0dc07a6ce9d0c2a00e61e5f34011, module_flet_core$textfield, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4);
        assert(Py_REFCNT(frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4) == 2);

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
            tmp_defaults_1 = MAKE_TUPLE_EMPTY(78);
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
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 28, tmp_tuple_element_12);
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
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 35, tmp_tuple_element_12);
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
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 41, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 42, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 43, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 44, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 45, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 46, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 47, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 48, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 49, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 50, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 51, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 52, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 53, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 54, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 55, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 56, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 57, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 58, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 59, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 60, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 61, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 62, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 63, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 64, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 65, tmp_tuple_element_12);
                tmp_expression_value_18 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[47]);

                if (tmp_expression_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[47]);

                        if (unlikely(tmp_expression_value_18 == NULL)) {
                            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
                        }

                        if (tmp_expression_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 170;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_18);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[141]);
                Py_DECREF(tmp_expression_value_18);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 170;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_defaults_1, 66, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 67, tmp_tuple_element_12);
                tmp_expression_value_19 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[67]);

                if (tmp_expression_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_expression_value_19 == NULL)) {
                            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_expression_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 172;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_19);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[141]);
                Py_DECREF(tmp_expression_value_19);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 172;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_defaults_1, 68, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 69, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 70, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 71, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 72, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 73, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 74, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 75, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 76, tmp_tuple_element_12);
                tmp_tuple_element_12 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 77, tmp_tuple_element_12);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_defaults_1);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_dict_key_1 = mod_consts[172];
            tmp_expression_value_20 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_20 == NULL)) {
                        tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_1);

                        exception_lineno = 98;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_20);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_6 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[113]);

            if (tmp_subscript_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[113]);

                    if (unlikely(tmp_subscript_value_6 == NULL)) {
                        tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
                    }

                    if (tmp_subscript_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_1);
                        Py_DECREF(tmp_expression_value_20);

                        exception_lineno = 98;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
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

                exception_lineno = 98;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 73 );
            {
                PyObject *tmp_expression_value_21;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_subscript_value_8;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_subscript_value_9;
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
                PyObject *tmp_expression_value_40;
                PyObject *tmp_subscript_value_26;
                PyObject *tmp_expression_value_41;
                PyObject *tmp_subscript_value_27;
                PyObject *tmp_expression_value_42;
                PyObject *tmp_subscript_value_28;
                PyObject *tmp_expression_value_43;
                PyObject *tmp_subscript_value_29;
                PyObject *tmp_expression_value_44;
                PyObject *tmp_subscript_value_30;
                PyObject *tmp_expression_value_45;
                PyObject *tmp_subscript_value_31;
                PyObject *tmp_expression_value_46;
                PyObject *tmp_subscript_value_32;
                PyObject *tmp_expression_value_47;
                PyObject *tmp_subscript_value_33;
                PyObject *tmp_expression_value_48;
                PyObject *tmp_subscript_value_34;
                PyObject *tmp_expression_value_49;
                PyObject *tmp_subscript_value_35;
                PyObject *tmp_expression_value_50;
                PyObject *tmp_subscript_value_36;
                PyObject *tmp_expression_value_51;
                PyObject *tmp_subscript_value_37;
                PyObject *tmp_expression_value_52;
                PyObject *tmp_subscript_value_38;
                PyObject *tmp_expression_value_53;
                PyObject *tmp_subscript_value_39;
                PyObject *tmp_expression_value_54;
                PyObject *tmp_subscript_value_40;
                PyObject *tmp_expression_value_55;
                PyObject *tmp_subscript_value_41;
                PyObject *tmp_expression_value_56;
                PyObject *tmp_subscript_value_42;
                PyObject *tmp_expression_value_57;
                PyObject *tmp_subscript_value_43;
                PyObject *tmp_expression_value_58;
                PyObject *tmp_subscript_value_44;
                PyObject *tmp_expression_value_59;
                PyObject *tmp_subscript_value_45;
                PyObject *tmp_expression_value_60;
                PyObject *tmp_subscript_value_46;
                PyObject *tmp_expression_value_61;
                PyObject *tmp_subscript_value_47;
                PyObject *tmp_expression_value_62;
                PyObject *tmp_subscript_value_48;
                PyObject *tmp_expression_value_63;
                PyObject *tmp_subscript_value_49;
                PyObject *tmp_expression_value_64;
                PyObject *tmp_subscript_value_50;
                PyObject *tmp_expression_value_65;
                PyObject *tmp_subscript_value_51;
                PyObject *tmp_expression_value_66;
                PyObject *tmp_subscript_value_52;
                PyObject *tmp_expression_value_67;
                PyObject *tmp_subscript_value_53;
                PyObject *tmp_expression_value_68;
                PyObject *tmp_subscript_value_54;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[173];
                tmp_expression_value_21 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_21 == NULL)) {
                            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 99;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_21);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_7 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

                if (tmp_subscript_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_7 = (PyObject *)&PyUnicode_Type;
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


                    exception_lineno = 99;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[175];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[107]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 100;
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
                tmp_dict_key_1 = mod_consts[176];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[107]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
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
                tmp_dict_key_1 = mod_consts[177];
                tmp_expression_value_22 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[103]);

                if (tmp_expression_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[103]);

                        if (unlikely(tmp_expression_value_22 == NULL)) {
                            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
                        }

                        if (tmp_expression_value_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 102;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_22);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_tuple_element_13 = Py_None;
                tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_8, 0, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_13 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_8, 1, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[179]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_13 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_8, 2, tmp_tuple_element_13);
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_subscript_value_8);
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
                tmp_dict_key_1 = mod_consts[180];
                tmp_expression_value_23 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_23 == NULL)) {
                            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 103;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_23);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_9 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[123]);

                if (tmp_subscript_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[123]);

                        if (unlikely(tmp_subscript_value_9 == NULL)) {
                            tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                        }

                        if (tmp_subscript_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_23);

                            exception_lineno = 103;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_9);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_23);
                Py_DECREF(tmp_subscript_value_9);
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
                tmp_dict_key_1 = mod_consts[181];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[107]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 104;
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
                tmp_dict_key_1 = mod_consts[182];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[124]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[124]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 105;
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
                tmp_dict_key_1 = mod_consts[183];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[125]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[125]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 106;
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
                tmp_dict_key_1 = mod_consts[184];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[121]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[121]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 107;
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
                tmp_dict_key_1 = mod_consts[185];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[107]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 108;
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
                tmp_dict_key_1 = mod_consts[186];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[119]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 109;
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
                tmp_dict_key_1 = mod_consts[187];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[119]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 110;
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
                tmp_dict_key_1 = mod_consts[188];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[119]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 111;
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
                tmp_dict_key_1 = mod_consts[189];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[119]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 112;
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
                tmp_dict_key_1 = mod_consts[190];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[119]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 113;
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
                tmp_dict_key_1 = mod_consts[191];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[119]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[119]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 114;
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
                tmp_dict_key_1 = mod_consts[192];
                tmp_expression_value_24 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_24 == NULL)) {
                            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 116;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_24);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_10 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

                if (tmp_subscript_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_10 = (PyObject *)&PyUnicode_Type;
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


                    exception_lineno = 116;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[193];
                tmp_expression_value_25 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_25 == NULL)) {
                            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 117;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_25);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_11 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

                if (tmp_subscript_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_11 = (PyObject *)&PyBool_Type;
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


                    exception_lineno = 117;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[194];
                tmp_expression_value_26 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_26 == NULL)) {
                            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 118;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_26);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_12 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

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


                    exception_lineno = 118;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[195];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[101]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[101]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 119;
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
                tmp_dict_key_1 = mod_consts[196];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[107]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 123;
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
                tmp_expression_value_27 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_27 == NULL)) {
                            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 124;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_27);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_13 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[116]);

                if (tmp_subscript_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[116]);

                        if (unlikely(tmp_subscript_value_13 == NULL)) {
                            tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
                        }

                        if (tmp_subscript_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_27);

                            exception_lineno = 124;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
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


                    exception_lineno = 124;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[197];
                tmp_expression_value_28 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_28 == NULL)) {
                            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 125;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_28);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_14 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

                if (tmp_subscript_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_14 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_14);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_28);
                Py_DECREF(tmp_subscript_value_14);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 125;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[198];
                tmp_expression_value_29 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_29 == NULL)) {
                            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 126;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_29);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_15 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[116]);

                if (tmp_subscript_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[116]);

                        if (unlikely(tmp_subscript_value_15 == NULL)) {
                            tmp_subscript_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
                        }

                        if (tmp_subscript_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_29);

                            exception_lineno = 126;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_15);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_29);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 126;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[199];
                tmp_expression_value_30 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_30 == NULL)) {
                            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 127;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_30);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_16 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

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


                    exception_lineno = 127;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[200];
                tmp_expression_value_31 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_31 == NULL)) {
                            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 128;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_31);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_17 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[110]);

                if (tmp_subscript_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[110]);

                        if (unlikely(tmp_subscript_value_17 == NULL)) {
                            tmp_subscript_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
                        }

                        if (tmp_subscript_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_31);

                            exception_lineno = 128;
                            type_description_2 = "c";
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


                    exception_lineno = 128;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[201];
                tmp_expression_value_32 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_32 == NULL)) {
                            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_32 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 129;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_32);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_18 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

                if (tmp_subscript_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_18 = (PyObject *)&PyUnicode_Type;
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


                    exception_lineno = 129;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[28];
                tmp_expression_value_33 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_33 == NULL)) {
                            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_33 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 130;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_33);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_19 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

                if (tmp_subscript_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_19 = (PyObject *)&PyUnicode_Type;
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


                    exception_lineno = 130;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[202];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[120]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[120]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 131;
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
                tmp_dict_key_1 = mod_consts[203];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[107]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 132;
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
                tmp_dict_key_1 = mod_consts[204];
                tmp_expression_value_34 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_34 == NULL)) {
                            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 133;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_34);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_20 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

                if (tmp_subscript_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_20 = (PyObject *)&PyUnicode_Type;
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


                    exception_lineno = 133;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[205];
                tmp_expression_value_35 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_35 == NULL)) {
                            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_35 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 134;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_35);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_21 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

                if (tmp_subscript_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_21 = (PyObject *)&PyUnicode_Type;
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


                    exception_lineno = 134;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[206];
                tmp_expression_value_36 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_36 == NULL)) {
                            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_36 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 135;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_36);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_22 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

                if (tmp_subscript_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_22 = (PyObject *)&PyUnicode_Type;
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


                    exception_lineno = 135;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[207];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[107]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 136;
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
                tmp_dict_key_1 = mod_consts[208];
                tmp_expression_value_37 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_37 == NULL)) {
                            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 137;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_37);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_23 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

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


                    exception_lineno = 137;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[209];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[122]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[122]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 138;
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
                tmp_dict_key_1 = mod_consts[210];
                tmp_expression_value_38 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_38 == NULL)) {
                            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_38 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 139;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_38);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_24 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

                if (tmp_subscript_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_24 = (PyObject *)&PyBool_Type;
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


                    exception_lineno = 139;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[29];
                tmp_expression_value_39 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_39 == NULL)) {
                            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_39 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 140;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_39);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_25 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

                if (tmp_subscript_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_25 = (PyObject *)&PyBool_Type;
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


                    exception_lineno = 140;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[211];
                tmp_expression_value_40 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_40 == NULL)) {
                            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_40 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 141;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_40);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_26 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

                if (tmp_subscript_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_26 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_26);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_26);
                Py_DECREF(tmp_expression_value_40);
                Py_DECREF(tmp_subscript_value_26);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 141;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[212];
                tmp_expression_value_41 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_41 == NULL)) {
                            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_41 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 142;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_41);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_27 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[116]);

                if (tmp_subscript_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[116]);

                        if (unlikely(tmp_subscript_value_27 == NULL)) {
                            tmp_subscript_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
                        }

                        if (tmp_subscript_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_41);

                            exception_lineno = 142;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_27);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_27);
                Py_DECREF(tmp_expression_value_41);
                Py_DECREF(tmp_subscript_value_27);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 142;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[213];
                tmp_expression_value_42 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_42 == NULL)) {
                            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_42 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 143;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_42);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_28 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

                if (tmp_subscript_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_28 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_28);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_28);
                Py_DECREF(tmp_expression_value_42);
                Py_DECREF(tmp_subscript_value_28);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 143;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[214];
                tmp_expression_value_43 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_43 == NULL)) {
                            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_43 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 144;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_43);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_29 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[116]);

                if (tmp_subscript_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_29 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[116]);

                        if (unlikely(tmp_subscript_value_29 == NULL)) {
                            tmp_subscript_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
                        }

                        if (tmp_subscript_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_43);

                            exception_lineno = 144;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_29);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_29);
                Py_DECREF(tmp_expression_value_43);
                Py_DECREF(tmp_subscript_value_29);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 144;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[215];
                tmp_expression_value_44 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_44 == NULL)) {
                            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_44 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 145;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_44);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_30 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

                if (tmp_subscript_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_30 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_30);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_30);
                Py_DECREF(tmp_expression_value_44);
                Py_DECREF(tmp_subscript_value_30);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[216];
                tmp_expression_value_45 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_45 == NULL)) {
                            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_45 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 146;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_45);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_31 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[116]);

                if (tmp_subscript_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_31 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[116]);

                        if (unlikely(tmp_subscript_value_31 == NULL)) {
                            tmp_subscript_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
                        }

                        if (tmp_subscript_value_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_45);

                            exception_lineno = 146;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_31);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_31);
                Py_DECREF(tmp_expression_value_45);
                Py_DECREF(tmp_subscript_value_31);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 146;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[217];
                tmp_expression_value_46 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_46 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_46 == NULL)) {
                            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_46 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 147;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_46);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_32 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

                if (tmp_subscript_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_32 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_32);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_32);
                Py_DECREF(tmp_expression_value_46);
                Py_DECREF(tmp_subscript_value_32);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 147;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[218];
                tmp_expression_value_47 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_47 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_47 == NULL)) {
                            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_47 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 148;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_47);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_33 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[116]);

                if (tmp_subscript_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[116]);

                        if (unlikely(tmp_subscript_value_33 == NULL)) {
                            tmp_subscript_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
                        }

                        if (tmp_subscript_value_33 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_47);

                            exception_lineno = 148;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_33);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_33);
                Py_DECREF(tmp_expression_value_47);
                Py_DECREF(tmp_subscript_value_33);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 148;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[219];
                tmp_expression_value_48 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_48 == NULL)) {
                            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_48 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 149;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_48);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_34 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[106]);

                if (tmp_subscript_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_34 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[106]);

                        if (unlikely(tmp_subscript_value_34 == NULL)) {
                            tmp_subscript_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
                        }

                        if (tmp_subscript_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_48);

                            exception_lineno = 149;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_34);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_34);
                Py_DECREF(tmp_expression_value_48);
                Py_DECREF(tmp_subscript_value_34);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 149;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[220];
                tmp_expression_value_49 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_49 == NULL)) {
                            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_49 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 150;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_49);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_35 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

                if (tmp_subscript_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_35 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_35);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_35);
                Py_DECREF(tmp_expression_value_49);
                Py_DECREF(tmp_subscript_value_35);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 150;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[221];
                tmp_expression_value_50 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_50 == NULL)) {
                            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_50 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 151;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_50);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_36 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

                if (tmp_subscript_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_36 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_36);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_36);
                Py_DECREF(tmp_expression_value_50);
                Py_DECREF(tmp_subscript_value_36);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 151;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[222];
                tmp_expression_value_51 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_51 == NULL)) {
                            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_51 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 152;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_51);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_37 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[116]);

                if (tmp_subscript_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[116]);

                        if (unlikely(tmp_subscript_value_37 == NULL)) {
                            tmp_subscript_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
                        }

                        if (tmp_subscript_value_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_51);

                            exception_lineno = 152;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_37);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_37);
                Py_DECREF(tmp_expression_value_51);
                Py_DECREF(tmp_subscript_value_37);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 152;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[223];
                tmp_expression_value_52 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_52 == NULL)) {
                            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_52 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 153;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_52);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_38 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[106]);

                if (tmp_subscript_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[106]);

                        if (unlikely(tmp_subscript_value_38 == NULL)) {
                            tmp_subscript_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
                        }

                        if (tmp_subscript_value_38 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_52);

                            exception_lineno = 153;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_38);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_38);
                Py_DECREF(tmp_expression_value_52);
                Py_DECREF(tmp_subscript_value_38);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 153;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[224];
                tmp_expression_value_53 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_53 == NULL)) {
                            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_53 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 154;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_53);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_39 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

                if (tmp_subscript_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_39 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_39);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_39);
                Py_DECREF(tmp_expression_value_53);
                Py_DECREF(tmp_subscript_value_39);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 154;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[225];
                tmp_expression_value_54 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_54 == NULL)) {
                            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_54 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 155;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_54);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_40 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

                if (tmp_subscript_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_40 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_40);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_40);
                Py_DECREF(tmp_expression_value_54);
                Py_DECREF(tmp_subscript_value_40);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 155;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[226];
                tmp_expression_value_55 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_55 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_55 == NULL)) {
                            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_55 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 156;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_55);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_41 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[116]);

                if (tmp_subscript_value_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[116]);

                        if (unlikely(tmp_subscript_value_41 == NULL)) {
                            tmp_subscript_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
                        }

                        if (tmp_subscript_value_41 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_55);

                            exception_lineno = 156;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_41);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_41);
                Py_DECREF(tmp_expression_value_55);
                Py_DECREF(tmp_subscript_value_41);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 156;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[3];
                tmp_expression_value_56 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_56 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_56 == NULL)) {
                            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_56 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 160;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_56);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_42 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

                if (tmp_subscript_value_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_42 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_42);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_56, tmp_subscript_value_42);
                Py_DECREF(tmp_expression_value_56);
                Py_DECREF(tmp_subscript_value_42);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 160;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[5];
                tmp_expression_value_57 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_57 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_57 == NULL)) {
                            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_57 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 161;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_57);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_43 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[43]);

                if (tmp_subscript_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[43]);

                        if (unlikely(tmp_subscript_value_43 == NULL)) {
                            tmp_subscript_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
                        }

                        if (tmp_subscript_value_43 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_57);

                            exception_lineno = 161;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_43);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_43);
                Py_DECREF(tmp_expression_value_57);
                Py_DECREF(tmp_subscript_value_43);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 161;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[7];
                tmp_expression_value_58 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_58 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_58 == NULL)) {
                            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_58 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 162;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_58);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_44 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

                if (tmp_subscript_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_44 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_44);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_44);
                Py_DECREF(tmp_expression_value_58);
                Py_DECREF(tmp_subscript_value_44);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 162;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[8];
                tmp_expression_value_59 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_59 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_59 == NULL)) {
                            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_59 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 163;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_59);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_45 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[179]);

                if (tmp_subscript_value_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_45 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_45);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_45);
                Py_DECREF(tmp_expression_value_59);
                Py_DECREF(tmp_subscript_value_45);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 163;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[9];
                tmp_expression_value_60 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_60 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_60 == NULL)) {
                            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_60 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 164;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_60);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_46 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[179]);

                if (tmp_subscript_value_46 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_46 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_46);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_60, tmp_subscript_value_46);
                Py_DECREF(tmp_expression_value_60);
                Py_DECREF(tmp_subscript_value_46);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 164;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[10];
                tmp_expression_value_61 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_61 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_61 == NULL)) {
                            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_61 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 165;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_61);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_47 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[179]);

                if (tmp_subscript_value_47 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_47 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_47);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_47);
                Py_DECREF(tmp_expression_value_61);
                Py_DECREF(tmp_subscript_value_47);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 165;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[13];
                tmp_expression_value_62 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_62 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_62 == NULL)) {
                            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_62 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 166;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_62);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_48 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

                if (tmp_subscript_value_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_48 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_48);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_62, tmp_subscript_value_48);
                Py_DECREF(tmp_expression_value_62);
                Py_DECREF(tmp_subscript_value_48);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 166;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[14];
                tmp_expression_value_63 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_63 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_63 == NULL)) {
                            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_63 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 167;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_63);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_49 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

                if (tmp_subscript_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_49 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_49);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_63, tmp_subscript_value_49);
                Py_DECREF(tmp_expression_value_63);
                Py_DECREF(tmp_subscript_value_49);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 167;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[11];
                tmp_expression_value_64 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_64 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_64 == NULL)) {
                            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_64 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 168;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_64);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_50 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

                if (tmp_subscript_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_50 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_50);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_64, tmp_subscript_value_50);
                Py_DECREF(tmp_expression_value_64);
                Py_DECREF(tmp_subscript_value_50);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 168;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[12];
                tmp_expression_value_65 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_65 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_65 == NULL)) {
                            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_65 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 169;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_65);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_51 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

                if (tmp_subscript_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_51 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_51);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_65, tmp_subscript_value_51);
                Py_DECREF(tmp_expression_value_65);
                Py_DECREF(tmp_subscript_value_51);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 169;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[6];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[47]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[47]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 170;
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
                tmp_expression_value_66 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_66 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_66 == NULL)) {
                            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_66 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 171;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_66);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_52 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

                if (tmp_subscript_value_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_52 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_52);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_66, tmp_subscript_value_52);
                Py_DECREF(tmp_expression_value_66);
                Py_DECREF(tmp_subscript_value_52);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 171;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[16];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[67]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 172;
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
                tmp_expression_value_67 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_67 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_67 == NULL)) {
                            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_67 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 173;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_67);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_53 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

                if (tmp_subscript_value_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_53 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_53);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_67, tmp_subscript_value_53);
                Py_DECREF(tmp_expression_value_67);
                Py_DECREF(tmp_subscript_value_53);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 173;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[19];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[107]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 174;
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
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[107]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 175;
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
                tmp_dict_key_1 = mod_consts[20];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[107]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                        }

                        if (tmp_dict_value_1 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 176;
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
                tmp_dict_key_1 = mod_consts[21];
                tmp_expression_value_68 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

                if (tmp_expression_value_68 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                        if (unlikely(tmp_expression_value_68 == NULL)) {
                            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                        }

                        if (tmp_expression_value_68 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 177;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_68);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_54 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

                if (tmp_subscript_value_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_54 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_54);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_68, tmp_subscript_value_54);
                Py_DECREF(tmp_expression_value_68);
                Py_DECREF(tmp_subscript_value_54);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 177;
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
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_flet_core$textfield$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$textfield$$$function__2__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[229], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_2_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_flet_core$textfield$$$function__3__before_build_command(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[27], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$textfield$$$function__4_focus();

        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[31], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$textfield$$$function__5_focus_async();

        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[36], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_2 = "c";
            goto frame_exception_exit_4;
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_subscript_value_55;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_subscript_value_56;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_13 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_6 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 286;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_2 = mod_consts[234];
            tmp_expression_value_69 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_69 == NULL)) {
                        tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_6);

                        exception_lineno = 287;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_69);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_55 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

            if (tmp_subscript_value_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_55 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_55);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_69, tmp_subscript_value_55);
            Py_DECREF(tmp_expression_value_69);
            Py_DECREF(tmp_subscript_value_55);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 287;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_args_element_value_1 = MAKE_FUNCTION_flet_core$textfield$$$function__6_value(tmp_annotations_2);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 286;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_7 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_3 = mod_consts[234];
            tmp_expression_value_70 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_70 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_70 == NULL)) {
                        tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_70 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 287;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_70);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_56 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

            if (tmp_subscript_value_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_56 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_56);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_70, tmp_subscript_value_56);
            Py_DECREF(tmp_expression_value_70);
            Py_DECREF(tmp_subscript_value_56);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_args_element_value_2 = MAKE_FUNCTION_flet_core$textfield$$$function__6_value(tmp_annotations_3);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 286;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_subscript_value_57;
            tmp_expression_value_71 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[3]);

            if (unlikely(tmp_expression_value_71 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[3]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[236]);
            Py_DECREF(tmp_expression_value_71);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_4 = mod_consts[3];
            tmp_expression_value_72 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_72 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_72 == NULL)) {
                        tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_72 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);

                        exception_lineno = 291;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_72);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_57 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[174]);

            if (tmp_subscript_value_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_57 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_57);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_72, tmp_subscript_value_57);
            Py_DECREF(tmp_expression_value_72);
            Py_DECREF(tmp_subscript_value_57);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 291;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_args_element_value_3 = MAKE_FUNCTION_flet_core$textfield$$$function__7_value(tmp_annotations_4);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 290;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_2 = "c";
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
            PyObject *tmp_expression_value_73;
            PyObject *tmp_subscript_value_58;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_subscript_value_59;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_14 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_9 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 295;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_5 = mod_consts[234];
            tmp_expression_value_73 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_73 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_73 == NULL)) {
                        tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_73 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_9);

                        exception_lineno = 296;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_73);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_58 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[43]);

            if (tmp_subscript_value_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_58 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[43]);

                    if (unlikely(tmp_subscript_value_58 == NULL)) {
                        tmp_subscript_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
                    }

                    if (tmp_subscript_value_58 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_9);
                        Py_DECREF(tmp_expression_value_73);

                        exception_lineno = 296;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_58);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_73, tmp_subscript_value_58);
            Py_DECREF(tmp_expression_value_73);
            Py_DECREF(tmp_subscript_value_58);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);

                exception_lineno = 296;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_4 = MAKE_FUNCTION_flet_core$textfield$$$function__8_keyboard_type(tmp_annotations_5);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 295;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_10 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_6 = mod_consts[234];
            tmp_expression_value_74 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_74 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_74 == NULL)) {
                        tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_74 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 296;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_74);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_59 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[43]);

            if (tmp_subscript_value_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_59 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[43]);

                    if (unlikely(tmp_subscript_value_59 == NULL)) {
                        tmp_subscript_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
                    }

                    if (tmp_subscript_value_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_74);

                        exception_lineno = 296;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_59);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_74, tmp_subscript_value_59);
            Py_DECREF(tmp_expression_value_74);
            Py_DECREF(tmp_subscript_value_59);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_args_element_value_5 = MAKE_FUNCTION_flet_core$textfield$$$function__8_keyboard_type(tmp_annotations_6);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 295;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_subscript_value_60;
            tmp_expression_value_75 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[5]);

            if (unlikely(tmp_expression_value_75 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 299;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[236]);
            Py_DECREF(tmp_expression_value_75);
            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_7 = mod_consts[3];
            tmp_expression_value_76 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_76 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_76 == NULL)) {
                        tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_76 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);

                        exception_lineno = 300;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_76);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_60 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[43]);

            if (tmp_subscript_value_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_60 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[43]);

                    if (unlikely(tmp_subscript_value_60 == NULL)) {
                        tmp_subscript_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
                    }

                    if (tmp_subscript_value_60 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);
                        Py_DECREF(tmp_expression_value_76);

                        exception_lineno = 300;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_60);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_76, tmp_subscript_value_60);
            Py_DECREF(tmp_expression_value_76);
            Py_DECREF(tmp_subscript_value_60);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_11);

                exception_lineno = 300;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_args_element_value_6 = MAKE_FUNCTION_flet_core$textfield$$$function__9_keyboard_type(tmp_annotations_7);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 299;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_key_8 = mod_consts[3];
            tmp_dict_value_8 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[131]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[131]);

                    if (unlikely(tmp_dict_value_8 == NULL)) {
                        tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
                    }

                    if (tmp_dict_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 307;
                        type_description_2 = "c";
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


            tmp_dictset_value = MAKE_FUNCTION_flet_core$textfield$$$function__10___set_keyboard_type(tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[45], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_15 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_12 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 311;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_9 = mod_consts[234];
            tmp_dict_value_9 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[47]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[47]);

                    if (unlikely(tmp_dict_value_9 == NULL)) {
                        tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
                    }

                    if (tmp_dict_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_12);

                        exception_lineno = 312;
                        type_description_2 = "c";
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


            tmp_args_element_value_7 = MAKE_FUNCTION_flet_core$textfield$$$function__11_text_align(tmp_annotations_9);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 311;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_13 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_10 = mod_consts[234];
            tmp_dict_value_10 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[47]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[47]);

                    if (unlikely(tmp_dict_value_10 == NULL)) {
                        tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
                    }

                    if (tmp_dict_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 312;
                        type_description_2 = "c";
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


            tmp_args_element_value_8 = MAKE_FUNCTION_flet_core$textfield$$$function__11_text_align(tmp_annotations_10);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 311;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            tmp_expression_value_77 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[6]);

            if (unlikely(tmp_expression_value_77 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[6]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 315;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[236]);
            Py_DECREF(tmp_expression_value_77);
            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_11 = mod_consts[3];
            tmp_dict_value_11 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[47]);

            if (tmp_dict_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[47]);

                    if (unlikely(tmp_dict_value_11 == NULL)) {
                        tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
                    }

                    if (tmp_dict_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);

                        exception_lineno = 316;
                        type_description_2 = "c";
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


            tmp_args_element_value_9 = MAKE_FUNCTION_flet_core$textfield$$$function__12_text_align(tmp_annotations_11);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 315;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_dict_key_12 = mod_consts[3];
            tmp_dict_value_12 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[126]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[126]);

                    if (unlikely(tmp_dict_value_12 == NULL)) {
                        tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
                    }

                    if (tmp_dict_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 323;
                        type_description_2 = "c";
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


            tmp_dictset_value = MAKE_FUNCTION_flet_core$textfield$$$function__13___set_text_align(tmp_annotations_12);

            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[49], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 323;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_subscript_value_61;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_subscript_value_62;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_16 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_value_15 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 327;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_13 = mod_consts[234];
            tmp_expression_value_78 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_78 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_78 == NULL)) {
                        tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_78 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_15);

                        exception_lineno = 328;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_78);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_61 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

            if (tmp_subscript_value_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_61 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_61);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_78, tmp_subscript_value_61);
            Py_DECREF(tmp_expression_value_78);
            Py_DECREF(tmp_subscript_value_61);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 328;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_args_element_value_10 = MAKE_FUNCTION_flet_core$textfield$$$function__14_multiline(tmp_annotations_13);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 327;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_16 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_14 = mod_consts[234];
            tmp_expression_value_79 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_79 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_79 == NULL)) {
                        tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_79 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 328;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_79);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_62 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

            if (tmp_subscript_value_62 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_62 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_62);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_79, tmp_subscript_value_62);
            Py_DECREF(tmp_expression_value_79);
            Py_DECREF(tmp_subscript_value_62);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_14 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_args_element_value_11 = MAKE_FUNCTION_flet_core$textfield$$$function__14_multiline(tmp_annotations_14);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 327;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_subscript_value_63;
            tmp_expression_value_80 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[7]);

            if (unlikely(tmp_expression_value_80 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 331;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[236]);
            Py_DECREF(tmp_expression_value_80);
            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_15 = mod_consts[3];
            tmp_expression_value_81 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_81 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_81 == NULL)) {
                        tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_81 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);

                        exception_lineno = 332;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_81);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_63 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

            if (tmp_subscript_value_63 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_63 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_63);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_81, tmp_subscript_value_63);
            Py_DECREF(tmp_expression_value_81);
            Py_DECREF(tmp_subscript_value_63);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_17);

                exception_lineno = 332;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_15 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$textfield$$$function__15_multiline(tmp_annotations_15);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 331;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_subscript_value_64;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_annotations_17;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_subscript_value_65;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_17 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_18 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 336;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_16 = mod_consts[234];
            tmp_expression_value_82 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_82 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_82 == NULL)) {
                        tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_82 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);

                        exception_lineno = 337;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_82);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_64 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[179]);

            if (tmp_subscript_value_64 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_64 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_64);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_82, tmp_subscript_value_64);
            Py_DECREF(tmp_expression_value_82);
            Py_DECREF(tmp_subscript_value_64);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_18);

                exception_lineno = 337;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_16 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));


            tmp_args_element_value_13 = MAKE_FUNCTION_flet_core$textfield$$$function__16_min_lines(tmp_annotations_16);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 336;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_19 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_17 = mod_consts[234];
            tmp_expression_value_83 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_83 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_83 == NULL)) {
                        tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_83 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 337;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_83);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_65 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[179]);

            if (tmp_subscript_value_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_65 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_65);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_83, tmp_subscript_value_65);
            Py_DECREF(tmp_expression_value_83);
            Py_DECREF(tmp_subscript_value_65);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_17 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));


            tmp_args_element_value_14 = MAKE_FUNCTION_flet_core$textfield$$$function__16_min_lines(tmp_annotations_17);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 336;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_20;
            PyObject *tmp_expression_value_84;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_subscript_value_66;
            tmp_expression_value_84 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[8]);

            if (unlikely(tmp_expression_value_84 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[8]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 340;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[236]);
            Py_DECREF(tmp_expression_value_84);
            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_18 = mod_consts[3];
            tmp_expression_value_85 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_85 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_85 == NULL)) {
                        tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_85 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_20);

                        exception_lineno = 341;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_85);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_66 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[179]);

            if (tmp_subscript_value_66 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_66 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_66);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_85, tmp_subscript_value_66);
            Py_DECREF(tmp_expression_value_85);
            Py_DECREF(tmp_subscript_value_66);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_20);

                exception_lineno = 341;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_18 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));


            tmp_args_element_value_15 = MAKE_FUNCTION_flet_core$textfield$$$function__17_min_lines(tmp_annotations_18);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 340;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_called_value_21;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_subscript_value_67;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_subscript_value_68;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_18 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_called_value_21 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 345;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_19 = mod_consts[234];
            tmp_expression_value_86 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_86 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_86 == NULL)) {
                        tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_86 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);

                        exception_lineno = 346;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_86);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_67 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[179]);

            if (tmp_subscript_value_67 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_67 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_67);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_86, tmp_subscript_value_67);
            Py_DECREF(tmp_expression_value_86);
            Py_DECREF(tmp_subscript_value_67);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);

                exception_lineno = 346;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_19 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));


            tmp_args_element_value_16 = MAKE_FUNCTION_flet_core$textfield$$$function__18_max_lines(tmp_annotations_19);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 345;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_22 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_20 = mod_consts[234];
            tmp_expression_value_87 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_87 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_87 == NULL)) {
                        tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_87 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 346;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_87);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_68 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[179]);

            if (tmp_subscript_value_68 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_68 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_68);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_87, tmp_subscript_value_68);
            Py_DECREF(tmp_expression_value_87);
            Py_DECREF(tmp_subscript_value_68);
            if (tmp_dict_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_20 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));


            tmp_args_element_value_17 = MAKE_FUNCTION_flet_core$textfield$$$function__18_max_lines(tmp_annotations_20);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 345;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_23;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_expression_value_89;
            PyObject *tmp_subscript_value_69;
            tmp_expression_value_88 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[9]);

            if (unlikely(tmp_expression_value_88 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[9]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 349;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[236]);
            Py_DECREF(tmp_expression_value_88);
            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_21 = mod_consts[3];
            tmp_expression_value_89 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_89 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_89 == NULL)) {
                        tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_89 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);

                        exception_lineno = 350;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_89);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_69 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[179]);

            if (tmp_subscript_value_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_69 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_69);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_89, tmp_subscript_value_69);
            Py_DECREF(tmp_expression_value_89);
            Py_DECREF(tmp_subscript_value_69);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_23);

                exception_lineno = 350;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_21 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));


            tmp_args_element_value_18 = MAKE_FUNCTION_flet_core$textfield$$$function__19_max_lines(tmp_annotations_21);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 349;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_expression_value_90;
            PyObject *tmp_subscript_value_70;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_annotations_23;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_subscript_value_71;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_19 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_10;
            } else {
                goto condexpr_false_10;
            }
            condexpr_true_10:;
            tmp_called_value_24 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 354;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_22 = mod_consts[234];
            tmp_expression_value_90 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_90 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_90 == NULL)) {
                        tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_90 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_24);

                        exception_lineno = 355;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_90);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_70 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[179]);

            if (tmp_subscript_value_70 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_70 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_70);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_90, tmp_subscript_value_70);
            Py_DECREF(tmp_expression_value_90);
            Py_DECREF(tmp_subscript_value_70);
            if (tmp_dict_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_24);

                exception_lineno = 355;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_22 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));


            tmp_args_element_value_19 = MAKE_FUNCTION_flet_core$textfield$$$function__20_max_length(tmp_annotations_22);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 354;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_10;
            condexpr_false_10:;
            tmp_called_value_25 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_23 = mod_consts[234];
            tmp_expression_value_91 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_91 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_91 == NULL)) {
                        tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_91 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 355;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_91);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_71 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[179]);

            if (tmp_subscript_value_71 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_71 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_71);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_91, tmp_subscript_value_71);
            Py_DECREF(tmp_expression_value_91);
            Py_DECREF(tmp_subscript_value_71);
            if (tmp_dict_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_23 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));


            tmp_args_element_value_20 = MAKE_FUNCTION_flet_core$textfield$$$function__20_max_length(tmp_annotations_23);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 354;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 354;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_10:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_26;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            PyObject *tmp_expression_value_93;
            PyObject *tmp_subscript_value_72;
            tmp_expression_value_92 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[10]);

            if (unlikely(tmp_expression_value_92 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[10]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 358;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[236]);
            Py_DECREF(tmp_expression_value_92);
            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_24 = mod_consts[3];
            tmp_expression_value_93 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_93 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_93 == NULL)) {
                        tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_93 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);

                        exception_lineno = 359;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_93);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_72 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[179]);

            if (tmp_subscript_value_72 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_72 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_72);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_93, tmp_subscript_value_72);
            Py_DECREF(tmp_expression_value_93);
            Py_DECREF(tmp_subscript_value_72);
            if (tmp_dict_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);

                exception_lineno = 359;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_24 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));


            tmp_args_element_value_21 = MAKE_FUNCTION_flet_core$textfield$$$function__21_max_length(tmp_annotations_24);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 358;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_annotations_25;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            PyObject *tmp_expression_value_94;
            PyObject *tmp_subscript_value_73;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_annotations_26;
            PyObject *tmp_dict_key_26;
            PyObject *tmp_dict_value_26;
            PyObject *tmp_expression_value_95;
            PyObject *tmp_subscript_value_74;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_20 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_11;
            } else {
                goto condexpr_false_11;
            }
            condexpr_true_11:;
            tmp_called_value_27 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 363;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_25 = mod_consts[234];
            tmp_expression_value_94 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_94 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_94 == NULL)) {
                        tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_94 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_27);

                        exception_lineno = 364;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_94);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_73 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

            if (tmp_subscript_value_73 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_73 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_73);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_94, tmp_subscript_value_73);
            Py_DECREF(tmp_expression_value_94);
            Py_DECREF(tmp_subscript_value_73);
            if (tmp_dict_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_27);

                exception_lineno = 364;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_25 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));


            tmp_args_element_value_22 = MAKE_FUNCTION_flet_core$textfield$$$function__22_read_only(tmp_annotations_25);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 363;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_28 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_26 = mod_consts[234];
            tmp_expression_value_95 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_95 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_95 == NULL)) {
                        tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_95 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 364;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_95);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_74 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

            if (tmp_subscript_value_74 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_74 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_74);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_95, tmp_subscript_value_74);
            Py_DECREF(tmp_expression_value_95);
            Py_DECREF(tmp_subscript_value_74);
            if (tmp_dict_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_26 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));


            tmp_args_element_value_23 = MAKE_FUNCTION_flet_core$textfield$$$function__22_read_only(tmp_annotations_26);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 363;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_29;
            PyObject *tmp_expression_value_96;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_annotations_27;
            PyObject *tmp_dict_key_27;
            PyObject *tmp_dict_value_27;
            PyObject *tmp_expression_value_97;
            PyObject *tmp_subscript_value_75;
            tmp_expression_value_96 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[11]);

            if (unlikely(tmp_expression_value_96 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 367;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[236]);
            Py_DECREF(tmp_expression_value_96);
            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_27 = mod_consts[3];
            tmp_expression_value_97 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_97 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_97 == NULL)) {
                        tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_97 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_29);

                        exception_lineno = 368;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_97);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_75 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

            if (tmp_subscript_value_75 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_75 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_75);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_97, tmp_subscript_value_75);
            Py_DECREF(tmp_expression_value_97);
            Py_DECREF(tmp_subscript_value_75);
            if (tmp_dict_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_29);

                exception_lineno = 368;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_27 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));


            tmp_args_element_value_24 = MAKE_FUNCTION_flet_core$textfield$$$function__23_read_only(tmp_annotations_27);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 367;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_annotations_28;
            PyObject *tmp_dict_key_28;
            PyObject *tmp_dict_value_28;
            PyObject *tmp_expression_value_98;
            PyObject *tmp_subscript_value_76;
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_annotations_29;
            PyObject *tmp_dict_key_29;
            PyObject *tmp_dict_value_29;
            PyObject *tmp_expression_value_99;
            PyObject *tmp_subscript_value_77;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_21 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_12;
            } else {
                goto condexpr_false_12;
            }
            condexpr_true_12:;
            tmp_called_value_30 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_30 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 372;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_28 = mod_consts[234];
            tmp_expression_value_98 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_98 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_98 == NULL)) {
                        tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_98 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_30);

                        exception_lineno = 373;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_98);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_76 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

            if (tmp_subscript_value_76 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_76 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_76);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_98, tmp_subscript_value_76);
            Py_DECREF(tmp_expression_value_98);
            Py_DECREF(tmp_subscript_value_76);
            if (tmp_dict_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_30);

                exception_lineno = 373;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_28 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));


            tmp_args_element_value_25 = MAKE_FUNCTION_flet_core$textfield$$$function__24_shift_enter(tmp_annotations_28);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 372;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_called_value_31 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_29 = mod_consts[234];
            tmp_expression_value_99 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_99 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_99 == NULL)) {
                        tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_99 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 373;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_99);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_77 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

            if (tmp_subscript_value_77 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_77 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_77);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_99, tmp_subscript_value_77);
            Py_DECREF(tmp_expression_value_99);
            Py_DECREF(tmp_subscript_value_77);
            if (tmp_dict_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_29 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));


            tmp_args_element_value_26 = MAKE_FUNCTION_flet_core$textfield$$$function__24_shift_enter(tmp_annotations_29);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 372;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_32;
            PyObject *tmp_expression_value_100;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_annotations_30;
            PyObject *tmp_dict_key_30;
            PyObject *tmp_dict_value_30;
            PyObject *tmp_expression_value_101;
            PyObject *tmp_subscript_value_78;
            tmp_expression_value_100 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[12]);

            if (unlikely(tmp_expression_value_100 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 376;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[236]);
            Py_DECREF(tmp_expression_value_100);
            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_30 = mod_consts[3];
            tmp_expression_value_101 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_101 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_101 == NULL)) {
                        tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_101 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_32);

                        exception_lineno = 377;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_101);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_78 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

            if (tmp_subscript_value_78 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_78 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_78);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_101, tmp_subscript_value_78);
            Py_DECREF(tmp_expression_value_101);
            Py_DECREF(tmp_subscript_value_78);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_32);

                exception_lineno = 377;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_30 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));


            tmp_args_element_value_27 = MAKE_FUNCTION_flet_core$textfield$$$function__25_shift_enter(tmp_annotations_30);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 376;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_27);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 376;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_annotations_31;
            PyObject *tmp_dict_key_31;
            PyObject *tmp_dict_value_31;
            PyObject *tmp_expression_value_102;
            PyObject *tmp_subscript_value_79;
            PyObject *tmp_called_value_34;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_annotations_32;
            PyObject *tmp_dict_key_32;
            PyObject *tmp_dict_value_32;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_subscript_value_80;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_22 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_13;
            } else {
                goto condexpr_false_13;
            }
            condexpr_true_13:;
            tmp_called_value_33 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_33 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 381;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_31 = mod_consts[234];
            tmp_expression_value_102 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_102 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_102 == NULL)) {
                        tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_102 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_33);

                        exception_lineno = 382;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_102);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_79 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

            if (tmp_subscript_value_79 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_79 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_79);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_102, tmp_subscript_value_79);
            Py_DECREF(tmp_expression_value_102);
            Py_DECREF(tmp_subscript_value_79);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_33);

                exception_lineno = 382;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_31 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));


            tmp_args_element_value_28 = MAKE_FUNCTION_flet_core$textfield$$$function__26_password(tmp_annotations_31);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 381;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_33);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_called_value_34 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_32 = mod_consts[234];
            tmp_expression_value_103 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_103 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_103 == NULL)) {
                        tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_103 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 382;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_103);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_80 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

            if (tmp_subscript_value_80 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_80 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_80);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_103, tmp_subscript_value_80);
            Py_DECREF(tmp_expression_value_103);
            Py_DECREF(tmp_subscript_value_80);
            if (tmp_dict_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 382;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_32 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_32, tmp_dict_value_32);
            Py_DECREF(tmp_dict_value_32);
            assert(!(tmp_res != 0));


            tmp_args_element_value_29 = MAKE_FUNCTION_flet_core$textfield$$$function__26_password(tmp_annotations_32);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 381;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 381;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 382;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_35;
            PyObject *tmp_expression_value_104;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_annotations_33;
            PyObject *tmp_dict_key_33;
            PyObject *tmp_dict_value_33;
            PyObject *tmp_expression_value_105;
            PyObject *tmp_subscript_value_81;
            tmp_expression_value_104 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[13]);

            if (unlikely(tmp_expression_value_104 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[13]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 385;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_104 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[236]);
            Py_DECREF(tmp_expression_value_104);
            if (tmp_called_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_33 = mod_consts[3];
            tmp_expression_value_105 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_105 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_105 == NULL)) {
                        tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_105 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_35);

                        exception_lineno = 386;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_105);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_81 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

            if (tmp_subscript_value_81 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_81 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_81);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_105, tmp_subscript_value_81);
            Py_DECREF(tmp_expression_value_105);
            Py_DECREF(tmp_subscript_value_81);
            if (tmp_dict_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_35);

                exception_lineno = 386;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_33 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_33, tmp_dict_value_33);
            Py_DECREF(tmp_dict_value_33);
            assert(!(tmp_res != 0));


            tmp_args_element_value_30 = MAKE_FUNCTION_flet_core$textfield$$$function__27_password(tmp_annotations_33);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 385;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_annotations_34;
            PyObject *tmp_dict_key_34;
            PyObject *tmp_dict_value_34;
            PyObject *tmp_expression_value_106;
            PyObject *tmp_subscript_value_82;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_annotations_35;
            PyObject *tmp_dict_key_35;
            PyObject *tmp_dict_value_35;
            PyObject *tmp_expression_value_107;
            PyObject *tmp_subscript_value_83;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 390;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_23 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_14;
            } else {
                goto condexpr_false_14;
            }
            condexpr_true_14:;
            tmp_called_value_36 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_36 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 390;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 390;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_34 = mod_consts[234];
            tmp_expression_value_106 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_106 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_106 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_106 == NULL)) {
                        tmp_expression_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_106 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_36);

                        exception_lineno = 391;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_106);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_82 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

            if (tmp_subscript_value_82 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_82 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_82);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_106, tmp_subscript_value_82);
            Py_DECREF(tmp_expression_value_106);
            Py_DECREF(tmp_subscript_value_82);
            if (tmp_dict_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_36);

                exception_lineno = 391;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_34 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_34, tmp_dict_value_34);
            Py_DECREF(tmp_dict_value_34);
            assert(!(tmp_res != 0));


            tmp_args_element_value_31 = MAKE_FUNCTION_flet_core$textfield$$$function__28_can_reveal_password(tmp_annotations_34);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 390;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_31);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 390;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_called_value_37 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_35 = mod_consts[234];
            tmp_expression_value_107 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_107 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_107 == NULL)) {
                        tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_107 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 391;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_107);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_83 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

            if (tmp_subscript_value_83 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_83 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_83);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_107, tmp_subscript_value_83);
            Py_DECREF(tmp_expression_value_107);
            Py_DECREF(tmp_subscript_value_83);
            if (tmp_dict_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_35 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_35, tmp_dict_value_35);
            Py_DECREF(tmp_dict_value_35);
            assert(!(tmp_res != 0));


            tmp_args_element_value_32 = MAKE_FUNCTION_flet_core$textfield$$$function__28_can_reveal_password(tmp_annotations_35);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 390;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 390;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_14:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_38;
            PyObject *tmp_expression_value_108;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_annotations_36;
            PyObject *tmp_dict_key_36;
            PyObject *tmp_dict_value_36;
            PyObject *tmp_expression_value_109;
            PyObject *tmp_subscript_value_84;
            tmp_expression_value_108 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[14]);

            if (unlikely(tmp_expression_value_108 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[14]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 394;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_108 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_called_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[236]);
            Py_DECREF(tmp_expression_value_108);
            if (tmp_called_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_36 = mod_consts[3];
            tmp_expression_value_109 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_109 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_109 == NULL)) {
                        tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_109 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_38);

                        exception_lineno = 395;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_109);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_84 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

            if (tmp_subscript_value_84 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_84 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_84);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_109, tmp_subscript_value_84);
            Py_DECREF(tmp_expression_value_109);
            Py_DECREF(tmp_subscript_value_84);
            if (tmp_dict_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_38);

                exception_lineno = 395;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_36 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_36, tmp_dict_value_36);
            Py_DECREF(tmp_dict_value_36);
            assert(!(tmp_res != 0));


            tmp_args_element_value_33 = MAKE_FUNCTION_flet_core$textfield$$$function__29_can_reveal_password(tmp_annotations_36);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 394;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_33);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_annotations_37;
            PyObject *tmp_dict_key_37;
            PyObject *tmp_dict_value_37;
            PyObject *tmp_expression_value_110;
            PyObject *tmp_subscript_value_85;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_element_value_35;
            PyObject *tmp_annotations_38;
            PyObject *tmp_dict_key_38;
            PyObject *tmp_dict_value_38;
            PyObject *tmp_expression_value_111;
            PyObject *tmp_subscript_value_86;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 399;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_24 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_15;
            } else {
                goto condexpr_false_15;
            }
            condexpr_true_15:;
            tmp_called_value_39 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_39 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 399;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 399;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_37 = mod_consts[234];
            tmp_expression_value_110 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_110 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_110 == NULL)) {
                        tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_110 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_39);

                        exception_lineno = 400;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_110);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_85 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

            if (tmp_subscript_value_85 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_85 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_85);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_110, tmp_subscript_value_85);
            Py_DECREF(tmp_expression_value_110);
            Py_DECREF(tmp_subscript_value_85);
            if (tmp_dict_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);

                exception_lineno = 400;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_37 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_37, tmp_dict_key_37, tmp_dict_value_37);
            Py_DECREF(tmp_dict_value_37);
            assert(!(tmp_res != 0));


            tmp_args_element_value_34 = MAKE_FUNCTION_flet_core$textfield$$$function__30_autofocus(tmp_annotations_37);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 399;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_34);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 399;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_15;
            condexpr_false_15:;
            tmp_called_value_40 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_38 = mod_consts[234];
            tmp_expression_value_111 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_111 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_111 == NULL)) {
                        tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_111 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 400;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_111);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_86 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

            if (tmp_subscript_value_86 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_86 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_86);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_38 = LOOKUP_SUBSCRIPT(tmp_expression_value_111, tmp_subscript_value_86);
            Py_DECREF(tmp_expression_value_111);
            Py_DECREF(tmp_subscript_value_86);
            if (tmp_dict_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 400;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_38 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_38, tmp_dict_key_38, tmp_dict_value_38);
            Py_DECREF(tmp_dict_value_38);
            assert(!(tmp_res != 0));


            tmp_args_element_value_35 = MAKE_FUNCTION_flet_core$textfield$$$function__30_autofocus(tmp_annotations_38);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 399;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 399;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_15:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 400;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_41;
            PyObject *tmp_expression_value_112;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_annotations_39;
            PyObject *tmp_dict_key_39;
            PyObject *tmp_dict_value_39;
            PyObject *tmp_expression_value_113;
            PyObject *tmp_subscript_value_87;
            tmp_expression_value_112 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[15]);

            if (unlikely(tmp_expression_value_112 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[15]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 403;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_112 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 403;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[236]);
            Py_DECREF(tmp_expression_value_112);
            if (tmp_called_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 403;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_39 = mod_consts[3];
            tmp_expression_value_113 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[102]);

            if (tmp_expression_value_113 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[102]);

                    if (unlikely(tmp_expression_value_113 == NULL)) {
                        tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
                    }

                    if (tmp_expression_value_113 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_41);

                        exception_lineno = 404;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_113);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_87 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[178]);

            if (tmp_subscript_value_87 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_87 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_87);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_39 = LOOKUP_SUBSCRIPT(tmp_expression_value_113, tmp_subscript_value_87);
            Py_DECREF(tmp_expression_value_113);
            Py_DECREF(tmp_subscript_value_87);
            if (tmp_dict_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_41);

                exception_lineno = 404;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_39 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_39, tmp_dict_key_39, tmp_dict_value_39);
            Py_DECREF(tmp_dict_value_39);
            assert(!(tmp_res != 0));


            tmp_args_element_value_36 = MAKE_FUNCTION_flet_core$textfield$$$function__31_autofocus(tmp_annotations_39);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 403;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_36);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 403;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 404;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_called_value_42;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_annotations_40;
            PyObject *tmp_dict_key_40;
            PyObject *tmp_dict_value_40;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_annotations_41;
            PyObject *tmp_dict_key_41;
            PyObject *tmp_dict_value_41;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_25 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_16;
            } else {
                goto condexpr_false_16;
            }
            condexpr_true_16:;
            tmp_called_value_42 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_42 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 408;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_40 = mod_consts[234];
            tmp_dict_value_40 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[67]);

            if (tmp_dict_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_dict_value_40 == NULL)) {
                        tmp_dict_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_dict_value_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_42);

                        exception_lineno = 409;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_40);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_40 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_40, tmp_dict_key_40, tmp_dict_value_40);
            Py_DECREF(tmp_dict_value_40);
            assert(!(tmp_res != 0));


            tmp_args_element_value_37 = MAKE_FUNCTION_flet_core$textfield$$$function__32_capitalization(tmp_annotations_40);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 408;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_37);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_16;
            condexpr_false_16:;
            tmp_called_value_43 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_41 = mod_consts[234];
            tmp_dict_value_41 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[67]);

            if (tmp_dict_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_dict_value_41 == NULL)) {
                        tmp_dict_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_dict_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 409;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_41);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_41 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_41, tmp_dict_key_41, tmp_dict_value_41);
            Py_DECREF(tmp_dict_value_41);
            assert(!(tmp_res != 0));


            tmp_args_element_value_38 = MAKE_FUNCTION_flet_core$textfield$$$function__32_capitalization(tmp_annotations_41);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 408;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_16:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_44;
            PyObject *tmp_expression_value_114;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_annotations_42;
            PyObject *tmp_dict_key_42;
            PyObject *tmp_dict_value_42;
            tmp_expression_value_114 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[16]);

            if (unlikely(tmp_expression_value_114 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[16]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 412;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_114 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 412;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[236]);
            Py_DECREF(tmp_expression_value_114);
            if (tmp_called_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 412;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_42 = mod_consts[3];
            tmp_dict_value_42 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[67]);

            if (tmp_dict_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_42 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_dict_value_42 == NULL)) {
                        tmp_dict_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_dict_value_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_44);

                        exception_lineno = 413;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_42);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_42 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_42, tmp_dict_key_42, tmp_dict_value_42);
            Py_DECREF(tmp_dict_value_42);
            assert(!(tmp_res != 0));


            tmp_args_element_value_39 = MAKE_FUNCTION_flet_core$textfield$$$function__33_capitalization(tmp_annotations_42);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 412;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_39);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_element_value_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 412;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 413;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_43;
            PyObject *tmp_dict_key_43;
            PyObject *tmp_dict_value_43;
            tmp_dict_key_43 = mod_consts[3];
            tmp_dict_value_43 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[163]);

            if (tmp_dict_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[163]);

                    if (unlikely(tmp_dict_value_43 == NULL)) {
                        tmp_dict_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
                    }

                    if (tmp_dict_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 420;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_43);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_43 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_43, tmp_dict_value_43);
            Py_DECREF(tmp_dict_value_43);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$textfield$$$function__34___set_capitalization(tmp_annotations_43);

            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[68], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_element_value_41;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 424;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_26 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_17;
            } else {
                goto condexpr_false_17;
            }
            condexpr_true_17:;
            tmp_called_value_45 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_45 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 424;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 424;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_40 = MAKE_FUNCTION_flet_core$textfield$$$function__35_cursor_color();

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 424;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_40);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 424;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_17;
            condexpr_false_17:;
            tmp_called_value_46 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_41 = MAKE_FUNCTION_flet_core$textfield$$$function__35_cursor_color();

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 424;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 424;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_17:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_42;
            tmp_called_instance_1 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[17]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[17]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 428;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_42 = MAKE_FUNCTION_flet_core$textfield$$$function__36_cursor_color();

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 428;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[236], tmp_args_element_value_42);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_42);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 428;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[17], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 429;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_annotations_44;
            PyObject *tmp_dict_key_44;
            PyObject *tmp_dict_value_44;
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_annotations_45;
            PyObject *tmp_dict_key_45;
            PyObject *tmp_dict_value_45;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_27 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_18;
            } else {
                goto condexpr_false_18;
            }
            condexpr_true_18:;
            tmp_called_value_47 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_47 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 433;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_44 = mod_consts[234];
            tmp_dict_value_44 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[107]);

            if (tmp_dict_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_44 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107]);

                    if (unlikely(tmp_dict_value_44 == NULL)) {
                        tmp_dict_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                    }

                    if (tmp_dict_value_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_47);

                        exception_lineno = 434;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_44);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_44 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_44, tmp_dict_key_44, tmp_dict_value_44);
            Py_DECREF(tmp_dict_value_44);
            assert(!(tmp_res != 0));


            tmp_args_element_value_43 = MAKE_FUNCTION_flet_core$textfield$$$function__37_cursor_height(tmp_annotations_44);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 433;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_43);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_18;
            condexpr_false_18:;
            tmp_called_value_48 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_45 = mod_consts[234];
            tmp_dict_value_45 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[107]);

            if (tmp_dict_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107]);

                    if (unlikely(tmp_dict_value_45 == NULL)) {
                        tmp_dict_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                    }

                    if (tmp_dict_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 434;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_45);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_45 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_45, tmp_dict_value_45);
            Py_DECREF(tmp_dict_value_45);
            assert(!(tmp_res != 0));


            tmp_args_element_value_44 = MAKE_FUNCTION_flet_core$textfield$$$function__37_cursor_height(tmp_annotations_45);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 433;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_44);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 433;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_18:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 434;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_49;
            PyObject *tmp_expression_value_115;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_annotations_46;
            PyObject *tmp_dict_key_46;
            PyObject *tmp_dict_value_46;
            tmp_expression_value_115 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[18]);

            if (unlikely(tmp_expression_value_115 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[18]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 437;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_115 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 437;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_called_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[236]);
            Py_DECREF(tmp_expression_value_115);
            if (tmp_called_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 437;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_46 = mod_consts[3];
            tmp_dict_value_46 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[107]);

            if (tmp_dict_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_46 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107]);

                    if (unlikely(tmp_dict_value_46 == NULL)) {
                        tmp_dict_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                    }

                    if (tmp_dict_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_49);

                        exception_lineno = 438;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_46);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_46 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_46, tmp_dict_key_46, tmp_dict_value_46);
            Py_DECREF(tmp_dict_value_46);
            assert(!(tmp_res != 0));


            tmp_args_element_value_45 = MAKE_FUNCTION_flet_core$textfield$$$function__38_cursor_height(tmp_annotations_46);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 437;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_45);
            Py_DECREF(tmp_called_value_49);
            Py_DECREF(tmp_args_element_value_45);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 437;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 438;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_annotations_47;
            PyObject *tmp_dict_key_47;
            PyObject *tmp_dict_value_47;
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_annotations_48;
            PyObject *tmp_dict_key_48;
            PyObject *tmp_dict_value_48;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 442;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_28 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_19;
            } else {
                goto condexpr_false_19;
            }
            condexpr_true_19:;
            tmp_called_value_50 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_50 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 442;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 442;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_47 = mod_consts[234];
            tmp_dict_value_47 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[107]);

            if (tmp_dict_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_47 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107]);

                    if (unlikely(tmp_dict_value_47 == NULL)) {
                        tmp_dict_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                    }

                    if (tmp_dict_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_50);

                        exception_lineno = 443;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_47);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_47 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_47, tmp_dict_key_47, tmp_dict_value_47);
            Py_DECREF(tmp_dict_value_47);
            assert(!(tmp_res != 0));


            tmp_args_element_value_46 = MAKE_FUNCTION_flet_core$textfield$$$function__39_cursor_width(tmp_annotations_47);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 442;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_46);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_46);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 442;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_19;
            condexpr_false_19:;
            tmp_called_value_51 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_48 = mod_consts[234];
            tmp_dict_value_48 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[107]);

            if (tmp_dict_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_48 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107]);

                    if (unlikely(tmp_dict_value_48 == NULL)) {
                        tmp_dict_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                    }

                    if (tmp_dict_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 443;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_48);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_48 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_48, tmp_dict_key_48, tmp_dict_value_48);
            Py_DECREF(tmp_dict_value_48);
            assert(!(tmp_res != 0));


            tmp_args_element_value_47 = MAKE_FUNCTION_flet_core$textfield$$$function__39_cursor_width(tmp_annotations_48);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 442;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_47);
            Py_DECREF(tmp_args_element_value_47);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 442;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_19:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_52;
            PyObject *tmp_expression_value_116;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_annotations_49;
            PyObject *tmp_dict_key_49;
            PyObject *tmp_dict_value_49;
            tmp_expression_value_116 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[19]);

            if (unlikely(tmp_expression_value_116 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[19]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 446;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_116 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[236]);
            Py_DECREF(tmp_expression_value_116);
            if (tmp_called_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_49 = mod_consts[3];
            tmp_dict_value_49 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[107]);

            if (tmp_dict_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107]);

                    if (unlikely(tmp_dict_value_49 == NULL)) {
                        tmp_dict_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                    }

                    if (tmp_dict_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_52);

                        exception_lineno = 447;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_49);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_49 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_49, tmp_dict_key_49, tmp_dict_value_49);
            Py_DECREF(tmp_dict_value_49);
            assert(!(tmp_res != 0));


            tmp_args_element_value_48 = MAKE_FUNCTION_flet_core$textfield$$$function__40_cursor_width(tmp_annotations_49);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 446;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_48);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_args_element_value_48);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 447;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_29;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_annotations_50;
            PyObject *tmp_dict_key_50;
            PyObject *tmp_dict_value_50;
            PyObject *tmp_called_value_54;
            PyObject *tmp_args_element_value_50;
            PyObject *tmp_annotations_51;
            PyObject *tmp_dict_key_51;
            PyObject *tmp_dict_value_51;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 451;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_29 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_20;
            } else {
                goto condexpr_false_20;
            }
            condexpr_true_20:;
            tmp_called_value_53 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_53 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 451;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 451;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_50 = mod_consts[234];
            tmp_dict_value_50 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[107]);

            if (tmp_dict_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_50 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107]);

                    if (unlikely(tmp_dict_value_50 == NULL)) {
                        tmp_dict_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                    }

                    if (tmp_dict_value_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_53);

                        exception_lineno = 452;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_50);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_50 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_50, tmp_dict_key_50, tmp_dict_value_50);
            Py_DECREF(tmp_dict_value_50);
            assert(!(tmp_res != 0));


            tmp_args_element_value_49 = MAKE_FUNCTION_flet_core$textfield$$$function__41_cursor_radius(tmp_annotations_50);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 451;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_53, tmp_args_element_value_49);
            Py_DECREF(tmp_called_value_53);
            Py_DECREF(tmp_args_element_value_49);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 451;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_20;
            condexpr_false_20:;
            tmp_called_value_54 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_51 = mod_consts[234];
            tmp_dict_value_51 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[107]);

            if (tmp_dict_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_51 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107]);

                    if (unlikely(tmp_dict_value_51 == NULL)) {
                        tmp_dict_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                    }

                    if (tmp_dict_value_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 452;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_51);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_51 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_51, tmp_dict_key_51, tmp_dict_value_51);
            Py_DECREF(tmp_dict_value_51);
            assert(!(tmp_res != 0));


            tmp_args_element_value_50 = MAKE_FUNCTION_flet_core$textfield$$$function__41_cursor_radius(tmp_annotations_51);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 451;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_50);
            Py_DECREF(tmp_args_element_value_50);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 451;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_20:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 452;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_55;
            PyObject *tmp_expression_value_117;
            PyObject *tmp_args_element_value_51;
            PyObject *tmp_annotations_52;
            PyObject *tmp_dict_key_52;
            PyObject *tmp_dict_value_52;
            tmp_expression_value_117 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[20]);

            if (unlikely(tmp_expression_value_117 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[20]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 455;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_117 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_called_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[236]);
            Py_DECREF(tmp_expression_value_117);
            if (tmp_called_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_52 = mod_consts[3];
            tmp_dict_value_52 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[107]);

            if (tmp_dict_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_52 = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[107]);

                    if (unlikely(tmp_dict_value_52 == NULL)) {
                        tmp_dict_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                    }

                    if (tmp_dict_value_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_55);

                        exception_lineno = 456;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_52);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_52 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_52, tmp_dict_key_52, tmp_dict_value_52);
            Py_DECREF(tmp_dict_value_52);
            assert(!(tmp_res != 0));


            tmp_args_element_value_51 = MAKE_FUNCTION_flet_core$textfield$$$function__42_cursor_radius(tmp_annotations_52);

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 455;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_55, tmp_args_element_value_51);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_args_element_value_51);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 456;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_called_value_56;
            PyObject *tmp_args_element_value_52;
            PyObject *tmp_called_value_57;
            PyObject *tmp_args_element_value_53;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_30 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_21;
            } else {
                goto condexpr_false_21;
            }
            condexpr_true_21:;
            tmp_called_value_56 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_56 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 460;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_52 = MAKE_FUNCTION_flet_core$textfield$$$function__43_selection_color();

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 460;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_56, tmp_args_element_value_52);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_args_element_value_52);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_21;
            condexpr_false_21:;
            tmp_called_value_57 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_53 = MAKE_FUNCTION_flet_core$textfield$$$function__43_selection_color();

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 460;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_57, tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_53);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 460;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_21:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[21], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 461;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_54;
            tmp_called_instance_2 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[21]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[21]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 464;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_54 = MAKE_FUNCTION_flet_core$textfield$$$function__44_selection_color();

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 464;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[236], tmp_args_element_value_54);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_54);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 464;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[21], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_31;
            PyObject *tmp_called_value_58;
            PyObject *tmp_args_element_value_55;
            PyObject *tmp_called_value_59;
            PyObject *tmp_args_element_value_56;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_31 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_22;
            } else {
                goto condexpr_false_22;
            }
            condexpr_true_22:;
            tmp_called_value_58 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_58 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 469;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_55 = MAKE_FUNCTION_flet_core$textfield$$$function__45_on_change();

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 469;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_58, tmp_args_element_value_55);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_args_element_value_55);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_22;
            condexpr_false_22:;
            tmp_called_value_59 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_56 = MAKE_FUNCTION_flet_core$textfield$$$function__45_on_change();

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 469;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_59, tmp_args_element_value_56);
            Py_DECREF(tmp_args_element_value_56);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 469;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_22:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 470;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_57;
            tmp_called_instance_3 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[22]);

            if (unlikely(tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[22]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 473;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 473;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_57 = MAKE_FUNCTION_flet_core$textfield$$$function__46_on_change();

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 473;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[236], tmp_args_element_value_57);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_value_57);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 473;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_32;
            PyObject *tmp_called_value_60;
            PyObject *tmp_args_element_value_58;
            PyObject *tmp_called_value_61;
            PyObject *tmp_args_element_value_59;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 482;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_32 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_23;
            } else {
                goto condexpr_false_23;
            }
            condexpr_true_23:;
            tmp_called_value_60 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_60 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 482;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 482;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_58 = MAKE_FUNCTION_flet_core$textfield$$$function__47_on_submit();

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 482;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_60, tmp_args_element_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_args_element_value_58);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 482;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_23;
            condexpr_false_23:;
            tmp_called_value_61 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_59 = MAKE_FUNCTION_flet_core$textfield$$$function__47_on_submit();

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 482;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_61, tmp_args_element_value_59);
            Py_DECREF(tmp_args_element_value_59);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 482;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_23:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 483;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_60;
            tmp_called_instance_4 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[23]);

            if (unlikely(tmp_called_instance_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[23]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 486;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_60 = MAKE_FUNCTION_flet_core$textfield$$$function__48_on_submit();

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 486;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[236], tmp_args_element_value_60);
            Py_DECREF(tmp_called_instance_4);
            Py_DECREF(tmp_args_element_value_60);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 486;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 487;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_33;
            PyObject *tmp_called_value_62;
            PyObject *tmp_args_element_value_61;
            PyObject *tmp_called_value_63;
            PyObject *tmp_args_element_value_62;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_33 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_24;
            } else {
                goto condexpr_false_24;
            }
            condexpr_true_24:;
            tmp_called_value_62 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_62 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 491;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_61 = MAKE_FUNCTION_flet_core$textfield$$$function__49_on_focus();

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 491;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_62, tmp_args_element_value_61);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_args_element_value_61);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_24;
            condexpr_false_24:;
            tmp_called_value_63 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_62 = MAKE_FUNCTION_flet_core$textfield$$$function__49_on_focus();

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 491;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_63, tmp_args_element_value_62);
            Py_DECREF(tmp_args_element_value_62);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_24:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[24], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 492;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_63;
            tmp_called_instance_5 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[24]);

            if (unlikely(tmp_called_instance_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[24]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 495;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 495;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_63 = MAKE_FUNCTION_flet_core$textfield$$$function__50_on_focus();

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 495;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[236], tmp_args_element_value_63);
            Py_DECREF(tmp_called_instance_5);
            Py_DECREF(tmp_args_element_value_63);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 495;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[24], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 496;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_34;
            PyObject *tmp_called_value_64;
            PyObject *tmp_args_element_value_64;
            PyObject *tmp_called_value_65;
            PyObject *tmp_args_element_value_65;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 500;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_34 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_25;
            } else {
                goto condexpr_false_25;
            }
            condexpr_true_25:;
            tmp_called_value_64 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[233]);

            if (unlikely(tmp_called_value_64 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[233]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 500;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 500;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_64 = MAKE_FUNCTION_flet_core$textfield$$$function__51_on_blur();

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 500;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_64, tmp_args_element_value_64);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_args_element_value_64);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 500;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_25;
            condexpr_false_25:;
            tmp_called_value_65 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_65 = MAKE_FUNCTION_flet_core$textfield$$$function__51_on_blur();

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 500;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_65, tmp_args_element_value_65);
            Py_DECREF(tmp_args_element_value_65);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 500;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            condexpr_end_25:;
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 501;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_value_66;
            tmp_called_instance_6 = PyObject_GetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[25]);

            if (unlikely(tmp_called_instance_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[25]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 504;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }

            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 504;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_66 = MAKE_FUNCTION_flet_core$textfield$$$function__52_on_blur();

            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame.f_lineno = 504;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[236], tmp_args_element_value_66);
            Py_DECREF(tmp_called_instance_6);
            Py_DECREF(tmp_args_element_value_66);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 504;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 505;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_8d2e0dc07a6ce9d0c2a00e61e5f34011_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_15;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_35;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_35 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_35 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$textfield$$$class__3_TextField_66, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_15;
        }
        branch_no_10:;
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_called_value_66;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_66 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_14 = mod_consts[170];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_14 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_flet_core$textfield$$$class__3_TextField_66;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_da07c9e11083b79a8b747b90a3af245b->m_frame.f_lineno = 66;
            tmp_assign_source_55 = CALL_FUNCTION(tmp_called_value_66, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto try_except_handler_15;
            }
            assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
            PyCell_SET(outline_2_var___class__, tmp_assign_source_55);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
        tmp_assign_source_54 = Nuitka_Cell_GET(outline_2_var___class__);
        Py_INCREF(tmp_assign_source_54);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_flet_core$textfield$$$class__3_TextField_66);
        locals_flet_core$textfield$$$class__3_TextField_66 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$textfield$$$class__3_TextField_66);
        locals_flet_core$textfield$$$class__3_TextField_66 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 66;
        goto try_except_handler_13;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_flet_core$textfield, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_54);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
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
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_da07c9e11083b79a8b747b90a3af245b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da07c9e11083b79a8b747b90a3af245b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da07c9e11083b79a8b747b90a3af245b, exception_lineno);
    }



    assertFrameObject(frame_da07c9e11083b79a8b747b90a3af245b);

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
    PGO_onModuleExit("flet_core.textfield", false);

    Py_INCREF(module_flet_core$textfield);
    return module_flet_core$textfield;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$textfield, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$textfield", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
