/* Generated code for Python module 'flet_core.control'
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

/* The "module_flet_core$control" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$control;
PyDictObject *moduledict_flet_core$control;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[241];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[241];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.control"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 241; i++) {
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
void checkModuleConstants_flet_core$control(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 241; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_4ef6483a730725063ef1ee2195771f12;
static PyCodeObject *codeobj_63b2f6427842315b5540967e1884560c;
static PyCodeObject *codeobj_bc457ef33fef1cb3d5a0a0b6600187c2;
static PyCodeObject *codeobj_b2a73b56a019acb276f9b444890905c4;
static PyCodeObject *codeobj_a2c8567214152fe19cfcfc98192f4075;
static PyCodeObject *codeobj_0d0d05e37fbf406f63e4c2c2b74715e8;
static PyCodeObject *codeobj_2d4e5972715e40f31098a2f61de13d03;
static PyCodeObject *codeobj_07e53f27dda116100f1e596d0838280c;
static PyCodeObject *codeobj_749494ed5aeccf2ad8de97a5228d41b9;
static PyCodeObject *codeobj_e31d2a7bcb6c9fbad61cee2331d67fee;
static PyCodeObject *codeobj_0f9dc698925b27c8d08f86248be58b48;
static PyCodeObject *codeobj_64ad90efe5d1bfca6088dd2d07e433f1;
static PyCodeObject *codeobj_62811a6c0f1c29b88c74b3cf82f0861f;
static PyCodeObject *codeobj_35fccd1ed23dd0cee4087637d00374c7;
static PyCodeObject *codeobj_8c4d5d394930db31e3ff83affd621d34;
static PyCodeObject *codeobj_9ce96ec753580f9bd8dffad626c26a37;
static PyCodeObject *codeobj_8a04da2b01b6c81749898e9af5c335c8;
static PyCodeObject *codeobj_17171c167f5f36f108b43aa204e31ebf;
static PyCodeObject *codeobj_26577db2b2fa52d5916414fbc537499b;
static PyCodeObject *codeobj_e673b9bf97dc4b233b120c5eddb78ed7;
static PyCodeObject *codeobj_bc2df02b6dddcd8fb92bd657872f6a27;
static PyCodeObject *codeobj_71a11288f05c7ea9a53259ce4e904c20;
static PyCodeObject *codeobj_0855f9e41cc47e924069c38f2507b47f;
static PyCodeObject *codeobj_c4ebbd0f910b6bec166fefea20ee2ecc;
static PyCodeObject *codeobj_fd959c0419011937f5379e1122fc06b9;
static PyCodeObject *codeobj_0b7f60505a2be4367f858c0d217cc9c6;
static PyCodeObject *codeobj_bff0e75184355cb3980cf5ce3c049879;
static PyCodeObject *codeobj_edf5ff0e163f4488f38ef828f5d938dd;
static PyCodeObject *codeobj_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7;
static PyCodeObject *codeobj_ff5f56ee04550a787e48c3778ebe1881;
static PyCodeObject *codeobj_1bb68b767d28174e6bd784567df97072;
static PyCodeObject *codeobj_5b3f147d8a872baec5cdcb37dba143f8;
static PyCodeObject *codeobj_1855eb0ecf59f2009b744d82e4ef4cf2;
static PyCodeObject *codeobj_8436cfb925a3aab1a44d497c85966e10;
static PyCodeObject *codeobj_0dddb32485b1e15354dd12c81dce7449;
static PyCodeObject *codeobj_e5506838bf1f93714f4ae092a9a44fa2;
static PyCodeObject *codeobj_1e427813deb12f50e6663f3e4ff1a470;
static PyCodeObject *codeobj_3c6cf9842246e67cec5a018ec947d5b0;
static PyCodeObject *codeobj_2d25d743716a113dd12e8a731445046e;
static PyCodeObject *codeobj_4c107bf9b8a359484ad4633a89bff891;
static PyCodeObject *codeobj_9037ac01663e7a889917ddc6409eea98;
static PyCodeObject *codeobj_8f06944106e4e906c52ff76c8f529435;
static PyCodeObject *codeobj_c3681ab63abd866c4401b14912d8ab7a;
static PyCodeObject *codeobj_d53ab7f7dc69d58452aabaf47e21cc63;
static PyCodeObject *codeobj_e65bd3e19c2ccf575007b3c130977c36;
static PyCodeObject *codeobj_6fe43b04ad4582d1affc8ca162d3b0d5;
static PyCodeObject *codeobj_c3cd5480e70f840bf6e0b3ed06d30b8c;
static PyCodeObject *codeobj_8965d422162542c90d7e85c650d85699;
static PyCodeObject *codeobj_1a62430a71680486464b0a10280e265d;
static PyCodeObject *codeobj_55f82f47aec230243578e744ee09fd75;
static PyCodeObject *codeobj_36d7d0a02036451931138a4450f318b2;
static PyCodeObject *codeobj_621ae91198a432b03cf8bbad414b236e;
static PyCodeObject *codeobj_cb28faef1d82955011bba872bfaaa619;
static PyCodeObject *codeobj_eba54700168b44353e7a172b5cfe8dda;
static PyCodeObject *codeobj_c236683d0c8b9189879cc30474844744;
static PyCodeObject *codeobj_cf19956e65f19dc7384845109f8ea644;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[130]; CHECK_OBJECT(module_filename_obj);
    codeobj_4ef6483a730725063ef1ee2195771f12 = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[111], mod_consts[111], mod_consts[219], NULL, 1, 0, 0);
    codeobj_63b2f6427842315b5540967e1884560c = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[220], mod_consts[220], mod_consts[221], NULL, 1, 0, 0);
    codeobj_bc457ef33fef1cb3d5a0a0b6600187c2 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[220], mod_consts[220], mod_consts[221], NULL, 1, 0, 0);
    codeobj_b2a73b56a019acb276f9b444890905c4 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[222], mod_consts[222], NULL, NULL, 0, 0, 0);
    codeobj_a2c8567214152fe19cfcfc98192f4075 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_NOFREE, mod_consts[159], mod_consts[159], mod_consts[223], NULL, 0, 0, 0);
    codeobj_0d0d05e37fbf406f63e4c2c2b74715e8 = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[1], mod_consts[224], mod_consts[223], 9, 0, 0);
    codeobj_2d4e5972715e40f31098a2f61de13d03 = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[190], mod_consts[190], mod_consts[225], NULL, 1, 0, 0);
    codeobj_07e53f27dda116100f1e596d0838280c = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[226], NULL, 3, 0, 0);
    codeobj_749494ed5aeccf2ad8de97a5228d41b9 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[120], mod_consts[120], mod_consts[227], NULL, 1, 0, 0);
    codeobj_e31d2a7bcb6c9fbad61cee2331d67fee = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_NOFREE, mod_consts[114], mod_consts[114], mod_consts[227], NULL, 1, 0, 0);
    codeobj_0f9dc698925b27c8d08f86248be58b48 = MAKE_CODE_OBJECT(module_filename_obj, 400, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[228], NULL, 4, 0, 0);
    codeobj_64ad90efe5d1bfca6088dd2d07e433f1 = MAKE_CODE_OBJECT(module_filename_obj, 431, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[229], NULL, 2, 0, 0);
    codeobj_62811a6c0f1c29b88c74b3cf82f0861f = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[41], mod_consts[230], NULL, 2, 0, 0);
    codeobj_35fccd1ed23dd0cee4087637d00374c7 = MAKE_CODE_OBJECT(module_filename_obj, 470, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[216], mod_consts[216], mod_consts[227], NULL, 1, 0, 0);
    codeobj_8c4d5d394930db31e3ff83affd621d34 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[231], NULL, 4, 0, 0);
    codeobj_9ce96ec753580f9bd8dffad626c26a37 = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[227], NULL, 1, 0, 0);
    codeobj_8a04da2b01b6c81749898e9af5c335c8 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[51], mod_consts[51], mod_consts[227], NULL, 1, 0, 0);
    codeobj_17171c167f5f36f108b43aa204e31ebf = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[176], mod_consts[176], mod_consts[232], NULL, 2, 0, 0);
    codeobj_26577db2b2fa52d5916414fbc537499b = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[181], mod_consts[181], mod_consts[233], NULL, 3, 0, 0);
    codeobj_e673b9bf97dc4b233b120c5eddb78ed7 = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[227], NULL, 1, 0, 0);
    codeobj_bc2df02b6dddcd8fb92bd657872f6a27 = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[230], NULL, 2, 0, 0);
    codeobj_71a11288f05c7ea9a53259ce4e904c20 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[108], mod_consts[108], mod_consts[227], NULL, 1, 0, 0);
    codeobj_0855f9e41cc47e924069c38f2507b47f = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[227], NULL, 1, 0, 0);
    codeobj_c4ebbd0f910b6bec166fefea20ee2ecc = MAKE_CODE_OBJECT(module_filename_obj, 383, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[96], mod_consts[96], mod_consts[234], NULL, 3, 0, 0);
    codeobj_fd959c0419011937f5379e1122fc06b9 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[39], mod_consts[235], NULL, 4, 0, 0);
    codeobj_0b7f60505a2be4367f858c0d217cc9c6 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[236], NULL, 4, 0, 0);
    codeobj_bff0e75184355cb3980cf5ce3c049879 = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[237], NULL, 3, 0, 0);
    codeobj_edf5ff0e163f4488f38ef828f5d938dd = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[183], mod_consts[183], mod_consts[238], NULL, 4, 0, 0);
    codeobj_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7 = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[188], mod_consts[188], mod_consts[230], NULL, 2, 0, 0);
    codeobj_ff5f56ee04550a787e48c3778ebe1881 = MAKE_CODE_OBJECT(module_filename_obj, 275, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[107], mod_consts[107], mod_consts[239], NULL, 6, 0, 0);
    codeobj_1bb68b767d28174e6bd784567df97072 = MAKE_CODE_OBJECT(module_filename_obj, 267, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[209], mod_consts[209], mod_consts[227], NULL, 1, 0, 0);
    codeobj_5b3f147d8a872baec5cdcb37dba143f8 = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[227], NULL, 1, 0, 0);
    codeobj_1855eb0ecf59f2009b744d82e4ef4cf2 = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[227], NULL, 1, 0, 0);
    codeobj_8436cfb925a3aab1a44d497c85966e10 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[230], NULL, 2, 0, 0);
    codeobj_0dddb32485b1e15354dd12c81dce7449 = MAKE_CODE_OBJECT(module_filename_obj, 251, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[227], NULL, 1, 0, 0);
    codeobj_e5506838bf1f93714f4ae092a9a44fa2 = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[230], NULL, 2, 0, 0);
    codeobj_1e427813deb12f50e6663f3e4ff1a470 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_NOFREE, mod_consts[168], mod_consts[168], mod_consts[227], NULL, 1, 0, 0);
    codeobj_3c6cf9842246e67cec5a018ec947d5b0 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_COROUTINE | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[227], NULL, 1, 0, 0);
    codeobj_2d25d743716a113dd12e8a731445046e = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[227], NULL, 1, 0, 0);
    codeobj_4c107bf9b8a359484ad4633a89bff891 = MAKE_CODE_OBJECT(module_filename_obj, 246, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[230], NULL, 2, 0, 0);
    codeobj_9037ac01663e7a889917ddc6409eea98 = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[192], mod_consts[192], mod_consts[227], NULL, 1, 0, 0);
    codeobj_8f06944106e4e906c52ff76c8f529435 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[227], NULL, 1, 0, 0);
    codeobj_c3681ab63abd866c4401b14912d8ab7a = MAKE_CODE_OBJECT(module_filename_obj, 198, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[230], NULL, 2, 0, 0);
    codeobj_d53ab7f7dc69d58452aabaf47e21cc63 = MAKE_CODE_OBJECT(module_filename_obj, 215, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[227], NULL, 1, 0, 0);
    codeobj_e65bd3e19c2ccf575007b3c130977c36 = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[230], NULL, 2, 0, 0);
    codeobj_6fe43b04ad4582d1affc8ca162d3b0d5 = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[128], mod_consts[128], mod_consts[227], NULL, 1, 0, 0);
    codeobj_c3cd5480e70f840bf6e0b3ed06d30b8c = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[128], mod_consts[128], mod_consts[240], NULL, 2, 0, 0);
    codeobj_8965d422162542c90d7e85c650d85699 = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[227], NULL, 1, 0, 0);
    codeobj_1a62430a71680486464b0a10280e265d = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[230], NULL, 2, 0, 0);
    codeobj_55f82f47aec230243578e744ee09fd75 = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[198], mod_consts[198], mod_consts[227], NULL, 1, 0, 0);
    codeobj_36d7d0a02036451931138a4450f318b2 = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[64], mod_consts[227], NULL, 1, 0, 0);
    codeobj_621ae91198a432b03cf8bbad414b236e = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[66], mod_consts[227], NULL, 1, 0, 0);
    codeobj_cb28faef1d82955011bba872bfaaa619 = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[227], NULL, 1, 0, 0);
    codeobj_eba54700168b44353e7a172b5cfe8dda = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[230], NULL, 2, 0, 0);
    codeobj_c236683d0c8b9189879cc30474844744 = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_NOFREE, mod_consts[170], mod_consts[170], mod_consts[227], NULL, 1, 0, 0);
    codeobj_cf19956e65f19dc7384845109f8ea644 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_COROUTINE | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[227], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_flet_core$control$$$function__6_did_mount_async$$$coroutine__1_did_mount_async();


static PyObject *MAKE_COROUTINE_flet_core$control$$$function__8_will_unmount_async$$$coroutine__1_will_unmount_async();


static PyObject *MAKE_COROUTINE_flet_core$control$$$function__44_update_async$$$coroutine__1_update_async(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_flet_core$control$$$function__46_clean_async$$$coroutine__1_clean_async(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_flet_core$control$$$function__47_build_update_commands$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__10__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__11__add_event_handler();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__12__get_event_handler();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__13__get_attr(PyObject *defaults);


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__14__set_attr(PyObject *defaults);


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__15__get_value_or_list_attr();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__16__set_value_or_list_attr();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__17__set_attr_internal(PyObject *defaults);


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__18__set_attr_json();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__19__convert_attr_json();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__1___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__20__wrap_attr_dict();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__21___str__();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__22_event_handlers();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__23__previous_children();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__24__id();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__25__id();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__26_page();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__27_page();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__28_uid();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__29_expand(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__2__is_isolated();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__30_expand(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__31_col(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__32_col(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__33_opacity();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__34_opacity();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__35_tooltip();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__36_tooltip();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__37_visible(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__38_visible(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__39_disabled(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__3__build();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__40_disabled(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__41_data();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__42_data();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__43_update();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__44_update_async();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__45_clean();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__46_clean_async();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__47_build_update_commands(PyObject *defaults);


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__48__remove_control_recursively();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__49__build_add_commands(PyObject *defaults);


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__4__before_build_command();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__50__build_command(PyObject *defaults);


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__51__dispose();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__5_did_mount();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__6_did_mount_async();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__7_will_unmount();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__8_will_unmount_async();


static PyObject *MAKE_FUNCTION_flet_core$control$$$function__9__get_children();


// The module function definitions.
static PyObject *impl_flet_core$control$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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
    struct Nuitka_FrameObject *frame_0d0d05e37fbf406f63e4c2c2b74715e8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0d0d05e37fbf406f63e4c2c2b74715e8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0d0d05e37fbf406f63e4c2c2b74715e8)) {
        Py_XDECREF(cache_frame_0d0d05e37fbf406f63e4c2c2b74715e8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d0d05e37fbf406f63e4c2c2b74715e8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d0d05e37fbf406f63e4c2c2b74715e8 = MAKE_FUNCTION_FRAME(codeobj_0d0d05e37fbf406f63e4c2c2b74715e8, module_flet_core$control, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0d0d05e37fbf406f63e4c2c2b74715e8->m_type_description == NULL);
    frame_0d0d05e37fbf406f63e4c2c2b74715e8 = cache_frame_0d0d05e37fbf406f63e4c2c2b74715e8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0d0d05e37fbf406f63e4c2c2b74715e8);
    assert(Py_REFCNT(frame_0d0d05e37fbf406f63e4c2c2b74715e8) == 2);

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

            exception_lineno = 35;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_flet_core$control, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        frame_0d0d05e37fbf406f63e4c2c2b74715e8->m_frame.f_lineno = 35;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[3], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[4], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[5], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[6], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_expand);
        tmp_assattr_value_6 = par_expand;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[7], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_col);
        tmp_assattr_value_7 = par_col;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[8], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_opacity);
        tmp_assattr_value_8 = par_opacity;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[9], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_tooltip);
        tmp_assattr_value_9 = par_tooltip;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[10], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_visible);
        tmp_assattr_value_10 = par_visible;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[11], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_disabled);
        tmp_assattr_value_11 = par_disabled;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[12], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        tmp_assattr_value_12 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[13], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(par_data);
        tmp_assattr_value_13 = par_data;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[14], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        tmp_assattr_value_14 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[15], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_ref);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_ref);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT(par_self);
        tmp_assattr_value_15 = par_self;
        CHECK_OBJECT(par_ref);
        tmp_assattr_target_15 = par_ref;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[16], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0d0d05e37fbf406f63e4c2c2b74715e8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d0d05e37fbf406f63e4c2c2b74715e8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d0d05e37fbf406f63e4c2c2b74715e8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d0d05e37fbf406f63e4c2c2b74715e8,
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
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_0d0d05e37fbf406f63e4c2c2b74715e8 == cache_frame_0d0d05e37fbf406f63e4c2c2b74715e8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0d0d05e37fbf406f63e4c2c2b74715e8);
        cache_frame_0d0d05e37fbf406f63e4c2c2b74715e8 = NULL;
    }

    assertFrameObject(frame_0d0d05e37fbf406f63e4c2c2b74715e8);

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

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$control$$$function__4__before_build_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_749494ed5aeccf2ad8de97a5228d41b9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_749494ed5aeccf2ad8de97a5228d41b9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_749494ed5aeccf2ad8de97a5228d41b9)) {
        Py_XDECREF(cache_frame_749494ed5aeccf2ad8de97a5228d41b9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_749494ed5aeccf2ad8de97a5228d41b9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_749494ed5aeccf2ad8de97a5228d41b9 = MAKE_FUNCTION_FRAME(codeobj_749494ed5aeccf2ad8de97a5228d41b9, module_flet_core$control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_749494ed5aeccf2ad8de97a5228d41b9->m_type_description == NULL);
    frame_749494ed5aeccf2ad8de97a5228d41b9 = cache_frame_749494ed5aeccf2ad8de97a5228d41b9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_749494ed5aeccf2ad8de97a5228d41b9);
    assert(Py_REFCNT(frame_749494ed5aeccf2ad8de97a5228d41b9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[8];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_749494ed5aeccf2ad8de97a5228d41b9->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
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
        exception_tb = MAKE_TRACEBACK(frame_749494ed5aeccf2ad8de97a5228d41b9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_749494ed5aeccf2ad8de97a5228d41b9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_749494ed5aeccf2ad8de97a5228d41b9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_749494ed5aeccf2ad8de97a5228d41b9,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_749494ed5aeccf2ad8de97a5228d41b9 == cache_frame_749494ed5aeccf2ad8de97a5228d41b9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_749494ed5aeccf2ad8de97a5228d41b9);
        cache_frame_749494ed5aeccf2ad8de97a5228d41b9 = NULL;
    }

    assertFrameObject(frame_749494ed5aeccf2ad8de97a5228d41b9);

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


static PyObject *impl_flet_core$control$$$function__6_did_mount_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_flet_core$control$$$function__6_did_mount_async$$$coroutine__1_did_mount_async();

    goto function_return_exit;

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
struct flet_core$control$$$function__6_did_mount_async$$$coroutine__1_did_mount_async_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *flet_core$control$$$function__6_did_mount_async$$$coroutine__1_did_mount_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet_core$control$$$function__6_did_mount_async$$$coroutine__1_did_mount_async_locals *coroutine_heap = (struct flet_core$control$$$function__6_did_mount_async$$$coroutine__1_did_mount_async_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_flet_core$control$$$function__6_did_mount_async$$$coroutine__1_did_mount_async() {
    return Nuitka_Coroutine_New(
        flet_core$control$$$function__6_did_mount_async$$$coroutine__1_did_mount_async_context,
        module_flet_core$control,
        mod_consts[19],
        mod_consts[20],
        codeobj_3c6cf9842246e67cec5a018ec947d5b0,
        NULL,
        0,
#if 1
        sizeof(struct flet_core$control$$$function__6_did_mount_async$$$coroutine__1_did_mount_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$control$$$function__8_will_unmount_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_flet_core$control$$$function__8_will_unmount_async$$$coroutine__1_will_unmount_async();

    goto function_return_exit;

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
struct flet_core$control$$$function__8_will_unmount_async$$$coroutine__1_will_unmount_async_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *flet_core$control$$$function__8_will_unmount_async$$$coroutine__1_will_unmount_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet_core$control$$$function__8_will_unmount_async$$$coroutine__1_will_unmount_async_locals *coroutine_heap = (struct flet_core$control$$$function__8_will_unmount_async$$$coroutine__1_will_unmount_async_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_flet_core$control$$$function__8_will_unmount_async$$$coroutine__1_will_unmount_async() {
    return Nuitka_Coroutine_New(
        flet_core$control$$$function__8_will_unmount_async$$$coroutine__1_will_unmount_async_context,
        module_flet_core$control,
        mod_consts[21],
        mod_consts[22],
        codeobj_cf19956e65f19dc7384845109f8ea644,
        NULL,
        0,
#if 1
        sizeof(struct flet_core$control$$$function__8_will_unmount_async$$$coroutine__1_will_unmount_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$control$$$function__9__get_children(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    tmp_return_value = MAKE_LIST_EMPTY(0);
    goto function_return_exit;

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


static PyObject *impl_flet_core$control$$$function__10__get_control_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8a04da2b01b6c81749898e9af5c335c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8a04da2b01b6c81749898e9af5c335c8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8a04da2b01b6c81749898e9af5c335c8)) {
        Py_XDECREF(cache_frame_8a04da2b01b6c81749898e9af5c335c8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8a04da2b01b6c81749898e9af5c335c8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8a04da2b01b6c81749898e9af5c335c8 = MAKE_FUNCTION_FRAME(codeobj_8a04da2b01b6c81749898e9af5c335c8, module_flet_core$control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8a04da2b01b6c81749898e9af5c335c8->m_type_description == NULL);
    frame_8a04da2b01b6c81749898e9af5c335c8 = cache_frame_8a04da2b01b6c81749898e9af5c335c8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8a04da2b01b6c81749898e9af5c335c8);
    assert(Py_REFCNT(frame_8a04da2b01b6c81749898e9af5c335c8) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[23];
        frame_8a04da2b01b6c81749898e9af5c335c8->m_frame.f_lineno = 78;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_Exception, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 78;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8a04da2b01b6c81749898e9af5c335c8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8a04da2b01b6c81749898e9af5c335c8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8a04da2b01b6c81749898e9af5c335c8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8a04da2b01b6c81749898e9af5c335c8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8a04da2b01b6c81749898e9af5c335c8 == cache_frame_8a04da2b01b6c81749898e9af5c335c8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8a04da2b01b6c81749898e9af5c335c8);
        cache_frame_8a04da2b01b6c81749898e9af5c335c8 = NULL;
    }

    assertFrameObject(frame_8a04da2b01b6c81749898e9af5c335c8);

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

}


static PyObject *impl_flet_core$control$$$function__11__add_event_handler(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event_name = python_pars[1];
    PyObject *par_handler = python_pars[2];
    struct Nuitka_FrameObject *frame_07e53f27dda116100f1e596d0838280c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_07e53f27dda116100f1e596d0838280c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_07e53f27dda116100f1e596d0838280c)) {
        Py_XDECREF(cache_frame_07e53f27dda116100f1e596d0838280c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_07e53f27dda116100f1e596d0838280c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_07e53f27dda116100f1e596d0838280c = MAKE_FUNCTION_FRAME(codeobj_07e53f27dda116100f1e596d0838280c, module_flet_core$control, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_07e53f27dda116100f1e596d0838280c->m_type_description == NULL);
    frame_07e53f27dda116100f1e596d0838280c = cache_frame_07e53f27dda116100f1e596d0838280c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_07e53f27dda116100f1e596d0838280c);
    assert(Py_REFCNT(frame_07e53f27dda116100f1e596d0838280c) == 2);

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_handler);
        tmp_ass_subvalue_1 = par_handler;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event_name);
        tmp_ass_subscript_1 = par_event_name;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_07e53f27dda116100f1e596d0838280c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_07e53f27dda116100f1e596d0838280c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_07e53f27dda116100f1e596d0838280c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_07e53f27dda116100f1e596d0838280c,
        type_description_1,
        par_self,
        par_event_name,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_07e53f27dda116100f1e596d0838280c == cache_frame_07e53f27dda116100f1e596d0838280c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_07e53f27dda116100f1e596d0838280c);
        cache_frame_07e53f27dda116100f1e596d0838280c = NULL;
    }

    assertFrameObject(frame_07e53f27dda116100f1e596d0838280c);

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
    CHECK_OBJECT(par_event_name);
    Py_DECREF(par_event_name);
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event_name);
    Py_DECREF(par_event_name);
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$control$$$function__12__get_event_handler(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event_name = python_pars[1];
    struct Nuitka_FrameObject *frame_17171c167f5f36f108b43aa204e31ebf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_17171c167f5f36f108b43aa204e31ebf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_17171c167f5f36f108b43aa204e31ebf)) {
        Py_XDECREF(cache_frame_17171c167f5f36f108b43aa204e31ebf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_17171c167f5f36f108b43aa204e31ebf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_17171c167f5f36f108b43aa204e31ebf = MAKE_FUNCTION_FRAME(codeobj_17171c167f5f36f108b43aa204e31ebf, module_flet_core$control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_17171c167f5f36f108b43aa204e31ebf->m_type_description == NULL);
    frame_17171c167f5f36f108b43aa204e31ebf = cache_frame_17171c167f5f36f108b43aa204e31ebf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_17171c167f5f36f108b43aa204e31ebf);
    assert(Py_REFCNT(frame_17171c167f5f36f108b43aa204e31ebf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event_name);
        tmp_args_element_value_1 = par_event_name;
        frame_17171c167f5f36f108b43aa204e31ebf->m_frame.f_lineno = 84;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
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
        exception_tb = MAKE_TRACEBACK(frame_17171c167f5f36f108b43aa204e31ebf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_17171c167f5f36f108b43aa204e31ebf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_17171c167f5f36f108b43aa204e31ebf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_17171c167f5f36f108b43aa204e31ebf,
        type_description_1,
        par_self,
        par_event_name
    );


    // Release cached frame if used for exception.
    if (frame_17171c167f5f36f108b43aa204e31ebf == cache_frame_17171c167f5f36f108b43aa204e31ebf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_17171c167f5f36f108b43aa204e31ebf);
        cache_frame_17171c167f5f36f108b43aa204e31ebf = NULL;
    }

    assertFrameObject(frame_17171c167f5f36f108b43aa204e31ebf);

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
    CHECK_OBJECT(par_event_name);
    Py_DECREF(par_event_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event_name);
    Py_DECREF(par_event_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$control$$$function__13__get_attr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_def_value = python_pars[2];
    PyObject *par_data_type = python_pars[3];
    PyObject *var_s_val = NULL;
    struct Nuitka_FrameObject *frame_8c4d5d394930db31e3ff83affd621d34;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8c4d5d394930db31e3ff83affd621d34 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8c4d5d394930db31e3ff83affd621d34)) {
        Py_XDECREF(cache_frame_8c4d5d394930db31e3ff83affd621d34);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8c4d5d394930db31e3ff83affd621d34 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8c4d5d394930db31e3ff83affd621d34 = MAKE_FUNCTION_FRAME(codeobj_8c4d5d394930db31e3ff83affd621d34, module_flet_core$control, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8c4d5d394930db31e3ff83affd621d34->m_type_description == NULL);
    frame_8c4d5d394930db31e3ff83affd621d34 = cache_frame_8c4d5d394930db31e3ff83affd621d34;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8c4d5d394930db31e3ff83affd621d34);
    assert(Py_REFCNT(frame_8c4d5d394930db31e3ff83affd621d34) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_name);
        tmp_expression_value_1 = par_name;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_8c4d5d394930db31e3ff83affd621d34->m_frame.f_lineno = 87;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_name;
            assert(old != NULL);
            par_name = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_name);
        tmp_cmp_expr_left_1 = par_name;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
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
    CHECK_OBJECT(par_def_value);
    tmp_return_value = par_def_value;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[3]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_subscript_value_1 = par_name;
        tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[26];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_s_val == NULL);
        var_s_val = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_data_type);
        tmp_cmp_expr_left_2 = par_data_type;
        tmp_cmp_expr_right_2 = mod_consts[27];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_s_val);
        tmp_cmp_expr_left_3 = var_s_val;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_and_left_value_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_s_val);
        tmp_isinstance_inst_1 = var_s_val;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_s_val);
        tmp_expression_value_6 = var_s_val;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[25]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_8c4d5d394930db31e3ff83affd621d34->m_frame.f_lineno = 93;
        tmp_cmp_expr_left_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[28];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_data_type);
        tmp_cmp_expr_left_5 = par_data_type;
        tmp_cmp_expr_right_5 = mod_consts[29];
        tmp_and_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(var_s_val);
        tmp_isinstance_inst_2 = var_s_val;
        tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_3 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_s_val);
        tmp_expression_value_7 = var_s_val;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[25]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_8c4d5d394930db31e3ff83affd621d34->m_frame.f_lineno = 95;
        tmp_cmp_expr_left_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = mod_consts[28];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
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
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_s_val);
        tmp_expression_value_8 = var_s_val;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[25]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_8c4d5d394930db31e3ff83affd621d34->m_frame.f_lineno = 97;
        tmp_cmp_expr_left_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = mod_consts[30];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
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
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_5;
    branch_no_5:;
    CHECK_OBJECT(par_def_value);
    tmp_return_value = par_def_value;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_5:;
    branch_end_4:;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        int tmp_and_left_truth_5;
        nuitka_bool tmp_and_left_value_5;
        nuitka_bool tmp_and_right_value_5;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(par_data_type);
        tmp_cmp_expr_left_8 = par_data_type;
        tmp_cmp_expr_right_8 = mod_consts[31];
        tmp_and_left_value_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_and_left_value_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        CHECK_OBJECT(var_s_val);
        tmp_cmp_expr_left_9 = var_s_val;
        tmp_cmp_expr_right_9 = Py_None;
        tmp_and_left_value_5 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_5 == 1) {
            goto and_right_5;
        } else {
            goto and_left_5;
        }
        and_right_5:;
        CHECK_OBJECT(var_s_val);
        tmp_isinstance_inst_3 = var_s_val;
        tmp_isinstance_cls_3 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_4 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_and_right_value_4 = tmp_and_left_value_5;
        and_end_5:;
        tmp_condition_result_6 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_6 = tmp_and_left_value_4;
        and_end_4:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_float_arg_1;
        CHECK_OBJECT(var_s_val);
        tmp_float_arg_1 = var_s_val;
        tmp_return_value = TO_FLOAT(tmp_float_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_6;
        nuitka_bool tmp_and_left_value_6;
        nuitka_bool tmp_and_right_value_6;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        int tmp_and_left_truth_7;
        nuitka_bool tmp_and_left_value_7;
        nuitka_bool tmp_and_right_value_7;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        CHECK_OBJECT(par_data_type);
        tmp_cmp_expr_left_10 = par_data_type;
        tmp_cmp_expr_right_10 = mod_consts[32];
        tmp_and_left_value_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_and_left_value_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_6 = tmp_and_left_value_6 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_6 == 1) {
            goto and_right_6;
        } else {
            goto and_left_6;
        }
        and_right_6:;
        CHECK_OBJECT(var_s_val);
        tmp_cmp_expr_left_11 = var_s_val;
        tmp_cmp_expr_right_11 = Py_None;
        tmp_and_left_value_7 = (tmp_cmp_expr_left_11 != tmp_cmp_expr_right_11) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_7 = tmp_and_left_value_7 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_7 == 1) {
            goto and_right_7;
        } else {
            goto and_left_7;
        }
        and_right_7:;
        CHECK_OBJECT(var_s_val);
        tmp_isinstance_inst_4 = var_s_val;
        tmp_isinstance_cls_4 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_6 = tmp_and_right_value_7;
        goto and_end_7;
        and_left_7:;
        tmp_and_right_value_6 = tmp_and_left_value_7;
        and_end_7:;
        tmp_condition_result_7 = tmp_and_right_value_6;
        goto and_end_6;
        and_left_6:;
        tmp_condition_result_7 = tmp_and_left_value_6;
        and_end_6:;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(var_s_val);
        tmp_int_arg_1 = var_s_val;
        tmp_return_value = PyNumber_Int(tmp_int_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_7;
    branch_no_7:;
    CHECK_OBJECT(var_s_val);
    tmp_return_value = var_s_val;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_7:;
    branch_end_6:;
    branch_end_3:;
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8c4d5d394930db31e3ff83affd621d34, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8c4d5d394930db31e3ff83affd621d34->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8c4d5d394930db31e3ff83affd621d34, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8c4d5d394930db31e3ff83affd621d34,
        type_description_1,
        par_self,
        par_name,
        par_def_value,
        par_data_type,
        var_s_val
    );


    // Release cached frame if used for exception.
    if (frame_8c4d5d394930db31e3ff83affd621d34 == cache_frame_8c4d5d394930db31e3ff83affd621d34) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8c4d5d394930db31e3ff83affd621d34);
        cache_frame_8c4d5d394930db31e3ff83affd621d34 = NULL;
    }

    assertFrameObject(frame_8c4d5d394930db31e3ff83affd621d34);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    par_name = NULL;
    Py_XDECREF(var_s_val);
    var_s_val = NULL;
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

    Py_XDECREF(par_name);
    par_name = NULL;
    Py_XDECREF(var_s_val);
    var_s_val = NULL;
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
    CHECK_OBJECT(par_def_value);
    Py_DECREF(par_def_value);
    CHECK_OBJECT(par_data_type);
    Py_DECREF(par_data_type);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_def_value);
    Py_DECREF(par_def_value);
    CHECK_OBJECT(par_data_type);
    Py_DECREF(par_data_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$control$$$function__14__set_attr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *par_dirty = python_pars[3];
    struct Nuitka_FrameObject *frame_fd959c0419011937f5379e1122fc06b9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fd959c0419011937f5379e1122fc06b9 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fd959c0419011937f5379e1122fc06b9)) {
        Py_XDECREF(cache_frame_fd959c0419011937f5379e1122fc06b9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fd959c0419011937f5379e1122fc06b9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fd959c0419011937f5379e1122fc06b9 = MAKE_FUNCTION_FRAME(codeobj_fd959c0419011937f5379e1122fc06b9, module_flet_core$control, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fd959c0419011937f5379e1122fc06b9->m_type_description == NULL);
    frame_fd959c0419011937f5379e1122fc06b9 = cache_frame_fd959c0419011937f5379e1122fc06b9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fd959c0419011937f5379e1122fc06b9);
    assert(Py_REFCNT(frame_fd959c0419011937f5379e1122fc06b9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        CHECK_OBJECT(par_dirty);
        tmp_args_element_value_3 = par_dirty;
        frame_fd959c0419011937f5379e1122fc06b9->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[33],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fd959c0419011937f5379e1122fc06b9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fd959c0419011937f5379e1122fc06b9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fd959c0419011937f5379e1122fc06b9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fd959c0419011937f5379e1122fc06b9,
        type_description_1,
        par_self,
        par_name,
        par_value,
        par_dirty
    );


    // Release cached frame if used for exception.
    if (frame_fd959c0419011937f5379e1122fc06b9 == cache_frame_fd959c0419011937f5379e1122fc06b9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fd959c0419011937f5379e1122fc06b9);
        cache_frame_fd959c0419011937f5379e1122fc06b9 = NULL;
    }

    assertFrameObject(frame_fd959c0419011937f5379e1122fc06b9);

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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_dirty);
    Py_DECREF(par_dirty);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_dirty);
    Py_DECREF(par_dirty);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$control$$$function__15__get_value_or_list_attr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_delimiter = python_pars[2];
    PyObject *var_v = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_26577db2b2fa52d5916414fbc537499b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_63b2f6427842315b5540967e1884560c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_63b2f6427842315b5540967e1884560c_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_26577db2b2fa52d5916414fbc537499b = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_26577db2b2fa52d5916414fbc537499b)) {
        Py_XDECREF(cache_frame_26577db2b2fa52d5916414fbc537499b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_26577db2b2fa52d5916414fbc537499b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_26577db2b2fa52d5916414fbc537499b = MAKE_FUNCTION_FRAME(codeobj_26577db2b2fa52d5916414fbc537499b, module_flet_core$control, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_26577db2b2fa52d5916414fbc537499b->m_type_description == NULL);
    frame_26577db2b2fa52d5916414fbc537499b = cache_frame_26577db2b2fa52d5916414fbc537499b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_26577db2b2fa52d5916414fbc537499b);
    assert(Py_REFCNT(frame_26577db2b2fa52d5916414fbc537499b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        frame_26577db2b2fa52d5916414fbc537499b->m_frame.f_lineno = 112;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[34], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_v == NULL);
        var_v = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_v);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_v);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_delimiter);
        tmp_cmp_expr_left_1 = par_delimiter;
        CHECK_OBJECT(var_v);
        tmp_cmp_expr_right_1 = var_v;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_v);
        tmp_expression_value_1 = var_v;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_delimiter);
        tmp_args_element_value_2 = par_delimiter;
        frame_26577db2b2fa52d5916414fbc537499b->m_frame.f_lineno = 114;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_3;
    }
    if (isFrameUnusable(cache_frame_63b2f6427842315b5540967e1884560c_2)) {
        Py_XDECREF(cache_frame_63b2f6427842315b5540967e1884560c_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_63b2f6427842315b5540967e1884560c_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_63b2f6427842315b5540967e1884560c_2 = MAKE_FUNCTION_FRAME(codeobj_63b2f6427842315b5540967e1884560c, module_flet_core$control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_63b2f6427842315b5540967e1884560c_2->m_type_description == NULL);
    frame_63b2f6427842315b5540967e1884560c_2 = cache_frame_63b2f6427842315b5540967e1884560c_2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_63b2f6427842315b5540967e1884560c_2);
    assert(Py_REFCNT(frame_63b2f6427842315b5540967e1884560c_2) == 2);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_1 = tmp_listcomp_1__$0;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "o";
                exception_lineno = 114;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_0_var_x;
            outline_0_var_x = tmp_assign_source_5;
            Py_INCREF(outline_0_var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        CHECK_OBJECT(outline_0_var_x);
        tmp_expression_value_2 = outline_0_var_x;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[36]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        frame_63b2f6427842315b5540967e1884560c_2->m_frame.f_lineno = 114;
        tmp_append_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 114;
        type_description_2 = "o";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    goto frame_return_exit_2;
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

    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_2;
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_2:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_2;
    frame_exception_exit_2:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_63b2f6427842315b5540967e1884560c_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_63b2f6427842315b5540967e1884560c_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_63b2f6427842315b5540967e1884560c_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_63b2f6427842315b5540967e1884560c_2,
        type_description_2,
        outline_0_var_x
    );


    // Release cached frame if used for exception.
    if (frame_63b2f6427842315b5540967e1884560c_2 == cache_frame_63b2f6427842315b5540967e1884560c_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_63b2f6427842315b5540967e1884560c_2);
        cache_frame_63b2f6427842315b5540967e1884560c_2 = NULL;
    }

    assertFrameObject(frame_63b2f6427842315b5540967e1884560c_2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;
    frame_no_exception_1:;
    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "oooo";
    goto try_except_handler_2;
    skip_nested_handling_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF(outline_0_var_x);
    outline_0_var_x = NULL;
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

    Py_XDECREF(outline_0_var_x);
    outline_0_var_x = NULL;
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
    exception_lineno = 114;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_26577db2b2fa52d5916414fbc537499b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_26577db2b2fa52d5916414fbc537499b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_26577db2b2fa52d5916414fbc537499b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_26577db2b2fa52d5916414fbc537499b,
        type_description_1,
        par_self,
        par_name,
        par_delimiter,
        var_v
    );


    // Release cached frame if used for exception.
    if (frame_26577db2b2fa52d5916414fbc537499b == cache_frame_26577db2b2fa52d5916414fbc537499b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_26577db2b2fa52d5916414fbc537499b);
        cache_frame_26577db2b2fa52d5916414fbc537499b = NULL;
    }

    assertFrameObject(frame_26577db2b2fa52d5916414fbc537499b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    CHECK_OBJECT(var_v);
    tmp_return_value = var_v;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_v);
    Py_DECREF(var_v);
    var_v = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_v);
    var_v = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_delimiter);
    Py_DECREF(par_delimiter);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_delimiter);
    Py_DECREF(par_delimiter);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$control$$$function__16__set_value_or_list_attr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *par_delimiter = python_pars[3];
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_edf5ff0e163f4488f38ef828f5d938dd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_bc457ef33fef1cb3d5a0a0b6600187c2_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_bc457ef33fef1cb3d5a0a0b6600187c2_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_edf5ff0e163f4488f38ef828f5d938dd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_edf5ff0e163f4488f38ef828f5d938dd)) {
        Py_XDECREF(cache_frame_edf5ff0e163f4488f38ef828f5d938dd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_edf5ff0e163f4488f38ef828f5d938dd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_edf5ff0e163f4488f38ef828f5d938dd = MAKE_FUNCTION_FRAME(codeobj_edf5ff0e163f4488f38ef828f5d938dd, module_flet_core$control, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_edf5ff0e163f4488f38ef828f5d938dd->m_type_description == NULL);
    frame_edf5ff0e163f4488f38ef828f5d938dd = cache_frame_edf5ff0e163f4488f38ef828f5d938dd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_edf5ff0e163f4488f38ef828f5d938dd);
    assert(Py_REFCNT(frame_edf5ff0e163f4488f38ef828f5d938dd) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_delimiter);
        tmp_expression_value_1 = par_delimiter;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_value);
            tmp_iter_arg_1 = par_value;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_1 = "oooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        if (isFrameUnusable(cache_frame_bc457ef33fef1cb3d5a0a0b6600187c2_2)) {
            Py_XDECREF(cache_frame_bc457ef33fef1cb3d5a0a0b6600187c2_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_bc457ef33fef1cb3d5a0a0b6600187c2_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_bc457ef33fef1cb3d5a0a0b6600187c2_2 = MAKE_FUNCTION_FRAME(codeobj_bc457ef33fef1cb3d5a0a0b6600187c2, module_flet_core$control, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_bc457ef33fef1cb3d5a0a0b6600187c2_2->m_type_description == NULL);
        frame_bc457ef33fef1cb3d5a0a0b6600187c2_2 = cache_frame_bc457ef33fef1cb3d5a0a0b6600187c2_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_bc457ef33fef1cb3d5a0a0b6600187c2_2);
        assert(Py_REFCNT(frame_bc457ef33fef1cb3d5a0a0b6600187c2_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 119;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_5;
                Py_INCREF(outline_0_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_unicode_arg_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_x);
            tmp_unicode_arg_1 = outline_0_var_x;
            tmp_append_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bc457ef33fef1cb3d5a0a0b6600187c2_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bc457ef33fef1cb3d5a0a0b6600187c2_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bc457ef33fef1cb3d5a0a0b6600187c2_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bc457ef33fef1cb3d5a0a0b6600187c2_2,
            type_description_2,
            outline_0_var_x
        );


        // Release cached frame if used for exception.
        if (frame_bc457ef33fef1cb3d5a0a0b6600187c2_2 == cache_frame_bc457ef33fef1cb3d5a0a0b6600187c2_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_bc457ef33fef1cb3d5a0a0b6600187c2_2);
            cache_frame_bc457ef33fef1cb3d5a0a0b6600187c2_2 = NULL;
        }

        assertFrameObject(frame_bc457ef33fef1cb3d5a0a0b6600187c2_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
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

        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
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
        exception_lineno = 119;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_edf5ff0e163f4488f38ef828f5d938dd->m_frame.f_lineno = 119;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_2 = par_name;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_3 = par_value;
        frame_edf5ff0e163f4488f38ef828f5d938dd->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[39],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_edf5ff0e163f4488f38ef828f5d938dd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_edf5ff0e163f4488f38ef828f5d938dd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_edf5ff0e163f4488f38ef828f5d938dd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_edf5ff0e163f4488f38ef828f5d938dd,
        type_description_1,
        par_self,
        par_name,
        par_value,
        par_delimiter
    );


    // Release cached frame if used for exception.
    if (frame_edf5ff0e163f4488f38ef828f5d938dd == cache_frame_edf5ff0e163f4488f38ef828f5d938dd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_edf5ff0e163f4488f38ef828f5d938dd);
        cache_frame_edf5ff0e163f4488f38ef828f5d938dd = NULL;
    }

    assertFrameObject(frame_edf5ff0e163f4488f38ef828f5d938dd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
    goto function_return_exit;
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

    Py_XDECREF(par_value);
    par_value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_delimiter);
    Py_DECREF(par_delimiter);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_delimiter);
    Py_DECREF(par_delimiter);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$control$$$function__17__set_attr_internal(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *par_dirty = python_pars[3];
    PyObject *var_orig_val = NULL;
    struct Nuitka_FrameObject *frame_0b7f60505a2be4367f858c0d217cc9c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0b7f60505a2be4367f858c0d217cc9c6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0b7f60505a2be4367f858c0d217cc9c6)) {
        Py_XDECREF(cache_frame_0b7f60505a2be4367f858c0d217cc9c6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0b7f60505a2be4367f858c0d217cc9c6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0b7f60505a2be4367f858c0d217cc9c6 = MAKE_FUNCTION_FRAME(codeobj_0b7f60505a2be4367f858c0d217cc9c6, module_flet_core$control, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0b7f60505a2be4367f858c0d217cc9c6->m_type_description == NULL);
    frame_0b7f60505a2be4367f858c0d217cc9c6 = cache_frame_0b7f60505a2be4367f858c0d217cc9c6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0b7f60505a2be4367f858c0d217cc9c6);
    assert(Py_REFCNT(frame_0b7f60505a2be4367f858c0d217cc9c6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_name);
        tmp_expression_value_1 = par_name;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_0b7f60505a2be4367f858c0d217cc9c6->m_frame.f_lineno = 123;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_name;
            assert(old != NULL);
            par_name = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[24]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        frame_0b7f60505a2be4367f858c0d217cc9c6->m_frame.f_lineno = 124;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_orig_val == NULL);
        var_orig_val = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_orig_val);
        tmp_cmp_expr_left_1 = var_orig_val;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_2 = par_value;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_3 = par_value;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[40];
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_3;
            Py_INCREF(par_value);
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_orig_val);
        tmp_cmp_expr_left_4 = var_orig_val;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_orig_val);
        tmp_expression_value_4 = var_orig_val;
        tmp_subscript_value_1 = mod_consts[26];
        tmp_cmp_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_1, 0);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_right_5 = par_value;
        tmp_or_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_3 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_value);
        tmp_tuple_element_1 = par_value;
        tmp_ass_subvalue_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_ass_subvalue_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_dirty);
        tmp_tuple_element_1 = par_dirty;
        PyTuple_SET_ITEM0(tmp_ass_subvalue_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[3]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 133;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_ass_subscript_1 = par_name;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0b7f60505a2be4367f858c0d217cc9c6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0b7f60505a2be4367f858c0d217cc9c6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0b7f60505a2be4367f858c0d217cc9c6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0b7f60505a2be4367f858c0d217cc9c6,
        type_description_1,
        par_self,
        par_name,
        par_value,
        par_dirty,
        var_orig_val
    );


    // Release cached frame if used for exception.
    if (frame_0b7f60505a2be4367f858c0d217cc9c6 == cache_frame_0b7f60505a2be4367f858c0d217cc9c6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0b7f60505a2be4367f858c0d217cc9c6);
        cache_frame_0b7f60505a2be4367f858c0d217cc9c6 = NULL;
    }

    assertFrameObject(frame_0b7f60505a2be4367f858c0d217cc9c6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    par_name = NULL;
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
    CHECK_OBJECT(var_orig_val);
    Py_DECREF(var_orig_val);
    var_orig_val = NULL;
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

    Py_XDECREF(par_name);
    par_name = NULL;
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
    Py_XDECREF(var_orig_val);
    var_orig_val = NULL;
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
    CHECK_OBJECT(par_dirty);
    Py_DECREF(par_dirty);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dirty);
    Py_DECREF(par_dirty);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$control$$$function__18__set_attr_json(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_name = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *var_ov = NULL;
    PyObject *var_nv = NULL;
    struct Nuitka_FrameObject *frame_bff0e75184355cb3980cf5ce3c049879;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_bff0e75184355cb3980cf5ce3c049879 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bff0e75184355cb3980cf5ce3c049879)) {
        Py_XDECREF(cache_frame_bff0e75184355cb3980cf5ce3c049879);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bff0e75184355cb3980cf5ce3c049879 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bff0e75184355cb3980cf5ce3c049879 = MAKE_FUNCTION_FRAME(codeobj_bff0e75184355cb3980cf5ce3c049879, module_flet_core$control, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bff0e75184355cb3980cf5ce3c049879->m_type_description == NULL);
    frame_bff0e75184355cb3980cf5ce3c049879 = cache_frame_bff0e75184355cb3980cf5ce3c049879;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bff0e75184355cb3980cf5ce3c049879);
    assert(Py_REFCNT(frame_bff0e75184355cb3980cf5ce3c049879) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        frame_bff0e75184355cb3980cf5ce3c049879->m_frame.f_lineno = 136;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[34], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ov == NULL);
        var_ov = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_bff0e75184355cb3980cf5ce3c049879->m_frame.f_lineno = 137;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[41], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nv == NULL);
        var_nv = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_ov);
        tmp_cmp_expr_left_1 = var_ov;
        CHECK_OBJECT(var_nv);
        tmp_cmp_expr_right_1 = var_nv;
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooo";
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(par_name);
        tmp_args_element_value_3 = par_name;
        CHECK_OBJECT(var_nv);
        tmp_args_element_value_4 = var_nv;
        frame_bff0e75184355cb3980cf5ce3c049879->m_frame.f_lineno = 139;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[39],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_bff0e75184355cb3980cf5ce3c049879, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bff0e75184355cb3980cf5ce3c049879->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bff0e75184355cb3980cf5ce3c049879, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bff0e75184355cb3980cf5ce3c049879,
        type_description_1,
        par_self,
        par_name,
        par_value,
        var_ov,
        var_nv
    );


    // Release cached frame if used for exception.
    if (frame_bff0e75184355cb3980cf5ce3c049879 == cache_frame_bff0e75184355cb3980cf5ce3c049879) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bff0e75184355cb3980cf5ce3c049879);
        cache_frame_bff0e75184355cb3980cf5ce3c049879 = NULL;
    }

    assertFrameObject(frame_bff0e75184355cb3980cf5ce3c049879);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ov);
    Py_DECREF(var_ov);
    var_ov = NULL;
    Py_XDECREF(var_nv);
    var_nv = NULL;
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

    Py_XDECREF(var_ov);
    var_ov = NULL;
    Py_XDECREF(var_nv);
    var_nv = NULL;
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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$control$$$function__19__convert_attr_json(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_62811a6c0f1c29b88c74b3cf82f0861f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_62811a6c0f1c29b88c74b3cf82f0861f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_62811a6c0f1c29b88c74b3cf82f0861f)) {
        Py_XDECREF(cache_frame_62811a6c0f1c29b88c74b3cf82f0861f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_62811a6c0f1c29b88c74b3cf82f0861f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_62811a6c0f1c29b88c74b3cf82f0861f = MAKE_FUNCTION_FRAME(codeobj_62811a6c0f1c29b88c74b3cf82f0861f, module_flet_core$control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_62811a6c0f1c29b88c74b3cf82f0861f->m_type_description == NULL);
    frame_62811a6c0f1c29b88c74b3cf82f0861f = cache_frame_62811a6c0f1c29b88c74b3cf82f0861f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_62811a6c0f1c29b88c74b3cf82f0861f);
    assert(Py_REFCNT(frame_62811a6c0f1c29b88c74b3cf82f0861f) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_kw_call_arg_value_0_1 = par_value;
        tmp_kw_call_dict_value_0_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_kw_call_dict_value_0_1 == NULL)) {
            tmp_kw_call_dict_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 143;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = mod_consts[45];
        frame_62811a6c0f1c29b88c74b3cf82f0861f->m_frame.f_lineno = 143;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[46]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_62811a6c0f1c29b88c74b3cf82f0861f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_62811a6c0f1c29b88c74b3cf82f0861f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_62811a6c0f1c29b88c74b3cf82f0861f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_62811a6c0f1c29b88c74b3cf82f0861f,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_62811a6c0f1c29b88c74b3cf82f0861f == cache_frame_62811a6c0f1c29b88c74b3cf82f0861f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_62811a6c0f1c29b88c74b3cf82f0861f);
        cache_frame_62811a6c0f1c29b88c74b3cf82f0861f = NULL;
    }

    assertFrameObject(frame_62811a6c0f1c29b88c74b3cf82f0861f);

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


static PyObject *impl_flet_core$control$$$function__20__wrap_attr_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7)) {
        Py_XDECREF(cache_frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7 = MAKE_FUNCTION_FRAME(codeobj_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7, module_flet_core$control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7->m_type_description == NULL);
    frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7 = cache_frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7);
    assert(Py_REFCNT(frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
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
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
    CHECK_OBJECT(par_value);
    tmp_return_value = par_value;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7 == cache_frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7);
        cache_frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7 = NULL;
    }

    assertFrameObject(frame_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[40];
        CHECK_OBJECT(par_value);
        tmp_dict_value_1 = par_value;
        tmp_return_value = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto function_return_exit;
    }

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


static PyObject *impl_flet_core$control$$$function__21___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_attrs = NULL;
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2d4e5972715e40f31098a2f61de13d03;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    static struct Nuitka_FrameObject *cache_frame_2d4e5972715e40f31098a2f61de13d03 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_DICT_EMPTY();
        assert(var_attrs == NULL);
        var_attrs = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_2d4e5972715e40f31098a2f61de13d03)) {
        Py_XDECREF(cache_frame_2d4e5972715e40f31098a2f61de13d03);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2d4e5972715e40f31098a2f61de13d03 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2d4e5972715e40f31098a2f61de13d03 = MAKE_FUNCTION_FRAME(codeobj_2d4e5972715e40f31098a2f61de13d03, module_flet_core$control, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2d4e5972715e40f31098a2f61de13d03->m_type_description == NULL);
    frame_2d4e5972715e40f31098a2f61de13d03 = cache_frame_2d4e5972715e40f31098a2f61de13d03;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2d4e5972715e40f31098a2f61de13d03);
    assert(Py_REFCNT(frame_2d4e5972715e40f31098a2f61de13d03) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[48]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_2d4e5972715e40f31098a2f61de13d03->m_frame.f_lineno = 155;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooo";
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
                type_description_1 = "oooo";
                exception_lineno = 155;
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


            exception_lineno = 155;
            type_description_1 = "oooo";
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


            type_description_1 = "oooo";
            exception_lineno = 155;
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


            type_description_1 = "oooo";
            exception_lineno = 155;
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

                    type_description_1 = "oooo";
                    exception_lineno = 155;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[49];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 155;
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
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_v);
        tmp_expression_value_3 = var_v;
        tmp_subscript_value_1 = mod_consts[26];
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (var_attrs == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_attrs;
        CHECK_OBJECT(var_k);
        tmp_ass_subscript_1 = var_k;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 155;
        type_description_1 = "oooo";
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
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_2d4e5972715e40f31098a2f61de13d03->m_frame.f_lineno = 157;
        tmp_format_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[51]);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[40];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[52];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            if (var_attrs == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 157;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }

            tmp_format_value_2 = var_attrs;
            tmp_format_spec_2 = mod_consts[40];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[40], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_2d4e5972715e40f31098a2f61de13d03, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2d4e5972715e40f31098a2f61de13d03->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2d4e5972715e40f31098a2f61de13d03, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2d4e5972715e40f31098a2f61de13d03,
        type_description_1,
        par_self,
        var_attrs,
        var_k,
        var_v
    );


    // Release cached frame if used for exception.
    if (frame_2d4e5972715e40f31098a2f61de13d03 == cache_frame_2d4e5972715e40f31098a2f61de13d03) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2d4e5972715e40f31098a2f61de13d03);
        cache_frame_2d4e5972715e40f31098a2f61de13d03 = NULL;
    }

    assertFrameObject(frame_2d4e5972715e40f31098a2f61de13d03);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_attrs);
    var_attrs = NULL;
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

    Py_XDECREF(var_attrs);
    var_attrs = NULL;
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


static PyObject *impl_flet_core$control$$$function__22_event_handlers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9037ac01663e7a889917ddc6409eea98;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9037ac01663e7a889917ddc6409eea98 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9037ac01663e7a889917ddc6409eea98)) {
        Py_XDECREF(cache_frame_9037ac01663e7a889917ddc6409eea98);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9037ac01663e7a889917ddc6409eea98 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9037ac01663e7a889917ddc6409eea98 = MAKE_FUNCTION_FRAME(codeobj_9037ac01663e7a889917ddc6409eea98, module_flet_core$control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9037ac01663e7a889917ddc6409eea98->m_type_description == NULL);
    frame_9037ac01663e7a889917ddc6409eea98 = cache_frame_9037ac01663e7a889917ddc6409eea98;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9037ac01663e7a889917ddc6409eea98);
    assert(Py_REFCNT(frame_9037ac01663e7a889917ddc6409eea98) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
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
        exception_tb = MAKE_TRACEBACK(frame_9037ac01663e7a889917ddc6409eea98, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9037ac01663e7a889917ddc6409eea98->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9037ac01663e7a889917ddc6409eea98, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9037ac01663e7a889917ddc6409eea98,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9037ac01663e7a889917ddc6409eea98 == cache_frame_9037ac01663e7a889917ddc6409eea98) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9037ac01663e7a889917ddc6409eea98);
        cache_frame_9037ac01663e7a889917ddc6409eea98 = NULL;
    }

    assertFrameObject(frame_9037ac01663e7a889917ddc6409eea98);

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


static PyObject *impl_flet_core$control$$$function__23__previous_children(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0855f9e41cc47e924069c38f2507b47f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0855f9e41cc47e924069c38f2507b47f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0855f9e41cc47e924069c38f2507b47f)) {
        Py_XDECREF(cache_frame_0855f9e41cc47e924069c38f2507b47f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0855f9e41cc47e924069c38f2507b47f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0855f9e41cc47e924069c38f2507b47f = MAKE_FUNCTION_FRAME(codeobj_0855f9e41cc47e924069c38f2507b47f, module_flet_core$control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0855f9e41cc47e924069c38f2507b47f->m_type_description == NULL);
    frame_0855f9e41cc47e924069c38f2507b47f = cache_frame_0855f9e41cc47e924069c38f2507b47f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0855f9e41cc47e924069c38f2507b47f);
    assert(Py_REFCNT(frame_0855f9e41cc47e924069c38f2507b47f) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
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
        exception_tb = MAKE_TRACEBACK(frame_0855f9e41cc47e924069c38f2507b47f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0855f9e41cc47e924069c38f2507b47f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0855f9e41cc47e924069c38f2507b47f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0855f9e41cc47e924069c38f2507b47f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0855f9e41cc47e924069c38f2507b47f == cache_frame_0855f9e41cc47e924069c38f2507b47f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0855f9e41cc47e924069c38f2507b47f);
        cache_frame_0855f9e41cc47e924069c38f2507b47f = NULL;
    }

    assertFrameObject(frame_0855f9e41cc47e924069c38f2507b47f);

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


static PyObject *impl_flet_core$control$$$function__24__id(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e673b9bf97dc4b233b120c5eddb78ed7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e673b9bf97dc4b233b120c5eddb78ed7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e673b9bf97dc4b233b120c5eddb78ed7)) {
        Py_XDECREF(cache_frame_e673b9bf97dc4b233b120c5eddb78ed7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e673b9bf97dc4b233b120c5eddb78ed7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e673b9bf97dc4b233b120c5eddb78ed7 = MAKE_FUNCTION_FRAME(codeobj_e673b9bf97dc4b233b120c5eddb78ed7, module_flet_core$control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e673b9bf97dc4b233b120c5eddb78ed7->m_type_description == NULL);
    frame_e673b9bf97dc4b233b120c5eddb78ed7 = cache_frame_e673b9bf97dc4b233b120c5eddb78ed7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e673b9bf97dc4b233b120c5eddb78ed7);
    assert(Py_REFCNT(frame_e673b9bf97dc4b233b120c5eddb78ed7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_e673b9bf97dc4b233b120c5eddb78ed7->m_frame.f_lineno = 172;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[53], 0)
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
        exception_tb = MAKE_TRACEBACK(frame_e673b9bf97dc4b233b120c5eddb78ed7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e673b9bf97dc4b233b120c5eddb78ed7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e673b9bf97dc4b233b120c5eddb78ed7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e673b9bf97dc4b233b120c5eddb78ed7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e673b9bf97dc4b233b120c5eddb78ed7 == cache_frame_e673b9bf97dc4b233b120c5eddb78ed7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e673b9bf97dc4b233b120c5eddb78ed7);
        cache_frame_e673b9bf97dc4b233b120c5eddb78ed7 = NULL;
    }

    assertFrameObject(frame_e673b9bf97dc4b233b120c5eddb78ed7);

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


static PyObject *impl_flet_core$control$$$function__25__id(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_bc2df02b6dddcd8fb92bd657872f6a27;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bc2df02b6dddcd8fb92bd657872f6a27 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bc2df02b6dddcd8fb92bd657872f6a27)) {
        Py_XDECREF(cache_frame_bc2df02b6dddcd8fb92bd657872f6a27);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bc2df02b6dddcd8fb92bd657872f6a27 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bc2df02b6dddcd8fb92bd657872f6a27 = MAKE_FUNCTION_FRAME(codeobj_bc2df02b6dddcd8fb92bd657872f6a27, module_flet_core$control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bc2df02b6dddcd8fb92bd657872f6a27->m_type_description == NULL);
    frame_bc2df02b6dddcd8fb92bd657872f6a27 = cache_frame_bc2df02b6dddcd8fb92bd657872f6a27;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bc2df02b6dddcd8fb92bd657872f6a27);
    assert(Py_REFCNT(frame_bc2df02b6dddcd8fb92bd657872f6a27) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[54];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_bc2df02b6dddcd8fb92bd657872f6a27->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[39],
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
        exception_tb = MAKE_TRACEBACK(frame_bc2df02b6dddcd8fb92bd657872f6a27, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bc2df02b6dddcd8fb92bd657872f6a27->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bc2df02b6dddcd8fb92bd657872f6a27, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bc2df02b6dddcd8fb92bd657872f6a27,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_bc2df02b6dddcd8fb92bd657872f6a27 == cache_frame_bc2df02b6dddcd8fb92bd657872f6a27) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bc2df02b6dddcd8fb92bd657872f6a27);
        cache_frame_bc2df02b6dddcd8fb92bd657872f6a27 = NULL;
    }

    assertFrameObject(frame_bc2df02b6dddcd8fb92bd657872f6a27);

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


static PyObject *impl_flet_core$control$$$function__26_page(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6fe43b04ad4582d1affc8ca162d3b0d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6fe43b04ad4582d1affc8ca162d3b0d5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6fe43b04ad4582d1affc8ca162d3b0d5)) {
        Py_XDECREF(cache_frame_6fe43b04ad4582d1affc8ca162d3b0d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6fe43b04ad4582d1affc8ca162d3b0d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6fe43b04ad4582d1affc8ca162d3b0d5 = MAKE_FUNCTION_FRAME(codeobj_6fe43b04ad4582d1affc8ca162d3b0d5, module_flet_core$control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6fe43b04ad4582d1affc8ca162d3b0d5->m_type_description == NULL);
    frame_6fe43b04ad4582d1affc8ca162d3b0d5 = cache_frame_6fe43b04ad4582d1affc8ca162d3b0d5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6fe43b04ad4582d1affc8ca162d3b0d5);
    assert(Py_REFCNT(frame_6fe43b04ad4582d1affc8ca162d3b0d5) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
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
        exception_tb = MAKE_TRACEBACK(frame_6fe43b04ad4582d1affc8ca162d3b0d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6fe43b04ad4582d1affc8ca162d3b0d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6fe43b04ad4582d1affc8ca162d3b0d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6fe43b04ad4582d1affc8ca162d3b0d5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6fe43b04ad4582d1affc8ca162d3b0d5 == cache_frame_6fe43b04ad4582d1affc8ca162d3b0d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6fe43b04ad4582d1affc8ca162d3b0d5);
        cache_frame_6fe43b04ad4582d1affc8ca162d3b0d5 = NULL;
    }

    assertFrameObject(frame_6fe43b04ad4582d1affc8ca162d3b0d5);

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


static PyObject *impl_flet_core$control$$$function__27_page(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_page = python_pars[1];
    struct Nuitka_FrameObject *frame_c3cd5480e70f840bf6e0b3ed06d30b8c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c3cd5480e70f840bf6e0b3ed06d30b8c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c3cd5480e70f840bf6e0b3ed06d30b8c)) {
        Py_XDECREF(cache_frame_c3cd5480e70f840bf6e0b3ed06d30b8c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c3cd5480e70f840bf6e0b3ed06d30b8c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c3cd5480e70f840bf6e0b3ed06d30b8c = MAKE_FUNCTION_FRAME(codeobj_c3cd5480e70f840bf6e0b3ed06d30b8c, module_flet_core$control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c3cd5480e70f840bf6e0b3ed06d30b8c->m_type_description == NULL);
    frame_c3cd5480e70f840bf6e0b3ed06d30b8c = cache_frame_c3cd5480e70f840bf6e0b3ed06d30b8c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c3cd5480e70f840bf6e0b3ed06d30b8c);
    assert(Py_REFCNT(frame_c3cd5480e70f840bf6e0b3ed06d30b8c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_page);
        tmp_assattr_value_1 = par_page;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_c3cd5480e70f840bf6e0b3ed06d30b8c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c3cd5480e70f840bf6e0b3ed06d30b8c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c3cd5480e70f840bf6e0b3ed06d30b8c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c3cd5480e70f840bf6e0b3ed06d30b8c,
        type_description_1,
        par_self,
        par_page
    );


    // Release cached frame if used for exception.
    if (frame_c3cd5480e70f840bf6e0b3ed06d30b8c == cache_frame_c3cd5480e70f840bf6e0b3ed06d30b8c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c3cd5480e70f840bf6e0b3ed06d30b8c);
        cache_frame_c3cd5480e70f840bf6e0b3ed06d30b8c = NULL;
    }

    assertFrameObject(frame_c3cd5480e70f840bf6e0b3ed06d30b8c);

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
    CHECK_OBJECT(par_page);
    Py_DECREF(par_page);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_page);
    Py_DECREF(par_page);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$control$$$function__28_uid(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_55f82f47aec230243578e744ee09fd75;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_55f82f47aec230243578e744ee09fd75 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_55f82f47aec230243578e744ee09fd75)) {
        Py_XDECREF(cache_frame_55f82f47aec230243578e744ee09fd75);

#if _DEBUG_REFCOUNTS
        if (cache_frame_55f82f47aec230243578e744ee09fd75 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_55f82f47aec230243578e744ee09fd75 = MAKE_FUNCTION_FRAME(codeobj_55f82f47aec230243578e744ee09fd75, module_flet_core$control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_55f82f47aec230243578e744ee09fd75->m_type_description == NULL);
    frame_55f82f47aec230243578e744ee09fd75 = cache_frame_55f82f47aec230243578e744ee09fd75;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_55f82f47aec230243578e744ee09fd75);
    assert(Py_REFCNT(frame_55f82f47aec230243578e744ee09fd75) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
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
        exception_tb = MAKE_TRACEBACK(frame_55f82f47aec230243578e744ee09fd75, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_55f82f47aec230243578e744ee09fd75->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_55f82f47aec230243578e744ee09fd75, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_55f82f47aec230243578e744ee09fd75,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_55f82f47aec230243578e744ee09fd75 == cache_frame_55f82f47aec230243578e744ee09fd75) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_55f82f47aec230243578e744ee09fd75);
        cache_frame_55f82f47aec230243578e744ee09fd75 = NULL;
    }

    assertFrameObject(frame_55f82f47aec230243578e744ee09fd75);

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


static PyObject *impl_flet_core$control$$$function__29_expand(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8f06944106e4e906c52ff76c8f529435;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8f06944106e4e906c52ff76c8f529435 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8f06944106e4e906c52ff76c8f529435)) {
        Py_XDECREF(cache_frame_8f06944106e4e906c52ff76c8f529435);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f06944106e4e906c52ff76c8f529435 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f06944106e4e906c52ff76c8f529435 = MAKE_FUNCTION_FRAME(codeobj_8f06944106e4e906c52ff76c8f529435, module_flet_core$control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8f06944106e4e906c52ff76c8f529435->m_type_description == NULL);
    frame_8f06944106e4e906c52ff76c8f529435 = cache_frame_8f06944106e4e906c52ff76c8f529435;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8f06944106e4e906c52ff76c8f529435);
    assert(Py_REFCNT(frame_8f06944106e4e906c52ff76c8f529435) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[55]);
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
        exception_tb = MAKE_TRACEBACK(frame_8f06944106e4e906c52ff76c8f529435, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f06944106e4e906c52ff76c8f529435->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f06944106e4e906c52ff76c8f529435, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f06944106e4e906c52ff76c8f529435,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8f06944106e4e906c52ff76c8f529435 == cache_frame_8f06944106e4e906c52ff76c8f529435) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8f06944106e4e906c52ff76c8f529435);
        cache_frame_8f06944106e4e906c52ff76c8f529435 = NULL;
    }

    assertFrameObject(frame_8f06944106e4e906c52ff76c8f529435);

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


static PyObject *impl_flet_core$control$$$function__30_expand(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_c3681ab63abd866c4401b14912d8ab7a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c3681ab63abd866c4401b14912d8ab7a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c3681ab63abd866c4401b14912d8ab7a)) {
        Py_XDECREF(cache_frame_c3681ab63abd866c4401b14912d8ab7a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c3681ab63abd866c4401b14912d8ab7a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c3681ab63abd866c4401b14912d8ab7a = MAKE_FUNCTION_FRAME(codeobj_c3681ab63abd866c4401b14912d8ab7a, module_flet_core$control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c3681ab63abd866c4401b14912d8ab7a->m_type_description == NULL);
    frame_c3681ab63abd866c4401b14912d8ab7a = cache_frame_c3681ab63abd866c4401b14912d8ab7a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c3681ab63abd866c4401b14912d8ab7a);
    assert(Py_REFCNT(frame_c3681ab63abd866c4401b14912d8ab7a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[55], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_value);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
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
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyBool_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[56];
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_1;
            Py_INCREF(par_value);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[39]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[7];
        if (par_value == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 202;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE(par_value);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 202;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        if (par_value == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 202;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = par_value;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_args_element_value_2 = Py_None;
        condexpr_end_1:;
        frame_c3681ab63abd866c4401b14912d8ab7a->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
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
        exception_tb = MAKE_TRACEBACK(frame_c3681ab63abd866c4401b14912d8ab7a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c3681ab63abd866c4401b14912d8ab7a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c3681ab63abd866c4401b14912d8ab7a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c3681ab63abd866c4401b14912d8ab7a,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_c3681ab63abd866c4401b14912d8ab7a == cache_frame_c3681ab63abd866c4401b14912d8ab7a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c3681ab63abd866c4401b14912d8ab7a);
        cache_frame_c3681ab63abd866c4401b14912d8ab7a = NULL;
    }

    assertFrameObject(frame_c3681ab63abd866c4401b14912d8ab7a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_value);
    par_value = NULL;
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

    Py_XDECREF(par_value);
    par_value = NULL;
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


static PyObject *impl_flet_core$control$$$function__31_col(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1855eb0ecf59f2009b744d82e4ef4cf2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1855eb0ecf59f2009b744d82e4ef4cf2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1855eb0ecf59f2009b744d82e4ef4cf2)) {
        Py_XDECREF(cache_frame_1855eb0ecf59f2009b744d82e4ef4cf2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1855eb0ecf59f2009b744d82e4ef4cf2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1855eb0ecf59f2009b744d82e4ef4cf2 = MAKE_FUNCTION_FRAME(codeobj_1855eb0ecf59f2009b744d82e4ef4cf2, module_flet_core$control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1855eb0ecf59f2009b744d82e4ef4cf2->m_type_description == NULL);
    frame_1855eb0ecf59f2009b744d82e4ef4cf2 = cache_frame_1855eb0ecf59f2009b744d82e4ef4cf2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1855eb0ecf59f2009b744d82e4ef4cf2);
    assert(Py_REFCNT(frame_1855eb0ecf59f2009b744d82e4ef4cf2) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
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
        exception_tb = MAKE_TRACEBACK(frame_1855eb0ecf59f2009b744d82e4ef4cf2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1855eb0ecf59f2009b744d82e4ef4cf2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1855eb0ecf59f2009b744d82e4ef4cf2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1855eb0ecf59f2009b744d82e4ef4cf2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1855eb0ecf59f2009b744d82e4ef4cf2 == cache_frame_1855eb0ecf59f2009b744d82e4ef4cf2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1855eb0ecf59f2009b744d82e4ef4cf2);
        cache_frame_1855eb0ecf59f2009b744d82e4ef4cf2 = NULL;
    }

    assertFrameObject(frame_1855eb0ecf59f2009b744d82e4ef4cf2);

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


static PyObject *impl_flet_core$control$$$function__32_col(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_8436cfb925a3aab1a44d497c85966e10;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8436cfb925a3aab1a44d497c85966e10 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8436cfb925a3aab1a44d497c85966e10)) {
        Py_XDECREF(cache_frame_8436cfb925a3aab1a44d497c85966e10);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8436cfb925a3aab1a44d497c85966e10 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8436cfb925a3aab1a44d497c85966e10 = MAKE_FUNCTION_FRAME(codeobj_8436cfb925a3aab1a44d497c85966e10, module_flet_core$control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8436cfb925a3aab1a44d497c85966e10->m_type_description == NULL);
    frame_8436cfb925a3aab1a44d497c85966e10 = cache_frame_8436cfb925a3aab1a44d497c85966e10;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8436cfb925a3aab1a44d497c85966e10);
    assert(Py_REFCNT(frame_8436cfb925a3aab1a44d497c85966e10) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8436cfb925a3aab1a44d497c85966e10, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8436cfb925a3aab1a44d497c85966e10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8436cfb925a3aab1a44d497c85966e10, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8436cfb925a3aab1a44d497c85966e10,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_8436cfb925a3aab1a44d497c85966e10 == cache_frame_8436cfb925a3aab1a44d497c85966e10) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8436cfb925a3aab1a44d497c85966e10);
        cache_frame_8436cfb925a3aab1a44d497c85966e10 = NULL;
    }

    assertFrameObject(frame_8436cfb925a3aab1a44d497c85966e10);

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


static PyObject *impl_flet_core$control$$$function__33_opacity(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d53ab7f7dc69d58452aabaf47e21cc63;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d53ab7f7dc69d58452aabaf47e21cc63 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d53ab7f7dc69d58452aabaf47e21cc63)) {
        Py_XDECREF(cache_frame_d53ab7f7dc69d58452aabaf47e21cc63);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d53ab7f7dc69d58452aabaf47e21cc63 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d53ab7f7dc69d58452aabaf47e21cc63 = MAKE_FUNCTION_FRAME(codeobj_d53ab7f7dc69d58452aabaf47e21cc63, module_flet_core$control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d53ab7f7dc69d58452aabaf47e21cc63->m_type_description == NULL);
    frame_d53ab7f7dc69d58452aabaf47e21cc63 = cache_frame_d53ab7f7dc69d58452aabaf47e21cc63;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d53ab7f7dc69d58452aabaf47e21cc63);
    assert(Py_REFCNT(frame_d53ab7f7dc69d58452aabaf47e21cc63) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d53ab7f7dc69d58452aabaf47e21cc63->m_frame.f_lineno = 216;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[58], 0), mod_consts[59]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
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
        exception_tb = MAKE_TRACEBACK(frame_d53ab7f7dc69d58452aabaf47e21cc63, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d53ab7f7dc69d58452aabaf47e21cc63->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d53ab7f7dc69d58452aabaf47e21cc63, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d53ab7f7dc69d58452aabaf47e21cc63,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d53ab7f7dc69d58452aabaf47e21cc63 == cache_frame_d53ab7f7dc69d58452aabaf47e21cc63) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d53ab7f7dc69d58452aabaf47e21cc63);
        cache_frame_d53ab7f7dc69d58452aabaf47e21cc63 = NULL;
    }

    assertFrameObject(frame_d53ab7f7dc69d58452aabaf47e21cc63);

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


static PyObject *impl_flet_core$control$$$function__34_opacity(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_e65bd3e19c2ccf575007b3c130977c36;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e65bd3e19c2ccf575007b3c130977c36 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e65bd3e19c2ccf575007b3c130977c36)) {
        Py_XDECREF(cache_frame_e65bd3e19c2ccf575007b3c130977c36);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e65bd3e19c2ccf575007b3c130977c36 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e65bd3e19c2ccf575007b3c130977c36 = MAKE_FUNCTION_FRAME(codeobj_e65bd3e19c2ccf575007b3c130977c36, module_flet_core$control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e65bd3e19c2ccf575007b3c130977c36->m_type_description == NULL);
    frame_e65bd3e19c2ccf575007b3c130977c36 = cache_frame_e65bd3e19c2ccf575007b3c130977c36;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e65bd3e19c2ccf575007b3c130977c36);
    assert(Py_REFCNT(frame_e65bd3e19c2ccf575007b3c130977c36) == 2);

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
        frame_e65bd3e19c2ccf575007b3c130977c36->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[39],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
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
        exception_tb = MAKE_TRACEBACK(frame_e65bd3e19c2ccf575007b3c130977c36, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e65bd3e19c2ccf575007b3c130977c36->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e65bd3e19c2ccf575007b3c130977c36, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e65bd3e19c2ccf575007b3c130977c36,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_e65bd3e19c2ccf575007b3c130977c36 == cache_frame_e65bd3e19c2ccf575007b3c130977c36) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e65bd3e19c2ccf575007b3c130977c36);
        cache_frame_e65bd3e19c2ccf575007b3c130977c36 = NULL;
    }

    assertFrameObject(frame_e65bd3e19c2ccf575007b3c130977c36);

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


static PyObject *impl_flet_core$control$$$function__35_tooltip(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8965d422162542c90d7e85c650d85699;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8965d422162542c90d7e85c650d85699 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8965d422162542c90d7e85c650d85699)) {
        Py_XDECREF(cache_frame_8965d422162542c90d7e85c650d85699);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8965d422162542c90d7e85c650d85699 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8965d422162542c90d7e85c650d85699 = MAKE_FUNCTION_FRAME(codeobj_8965d422162542c90d7e85c650d85699, module_flet_core$control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8965d422162542c90d7e85c650d85699->m_type_description == NULL);
    frame_8965d422162542c90d7e85c650d85699 = cache_frame_8965d422162542c90d7e85c650d85699;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8965d422162542c90d7e85c650d85699);
    assert(Py_REFCNT(frame_8965d422162542c90d7e85c650d85699) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_8965d422162542c90d7e85c650d85699->m_frame.f_lineno = 225;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
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
        exception_tb = MAKE_TRACEBACK(frame_8965d422162542c90d7e85c650d85699, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8965d422162542c90d7e85c650d85699->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8965d422162542c90d7e85c650d85699, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8965d422162542c90d7e85c650d85699,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8965d422162542c90d7e85c650d85699 == cache_frame_8965d422162542c90d7e85c650d85699) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8965d422162542c90d7e85c650d85699);
        cache_frame_8965d422162542c90d7e85c650d85699 = NULL;
    }

    assertFrameObject(frame_8965d422162542c90d7e85c650d85699);

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


static PyObject *impl_flet_core$control$$$function__36_tooltip(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_1a62430a71680486464b0a10280e265d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a62430a71680486464b0a10280e265d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a62430a71680486464b0a10280e265d)) {
        Py_XDECREF(cache_frame_1a62430a71680486464b0a10280e265d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a62430a71680486464b0a10280e265d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a62430a71680486464b0a10280e265d = MAKE_FUNCTION_FRAME(codeobj_1a62430a71680486464b0a10280e265d, module_flet_core$control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a62430a71680486464b0a10280e265d->m_type_description == NULL);
    frame_1a62430a71680486464b0a10280e265d = cache_frame_1a62430a71680486464b0a10280e265d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1a62430a71680486464b0a10280e265d);
    assert(Py_REFCNT(frame_1a62430a71680486464b0a10280e265d) == 2);

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
        frame_1a62430a71680486464b0a10280e265d->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[39],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
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
        exception_tb = MAKE_TRACEBACK(frame_1a62430a71680486464b0a10280e265d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a62430a71680486464b0a10280e265d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a62430a71680486464b0a10280e265d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a62430a71680486464b0a10280e265d,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_1a62430a71680486464b0a10280e265d == cache_frame_1a62430a71680486464b0a10280e265d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a62430a71680486464b0a10280e265d);
        cache_frame_1a62430a71680486464b0a10280e265d = NULL;
    }

    assertFrameObject(frame_1a62430a71680486464b0a10280e265d);

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


static PyObject *impl_flet_core$control$$$function__37_visible(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_cb28faef1d82955011bba872bfaaa619;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cb28faef1d82955011bba872bfaaa619 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cb28faef1d82955011bba872bfaaa619)) {
        Py_XDECREF(cache_frame_cb28faef1d82955011bba872bfaaa619);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cb28faef1d82955011bba872bfaaa619 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cb28faef1d82955011bba872bfaaa619 = MAKE_FUNCTION_FRAME(codeobj_cb28faef1d82955011bba872bfaaa619, module_flet_core$control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cb28faef1d82955011bba872bfaaa619->m_type_description == NULL);
    frame_cb28faef1d82955011bba872bfaaa619 = cache_frame_cb28faef1d82955011bba872bfaaa619;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cb28faef1d82955011bba872bfaaa619);
    assert(Py_REFCNT(frame_cb28faef1d82955011bba872bfaaa619) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_cb28faef1d82955011bba872bfaaa619->m_frame.f_lineno = 234;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[61], 0), mod_consts[59]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
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
        exception_tb = MAKE_TRACEBACK(frame_cb28faef1d82955011bba872bfaaa619, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cb28faef1d82955011bba872bfaaa619->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb28faef1d82955011bba872bfaaa619, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cb28faef1d82955011bba872bfaaa619,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_cb28faef1d82955011bba872bfaaa619 == cache_frame_cb28faef1d82955011bba872bfaaa619) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cb28faef1d82955011bba872bfaaa619);
        cache_frame_cb28faef1d82955011bba872bfaaa619 = NULL;
    }

    assertFrameObject(frame_cb28faef1d82955011bba872bfaaa619);

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


static PyObject *impl_flet_core$control$$$function__38_visible(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_eba54700168b44353e7a172b5cfe8dda;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eba54700168b44353e7a172b5cfe8dda = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eba54700168b44353e7a172b5cfe8dda)) {
        Py_XDECREF(cache_frame_eba54700168b44353e7a172b5cfe8dda);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eba54700168b44353e7a172b5cfe8dda == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eba54700168b44353e7a172b5cfe8dda = MAKE_FUNCTION_FRAME(codeobj_eba54700168b44353e7a172b5cfe8dda, module_flet_core$control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eba54700168b44353e7a172b5cfe8dda->m_type_description == NULL);
    frame_eba54700168b44353e7a172b5cfe8dda = cache_frame_eba54700168b44353e7a172b5cfe8dda;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_eba54700168b44353e7a172b5cfe8dda);
    assert(Py_REFCNT(frame_eba54700168b44353e7a172b5cfe8dda) == 2);

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
        frame_eba54700168b44353e7a172b5cfe8dda->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[39],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
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
        exception_tb = MAKE_TRACEBACK(frame_eba54700168b44353e7a172b5cfe8dda, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eba54700168b44353e7a172b5cfe8dda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eba54700168b44353e7a172b5cfe8dda, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eba54700168b44353e7a172b5cfe8dda,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_eba54700168b44353e7a172b5cfe8dda == cache_frame_eba54700168b44353e7a172b5cfe8dda) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eba54700168b44353e7a172b5cfe8dda);
        cache_frame_eba54700168b44353e7a172b5cfe8dda = NULL;
    }

    assertFrameObject(frame_eba54700168b44353e7a172b5cfe8dda);

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


static PyObject *impl_flet_core$control$$$function__39_disabled(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_2d25d743716a113dd12e8a731445046e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2d25d743716a113dd12e8a731445046e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2d25d743716a113dd12e8a731445046e)) {
        Py_XDECREF(cache_frame_2d25d743716a113dd12e8a731445046e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2d25d743716a113dd12e8a731445046e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2d25d743716a113dd12e8a731445046e = MAKE_FUNCTION_FRAME(codeobj_2d25d743716a113dd12e8a731445046e, module_flet_core$control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2d25d743716a113dd12e8a731445046e->m_type_description == NULL);
    frame_2d25d743716a113dd12e8a731445046e = cache_frame_2d25d743716a113dd12e8a731445046e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2d25d743716a113dd12e8a731445046e);
    assert(Py_REFCNT(frame_2d25d743716a113dd12e8a731445046e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2d25d743716a113dd12e8a731445046e->m_frame.f_lineno = 243;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[62], 0), mod_consts[59]);
        Py_DECREF(tmp_called_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_2d25d743716a113dd12e8a731445046e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2d25d743716a113dd12e8a731445046e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2d25d743716a113dd12e8a731445046e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2d25d743716a113dd12e8a731445046e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_2d25d743716a113dd12e8a731445046e == cache_frame_2d25d743716a113dd12e8a731445046e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2d25d743716a113dd12e8a731445046e);
        cache_frame_2d25d743716a113dd12e8a731445046e = NULL;
    }

    assertFrameObject(frame_2d25d743716a113dd12e8a731445046e);

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


static PyObject *impl_flet_core$control$$$function__40_disabled(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_4c107bf9b8a359484ad4633a89bff891;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4c107bf9b8a359484ad4633a89bff891 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4c107bf9b8a359484ad4633a89bff891)) {
        Py_XDECREF(cache_frame_4c107bf9b8a359484ad4633a89bff891);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4c107bf9b8a359484ad4633a89bff891 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4c107bf9b8a359484ad4633a89bff891 = MAKE_FUNCTION_FRAME(codeobj_4c107bf9b8a359484ad4633a89bff891, module_flet_core$control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4c107bf9b8a359484ad4633a89bff891->m_type_description == NULL);
    frame_4c107bf9b8a359484ad4633a89bff891 = cache_frame_4c107bf9b8a359484ad4633a89bff891;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4c107bf9b8a359484ad4633a89bff891);
    assert(Py_REFCNT(frame_4c107bf9b8a359484ad4633a89bff891) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[12];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_4c107bf9b8a359484ad4633a89bff891->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[39],
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
        exception_tb = MAKE_TRACEBACK(frame_4c107bf9b8a359484ad4633a89bff891, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c107bf9b8a359484ad4633a89bff891->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c107bf9b8a359484ad4633a89bff891, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4c107bf9b8a359484ad4633a89bff891,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_4c107bf9b8a359484ad4633a89bff891 == cache_frame_4c107bf9b8a359484ad4633a89bff891) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4c107bf9b8a359484ad4633a89bff891);
        cache_frame_4c107bf9b8a359484ad4633a89bff891 = NULL;
    }

    assertFrameObject(frame_4c107bf9b8a359484ad4633a89bff891);

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


static PyObject *impl_flet_core$control$$$function__41_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0dddb32485b1e15354dd12c81dce7449;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0dddb32485b1e15354dd12c81dce7449 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0dddb32485b1e15354dd12c81dce7449)) {
        Py_XDECREF(cache_frame_0dddb32485b1e15354dd12c81dce7449);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0dddb32485b1e15354dd12c81dce7449 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0dddb32485b1e15354dd12c81dce7449 = MAKE_FUNCTION_FRAME(codeobj_0dddb32485b1e15354dd12c81dce7449, module_flet_core$control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0dddb32485b1e15354dd12c81dce7449->m_type_description == NULL);
    frame_0dddb32485b1e15354dd12c81dce7449 = cache_frame_0dddb32485b1e15354dd12c81dce7449;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0dddb32485b1e15354dd12c81dce7449);
    assert(Py_REFCNT(frame_0dddb32485b1e15354dd12c81dce7449) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
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
        exception_tb = MAKE_TRACEBACK(frame_0dddb32485b1e15354dd12c81dce7449, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0dddb32485b1e15354dd12c81dce7449->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0dddb32485b1e15354dd12c81dce7449, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0dddb32485b1e15354dd12c81dce7449,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0dddb32485b1e15354dd12c81dce7449 == cache_frame_0dddb32485b1e15354dd12c81dce7449) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0dddb32485b1e15354dd12c81dce7449);
        cache_frame_0dddb32485b1e15354dd12c81dce7449 = NULL;
    }

    assertFrameObject(frame_0dddb32485b1e15354dd12c81dce7449);

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


static PyObject *impl_flet_core$control$$$function__42_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_e5506838bf1f93714f4ae092a9a44fa2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e5506838bf1f93714f4ae092a9a44fa2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e5506838bf1f93714f4ae092a9a44fa2)) {
        Py_XDECREF(cache_frame_e5506838bf1f93714f4ae092a9a44fa2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e5506838bf1f93714f4ae092a9a44fa2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e5506838bf1f93714f4ae092a9a44fa2 = MAKE_FUNCTION_FRAME(codeobj_e5506838bf1f93714f4ae092a9a44fa2, module_flet_core$control, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e5506838bf1f93714f4ae092a9a44fa2->m_type_description == NULL);
    frame_e5506838bf1f93714f4ae092a9a44fa2 = cache_frame_e5506838bf1f93714f4ae092a9a44fa2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e5506838bf1f93714f4ae092a9a44fa2);
    assert(Py_REFCNT(frame_e5506838bf1f93714f4ae092a9a44fa2) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e5506838bf1f93714f4ae092a9a44fa2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e5506838bf1f93714f4ae092a9a44fa2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e5506838bf1f93714f4ae092a9a44fa2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e5506838bf1f93714f4ae092a9a44fa2,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_e5506838bf1f93714f4ae092a9a44fa2 == cache_frame_e5506838bf1f93714f4ae092a9a44fa2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e5506838bf1f93714f4ae092a9a44fa2);
        cache_frame_e5506838bf1f93714f4ae092a9a44fa2 = NULL;
    }

    assertFrameObject(frame_e5506838bf1f93714f4ae092a9a44fa2);

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


static PyObject *impl_flet_core$control$$$function__43_update(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_36d7d0a02036451931138a4450f318b2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_36d7d0a02036451931138a4450f318b2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_36d7d0a02036451931138a4450f318b2)) {
        Py_XDECREF(cache_frame_36d7d0a02036451931138a4450f318b2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_36d7d0a02036451931138a4450f318b2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_36d7d0a02036451931138a4450f318b2 = MAKE_FUNCTION_FRAME(codeobj_36d7d0a02036451931138a4450f318b2, module_flet_core$control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_36d7d0a02036451931138a4450f318b2->m_type_description == NULL);
    frame_36d7d0a02036451931138a4450f318b2 = cache_frame_36d7d0a02036451931138a4450f318b2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_36d7d0a02036451931138a4450f318b2);
    assert(Py_REFCNT(frame_36d7d0a02036451931138a4450f318b2) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
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
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[63];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 260;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[64]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_36d7d0a02036451931138a4450f318b2->m_frame.f_lineno = 261;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
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
        exception_tb = MAKE_TRACEBACK(frame_36d7d0a02036451931138a4450f318b2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_36d7d0a02036451931138a4450f318b2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_36d7d0a02036451931138a4450f318b2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_36d7d0a02036451931138a4450f318b2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_36d7d0a02036451931138a4450f318b2 == cache_frame_36d7d0a02036451931138a4450f318b2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_36d7d0a02036451931138a4450f318b2);
        cache_frame_36d7d0a02036451931138a4450f318b2 = NULL;
    }

    assertFrameObject(frame_36d7d0a02036451931138a4450f318b2);

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


static PyObject *impl_flet_core$control$$$function__44_update_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_flet_core$control$$$function__44_update_async$$$coroutine__1_update_async(tmp_closure_1);

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
struct flet_core$control$$$function__44_update_async$$$coroutine__1_update_async_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *flet_core$control$$$function__44_update_async$$$coroutine__1_update_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet_core$control$$$function__44_update_async$$$coroutine__1_update_async_locals *coroutine_heap = (struct flet_core$control$$$function__44_update_async$$$coroutine__1_update_async_locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_621ae91198a432b03cf8bbad414b236e, module_flet_core$control, sizeof(void *));
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
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[65]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 264;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 264;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 264;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
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
        tmp_raise_value_1 = mod_consts[63];
        coroutine_heap->exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        coroutine_heap->exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        coroutine_heap->exception_lineno = 264;
        RAISE_EXCEPTION_WITH_VALUE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "c";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 265;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[65]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 265;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[2]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 265;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[66]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 265;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[65]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 265;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 265;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 265;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = ASYNC_AWAIT(tmp_expression_value_3, await_normal);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 265;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_2;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 265;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 265;
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

static PyObject *MAKE_COROUTINE_flet_core$control$$$function__44_update_async$$$coroutine__1_update_async(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        flet_core$control$$$function__44_update_async$$$coroutine__1_update_async_context,
        module_flet_core$control,
        mod_consts[66],
        mod_consts[67],
        codeobj_621ae91198a432b03cf8bbad414b236e,
        closure,
        1,
#if 1
        sizeof(struct flet_core$control$$$function__44_update_async$$$coroutine__1_update_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$control$$$function__45_clean(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1bb68b767d28174e6bd784567df97072;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1bb68b767d28174e6bd784567df97072 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1bb68b767d28174e6bd784567df97072)) {
        Py_XDECREF(cache_frame_1bb68b767d28174e6bd784567df97072);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1bb68b767d28174e6bd784567df97072 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1bb68b767d28174e6bd784567df97072 = MAKE_FUNCTION_FRAME(codeobj_1bb68b767d28174e6bd784567df97072, module_flet_core$control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1bb68b767d28174e6bd784567df97072->m_type_description == NULL);
    frame_1bb68b767d28174e6bd784567df97072 = cache_frame_1bb68b767d28174e6bd784567df97072;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1bb68b767d28174e6bd784567df97072);
    assert(Py_REFCNT(frame_1bb68b767d28174e6bd784567df97072) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
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
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[63];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 268;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_1bb68b767d28174e6bd784567df97072->m_frame.f_lineno = 269;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[68], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
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
        exception_tb = MAKE_TRACEBACK(frame_1bb68b767d28174e6bd784567df97072, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1bb68b767d28174e6bd784567df97072->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1bb68b767d28174e6bd784567df97072, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1bb68b767d28174e6bd784567df97072,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1bb68b767d28174e6bd784567df97072 == cache_frame_1bb68b767d28174e6bd784567df97072) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1bb68b767d28174e6bd784567df97072);
        cache_frame_1bb68b767d28174e6bd784567df97072 = NULL;
    }

    assertFrameObject(frame_1bb68b767d28174e6bd784567df97072);

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


static PyObject *impl_flet_core$control$$$function__46_clean_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_flet_core$control$$$function__46_clean_async$$$coroutine__1_clean_async(tmp_closure_1);

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
struct flet_core$control$$$function__46_clean_async$$$coroutine__1_clean_async_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *flet_core$control$$$function__46_clean_async$$$coroutine__1_clean_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct flet_core$control$$$function__46_clean_async$$$coroutine__1_clean_async_locals *coroutine_heap = (struct flet_core$control$$$function__46_clean_async$$$coroutine__1_clean_async_locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_5b3f147d8a872baec5cdcb37dba143f8, module_flet_core$control, sizeof(void *));
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
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[65]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 272;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 272;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 272;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
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
        tmp_raise_value_1 = mod_consts[63];
        coroutine_heap->exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        coroutine_heap->exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        coroutine_heap->exception_lineno = 272;
        RAISE_EXCEPTION_WITH_VALUE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "c";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 273;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[65]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 273;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[2]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 273;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[69]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 273;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[65]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 273;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 273;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 273;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = ASYNC_AWAIT(tmp_expression_value_3, await_normal);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 273;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_2;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 273;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 273;
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

static PyObject *MAKE_COROUTINE_flet_core$control$$$function__46_clean_async$$$coroutine__1_clean_async(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        flet_core$control$$$function__46_clean_async$$$coroutine__1_clean_async_context,
        module_flet_core$control,
        mod_consts[70],
        mod_consts[71],
        codeobj_5b3f147d8a872baec5cdcb37dba143f8,
        closure,
        1,
#if 1
        sizeof(struct flet_core$control$$$function__46_clean_async$$$coroutine__1_clean_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$control$$$function__47_build_update_commands(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    PyObject *par_commands = python_pars[2];
    PyObject *par_added_controls = python_pars[3];
    PyObject *par_removed_controls = python_pars[4];
    PyObject *par_isolated = python_pars[5];
    PyObject *var_update_cmd = NULL;
    PyObject *var_previous_children = NULL;
    PyObject *var_current_children = NULL;
    PyObject *var_hashes = NULL;
    PyObject *var_previous_ints = NULL;
    PyObject *var_current_ints = NULL;
    struct Nuitka_CellObject *var_ctrl = Nuitka_Cell_Empty();
    PyObject *var_sm = NULL;
    PyObject *var_n = NULL;
    PyObject *var_tag = NULL;
    PyObject *var_a1 = NULL;
    PyObject *var_a2 = NULL;
    PyObject *var_b1 = NULL;
    PyObject *var_b2 = NULL;
    PyObject *var_ids = NULL;
    PyObject *var_h = NULL;
    PyObject *var_i = NULL;
    PyObject *var_replaced = NULL;
    PyObject *var_cmd = NULL;
    PyObject *var_innerCmds = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *tmp_for_loop_7__for_iterator = NULL;
    PyObject *tmp_for_loop_7__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_ff5f56ee04550a787e48c3778ebe1881;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    int tmp_res;
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
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_ff5f56ee04550a787e48c3778ebe1881 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ff5f56ee04550a787e48c3778ebe1881)) {
        Py_XDECREF(cache_frame_ff5f56ee04550a787e48c3778ebe1881);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff5f56ee04550a787e48c3778ebe1881 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff5f56ee04550a787e48c3778ebe1881 = MAKE_FUNCTION_FRAME(codeobj_ff5f56ee04550a787e48c3778ebe1881, module_flet_core$control, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ff5f56ee04550a787e48c3778ebe1881->m_type_description == NULL);
    frame_ff5f56ee04550a787e48c3778ebe1881 = cache_frame_ff5f56ee04550a787e48c3778ebe1881;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ff5f56ee04550a787e48c3778ebe1881);
    assert(Py_REFCNT(frame_ff5f56ee04550a787e48c3778ebe1881) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[72]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 278;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[73], 0), mod_consts[74]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_update_cmd == NULL);
        var_update_cmd = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_update_cmd);
        tmp_expression_value_2 = var_update_cmd;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[50]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 0;
        tmp_condition_result_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
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
        tmp_assattr_value_1 = mod_consts[75];
        CHECK_OBJECT(var_update_cmd);
        tmp_assattr_target_1 = var_update_cmd;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[76], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_commands);
        tmp_expression_value_3 = par_commands;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[77]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_update_cmd);
        tmp_args_element_value_1 = var_update_cmd;
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 282;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_isolated);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_isolated);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[4]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_previous_children == NULL);
        var_previous_children = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 289;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[78]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_current_children == NULL);
        var_current_children = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        assert(var_hashes == NULL);
        var_hashes = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_LIST_EMPTY(0);
        assert(var_previous_ints == NULL);
        var_previous_ints = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_LIST_EMPTY(0);
        assert(var_current_ints == NULL);
        var_current_ints = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_previous_children);
        tmp_iter_arg_1 = var_previous_children;
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooocooooooooooooo";
                exception_lineno = 295;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_9 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = Nuitka_Cell_GET(var_ctrl);
            PyCell_SET(var_ctrl, tmp_assign_source_9);
            Py_INCREF(tmp_assign_source_9);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_hash_arg_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_ctrl));
        tmp_ass_subvalue_1 = Nuitka_Cell_GET(var_ctrl);
        if (var_hashes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 296;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_hashes;
        CHECK_OBJECT(Nuitka_Cell_GET(var_ctrl));
        tmp_hash_arg_1 = Nuitka_Cell_GET(var_ctrl);
        tmp_ass_subscript_1 = BUILTIN_HASH(tmp_hash_arg_1);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_hash_arg_2;
        if (var_previous_ints == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 297;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = var_previous_ints;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[77]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_ctrl));
        tmp_hash_arg_2 = Nuitka_Cell_GET(var_ctrl);
        tmp_args_element_value_2 = BUILTIN_HASH(tmp_hash_arg_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 297;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_2;
        }
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 297;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 295;
        type_description_1 = "oooooooooooocooooooooooooo";
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_current_children);
        tmp_iter_arg_2 = var_current_children;
        tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_10;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_11 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooocooooooooooooo";
                exception_lineno = 299;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_12 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = Nuitka_Cell_GET(var_ctrl);
            PyCell_SET(var_ctrl, tmp_assign_source_12);
            Py_INCREF(tmp_assign_source_12);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_hash_arg_3;
        CHECK_OBJECT(Nuitka_Cell_GET(var_ctrl));
        tmp_ass_subvalue_2 = Nuitka_Cell_GET(var_ctrl);
        if (var_hashes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 300;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_ass_subscribed_2 = var_hashes;
        CHECK_OBJECT(Nuitka_Cell_GET(var_ctrl));
        tmp_hash_arg_3 = Nuitka_Cell_GET(var_ctrl);
        tmp_ass_subscript_2 = BUILTIN_HASH(tmp_hash_arg_3);
        if (tmp_ass_subscript_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_3;
        }
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_hash_arg_4;
        if (var_current_ints == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 301;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_6 = var_current_ints;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[77]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_ctrl));
        tmp_hash_arg_4 = Nuitka_Cell_GET(var_ctrl);
        tmp_args_element_value_3 = BUILTIN_HASH(tmp_hash_arg_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 301;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_3;
        }
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 301;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 299;
        type_description_1 = "oooooooooooocooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = Py_None;
        if (var_previous_ints == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 303;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = var_previous_ints;
        if (var_current_ints == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 303;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = var_current_ints;
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 303;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sm == NULL);
        var_sm = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[26];
        assert(var_n == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_n = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_sm);
        tmp_called_instance_2 = var_sm;
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 306;
        tmp_iter_arg_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[83]);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_15;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_16 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooocooooooooooooo";
                exception_lineno = 306;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_iter_arg_4 = tmp_for_loop_3__iter_value;
        tmp_assign_source_17 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tmp_unpack_1, 0, 5);
        if (tmp_assign_source_18 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooocooooooooooooo";
            exception_lineno = 306;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT(tmp_unpack_2, 1, 5);
        if (tmp_assign_source_19 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooocooooooooooooo";
            exception_lineno = 306;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tmp_unpack_3, 2, 5);
        if (tmp_assign_source_20 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooocooooooooooooo";
            exception_lineno = 306;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tmp_unpack_4, 3, 5);
        if (tmp_assign_source_21 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooocooooooooooooo";
            exception_lineno = 306;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_4;
            tmp_tuple_unpack_1__element_4 = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tmp_unpack_5, 4, 5);
        if (tmp_assign_source_22 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooocooooooooooooo";
            exception_lineno = 306;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_5;
            tmp_tuple_unpack_1__element_5 = tmp_assign_source_22;
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

                    type_description_1 = "oooooooooooocooooooooooooo";
                    exception_lineno = 306;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[84];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooocooooooooooooo";
            exception_lineno = 306;
            goto try_except_handler_6;
        }
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_23 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_tag;
            var_tag = tmp_assign_source_23;
            Py_INCREF(var_tag);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_24 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_a1;
            var_a1 = tmp_assign_source_24;
            Py_INCREF(var_a1);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_25 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_a2;
            var_a2 = tmp_assign_source_25;
            Py_INCREF(var_a2);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_26 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = var_b1;
            var_b1 = tmp_assign_source_26;
            Py_INCREF(var_b1);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_5);
        tmp_assign_source_27 = tmp_tuple_unpack_1__element_5;
        {
            PyObject *old = var_b2;
            var_b2 = tmp_assign_source_27;
            Py_INCREF(var_b2);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_5);
    tmp_tuple_unpack_1__element_5 = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_tag);
        tmp_cmp_expr_left_2 = var_tag;
        tmp_cmp_expr_right_2 = mod_consts[85];
        tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_tag);
        tmp_cmp_expr_left_3 = var_tag;
        tmp_cmp_expr_right_3 = mod_consts[86];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_3 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = var_ids;
            var_ids = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        if (var_previous_ints == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 310;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_7 = var_previous_ints;
        CHECK_OBJECT(var_a1);
        tmp_start_value_1 = var_a1;
        CHECK_OBJECT(var_a2);
        tmp_stop_value_1 = var_a2;
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_iter_arg_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_29 = MAKE_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_4__for_iterator;
            tmp_for_loop_4__for_iterator = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_30 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_30 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooocooooooooooooo";
                exception_lineno = 310;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_31 = tmp_for_loop_4__iter_value;
        {
            PyObject *old = var_h;
            var_h = tmp_assign_source_31;
            Py_INCREF(var_h);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        if (var_hashes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 311;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_8 = var_hashes;
        CHECK_OBJECT(var_h);
        tmp_subscript_value_2 = var_h;
        tmp_assign_source_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_2);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_ctrl);
            PyCell_SET(var_ctrl, tmp_assign_source_32);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[26];
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_33;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = Py_False;
        {
            PyObject *old = var_replaced;
            var_replaced = tmp_assign_source_34;
            Py_INCREF(var_replaced);
            Py_XDECREF(old);
        }

    }
    loop_start_5:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_len_arg_2;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 316;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_cmp_expr_left_4 = var_i;
        if (par_commands == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 316;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_len_arg_2 = par_commands;
        tmp_cmp_expr_right_4 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_operand_value_1 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    goto loop_end_5;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_3;
        if (par_commands == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 317;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_9 = par_commands;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 317;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_subscript_value_3 = var_i;
        tmp_assign_source_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_3);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_cmd;
            var_cmd = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_any_arg_1;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_cmd);
        tmp_expression_value_10 = var_cmd;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[76]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_cmp_expr_right_5 = mod_consts[89];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_expression_value_11;
            CHECK_OBJECT(var_cmd);
            tmp_expression_value_11 = var_cmd;
            tmp_iter_arg_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[88]);
            if (tmp_iter_arg_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_1 = "oooooooooooocooooooooooooo";
                goto try_except_handler_7;
            }
            tmp_assign_source_36 = MAKE_ITERATOR(tmp_iter_arg_6);
            Py_DECREF(tmp_iter_arg_6);
            if (tmp_assign_source_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_1 = "oooooooooooocooooooooooooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_genexpr_1__$0;
                tmp_genexpr_1__$0 = tmp_assign_source_36;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = var_ctrl;
            Py_INCREF(tmp_closure_1[0]);
            tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_any_arg_1 = MAKE_GENERATOR_flet_core$control$$$function__47_build_update_commands$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_8;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_capi_result_1 = BUILTIN_ANY(tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_capi_result_1);
        assert(!(tmp_truth_name_2 == -1));
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_capi_result_1);
        tmp_condition_result_5 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_5 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_13;
        if (par_commands == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 322;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_12 = par_commands;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[90]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        if (var_i == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 322;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_value_7 = var_i;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 322;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_args_element_value_9 = mod_consts[26];
        tmp_args_element_value_10 = mod_consts[92];
        if (Nuitka_Cell_GET(var_ctrl) == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 322;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_13 = Nuitka_Cell_GET(var_ctrl);
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[6]);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 322;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_args_element_value_11 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_args_element_value_11, 0, tmp_list_element_1);
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 322;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_args_element_value_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_args_element_value_11);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 322;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 322;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = Py_True;
        {
            PyObject *old = var_replaced;
            assert(old != NULL);
            var_replaced = tmp_assign_source_37;
            Py_INCREF(var_replaced);
            Py_DECREF(old);
        }

    }
    goto loop_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_i == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 325;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_iadd_expr_left_1 = var_i;
        tmp_iadd_expr_right_1 = mod_consts[56];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_38 = tmp_iadd_expr_left_1;
        var_i = tmp_assign_source_38;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 316;
        type_description_1 = "oooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_5;
    loop_end_5:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        if (par_removed_controls == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 326;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_14 = par_removed_controls;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[95]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 327;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_15 = par_self;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[96]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 327;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        if (par_index == NULL) {
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 327;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_value_13 = par_index;
        if (Nuitka_Cell_GET(var_ctrl) == NULL) {
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 327;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_value_14 = Nuitka_Cell_GET(var_ctrl);
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 327;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_args_element_value_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 327;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 326;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(var_replaced);
        tmp_operand_value_2 = var_replaced;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_17;
        if (var_ids == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 330;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_16 = var_ids;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[77]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        if (Nuitka_Cell_GET(var_ctrl) == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 330;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_17 = Nuitka_Cell_GET(var_ctrl);
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[6]);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 330;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 330;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_6:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 310;
        type_description_1 = "oooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_5;
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

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_4;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        nuitka_digit tmp_cmp_expr_right_6;
        PyObject *tmp_len_arg_3;
        if (var_ids == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 331;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_len_arg_3 = var_ids;
        tmp_cmp_expr_left_6 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_6 = 0;
        tmp_condition_result_7 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        if (par_commands == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 332;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_18 = par_commands;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[77]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 332;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_17 = mod_consts[26];
        tmp_args_element_value_18 = mod_consts[92];
        if (var_ids == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 332;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_19 = var_ids;
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 332;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_args_element_value_16 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_12, call_args);
        }

        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 332;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 332;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_tag);
        tmp_cmp_expr_left_7 = var_tag;
        tmp_cmp_expr_right_7 = mod_consts[86];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_start_value_2;
        PyObject *tmp_stop_value_2;
        if (var_current_ints == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 335;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_19 = var_current_ints;
        CHECK_OBJECT(var_b1);
        tmp_start_value_2 = var_b1;
        CHECK_OBJECT(var_b2);
        tmp_stop_value_2 = var_b2;
        tmp_subscript_value_4 = MAKE_SLICE_OBJECT2(tmp_start_value_2, tmp_stop_value_2);
        assert(!(tmp_subscript_value_4 == NULL));
        tmp_iter_arg_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_iter_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_39 = MAKE_ITERATOR(tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_5__for_iterator;
            tmp_for_loop_5__for_iterator = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_5 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_40 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_40 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooocooooooooooooo";
                exception_lineno = 335;
                goto try_except_handler_9;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_assign_source_41 = tmp_for_loop_5__iter_value;
        {
            PyObject *old = var_h;
            var_h = tmp_assign_source_41;
            Py_INCREF(var_h);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_5;
        if (var_hashes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 336;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_20 = var_hashes;
        CHECK_OBJECT(var_h);
        tmp_subscript_value_5 = var_h;
        tmp_assign_source_42 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_5);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_ctrl);
            PyCell_SET(var_ctrl, tmp_assign_source_42);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_ctrl));
        tmp_expression_value_21 = Nuitka_Cell_GET(var_ctrl);
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[99]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_9;
        }
        if (par_index == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 338;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_kw_call_value_0_1 = par_index;
        if (par_added_controls == NULL) {
            Py_DECREF(tmp_called_value_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 338;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_kw_call_value_1_1 = par_added_controls;
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 337;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_43 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_13, kw_values, mod_consts[101]);
        }

        Py_DECREF(tmp_called_value_13);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_innerCmds;
            var_innerCmds = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_22;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 340;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_22 = par_self;
        tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[6]);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_cmp_expr_right_8 = Py_None;
        tmp_condition_result_9 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 340;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooocooooooooooooo";
        goto try_except_handler_9;
    }
    branch_no_9:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_value_15;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_kw_call_value_3_1;
        if (par_commands == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 341;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_23 = par_commands;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[77]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 342;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_kw_call_value_0_2 = mod_consts[26];
        tmp_kw_call_value_1_2 = mod_consts[89];
        tmp_dict_key_1 = mod_consts[102];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 345;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_expression_value_24 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[6]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 345;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_kw_call_value_2_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_unicode_arg_1;
            tmp_res = PyDict_SetItem(tmp_kw_call_value_2_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[103];
            if (var_n == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 345;
                type_description_1 = "oooooooooooocooooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_unicode_arg_1 = var_n;
            tmp_dict_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "oooooooooooocooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_2_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_kw_call_value_2_1);
        goto try_except_handler_9;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        CHECK_OBJECT(var_innerCmds);
        tmp_kw_call_value_3_1 = var_innerCmds;
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 342;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_args_element_value_20 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_15, kw_values, mod_consts[105]);
        }

        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 342;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_9;
        }
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 341;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        if (var_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 349;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_9;
        }

        tmp_iadd_expr_left_2 = var_n;
        tmp_iadd_expr_right_2 = mod_consts[56];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_44 = tmp_iadd_expr_left_2;
        var_n = tmp_assign_source_44;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 335;
        type_description_1 = "oooooooooooocooooooooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_6;
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

    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_4;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    branch_no_8:;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(var_tag);
        tmp_cmp_expr_left_9 = var_tag;
        tmp_cmp_expr_right_9 = mod_consts[106];
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_start_value_3;
        PyObject *tmp_stop_value_3;
        if (var_previous_ints == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 352;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_25 = var_previous_ints;
        CHECK_OBJECT(var_a1);
        tmp_start_value_3 = var_a1;
        CHECK_OBJECT(var_a2);
        tmp_stop_value_3 = var_a2;
        tmp_subscript_value_6 = MAKE_SLICE_OBJECT2(tmp_start_value_3, tmp_stop_value_3);
        assert(!(tmp_subscript_value_6 == NULL));
        tmp_iter_arg_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_6);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_iter_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_45 = MAKE_ITERATOR(tmp_iter_arg_8);
        Py_DECREF(tmp_iter_arg_8);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_6__for_iterator;
            tmp_for_loop_6__for_iterator = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_46;
        CHECK_OBJECT(tmp_for_loop_6__for_iterator);
        tmp_next_source_6 = tmp_for_loop_6__for_iterator;
        tmp_assign_source_46 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_46 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_7;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooocooooooooooooo";
                exception_lineno = 352;
                goto try_except_handler_10;
            }
        }

        {
            PyObject *old = tmp_for_loop_6__iter_value;
            tmp_for_loop_6__iter_value = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_47;
        CHECK_OBJECT(tmp_for_loop_6__iter_value);
        tmp_assign_source_47 = tmp_for_loop_6__iter_value;
        {
            PyObject *old = var_h;
            var_h = tmp_assign_source_47;
            Py_INCREF(var_h);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_7;
        if (var_hashes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 353;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_expression_value_26 = var_hashes;
        CHECK_OBJECT(var_h);
        tmp_subscript_value_7 = var_h;
        tmp_assign_source_48 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_7);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_ctrl);
            PyCell_SET(var_ctrl, tmp_assign_source_48);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_9;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(Nuitka_Cell_GET(var_ctrl));
        tmp_expression_value_27 = Nuitka_Cell_GET(var_ctrl);
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[107]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_10;
        }
        if (par_index == NULL) {
            Py_DECREF(tmp_called_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 355;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_kw_call_arg_value_0_1 = par_index;
        if (par_commands == NULL) {
            Py_DECREF(tmp_called_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 356;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_kw_call_arg_value_1_1 = par_commands;
        if (par_added_controls == NULL) {
            Py_DECREF(tmp_called_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 357;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_kw_call_arg_value_2_1 = par_added_controls;
        if (par_removed_controls == NULL) {
            Py_DECREF(tmp_called_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 358;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_kw_call_arg_value_3_1 = par_removed_controls;
        CHECK_OBJECT(Nuitka_Cell_GET(var_ctrl));
        tmp_called_instance_3 = Nuitka_Cell_GET(var_ctrl);
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 359;
        tmp_kw_call_dict_value_0_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[108]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 359;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_10;
        }
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 354;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS4_KWSPLIT(tmp_called_value_16, args, kw_values, mod_consts[109]);
        }

        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        if (var_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 361;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_iadd_expr_left_3 = var_n;
        tmp_iadd_expr_right_3 = mod_consts[56];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_49 = tmp_iadd_expr_left_3;
        var_n = tmp_assign_source_49;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 352;
        type_description_1 = "oooooooooooocooooooooooooo";
        goto try_except_handler_10;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_4;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    goto branch_end_10;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(var_tag);
        tmp_cmp_expr_left_10 = var_tag;
        tmp_cmp_expr_right_10 = mod_consts[90];
        tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_start_value_4;
        PyObject *tmp_stop_value_4;
        if (var_current_ints == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 364;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_28 = var_current_ints;
        CHECK_OBJECT(var_b1);
        tmp_start_value_4 = var_b1;
        CHECK_OBJECT(var_b2);
        tmp_stop_value_4 = var_b2;
        tmp_subscript_value_8 = MAKE_SLICE_OBJECT2(tmp_start_value_4, tmp_stop_value_4);
        assert(!(tmp_subscript_value_8 == NULL));
        tmp_iter_arg_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_8);
        Py_DECREF(tmp_subscript_value_8);
        if (tmp_iter_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_50 = MAKE_ITERATOR(tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_7__for_iterator;
            tmp_for_loop_7__for_iterator = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_8:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT(tmp_for_loop_7__for_iterator);
        tmp_next_source_7 = tmp_for_loop_7__for_iterator;
        tmp_assign_source_51 = ITERATOR_NEXT(tmp_next_source_7);
        if (tmp_assign_source_51 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_8;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooocooooooooooooo";
                exception_lineno = 364;
                goto try_except_handler_11;
            }
        }

        {
            PyObject *old = tmp_for_loop_7__iter_value;
            tmp_for_loop_7__iter_value = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT(tmp_for_loop_7__iter_value);
        tmp_assign_source_52 = tmp_for_loop_7__iter_value;
        {
            PyObject *old = var_h;
            var_h = tmp_assign_source_52;
            Py_INCREF(var_h);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_9;
        if (var_hashes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 365;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_expression_value_29 = var_hashes;
        CHECK_OBJECT(var_h);
        tmp_subscript_value_9 = var_h;
        tmp_assign_source_53 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_9);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_ctrl);
            PyCell_SET(var_ctrl, tmp_assign_source_53);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        CHECK_OBJECT(Nuitka_Cell_GET(var_ctrl));
        tmp_expression_value_30 = Nuitka_Cell_GET(var_ctrl);
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[99]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_11;
        }
        if (par_index == NULL) {
            Py_DECREF(tmp_called_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 367;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_kw_call_value_0_3 = par_index;
        if (par_added_controls == NULL) {
            Py_DECREF(tmp_called_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 367;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_kw_call_value_1_3 = par_added_controls;
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 366;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3};

            tmp_assign_source_54 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_17, kw_values, mod_consts[101]);
        }

        Py_DECREF(tmp_called_value_17);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_innerCmds;
            var_innerCmds = tmp_assign_source_54;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_expression_value_31;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 369;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_expression_value_31 = par_self;
        tmp_cmp_expr_left_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[6]);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_cmp_expr_right_11 = Py_None;
        tmp_condition_result_12 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_lineno = 369;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooocooooooooooooo";
        goto try_except_handler_11;
    }
    branch_no_12:;
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_19;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_kw_call_value_3_2;
        if (par_commands == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 370;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_expression_value_32 = par_commands;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[77]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 371;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_kw_call_value_0_4 = mod_consts[26];
        tmp_kw_call_value_1_4 = mod_consts[89];
        tmp_dict_key_2 = mod_consts[102];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 374;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_expression_value_33 = par_self;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[6]);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 374;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_kw_call_value_2_2 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_unicode_arg_2;
            tmp_res = PyDict_SetItem(tmp_kw_call_value_2_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[103];
            if (var_n == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 374;
                type_description_1 = "oooooooooooocooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_unicode_arg_2 = var_n;
            tmp_dict_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;
                type_description_1 = "oooooooooooocooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kw_call_value_2_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_kw_call_value_2_2);
        goto try_except_handler_11;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        CHECK_OBJECT(var_innerCmds);
        tmp_kw_call_value_3_2 = var_innerCmds;
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 371;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2};

            tmp_args_element_value_21 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_19, kw_values, mod_consts[105]);
        }

        Py_DECREF(tmp_kw_call_value_2_2);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 371;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_11;
        }
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 370;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        if (var_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 378;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_iadd_expr_left_4 = var_n;
        tmp_iadd_expr_right_4 = mod_consts[56];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_55 = tmp_iadd_expr_left_4;
        var_n = tmp_assign_source_55;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 364;
        type_description_1 = "oooooooooooocooooooooooooo";
        goto try_except_handler_11;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_4;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    branch_no_11:;
    branch_end_10:;
    branch_end_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 306;
        type_description_1 = "oooooooooooocooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_11;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 380;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_35 = par_self;
        tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[4]);
        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[110]);
        Py_DECREF(tmp_expression_value_34);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 380;
        tmp_call_result_11 = CALL_FUNCTION_NO_ARGS(tmp_called_value_20);
        Py_DECREF(tmp_called_value_20);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_22;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 381;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_37 = par_self;
        tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[4]);
        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[95]);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_current_children);
        tmp_args_element_value_22 = var_current_children;
        frame_ff5f56ee04550a787e48c3778ebe1881->m_frame.f_lineno = 381;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_21);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "oooooooooooocooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
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
        exception_tb = MAKE_TRACEBACK(frame_ff5f56ee04550a787e48c3778ebe1881, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff5f56ee04550a787e48c3778ebe1881->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff5f56ee04550a787e48c3778ebe1881, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff5f56ee04550a787e48c3778ebe1881,
        type_description_1,
        par_self,
        par_index,
        par_commands,
        par_added_controls,
        par_removed_controls,
        par_isolated,
        var_update_cmd,
        var_previous_children,
        var_current_children,
        var_hashes,
        var_previous_ints,
        var_current_ints,
        var_ctrl,
        var_sm,
        var_n,
        var_tag,
        var_a1,
        var_a2,
        var_b1,
        var_b2,
        var_ids,
        var_h,
        var_i,
        var_replaced,
        var_cmd,
        var_innerCmds
    );


    // Release cached frame if used for exception.
    if (frame_ff5f56ee04550a787e48c3778ebe1881 == cache_frame_ff5f56ee04550a787e48c3778ebe1881) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ff5f56ee04550a787e48c3778ebe1881);
        cache_frame_ff5f56ee04550a787e48c3778ebe1881 = NULL;
    }

    assertFrameObject(frame_ff5f56ee04550a787e48c3778ebe1881);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_update_cmd);
    Py_DECREF(var_update_cmd);
    var_update_cmd = NULL;
    Py_XDECREF(var_previous_children);
    var_previous_children = NULL;
    Py_XDECREF(var_current_children);
    var_current_children = NULL;
    Py_XDECREF(var_hashes);
    var_hashes = NULL;
    Py_XDECREF(var_previous_ints);
    var_previous_ints = NULL;
    Py_XDECREF(var_current_ints);
    var_current_ints = NULL;
    CHECK_OBJECT(var_ctrl);
    Py_DECREF(var_ctrl);
    var_ctrl = NULL;
    Py_XDECREF(var_sm);
    var_sm = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_tag);
    var_tag = NULL;
    Py_XDECREF(var_a1);
    var_a1 = NULL;
    Py_XDECREF(var_a2);
    var_a2 = NULL;
    Py_XDECREF(var_b1);
    var_b1 = NULL;
    Py_XDECREF(var_b2);
    var_b2 = NULL;
    Py_XDECREF(var_ids);
    var_ids = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_replaced);
    var_replaced = NULL;
    Py_XDECREF(var_cmd);
    var_cmd = NULL;
    Py_XDECREF(var_innerCmds);
    var_innerCmds = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_update_cmd);
    var_update_cmd = NULL;
    Py_XDECREF(var_previous_children);
    var_previous_children = NULL;
    Py_XDECREF(var_current_children);
    var_current_children = NULL;
    Py_XDECREF(var_hashes);
    var_hashes = NULL;
    Py_XDECREF(var_previous_ints);
    var_previous_ints = NULL;
    Py_XDECREF(var_current_ints);
    var_current_ints = NULL;
    CHECK_OBJECT(var_ctrl);
    Py_DECREF(var_ctrl);
    var_ctrl = NULL;
    Py_XDECREF(var_sm);
    var_sm = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_tag);
    var_tag = NULL;
    Py_XDECREF(var_a1);
    var_a1 = NULL;
    Py_XDECREF(var_a2);
    var_a2 = NULL;
    Py_XDECREF(var_b1);
    var_b1 = NULL;
    Py_XDECREF(var_b2);
    var_b2 = NULL;
    Py_XDECREF(var_ids);
    var_ids = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_replaced);
    var_replaced = NULL;
    Py_XDECREF(var_cmd);
    var_cmd = NULL;
    Py_XDECREF(var_innerCmds);
    var_innerCmds = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_commands);
    Py_DECREF(par_commands);
    CHECK_OBJECT(par_added_controls);
    Py_DECREF(par_added_controls);
    CHECK_OBJECT(par_removed_controls);
    Py_DECREF(par_removed_controls);
    CHECK_OBJECT(par_isolated);
    Py_DECREF(par_isolated);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_commands);
    Py_DECREF(par_commands);
    CHECK_OBJECT(par_added_controls);
    Py_DECREF(par_added_controls);
    CHECK_OBJECT(par_removed_controls);
    Py_DECREF(par_removed_controls);
    CHECK_OBJECT(par_isolated);
    Py_DECREF(par_isolated);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct flet_core$control$$$function__47_build_update_commands$$$genexpr__1_genexpr_locals {
    PyObject *var_c;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *flet_core$control$$$function__47_build_update_commands$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct flet_core$control$$$function__47_build_update_commands$$$genexpr__1_genexpr_locals *generator_heap = (struct flet_core$control$$$function__47_build_update_commands$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_c = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_4ef6483a730725063ef1ee2195771f12, module_flet_core$control, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 318;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_c;
            generator_heap->var_c = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_c);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(generator_heap->var_c);
        tmp_expression_value_2 = generator_heap->var_c;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[50]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 319;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 319;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 319;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[53]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 319;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[93]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 319;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            generator_heap->exception_lineno = 319;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 319;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_4;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_c);
        tmp_expression_value_4 = generator_heap->var_c;
        Py_INCREF(tmp_expression_value_4);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_4;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 319;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 318;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_c,
            generator->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_c);
    generator_heap->var_c = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_c);
    generator_heap->var_c = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_flet_core$control$$$function__47_build_update_commands$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        flet_core$control$$$function__47_build_update_commands$$$genexpr__1_genexpr_context,
        module_flet_core$control,
        mod_consts[111],
#if PYTHON_VERSION >= 0x350
        mod_consts[112],
#endif
        codeobj_4ef6483a730725063ef1ee2195771f12,
        closure,
        2,
#if 1
        sizeof(struct flet_core$control$$$function__47_build_update_commands$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet_core$control$$$function__48__remove_control_recursively(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_index = python_pars[1];
    PyObject *par_control = python_pars[2];
    PyObject *var_removed_controls = NULL;
    PyObject *var_child = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_c4ebbd0f910b6bec166fefea20ee2ecc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c4ebbd0f910b6bec166fefea20ee2ecc = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_removed_controls == NULL);
        var_removed_controls = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_c4ebbd0f910b6bec166fefea20ee2ecc)) {
        Py_XDECREF(cache_frame_c4ebbd0f910b6bec166fefea20ee2ecc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c4ebbd0f910b6bec166fefea20ee2ecc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c4ebbd0f910b6bec166fefea20ee2ecc = MAKE_FUNCTION_FRAME(codeobj_c4ebbd0f910b6bec166fefea20ee2ecc, module_flet_core$control, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c4ebbd0f910b6bec166fefea20ee2ecc->m_type_description == NULL);
    frame_c4ebbd0f910b6bec166fefea20ee2ecc = cache_frame_c4ebbd0f910b6bec166fefea20ee2ecc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c4ebbd0f910b6bec166fefea20ee2ecc);
    assert(Py_REFCNT(frame_c4ebbd0f910b6bec166fefea20ee2ecc) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_control);
        tmp_expression_value_1 = par_control;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_cmp_expr_right_1 = par_index;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_delsubscr_subscript_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_index);
        tmp_delsubscr_target_1 = par_index;
        CHECK_OBJECT(par_control);
        tmp_expression_value_2 = par_control;
        tmp_delsubscr_subscript_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        if (tmp_delsubscr_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        Py_DECREF(tmp_delsubscr_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_control);
        tmp_called_instance_1 = par_control;
        frame_c4ebbd0f910b6bec166fefea20ee2ecc->m_frame.f_lineno = 389;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[78]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 389;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_child;
            var_child = tmp_assign_source_4;
            Py_INCREF(var_child);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (var_removed_controls == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 390;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = var_removed_controls;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[95]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 390;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[96]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 390;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (par_index == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 390;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = par_index;
        CHECK_OBJECT(var_child);
        tmp_args_element_value_3 = var_child;
        frame_c4ebbd0f910b6bec166fefea20ee2ecc->m_frame.f_lineno = 390;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 390;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_c4ebbd0f910b6bec166fefea20ee2ecc->m_frame.f_lineno = 390;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 389;
        type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_control);
        tmp_expression_value_5 = par_control;
        tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[113]);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 392;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_7 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_child;
            var_child = tmp_assign_source_7;
            Py_INCREF(var_child);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        if (var_removed_controls == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 393;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_6 = var_removed_controls;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[95]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 393;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_7 = par_self;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[96]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 393;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        if (par_index == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 393;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_5 = par_index;
        CHECK_OBJECT(var_child);
        tmp_args_element_value_6 = var_child;
        frame_c4ebbd0f910b6bec166fefea20ee2ecc->m_frame.f_lineno = 393;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 393;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        frame_c4ebbd0f910b6bec166fefea20ee2ecc->m_frame.f_lineno = 393;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 392;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        if (var_removed_controls == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 395;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = var_removed_controls;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[77]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_control);
        tmp_args_element_value_7 = par_control;
        frame_c4ebbd0f910b6bec166fefea20ee2ecc->m_frame.f_lineno = 395;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_1:;
    if (var_removed_controls == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[94]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 397;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_removed_controls;
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
        exception_tb = MAKE_TRACEBACK(frame_c4ebbd0f910b6bec166fefea20ee2ecc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c4ebbd0f910b6bec166fefea20ee2ecc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c4ebbd0f910b6bec166fefea20ee2ecc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c4ebbd0f910b6bec166fefea20ee2ecc,
        type_description_1,
        par_self,
        par_index,
        par_control,
        var_removed_controls,
        var_child
    );


    // Release cached frame if used for exception.
    if (frame_c4ebbd0f910b6bec166fefea20ee2ecc == cache_frame_c4ebbd0f910b6bec166fefea20ee2ecc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c4ebbd0f910b6bec166fefea20ee2ecc);
        cache_frame_c4ebbd0f910b6bec166fefea20ee2ecc = NULL;
    }

    assertFrameObject(frame_c4ebbd0f910b6bec166fefea20ee2ecc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_removed_controls);
    var_removed_controls = NULL;
    Py_XDECREF(var_child);
    var_child = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_removed_controls);
    var_removed_controls = NULL;
    Py_XDECREF(var_child);
    var_child = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_control);
    Py_DECREF(par_control);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_control);
    Py_DECREF(par_control);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$control$$$function__49__build_add_commands(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_indent = python_pars[1];
    PyObject *par_index = python_pars[2];
    PyObject *par_added_controls = python_pars[3];
    PyObject *var_commands = NULL;
    PyObject *var_command = NULL;
    PyObject *var_children = NULL;
    PyObject *var_control = NULL;
    PyObject *var_childCmd = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_0f9dc698925b27c8d08f86248be58b48;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0f9dc698925b27c8d08f86248be58b48 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0f9dc698925b27c8d08f86248be58b48)) {
        Py_XDECREF(cache_frame_0f9dc698925b27c8d08f86248be58b48);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0f9dc698925b27c8d08f86248be58b48 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0f9dc698925b27c8d08f86248be58b48 = MAKE_FUNCTION_FRAME(codeobj_0f9dc698925b27c8d08f86248be58b48, module_flet_core$control, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0f9dc698925b27c8d08f86248be58b48->m_type_description == NULL);
    frame_0f9dc698925b27c8d08f86248be58b48 = cache_frame_0f9dc698925b27c8d08f86248be58b48;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0f9dc698925b27c8d08f86248be58b48);
    assert(Py_REFCNT(frame_0f9dc698925b27c8d08f86248be58b48) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_0f9dc698925b27c8d08f86248be58b48->m_frame.f_lineno = 401;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[114]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 404;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_index);
        tmp_cmp_expr_left_1 = par_index;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_index);
        tmp_cmp_expr_right_2 = par_index;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_delsubscr_subscript_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_index);
        tmp_delsubscr_target_1 = par_index;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_delsubscr_subscript_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_delsubscr_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        Py_DECREF(tmp_delsubscr_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_commands == NULL);
        var_commands = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_0f9dc698925b27c8d08f86248be58b48->m_frame.f_lineno = 410;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[72],
            PyTuple_GET_ITEM(mod_consts[115], 0)
        );

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_command == NULL);
        var_command = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_indent);
        tmp_assattr_value_1 = par_indent;
        CHECK_OBJECT(var_command);
        tmp_assattr_target_1 = var_command;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[116], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(var_command);
        tmp_expression_value_5 = var_command;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[117]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[77]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_0f9dc698925b27c8d08f86248be58b48->m_frame.f_lineno = 412;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[51]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 412;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0f9dc698925b27c8d08f86248be58b48->m_frame.f_lineno = 412;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        CHECK_OBJECT(var_commands);
        tmp_list_arg_value_1 = var_commands;
        CHECK_OBJECT(var_command);
        tmp_item_value_1 = var_command;
        tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_added_controls);
        tmp_cmp_expr_left_3 = par_added_controls;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_added_controls);
        tmp_expression_value_6 = par_added_controls;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[77]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        frame_0f9dc698925b27c8d08f86248be58b48->m_frame.f_lineno = 416;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        frame_0f9dc698925b27c8d08f86248be58b48->m_frame.f_lineno = 419;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[78]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_children == NULL);
        var_children = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_children);
        tmp_iter_arg_1 = var_children;
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooooooooo";
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
                type_description_1 = "ooooooooo";
                exception_lineno = 420;
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
            PyObject *old = var_control;
            var_control = tmp_assign_source_6;
            Py_INCREF(var_control);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        CHECK_OBJECT(var_control);
        tmp_expression_value_7 = var_control;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[99]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        if (par_indent == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 422;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_1 = par_indent;
        tmp_add_expr_right_1 = mod_consts[118];
        tmp_kw_call_value_0_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 422;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        if (par_index == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_value_0_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 422;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_value_1_1 = par_index;
        if (par_added_controls == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_value_0_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[100]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 422;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_kw_call_value_2_1 = par_added_controls;
        frame_0f9dc698925b27c8d08f86248be58b48->m_frame.f_lineno = 421;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_assign_source_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[119]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_childCmd;
            var_childCmd = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_3;
        if (var_commands == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 424;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = var_commands;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[95]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_childCmd);
        tmp_args_element_value_3 = var_childCmd;
        frame_0f9dc698925b27c8d08f86248be58b48->m_frame.f_lineno = 424;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 420;
        type_description_1 = "ooooooooo";
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
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[4]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[110]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_0f9dc698925b27c8d08f86248be58b48->m_frame.f_lineno = 426;
        tmp_call_result_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[4]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[95]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_children);
        tmp_args_element_value_4 = var_children;
        frame_0f9dc698925b27c8d08f86248be58b48->m_frame.f_lineno = 427;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    if (var_commands == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 429;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_commands;
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
        exception_tb = MAKE_TRACEBACK(frame_0f9dc698925b27c8d08f86248be58b48, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0f9dc698925b27c8d08f86248be58b48->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0f9dc698925b27c8d08f86248be58b48, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0f9dc698925b27c8d08f86248be58b48,
        type_description_1,
        par_self,
        par_indent,
        par_index,
        par_added_controls,
        var_commands,
        var_command,
        var_children,
        var_control,
        var_childCmd
    );


    // Release cached frame if used for exception.
    if (frame_0f9dc698925b27c8d08f86248be58b48 == cache_frame_0f9dc698925b27c8d08f86248be58b48) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0f9dc698925b27c8d08f86248be58b48);
        cache_frame_0f9dc698925b27c8d08f86248be58b48 = NULL;
    }

    assertFrameObject(frame_0f9dc698925b27c8d08f86248be58b48);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_commands);
    var_commands = NULL;
    CHECK_OBJECT(var_command);
    Py_DECREF(var_command);
    var_command = NULL;
    CHECK_OBJECT(var_children);
    Py_DECREF(var_children);
    var_children = NULL;
    Py_XDECREF(var_control);
    var_control = NULL;
    Py_XDECREF(var_childCmd);
    var_childCmd = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_commands);
    var_commands = NULL;
    Py_XDECREF(var_command);
    var_command = NULL;
    Py_XDECREF(var_children);
    var_children = NULL;
    Py_XDECREF(var_control);
    var_control = NULL;
    Py_XDECREF(var_childCmd);
    var_childCmd = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_indent);
    Py_DECREF(par_indent);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_added_controls);
    Py_DECREF(par_added_controls);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_indent);
    Py_DECREF(par_indent);
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    CHECK_OBJECT(par_added_controls);
    Py_DECREF(par_added_controls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$control$$$function__50__build_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_update = python_pars[1];
    PyObject *var_command = NULL;
    PyObject *var_attrName = NULL;
    PyObject *var_dirty = NULL;
    PyObject *var_val = NULL;
    PyObject *var_sval = NULL;
    PyObject *var_id = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_64ad90efe5d1bfca6088dd2d07e433f1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_64ad90efe5d1bfca6088dd2d07e433f1 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_64ad90efe5d1bfca6088dd2d07e433f1)) {
        Py_XDECREF(cache_frame_64ad90efe5d1bfca6088dd2d07e433f1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_64ad90efe5d1bfca6088dd2d07e433f1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_64ad90efe5d1bfca6088dd2d07e433f1 = MAKE_FUNCTION_FRAME(codeobj_64ad90efe5d1bfca6088dd2d07e433f1, module_flet_core$control, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_64ad90efe5d1bfca6088dd2d07e433f1->m_type_description == NULL);
    frame_64ad90efe5d1bfca6088dd2d07e433f1 = cache_frame_64ad90efe5d1bfca6088dd2d07e433f1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_64ad90efe5d1bfca6088dd2d07e433f1);
    assert(Py_REFCNT(frame_64ad90efe5d1bfca6088dd2d07e433f1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        PyObject *tmp_call_arg_element_3;
        PyObject *tmp_call_arg_element_4;
        PyObject *tmp_call_arg_element_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[26];
        tmp_call_arg_element_2 = Py_None;
        tmp_call_arg_element_3 = MAKE_LIST_EMPTY(0);
        tmp_call_arg_element_4 = MAKE_DICT_EMPTY();
        tmp_call_arg_element_5 = MAKE_LIST_EMPTY(0);
        frame_64ad90efe5d1bfca6088dd2d07e433f1->m_frame.f_lineno = 432;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2, tmp_call_arg_element_3, tmp_call_arg_element_4, tmp_call_arg_element_5};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_call_arg_element_3);
        Py_DECREF(tmp_call_arg_element_4);
        Py_DECREF(tmp_call_arg_element_5);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_command == NULL);
        var_command = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_update);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_update);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(var_command);
    tmp_return_value = var_command;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 437;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = par_self;
        frame_64ad90efe5d1bfca6088dd2d07e433f1->m_frame.f_lineno = 437;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[120]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[121]);
        assert(tmp_called_value_2 != NULL);
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 439;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_64ad90efe5d1bfca6088dd2d07e433f1->m_frame.f_lineno = 439;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooooooo";
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
                type_description_1 = "oooooooo";
                exception_lineno = 439;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_attrName;
            var_attrName = tmp_assign_source_4;
            Py_INCREF(var_attrName);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_attrName);
        tmp_expression_value_3 = var_attrName;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[25]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_64ad90efe5d1bfca6088dd2d07e433f1->m_frame.f_lineno = 440;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_attrName;
            assert(old != NULL);
            var_attrName = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 441;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[3]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_attrName);
        tmp_subscript_value_1 = var_attrName;
        tmp_expression_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_2 = mod_consts[56];
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 1);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_dirty;
            var_dirty = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_update);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_update);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_dirty);
        tmp_operand_value_2 = var_dirty;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_or_left_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_attrName);
        tmp_cmp_expr_left_1 = var_attrName;
        tmp_cmp_expr_right_1 = mod_consts[54];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_start_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_value_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 446;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_9 = par_self;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[3]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_attrName);
        tmp_subscript_value_3 = var_attrName;
        tmp_expression_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_4 = mod_consts[26];
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_4, 0);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_val;
            var_val = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[40];
        {
            PyObject *old = var_sval;
            var_sval = tmp_assign_source_8;
            Py_INCREF(var_sval);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_val);
        tmp_cmp_expr_left_2 = var_val;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_start_1;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_val);
        tmp_isinstance_inst_1 = var_val;
        tmp_isinstance_cls_1 = (PyObject *)&PyBool_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(var_val);
        tmp_unicode_arg_1 = var_val;
        tmp_expression_value_10 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[25]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_64ad90efe5d1bfca6088dd2d07e433f1->m_frame.f_lineno = 451;
        tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_sval;
            assert(old != NULL);
            var_sval = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(var_val);
        tmp_isinstance_inst_2 = var_val;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[123]);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_or_left_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(var_val);
        tmp_isinstance_inst_3 = var_val;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[124]);
        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        Py_DECREF(tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_5 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_5 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_val);
        tmp_called_instance_2 = var_val;
        frame_64ad90efe5d1bfca6088dd2d07e433f1->m_frame.f_lineno = 453;
        tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[125]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_sval;
            assert(old != NULL);
            var_sval = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unicode_arg_2;
        CHECK_OBJECT(var_val);
        tmp_unicode_arg_2 = var_val;
        tmp_assign_source_11 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_sval;
            assert(old != NULL);
            var_sval = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_sval);
        tmp_ass_subvalue_1 = var_sval;
        if (var_command == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[126]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 456;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_13 = var_command;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[50]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_attrName);
        tmp_ass_subscript_1 = var_attrName;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_ass_subscript_2;
        if (var_val == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[127]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 457;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = var_val;
        tmp_ass_subvalue_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_ass_subvalue_2, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_False;
        PyTuple_SET_ITEM0(tmp_ass_subvalue_2, 1, tmp_tuple_element_1);
        if (par_self == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 457;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_14 = par_self;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[3]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 457;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_attrName);
        tmp_ass_subscript_2 = var_attrName;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 439;
        type_description_1 = "oooooooo";
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 459;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = par_self;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[3]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[24]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_64ad90efe5d1bfca6088dd2d07e433f1->m_frame.f_lineno = 459;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[53]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_id == NULL);
        var_id = tmp_assign_source_12;
    }
    {
        bool tmp_condition_result_6;
        int tmp_and_left_truth_3;
        bool tmp_and_left_value_3;
        bool tmp_and_right_value_3;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(par_update);
        tmp_operand_value_3 = par_update;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_3 = tmp_and_left_value_3 != false ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 460;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = par_self;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[6]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_and_right_value_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_3);
        tmp_condition_result_6 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_6 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_ass_subscript_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 461;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = par_self;
        tmp_ass_subvalue_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[6]);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_command == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[126]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 461;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_19 = var_command;
        tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[50]);
        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 461;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[54];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscribed_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_6;
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        int tmp_and_left_truth_4;
        bool tmp_and_left_value_4;
        bool tmp_and_right_value_4;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_update);
        tmp_operand_value_4 = par_update;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_4 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_4 = tmp_and_left_value_4 != false ? 1 : 0;
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        CHECK_OBJECT(var_id);
        tmp_cmp_expr_left_4 = var_id;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_and_right_value_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        tmp_condition_result_7 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_7 = tmp_and_left_value_4;
        and_end_4:;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT(var_id);
        tmp_ass_subvalue_4 = var_id;
        if (var_command == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[126]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 463;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_20 = var_command;
        tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[50]);
        if (tmp_ass_subscribed_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_4 = mod_consts[54];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscribed_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_and_left_truth_5;
        nuitka_bool tmp_and_left_value_5;
        nuitka_bool tmp_and_right_value_5;
        int tmp_truth_name_3;
        PyObject *tmp_cmp_expr_left_5;
        nuitka_digit tmp_cmp_expr_right_5;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_21;
        bool tmp_tmp_and_right_value_5_cbool_1;
        CHECK_OBJECT(par_update);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_update);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_5 == 1) {
            goto and_right_5;
        } else {
            goto and_left_5;
        }
        and_right_5:;
        if (var_command == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[126]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 464;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_21 = var_command;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[50]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_5 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = 0;
        tmp_tmp_and_right_value_5_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        tmp_and_right_value_5 = tmp_tmp_and_right_value_5_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_8 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_condition_result_8 = tmp_and_left_value_5;
        and_end_5:;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_22;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 465;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_22 = par_self;
        tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[6]);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_9 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 465;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_9:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_25;
        if (var_command == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[126]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 466;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_24 = var_command;
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[117]);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[77]);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 466;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_25 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[6]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 466;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_64ad90efe5d1bfca6088dd2d07e433f1->m_frame.f_lineno = 466;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_8:;
    branch_end_7:;
    branch_end_6:;
    if (var_command == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[126]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 468;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_command;
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
        exception_tb = MAKE_TRACEBACK(frame_64ad90efe5d1bfca6088dd2d07e433f1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_64ad90efe5d1bfca6088dd2d07e433f1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_64ad90efe5d1bfca6088dd2d07e433f1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_64ad90efe5d1bfca6088dd2d07e433f1,
        type_description_1,
        par_self,
        par_update,
        var_command,
        var_attrName,
        var_dirty,
        var_val,
        var_sval,
        var_id
    );


    // Release cached frame if used for exception.
    if (frame_64ad90efe5d1bfca6088dd2d07e433f1 == cache_frame_64ad90efe5d1bfca6088dd2d07e433f1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_64ad90efe5d1bfca6088dd2d07e433f1);
        cache_frame_64ad90efe5d1bfca6088dd2d07e433f1 = NULL;
    }

    assertFrameObject(frame_64ad90efe5d1bfca6088dd2d07e433f1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_command);
    var_command = NULL;
    Py_XDECREF(var_attrName);
    var_attrName = NULL;
    Py_XDECREF(var_dirty);
    var_dirty = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
    Py_XDECREF(var_sval);
    var_sval = NULL;
    Py_XDECREF(var_id);
    var_id = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_command);
    var_command = NULL;
    Py_XDECREF(var_attrName);
    var_attrName = NULL;
    Py_XDECREF(var_dirty);
    var_dirty = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
    Py_XDECREF(var_sval);
    var_sval = NULL;
    Py_XDECREF(var_id);
    var_id = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_update);
    Py_DECREF(par_update);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_update);
    Py_DECREF(par_update);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$control$$$function__51__dispose(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_35fccd1ed23dd0cee4087637d00374c7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_35fccd1ed23dd0cee4087637d00374c7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_35fccd1ed23dd0cee4087637d00374c7)) {
        Py_XDECREF(cache_frame_35fccd1ed23dd0cee4087637d00374c7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_35fccd1ed23dd0cee4087637d00374c7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_35fccd1ed23dd0cee4087637d00374c7 = MAKE_FUNCTION_FRAME(codeobj_35fccd1ed23dd0cee4087637d00374c7, module_flet_core$control, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_35fccd1ed23dd0cee4087637d00374c7->m_type_description == NULL);
    frame_35fccd1ed23dd0cee4087637d00374c7 = cache_frame_35fccd1ed23dd0cee4087637d00374c7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_35fccd1ed23dd0cee4087637d00374c7);
    assert(Py_REFCNT(frame_35fccd1ed23dd0cee4087637d00374c7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[128], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[110]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_35fccd1ed23dd0cee4087637d00374c7->m_frame.f_lineno = 472;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
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
        exception_tb = MAKE_TRACEBACK(frame_35fccd1ed23dd0cee4087637d00374c7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_35fccd1ed23dd0cee4087637d00374c7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_35fccd1ed23dd0cee4087637d00374c7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_35fccd1ed23dd0cee4087637d00374c7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_35fccd1ed23dd0cee4087637d00374c7 == cache_frame_35fccd1ed23dd0cee4087637d00374c7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_35fccd1ed23dd0cee4087637d00374c7);
        cache_frame_35fccd1ed23dd0cee4087637d00374c7 = NULL;
    }

    assertFrameObject(frame_35fccd1ed23dd0cee4087637d00374c7);

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



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__10__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__10__get_control_name,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_8a04da2b01b6c81749898e9af5c335c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__11__add_event_handler() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__11__add_event_handler,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_07e53f27dda116100f1e596d0838280c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__12__get_event_handler() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__12__get_event_handler,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_17171c167f5f36f108b43aa204e31ebf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__13__get_attr(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__13__get_attr,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_8c4d5d394930db31e3ff83affd621d34,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__14__set_attr(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__14__set_attr,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_fd959c0419011937f5379e1122fc06b9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__15__get_value_or_list_attr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__15__get_value_or_list_attr,
        mod_consts[181],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_26577db2b2fa52d5916414fbc537499b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__16__set_value_or_list_attr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__16__set_value_or_list_attr,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_edf5ff0e163f4488f38ef828f5d938dd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__17__set_attr_internal(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__17__set_attr_internal,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_0b7f60505a2be4367f858c0d217cc9c6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__18__set_attr_json() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__18__set_attr_json,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_bff0e75184355cb3980cf5ce3c049879,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__19__convert_attr_json() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__19__convert_attr_json,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_62811a6c0f1c29b88c74b3cf82f0861f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__1___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_0d0d05e37fbf406f63e4c2c2b74715e8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$control,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__20__wrap_attr_dict() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__20__wrap_attr_dict,
        mod_consts[188],
#if PYTHON_VERSION >= 0x300
        mod_consts[189],
#endif
        codeobj_b7b8e7bdcdf03fbd688cb7ddbf6ccdc7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__21___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__21___str__,
        mod_consts[190],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_2d4e5972715e40f31098a2f61de13d03,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__22_event_handlers() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__22_event_handlers,
        mod_consts[192],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_9037ac01663e7a889917ddc6409eea98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__23__previous_children() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__23__previous_children,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        mod_consts[194],
#endif
        codeobj_0855f9e41cc47e924069c38f2507b47f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__24__id() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__24__id,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[195],
#endif
        codeobj_e673b9bf97dc4b233b120c5eddb78ed7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__25__id() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__25__id,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[195],
#endif
        codeobj_bc2df02b6dddcd8fb92bd657872f6a27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__26_page() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__26_page,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        mod_consts[197],
#endif
        codeobj_6fe43b04ad4582d1affc8ca162d3b0d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__27_page() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__27_page,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        mod_consts[197],
#endif
        codeobj_c3cd5480e70f840bf6e0b3ed06d30b8c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__28_uid() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__28_uid,
        mod_consts[198],
#if PYTHON_VERSION >= 0x300
        mod_consts[199],
#endif
        codeobj_55f82f47aec230243578e744ee09fd75,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__29_expand(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__29_expand,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[201],
#endif
        codeobj_8f06944106e4e906c52ff76c8f529435,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__2__is_isolated() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_71a11288f05c7ea9a53259ce4e904c20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__30_expand(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__30_expand,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[201],
#endif
        codeobj_c3681ab63abd866c4401b14912d8ab7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__31_col(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__31_col,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_1855eb0ecf59f2009b744d82e4ef4cf2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__32_col(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__32_col,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_8436cfb925a3aab1a44d497c85966e10,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__33_opacity() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__33_opacity,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[203],
#endif
        codeobj_d53ab7f7dc69d58452aabaf47e21cc63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__34_opacity() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__34_opacity,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[203],
#endif
        codeobj_e65bd3e19c2ccf575007b3c130977c36,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__35_tooltip() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__35_tooltip,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_8965d422162542c90d7e85c650d85699,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__36_tooltip() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__36_tooltip,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_1a62430a71680486464b0a10280e265d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__37_visible(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__37_visible,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[205],
#endif
        codeobj_cb28faef1d82955011bba872bfaaa619,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__38_visible(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__38_visible,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[205],
#endif
        codeobj_eba54700168b44353e7a172b5cfe8dda,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__39_disabled(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__39_disabled,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_2d25d743716a113dd12e8a731445046e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__3__build() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[166],
#endif
        codeobj_e31d2a7bcb6c9fbad61cee2331d67fee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__40_disabled(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__40_disabled,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_4c107bf9b8a359484ad4633a89bff891,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__41_data() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__41_data,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_0dddb32485b1e15354dd12c81dce7449,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__42_data() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__42_data,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_e5506838bf1f93714f4ae092a9a44fa2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__43_update() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__43_update,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        mod_consts[208],
#endif
        codeobj_36d7d0a02036451931138a4450f318b2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__44_update_async() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__44_update_async,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        mod_consts[67],
#endif
        codeobj_621ae91198a432b03cf8bbad414b236e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__45_clean() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__45_clean,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        mod_consts[210],
#endif
        codeobj_1bb68b767d28174e6bd784567df97072,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__46_clean_async() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__46_clean_async,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        codeobj_5b3f147d8a872baec5cdcb37dba143f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__47_build_update_commands(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__47_build_update_commands,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        mod_consts[211],
#endif
        codeobj_ff5f56ee04550a787e48c3778ebe1881,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__48__remove_control_recursively() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__48__remove_control_recursively,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        mod_consts[212],
#endif
        codeobj_c4ebbd0f910b6bec166fefea20ee2ecc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__49__build_add_commands(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__49__build_add_commands,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[214],
#endif
        codeobj_0f9dc698925b27c8d08f86248be58b48,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__4__before_build_command() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__4__before_build_command,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_749494ed5aeccf2ad8de97a5228d41b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__50__build_command(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__50__build_command,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[215],
#endif
        codeobj_64ad90efe5d1bfca6088dd2d07e433f1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__51__dispose() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__51__dispose,
        mod_consts[216],
#if PYTHON_VERSION >= 0x300
        mod_consts[217],
#endif
        codeobj_35fccd1ed23dd0cee4087637d00374c7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__5_did_mount() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_1e427813deb12f50e6663f3e4ff1a470,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__6_did_mount_async() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__6_did_mount_async,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[20],
#endif
        codeobj_3c6cf9842246e67cec5a018ec947d5b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__7_will_unmount() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_c236683d0c8b9189879cc30474844744,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__8_will_unmount_async() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__8_will_unmount_async,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[22],
#endif
        codeobj_cf19956e65f19dc7384845109f8ea644,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$control$$$function__9__get_children() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$control$$$function__9__get_children,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_9ce96ec753580f9bd8dffad626c26a37,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$control,
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

function_impl_code functable_flet_core$control[] = {
    impl_flet_core$control$$$function__1___init__,
    NULL,
    NULL,
    impl_flet_core$control$$$function__4__before_build_command,
    NULL,
    impl_flet_core$control$$$function__6_did_mount_async,
    NULL,
    impl_flet_core$control$$$function__8_will_unmount_async,
    impl_flet_core$control$$$function__9__get_children,
    impl_flet_core$control$$$function__10__get_control_name,
    impl_flet_core$control$$$function__11__add_event_handler,
    impl_flet_core$control$$$function__12__get_event_handler,
    impl_flet_core$control$$$function__13__get_attr,
    impl_flet_core$control$$$function__14__set_attr,
    impl_flet_core$control$$$function__15__get_value_or_list_attr,
    impl_flet_core$control$$$function__16__set_value_or_list_attr,
    impl_flet_core$control$$$function__17__set_attr_internal,
    impl_flet_core$control$$$function__18__set_attr_json,
    impl_flet_core$control$$$function__19__convert_attr_json,
    impl_flet_core$control$$$function__20__wrap_attr_dict,
    impl_flet_core$control$$$function__21___str__,
    impl_flet_core$control$$$function__22_event_handlers,
    impl_flet_core$control$$$function__23__previous_children,
    impl_flet_core$control$$$function__24__id,
    impl_flet_core$control$$$function__25__id,
    impl_flet_core$control$$$function__26_page,
    impl_flet_core$control$$$function__27_page,
    impl_flet_core$control$$$function__28_uid,
    impl_flet_core$control$$$function__29_expand,
    impl_flet_core$control$$$function__30_expand,
    impl_flet_core$control$$$function__31_col,
    impl_flet_core$control$$$function__32_col,
    impl_flet_core$control$$$function__33_opacity,
    impl_flet_core$control$$$function__34_opacity,
    impl_flet_core$control$$$function__35_tooltip,
    impl_flet_core$control$$$function__36_tooltip,
    impl_flet_core$control$$$function__37_visible,
    impl_flet_core$control$$$function__38_visible,
    impl_flet_core$control$$$function__39_disabled,
    impl_flet_core$control$$$function__40_disabled,
    impl_flet_core$control$$$function__41_data,
    impl_flet_core$control$$$function__42_data,
    impl_flet_core$control$$$function__43_update,
    impl_flet_core$control$$$function__44_update_async,
    impl_flet_core$control$$$function__45_clean,
    impl_flet_core$control$$$function__46_clean_async,
    impl_flet_core$control$$$function__47_build_update_commands,
    impl_flet_core$control$$$function__48__remove_control_recursively,
    impl_flet_core$control$$$function__49__build_add_commands,
    impl_flet_core$control$$$function__50__build_command,
    impl_flet_core$control$$$function__51__dispose,
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

    function_impl_code *current = functable_flet_core$control;
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

    if (offset > sizeof(functable_flet_core$control) || offset < 0) {
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
        functable_flet_core$control[offset],
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
        module_flet_core$control,
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
PyObject *modulecode_flet_core$control(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.control");

    // Store the module for future use.
    module_flet_core$control = module;

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
        PRINT_STRING("flet_core.control: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.control: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.control: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$control\n");

    moduledict_flet_core$control = MODULE_DICT(module_flet_core$control);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$control,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$control,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[40]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$control,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$control,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$control,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$control);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$control, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$control, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$control, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$control);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$control, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_b2a73b56a019acb276f9b444890905c4;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *locals_flet_core$control$$$class__1_Control_23 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_a2c8567214152fe19cfcfc98192f4075_2;
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
        UPDATE_STRING_DICT0(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[130];
        UPDATE_STRING_DICT0(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_2);
    }
    frame_b2a73b56a019acb276f9b444890905c4 = MAKE_MODULE_FRAME(codeobj_b2a73b56a019acb276f9b444890905c4, module_flet_core$control);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b2a73b56a019acb276f9b444890905c4);
    assert(Py_REFCNT(frame_b2a73b56a019acb276f9b444890905c4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[130];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[133], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[134], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[123];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$control;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[26];
        frame_b2a73b56a019acb276f9b444890905c4->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[42];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$control;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[26];
        frame_b2a73b56a019acb276f9b444890905c4->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[136];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$control;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[137];
        tmp_level_value_3 = mod_consts[26];
        frame_b2a73b56a019acb276f9b444890905c4->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_flet_core$control,
                mod_consts[82],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[82]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_7 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_7);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_False;
        UPDATE_STRING_DICT0(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_flet_core$control,
                mod_consts[139],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[139]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$control,
                mod_consts[47],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[47]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet_core$control,
                mod_consts[37],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[37]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet_core$control,
                mod_consts[140],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[140]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_flet_core$control,
                mod_consts[141],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[141]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_13);
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[142];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$control;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[143];
        tmp_level_value_4 = mod_consts[26];
        frame_b2a73b56a019acb276f9b444890905c4->m_frame.f_lineno = 6;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_flet_core$control,
                mod_consts[44],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[44]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[144];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_flet_core$control;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[145];
        tmp_level_value_5 = mod_consts[26];
        frame_b2a73b56a019acb276f9b444890905c4->m_frame.f_lineno = 7;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_flet_core$control,
                mod_consts[91],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[91]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[146];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_flet_core$control;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[147];
        tmp_level_value_6 = mod_consts[26];
        frame_b2a73b56a019acb276f9b444890905c4->m_frame.f_lineno = 8;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_flet_core$control,
                mod_consts[148],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[148]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[149];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_flet_core$control;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[150];
        tmp_level_value_7 = mod_consts[26];
        frame_b2a73b56a019acb276f9b444890905c4->m_frame.f_lineno = 9;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_flet_core$control,
                mod_consts[151],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[151]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_17);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        tmp_import_name_from_11 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_11 == NULL));
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_flet_core$control,
                mod_consts[152],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[152]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_18);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_b2a73b56a019acb276f9b444890905c4, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_b2a73b56a019acb276f9b444890905c4, exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[153];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_flet_core$control;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[154];
        tmp_level_value_8 = mod_consts[26];
        frame_b2a73b56a019acb276f9b444890905c4->m_frame.f_lineno = 14;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_flet_core$control,
                mod_consts[152],
                mod_consts[26]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[152]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_19);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 11;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b2a73b56a019acb276f9b444890905c4->m_frame) frame_b2a73b56a019acb276f9b444890905c4->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_3;
    branch_end_1:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[155];
        tmp_assign_source_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_22;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$control$$$class__1_Control_23 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[157];
        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[158], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[159];
        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[160], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_a2c8567214152fe19cfcfc98192f4075_2 = MAKE_CLASS_FRAME(codeobj_a2c8567214152fe19cfcfc98192f4075, module_flet_core$control, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a2c8567214152fe19cfcfc98192f4075_2);
        assert(Py_REFCNT(frame_a2c8567214152fe19cfcfc98192f4075_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_1 = mod_consts[161];
            tmp_dict_key_1 = mod_consts[162];
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[140]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[148]);

            if (unlikely(tmp_subscript_value_2 == NULL)) {
                tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
            }

            if (tmp_subscript_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 8 );
            {
                PyObject *tmp_expression_value_3;
                PyObject *tmp_subscript_value_3;
                PyObject *tmp_expression_value_4;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_expression_value_5;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_expression_value_6;
                PyObject *tmp_subscript_value_6;
                PyObject *tmp_expression_value_7;
                PyObject *tmp_subscript_value_7;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[7];
                tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[141]);

                if (unlikely(tmp_expression_value_3 == NULL)) {
                    tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
                }

                if (tmp_expression_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 27;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_3 = mod_consts[163];
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 27;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[8];
                tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[140]);

                if (unlikely(tmp_expression_value_4 == NULL)) {
                    tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
                }

                if (tmp_expression_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 28;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[151]);

                if (unlikely(tmp_subscript_value_4 == NULL)) {
                    tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
                }

                if (tmp_subscript_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 28;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
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
                tmp_dict_key_1 = mod_consts[9];
                tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[156]);

                if (unlikely(tmp_dict_value_1 == NULL)) {
                    tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
                }

                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 29;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[10];
                tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[140]);

                if (unlikely(tmp_expression_value_5 == NULL)) {
                    tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
                }

                if (tmp_expression_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 30;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_5 = (PyObject *)&PyUnicode_Type;
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
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
                tmp_dict_key_1 = mod_consts[11];
                tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[140]);

                if (unlikely(tmp_expression_value_6 == NULL)) {
                    tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
                }

                if (tmp_expression_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 31;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_6 = (PyObject *)&PyBool_Type;
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_6);
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
                tmp_dict_key_1 = mod_consts[12];
                tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[140]);

                if (unlikely(tmp_expression_value_7 == NULL)) {
                    tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
                }

                if (tmp_expression_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 32;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_7 = (PyObject *)&PyBool_Type;
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_7);
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
                tmp_dict_key_1 = mod_consts[14];
                tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[139]);

                if (unlikely(tmp_dict_value_1 == NULL)) {
                    tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
                }

                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 33;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
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

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__1___init__(tmp_defaults_1, tmp_annotations_1, tmp_closure_1);

            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__2__is_isolated();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[108], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__3__build();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[114], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__4__before_build_command();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[120], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__5_did_mount();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[168], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__6_did_mount_async();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[19], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__7_will_unmount();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[170], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__8_will_unmount_async();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[21], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__9__get_children();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[78], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__10__get_control_name();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[51], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__11__add_event_handler();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__12__get_event_handler();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[176], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[178];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__13__get_attr(tmp_defaults_2);

            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[34], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[73];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__14__set_attr(tmp_defaults_3);

            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__15__get_value_or_list_attr();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[181], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__16__set_value_or_list_attr();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[183], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[73];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__17__set_attr_internal(tmp_defaults_4);

            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[33], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__18__set_attr_json();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[17], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__19__convert_attr_json();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[41], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__20__wrap_attr_dict();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[188], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__21___str__();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[190], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_1 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_1 = MAKE_FUNCTION_flet_core$control$$$function__22_event_handlers();

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 160;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[192], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            tmp_called_value_2 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_flet_core$control$$$function__23__previous_children();

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 165;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[113], tmp_dictset_value);
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
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_3;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_3 = MAKE_FUNCTION_flet_core$control$$$function__24__id();

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 170;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[5], tmp_dictset_value);
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_4;
            tmp_called_instance_1 = DICT_GET_ITEM0(locals_flet_core$control$$$class__1_Control_23, mod_consts[5]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 174;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_4 = MAKE_FUNCTION_flet_core$control$$$function__25__id();

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 174;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[196], tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[5], tmp_dictset_value);
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
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_5;
            tmp_called_value_4 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_5 = MAKE_FUNCTION_flet_core$control$$$function__26_page();

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 179;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[128], tmp_dictset_value);
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_6;
            tmp_called_instance_2 = DICT_GET_ITEM0(locals_flet_core$control$$$class__1_Control_23, mod_consts[128]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[128]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 183;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_6 = MAKE_FUNCTION_flet_core$control$$$function__27_page();

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 183;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[196], tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[128], tmp_dictset_value);
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
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_7;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_7 = MAKE_FUNCTION_flet_core$control$$$function__28_uid();

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 188;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[198], tmp_dictset_value);
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
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_8;
            tmp_called_value_6 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_2 = mod_consts[200];
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[141]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_8 = mod_consts[163];
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_8);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_args_element_value_8 = MAKE_FUNCTION_flet_core$control$$$function__29_expand(tmp_annotations_2);

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 193;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[7], tmp_dictset_value);
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
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_9;
            tmp_expression_value_9 = DICT_GET_ITEM0(locals_flet_core$control$$$class__1_Control_23, mod_consts[7]);

            if (unlikely(tmp_expression_value_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 197;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[196]);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_3 = mod_consts[57];
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[141]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 198;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_9 = mod_consts[163];
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_9);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_7);

                exception_lineno = 198;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_args_element_value_9 = MAKE_FUNCTION_flet_core$control$$$function__30_expand(tmp_annotations_3);

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 197;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[7], tmp_dictset_value);
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
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_10;
            tmp_called_value_8 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_4 = mod_consts[200];
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[140]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[151]);

            if (unlikely(tmp_subscript_value_10 == NULL)) {
                tmp_subscript_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
            }

            if (tmp_subscript_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_10);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_args_element_value_10 = MAKE_FUNCTION_flet_core$control$$$function__31_col(tmp_annotations_4);

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 205;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_11;
            tmp_expression_value_12 = DICT_GET_ITEM0(locals_flet_core$control$$$class__1_Control_23, mod_consts[8]);

            if (unlikely(tmp_expression_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[8]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 209;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[196]);
            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_5 = mod_consts[57];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[140]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);

                exception_lineno = 210;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[151]);

            if (unlikely(tmp_subscript_value_11 == NULL)) {
                tmp_subscript_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
            }

            if (tmp_subscript_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);

                exception_lineno = 210;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_11);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_9);

                exception_lineno = 210;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_11 = MAKE_FUNCTION_flet_core$control$$$function__32_col(tmp_annotations_5);

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 209;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_12;
            tmp_called_value_10 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$control$$$function__33_opacity();

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 214;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_13;
            tmp_called_instance_3 = DICT_GET_ITEM0(locals_flet_core$control$$$class__1_Control_23, mod_consts[9]);

            if (unlikely(tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[9]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 218;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_13 = MAKE_FUNCTION_flet_core$control$$$function__34_opacity();

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 218;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[196], tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[9], tmp_dictset_value);
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
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_14;
            tmp_called_value_11 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_14 = MAKE_FUNCTION_flet_core$control$$$function__35_tooltip();

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 223;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_15;
            tmp_called_instance_4 = DICT_GET_ITEM0(locals_flet_core$control$$$class__1_Control_23, mod_consts[10]);

            if (unlikely(tmp_called_instance_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[10]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 227;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_15 = MAKE_FUNCTION_flet_core$control$$$function__36_tooltip();

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 227;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[196], tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[10], tmp_dictset_value);
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
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_12;
            tmp_called_value_12 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_6 = mod_consts[200];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[140]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_12 = (PyObject *)&PyBool_Type;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_12);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_args_element_value_16 = MAKE_FUNCTION_flet_core$control$$$function__37_visible(tmp_annotations_6);

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 232;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_13;
            tmp_expression_value_15 = DICT_GET_ITEM0(locals_flet_core$control$$$class__1_Control_23, mod_consts[11]);

            if (unlikely(tmp_expression_value_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[196]);
            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_7 = mod_consts[57];
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[140]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 237;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_13 = (PyObject *)&PyBool_Type;
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_13);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 237;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_args_element_value_17 = MAKE_FUNCTION_flet_core$control$$$function__38_visible(tmp_annotations_7);

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 236;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[11], tmp_dictset_value);
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
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_14;
            tmp_called_value_14 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_8 = mod_consts[200];
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[140]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_14 = (PyObject *)&PyBool_Type;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_14);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_18 = MAKE_FUNCTION_flet_core$control$$$function__39_disabled(tmp_annotations_8);

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 241;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_18);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_15;
            tmp_expression_value_18 = DICT_GET_ITEM0(locals_flet_core$control$$$class__1_Control_23, mod_consts[12]);

            if (unlikely(tmp_expression_value_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[196]);
            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_9 = mod_consts[57];
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[140]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 246;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_15 = (PyObject *)&PyBool_Type;
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_15);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_15);

                exception_lineno = 246;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_19 = MAKE_FUNCTION_flet_core$control$$$function__40_disabled(tmp_annotations_9);

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 245;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[12], tmp_dictset_value);
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
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_20;
            tmp_called_value_16 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_20 = MAKE_FUNCTION_flet_core$control$$$function__41_data();

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 250;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_21;
            tmp_called_instance_5 = DICT_GET_ITEM0(locals_flet_core$control$$$class__1_Control_23, mod_consts[14]);

            if (unlikely(tmp_called_instance_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[14]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 254;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_21 = MAKE_FUNCTION_flet_core$control$$$function__42_data();

            frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame.f_lineno = 254;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[196], tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a2c8567214152fe19cfcfc98192f4075_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a2c8567214152fe19cfcfc98192f4075_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a2c8567214152fe19cfcfc98192f4075_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a2c8567214152fe19cfcfc98192f4075_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_a2c8567214152fe19cfcfc98192f4075_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__43_update();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[64], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__44_update_async();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[66], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__45_clean();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[209], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__46_clean_async();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[70], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[115];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__47_build_update_commands(tmp_defaults_5);

            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[107], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__48__remove_control_recursively();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[96], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = mod_consts[213];
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__49__build_add_commands(tmp_defaults_6);

            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[99], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_7;
            tmp_defaults_7 = mod_consts[115];
            Py_INCREF(tmp_defaults_7);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__50__build_command(tmp_defaults_7);

            tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$control$$$function__51__dispose();

        tmp_res = PyDict_SetItem(locals_flet_core$control$$$class__1_Control_23, mod_consts[216], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_17 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[159];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[218];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_flet_core$control$$$class__1_Control_23;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_b2a73b56a019acb276f9b444890905c4->m_frame.f_lineno = 23;
            tmp_assign_source_24 = CALL_FUNCTION(tmp_called_value_17, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto try_except_handler_6;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_24);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_23 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_23);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_flet_core$control$$$class__1_Control_23);
        locals_flet_core$control$$$class__1_Control_23 = NULL;
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

        Py_DECREF(locals_flet_core$control$$$class__1_Control_23);
        locals_flet_core$control$$$class__1_Control_23 = NULL;
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
        exception_lineno = 23;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$control, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_23);
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
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
        exception_tb = MAKE_TRACEBACK(frame_b2a73b56a019acb276f9b444890905c4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b2a73b56a019acb276f9b444890905c4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b2a73b56a019acb276f9b444890905c4, exception_lineno);
    }



    assertFrameObject(frame_b2a73b56a019acb276f9b444890905c4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("flet_core.control", false);

    Py_INCREF(module_flet_core$control);
    return module_flet_core$control;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$control, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$control", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
