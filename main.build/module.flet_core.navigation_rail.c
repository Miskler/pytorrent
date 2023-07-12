/* Generated code for Python module 'flet_core.navigation_rail'
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

/* The "module_flet_core$navigation_rail" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet_core$navigation_rail;
PyDictObject *moduledict_flet_core$navigation_rail;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[195];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[195];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet_core.navigation_rail"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 195; i++) {
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
void checkModuleConstants_flet_core$navigation_rail(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 195; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_f1779819eb193d13a84507221320dd11;
static PyCodeObject *codeobj_a3d1e32d5b6a5452979d15065f4dfe0c;
static PyCodeObject *codeobj_e1933c09ca4d707bd29b9e4de022043b;
static PyCodeObject *codeobj_de96bb8471c7b3495a406a03bc9de25c;
static PyCodeObject *codeobj_7ef46ffb019baa860a6ab7b7d1a0216b;
static PyCodeObject *codeobj_9b4fd86021d17c87100bac06b7b32292;
static PyCodeObject *codeobj_ffa1722f0f3424d40fc00721fcb68f87;
static PyCodeObject *codeobj_3157465c1a22968e74624fb26fef5cb4;
static PyCodeObject *codeobj_e9863afbb3f53b67b9ddcc48d1beb18a;
static PyCodeObject *codeobj_3110482aa1cc3d147eeb88bea101ed33;
static PyCodeObject *codeobj_40eea8be3a38a70ad2bbb36392177afa;
static PyCodeObject *codeobj_1bc458ddd2c596a5ca036907fffe8b7c;
static PyCodeObject *codeobj_9292e09f3f0aeace7f880dc581b82fa9;
static PyCodeObject *codeobj_55ca09047d2f140f28fa2860ae01b165;
static PyCodeObject *codeobj_76f1dd3d6595e2936daed0027df8973c;
static PyCodeObject *codeobj_8ec2620f69329bf698de507834c10c0e;
static PyCodeObject *codeobj_d1203ea05a3f9995b259eb8c12fe48f8;
static PyCodeObject *codeobj_cc80d8aa386213e26cae9cabc954d8ac;
static PyCodeObject *codeobj_80d7b239071f5ea20f3a917fb6218b10;
static PyCodeObject *codeobj_f11db2b9c4f49af49a08c92837569d16;
static PyCodeObject *codeobj_8f053fec81568ec4da6f46a17f2bb2af;
static PyCodeObject *codeobj_d1464efb724cd951086729f73f27851b;
static PyCodeObject *codeobj_e034576e3f0c83fd9d177d2806b8f134;
static PyCodeObject *codeobj_d3568def4a3064b854ebc38f74b2a459;
static PyCodeObject *codeobj_c5f33c5ca2334592fdb19c325437c246;
static PyCodeObject *codeobj_1db6307c03d452f2ab4a199d0c9db7f8;
static PyCodeObject *codeobj_ec0b8081b0af50e734b41e24864b28c4;
static PyCodeObject *codeobj_ce4fda95cba07e8b96ff6c445cf4ae1a;
static PyCodeObject *codeobj_c8b38f61adbc91ef08d31a7e665c46af;
static PyCodeObject *codeobj_bd50fa5b1efd7b79ee9a745ebfd98d7c;
static PyCodeObject *codeobj_a88bacb7f488561cb3ed6ce7faa95593;
static PyCodeObject *codeobj_f445d997746a78a3fd44fcc1da7ce3cc;
static PyCodeObject *codeobj_5faf9cd611ad81078bbc812b5004b573;
static PyCodeObject *codeobj_4ae380a675273c2c77e80c1f426d6e94;
static PyCodeObject *codeobj_08b6ca016628de7c6868e4abcdad7ee8;
static PyCodeObject *codeobj_d87c8129a8eafe6c2674124088002912;
static PyCodeObject *codeobj_69870313b818336e414cb240ae5612f2;
static PyCodeObject *codeobj_41015cfc216fb371ea4cb580f0bf8d5f;
static PyCodeObject *codeobj_eb92dfacb381377c81c836a696114bd3;
static PyCodeObject *codeobj_526a314e9ca94be10d43bfaebdfb1bf6;
static PyCodeObject *codeobj_459024a8aa315c904ebe09e8afaf7a3f;
static PyCodeObject *codeobj_f3a070c15d8db588c0453b1177aeac76;
static PyCodeObject *codeobj_5820b498490fb39257355b8df22a9763;
static PyCodeObject *codeobj_07bed50efbf6bbeba14154ba746d1a90;
static PyCodeObject *codeobj_b94ec56fc7a5ebf44e3e3a8defa18171;
static PyCodeObject *codeobj_69208d47a984697375227662a67a9f7d;
static PyCodeObject *codeobj_6889d66cf159b415930bb922f1fdae95;
static PyCodeObject *codeobj_edae13ed398b0527c060a5719862b6a8;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[70]; CHECK_OBJECT(module_filename_obj);
    codeobj_f1779819eb193d13a84507221320dd11 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[185], mod_consts[185], NULL, NULL, 0, 0, 0);
    codeobj_a3d1e32d5b6a5452979d15065f4dfe0c = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_NOFREE, mod_consts[141], mod_consts[141], mod_consts[186], NULL, 0, 0, 0);
    codeobj_e1933c09ca4d707bd29b9e4de022043b = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_NOFREE, mod_consts[120], mod_consts[120], mod_consts[186], NULL, 0, 0, 0);
    codeobj_de96bb8471c7b3495a406a03bc9de25c = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_NOFREE, mod_consts[56], mod_consts[56], mod_consts[186], NULL, 0, 0, 0);
    codeobj_7ef46ffb019baa860a6ab7b7d1a0216b = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[187], NULL, 9, 0, 0);
    codeobj_9b4fd86021d17c87100bac06b7b32292 = MAKE_CODE_OBJECT(module_filename_obj, 196, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[188], NULL, 36, 0, 0);
    codeobj_ffa1722f0f3424d40fc00721fcb68f87 = MAKE_CODE_OBJECT(module_filename_obj, 333, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[176], mod_consts[176], mod_consts[189], NULL, 2, 0, 0);
    codeobj_3157465c1a22968e74624fb26fef5cb4 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[14], mod_consts[14], mod_consts[190], mod_consts[186], 1, 0, 0);
    codeobj_e9863afbb3f53b67b9ddcc48d1beb18a = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[129], mod_consts[129], mod_consts[191], NULL, 1, 0, 0);
    codeobj_3110482aa1cc3d147eeb88bea101ed33 = MAKE_CODE_OBJECT(module_filename_obj, 282, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[129], mod_consts[129], mod_consts[191], NULL, 1, 0, 0);
    codeobj_40eea8be3a38a70ad2bbb36392177afa = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[192], NULL, 1, 0, 0);
    codeobj_1bc458ddd2c596a5ca036907fffe8b7c = MAKE_CODE_OBJECT(module_filename_obj, 279, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[192], NULL, 1, 0, 0);
    codeobj_9292e09f3f0aeace7f880dc581b82fa9 = MAKE_CODE_OBJECT(module_filename_obj, 338, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[35], mod_consts[192], NULL, 1, 0, 0);
    codeobj_55ca09047d2f140f28fa2860ae01b165 = MAKE_CODE_OBJECT(module_filename_obj, 342, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[35], mod_consts[189], NULL, 2, 0, 0);
    codeobj_76f1dd3d6595e2936daed0027df8973c = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[192], NULL, 1, 0, 0);
    codeobj_8ec2620f69329bf698de507834c10c0e = MAKE_CODE_OBJECT(module_filename_obj, 299, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[189], NULL, 2, 0, 0);
    codeobj_d1203ea05a3f9995b259eb8c12fe48f8 = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[192], NULL, 1, 0, 0);
    codeobj_cc80d8aa386213e26cae9cabc954d8ac = MAKE_CODE_OBJECT(module_filename_obj, 351, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[189], NULL, 2, 0, 0);
    codeobj_80d7b239071f5ea20f3a917fb6218b10 = MAKE_CODE_OBJECT(module_filename_obj, 392, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[42], mod_consts[192], NULL, 1, 0, 0);
    codeobj_f11db2b9c4f49af49a08c92837569d16 = MAKE_CODE_OBJECT(module_filename_obj, 396, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[42], mod_consts[189], NULL, 2, 0, 0);
    codeobj_8f053fec81568ec4da6f46a17f2bb2af = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[192], NULL, 1, 0, 0);
    codeobj_d1464efb724cd951086729f73f27851b = MAKE_CODE_OBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[189], NULL, 2, 0, 0);
    codeobj_e034576e3f0c83fd9d177d2806b8f134 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[192], NULL, 1, 0, 0);
    codeobj_d3568def4a3064b854ebc38f74b2a459 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[189], NULL, 2, 0, 0);
    codeobj_c5f33c5ca2334592fdb19c325437c246 = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[192], NULL, 1, 0, 0);
    codeobj_1db6307c03d452f2ab4a199d0c9db7f8 = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[189], NULL, 2, 0, 0);
    codeobj_ec0b8081b0af50e734b41e24864b28c4 = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[192], NULL, 1, 0, 0);
    codeobj_ce4fda95cba07e8b96ff6c445cf4ae1a = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[189], NULL, 2, 0, 0);
    codeobj_c8b38f61adbc91ef08d31a7e665c46af = MAKE_CODE_OBJECT(module_filename_obj, 322, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[192], NULL, 1, 0, 0);
    codeobj_bd50fa5b1efd7b79ee9a745ebfd98d7c = MAKE_CODE_OBJECT(module_filename_obj, 326, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[189], NULL, 2, 0, 0);
    codeobj_a88bacb7f488561cb3ed6ce7faa95593 = MAKE_CODE_OBJECT(module_filename_obj, 356, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[192], NULL, 1, 0, 0);
    codeobj_f445d997746a78a3fd44fcc1da7ce3cc = MAKE_CODE_OBJECT(module_filename_obj, 360, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[189], NULL, 2, 0, 0);
    codeobj_5faf9cd611ad81078bbc812b5004b573 = MAKE_CODE_OBJECT(module_filename_obj, 383, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[41], mod_consts[192], NULL, 1, 0, 0);
    codeobj_4ae380a675273c2c77e80c1f426d6e94 = MAKE_CODE_OBJECT(module_filename_obj, 387, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[41], mod_consts[189], NULL, 2, 0, 0);
    codeobj_08b6ca016628de7c6868e4abcdad7ee8 = MAKE_CODE_OBJECT(module_filename_obj, 374, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[40], mod_consts[192], NULL, 1, 0, 0);
    codeobj_d87c8129a8eafe6c2674124088002912 = MAKE_CODE_OBJECT(module_filename_obj, 378, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[40], mod_consts[189], NULL, 2, 0, 0);
    codeobj_69870313b818336e414cb240ae5612f2 = MAKE_CODE_OBJECT(module_filename_obj, 304, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[43], mod_consts[43], mod_consts[192], NULL, 1, 0, 0);
    codeobj_41015cfc216fb371ea4cb580f0bf8d5f = MAKE_CODE_OBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[43], mod_consts[43], mod_consts[193], NULL, 2, 0, 0);
    codeobj_eb92dfacb381377c81c836a696114bd3 = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[192], NULL, 1, 0, 0);
    codeobj_526a314e9ca94be10d43bfaebdfb1bf6 = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[189], NULL, 2, 0, 0);
    codeobj_459024a8aa315c904ebe09e8afaf7a3f = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[192], NULL, 1, 0, 0);
    codeobj_f3a070c15d8db588c0453b1177aeac76 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[189], NULL, 2, 0, 0);
    codeobj_5820b498490fb39257355b8df22a9763 = MAKE_CODE_OBJECT(module_filename_obj, 105, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[192], NULL, 1, 0, 0);
    codeobj_07bed50efbf6bbeba14154ba746d1a90 = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[189], NULL, 2, 0, 0);
    codeobj_b94ec56fc7a5ebf44e3e3a8defa18171 = MAKE_CODE_OBJECT(module_filename_obj, 313, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[192], NULL, 1, 0, 0);
    codeobj_69208d47a984697375227662a67a9f7d = MAKE_CODE_OBJECT(module_filename_obj, 317, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[189], NULL, 2, 0, 0);
    codeobj_6889d66cf159b415930bb922f1fdae95 = MAKE_CODE_OBJECT(module_filename_obj, 365, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[39], mod_consts[192], NULL, 1, 0, 0);
    codeobj_edae13ed398b0527c060a5719862b6a8 = MAKE_CODE_OBJECT(module_filename_obj, 369, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[39], mod_consts[189], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__10_selected_icon();


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__11_selected_icon_content(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__12_selected_icon_content(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__13_label();


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__14_label();


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__15_label_content(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__16_label_content(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__17_padding(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__18_padding(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__19___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__20__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__21__get_children();


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__22_destinations(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__23_destinations(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__24_on_change();


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__25_on_change();


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__26_selected_index(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__27_selected_index(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__28_label_type(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__29_label_type(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__2__get_control_name();


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__30___set_label_type(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__31_bgcolor();


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__32_bgcolor();


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__33_extended(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__34_extended(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__35_leading(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__36_leading(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__37_trailing(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__38_trailing(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__39_min_width(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__3__before_build_command(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__40_min_width(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__41_min_extended_width(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__42_min_extended_width(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__43_group_alignment(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__44_group_alignment(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__4__get_children();


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__5_icon();


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__6_icon();


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__7_icon_content(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__8_icon_content(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__9_selected_icon();


// The module function definitions.
static PyObject *impl_flet_core$navigation_rail$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ref = python_pars[1];
    PyObject *par_icon = python_pars[2];
    PyObject *par_icon_content = python_pars[3];
    PyObject *par_selected_icon = python_pars[4];
    PyObject *par_selected_icon_content = python_pars[5];
    PyObject *par_label = python_pars[6];
    PyObject *par_label_content = python_pars[7];
    PyObject *par_padding = python_pars[8];
    struct Nuitka_FrameObject *frame_7ef46ffb019baa860a6ab7b7d1a0216b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7ef46ffb019baa860a6ab7b7d1a0216b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7ef46ffb019baa860a6ab7b7d1a0216b)) {
        Py_XDECREF(cache_frame_7ef46ffb019baa860a6ab7b7d1a0216b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ef46ffb019baa860a6ab7b7d1a0216b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ef46ffb019baa860a6ab7b7d1a0216b = MAKE_FUNCTION_FRAME(codeobj_7ef46ffb019baa860a6ab7b7d1a0216b, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7ef46ffb019baa860a6ab7b7d1a0216b->m_type_description == NULL);
    frame_7ef46ffb019baa860a6ab7b7d1a0216b = cache_frame_7ef46ffb019baa860a6ab7b7d1a0216b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7ef46ffb019baa860a6ab7b7d1a0216b);
    assert(Py_REFCNT(frame_7ef46ffb019baa860a6ab7b7d1a0216b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_ref);
        tmp_kw_call_dict_value_0_1 = par_ref;
        frame_7ef46ffb019baa860a6ab7b7d1a0216b->m_frame.f_lineno = 42;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_label);
        tmp_assattr_value_1 = par_label;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooo";
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


            exception_lineno = 44;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_icon_content);
        tmp_assattr_value_4 = par_icon_content;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[6], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_selected_icon);
        tmp_assattr_value_5 = par_selected_icon;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[8], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_selected_icon_content);
        tmp_assattr_value_7 = par_selected_icon_content;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[9], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[10], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_label_content);
        tmp_assattr_value_9 = par_label_content;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[11], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_padding);
        tmp_assattr_value_10 = par_padding;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[12], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7ef46ffb019baa860a6ab7b7d1a0216b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ef46ffb019baa860a6ab7b7d1a0216b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ef46ffb019baa860a6ab7b7d1a0216b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ef46ffb019baa860a6ab7b7d1a0216b,
        type_description_1,
        par_self,
        par_ref,
        par_icon,
        par_icon_content,
        par_selected_icon,
        par_selected_icon_content,
        par_label,
        par_label_content,
        par_padding
    );


    // Release cached frame if used for exception.
    if (frame_7ef46ffb019baa860a6ab7b7d1a0216b == cache_frame_7ef46ffb019baa860a6ab7b7d1a0216b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7ef46ffb019baa860a6ab7b7d1a0216b);
        cache_frame_7ef46ffb019baa860a6ab7b7d1a0216b = NULL;
    }

    assertFrameObject(frame_7ef46ffb019baa860a6ab7b7d1a0216b);

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
    CHECK_OBJECT(par_icon);
    Py_DECREF(par_icon);
    CHECK_OBJECT(par_icon_content);
    Py_DECREF(par_icon_content);
    CHECK_OBJECT(par_selected_icon);
    Py_DECREF(par_selected_icon);
    CHECK_OBJECT(par_selected_icon_content);
    Py_DECREF(par_selected_icon_content);
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);
    CHECK_OBJECT(par_label_content);
    Py_DECREF(par_label_content);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
    CHECK_OBJECT(par_icon);
    Py_DECREF(par_icon);
    CHECK_OBJECT(par_icon_content);
    Py_DECREF(par_icon_content);
    CHECK_OBJECT(par_selected_icon);
    Py_DECREF(par_selected_icon);
    CHECK_OBJECT(par_selected_icon_content);
    Py_DECREF(par_selected_icon_content);
    CHECK_OBJECT(par_label);
    Py_DECREF(par_label);
    CHECK_OBJECT(par_label_content);
    Py_DECREF(par_label_content);
    CHECK_OBJECT(par_padding);
    Py_DECREF(par_padding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$navigation_rail$$$function__3__before_build_command(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3157465c1a22968e74624fb26fef5cb4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3157465c1a22968e74624fb26fef5cb4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3157465c1a22968e74624fb26fef5cb4)) {
        Py_XDECREF(cache_frame_3157465c1a22968e74624fb26fef5cb4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3157465c1a22968e74624fb26fef5cb4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3157465c1a22968e74624fb26fef5cb4 = MAKE_FUNCTION_FRAME(codeobj_3157465c1a22968e74624fb26fef5cb4, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3157465c1a22968e74624fb26fef5cb4->m_type_description == NULL);
    frame_3157465c1a22968e74624fb26fef5cb4 = cache_frame_3157465c1a22968e74624fb26fef5cb4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3157465c1a22968e74624fb26fef5cb4);
    assert(Py_REFCNT(frame_3157465c1a22968e74624fb26fef5cb4) == 2);

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

            exception_lineno = 58;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_flet_core$navigation_rail, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_3157465c1a22968e74624fb26fef5cb4->m_frame.f_lineno = 58;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[14]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
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


            exception_lineno = 59;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[12];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[16]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 59;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_3157465c1a22968e74624fb26fef5cb4->m_frame.f_lineno = 59;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
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
        exception_tb = MAKE_TRACEBACK(frame_3157465c1a22968e74624fb26fef5cb4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3157465c1a22968e74624fb26fef5cb4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3157465c1a22968e74624fb26fef5cb4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3157465c1a22968e74624fb26fef5cb4,
        type_description_1,
        par_self,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_3157465c1a22968e74624fb26fef5cb4 == cache_frame_3157465c1a22968e74624fb26fef5cb4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3157465c1a22968e74624fb26fef5cb4);
        cache_frame_3157465c1a22968e74624fb26fef5cb4 = NULL;
    }

    assertFrameObject(frame_3157465c1a22968e74624fb26fef5cb4);

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


static PyObject *impl_flet_core$navigation_rail$$$function__4__get_children(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_children = NULL;
    struct Nuitka_FrameObject *frame_e9863afbb3f53b67b9ddcc48d1beb18a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e9863afbb3f53b67b9ddcc48d1beb18a = NULL;
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
    if (isFrameUnusable(cache_frame_e9863afbb3f53b67b9ddcc48d1beb18a)) {
        Py_XDECREF(cache_frame_e9863afbb3f53b67b9ddcc48d1beb18a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e9863afbb3f53b67b9ddcc48d1beb18a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e9863afbb3f53b67b9ddcc48d1beb18a = MAKE_FUNCTION_FRAME(codeobj_e9863afbb3f53b67b9ddcc48d1beb18a, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e9863afbb3f53b67b9ddcc48d1beb18a->m_type_description == NULL);
    frame_e9863afbb3f53b67b9ddcc48d1beb18a = cache_frame_e9863afbb3f53b67b9ddcc48d1beb18a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e9863afbb3f53b67b9ddcc48d1beb18a);
    assert(Py_REFCNT(frame_e9863afbb3f53b67b9ddcc48d1beb18a) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 63;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e9863afbb3f53b67b9ddcc48d1beb18a->m_frame.f_lineno = 64;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[17],
            &PyTuple_GET_ITEM(mod_consts[18], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_children);
        tmp_list_arg_value_1 = var_children;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_item_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[10]);
        if (tmp_item_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[5]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 66;
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[5]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e9863afbb3f53b67b9ddcc48d1beb18a->m_frame.f_lineno = 67;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[17],
            &PyTuple_GET_ITEM(mod_consts[19], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        PyObject *tmp_expression_value_6;
        if (var_children == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_value_2 = var_children;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_item_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[5]);
        if (tmp_item_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[8]);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            exception_lineno = 69;
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[8]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e9863afbb3f53b67b9ddcc48d1beb18a->m_frame.f_lineno = 70;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_3,
            mod_consts[17],
            &PyTuple_GET_ITEM(mod_consts[21], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_10;
        if (var_children == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = var_children;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[22]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[8]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e9863afbb3f53b67b9ddcc48d1beb18a->m_frame.f_lineno = 73;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_3:;
    if (var_children == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 74;
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
        exception_tb = MAKE_TRACEBACK(frame_e9863afbb3f53b67b9ddcc48d1beb18a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e9863afbb3f53b67b9ddcc48d1beb18a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e9863afbb3f53b67b9ddcc48d1beb18a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e9863afbb3f53b67b9ddcc48d1beb18a,
        type_description_1,
        par_self,
        var_children
    );


    // Release cached frame if used for exception.
    if (frame_e9863afbb3f53b67b9ddcc48d1beb18a == cache_frame_e9863afbb3f53b67b9ddcc48d1beb18a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e9863afbb3f53b67b9ddcc48d1beb18a);
        cache_frame_e9863afbb3f53b67b9ddcc48d1beb18a = NULL;
    }

    assertFrameObject(frame_e9863afbb3f53b67b9ddcc48d1beb18a);

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


static PyObject *impl_flet_core$navigation_rail$$$function__5_icon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_8f053fec81568ec4da6f46a17f2bb2af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8f053fec81568ec4da6f46a17f2bb2af = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8f053fec81568ec4da6f46a17f2bb2af)) {
        Py_XDECREF(cache_frame_8f053fec81568ec4da6f46a17f2bb2af);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8f053fec81568ec4da6f46a17f2bb2af == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8f053fec81568ec4da6f46a17f2bb2af = MAKE_FUNCTION_FRAME(codeobj_8f053fec81568ec4da6f46a17f2bb2af, module_flet_core$navigation_rail, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8f053fec81568ec4da6f46a17f2bb2af->m_type_description == NULL);
    frame_8f053fec81568ec4da6f46a17f2bb2af = cache_frame_8f053fec81568ec4da6f46a17f2bb2af;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8f053fec81568ec4da6f46a17f2bb2af);
    assert(Py_REFCNT(frame_8f053fec81568ec4da6f46a17f2bb2af) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_8f053fec81568ec4da6f46a17f2bb2af->m_frame.f_lineno = 79;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
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
        exception_tb = MAKE_TRACEBACK(frame_8f053fec81568ec4da6f46a17f2bb2af, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8f053fec81568ec4da6f46a17f2bb2af->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8f053fec81568ec4da6f46a17f2bb2af, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8f053fec81568ec4da6f46a17f2bb2af,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_8f053fec81568ec4da6f46a17f2bb2af == cache_frame_8f053fec81568ec4da6f46a17f2bb2af) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8f053fec81568ec4da6f46a17f2bb2af);
        cache_frame_8f053fec81568ec4da6f46a17f2bb2af = NULL;
    }

    assertFrameObject(frame_8f053fec81568ec4da6f46a17f2bb2af);

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


static PyObject *impl_flet_core$navigation_rail$$$function__6_icon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_d1464efb724cd951086729f73f27851b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d1464efb724cd951086729f73f27851b = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d1464efb724cd951086729f73f27851b)) {
        Py_XDECREF(cache_frame_d1464efb724cd951086729f73f27851b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d1464efb724cd951086729f73f27851b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d1464efb724cd951086729f73f27851b = MAKE_FUNCTION_FRAME(codeobj_d1464efb724cd951086729f73f27851b, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d1464efb724cd951086729f73f27851b->m_type_description == NULL);
    frame_d1464efb724cd951086729f73f27851b = cache_frame_d1464efb724cd951086729f73f27851b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d1464efb724cd951086729f73f27851b);
    assert(Py_REFCNT(frame_d1464efb724cd951086729f73f27851b) == 2);

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
        frame_d1464efb724cd951086729f73f27851b->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[25],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
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
        exception_tb = MAKE_TRACEBACK(frame_d1464efb724cd951086729f73f27851b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d1464efb724cd951086729f73f27851b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d1464efb724cd951086729f73f27851b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d1464efb724cd951086729f73f27851b,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_d1464efb724cd951086729f73f27851b == cache_frame_d1464efb724cd951086729f73f27851b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d1464efb724cd951086729f73f27851b);
        cache_frame_d1464efb724cd951086729f73f27851b = NULL;
    }

    assertFrameObject(frame_d1464efb724cd951086729f73f27851b);

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


static PyObject *impl_flet_core$navigation_rail$$$function__7_icon_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e034576e3f0c83fd9d177d2806b8f134;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e034576e3f0c83fd9d177d2806b8f134 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e034576e3f0c83fd9d177d2806b8f134)) {
        Py_XDECREF(cache_frame_e034576e3f0c83fd9d177d2806b8f134);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e034576e3f0c83fd9d177d2806b8f134 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e034576e3f0c83fd9d177d2806b8f134 = MAKE_FUNCTION_FRAME(codeobj_e034576e3f0c83fd9d177d2806b8f134, module_flet_core$navigation_rail, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e034576e3f0c83fd9d177d2806b8f134->m_type_description == NULL);
    frame_e034576e3f0c83fd9d177d2806b8f134 = cache_frame_e034576e3f0c83fd9d177d2806b8f134;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e034576e3f0c83fd9d177d2806b8f134);
    assert(Py_REFCNT(frame_e034576e3f0c83fd9d177d2806b8f134) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
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
        exception_tb = MAKE_TRACEBACK(frame_e034576e3f0c83fd9d177d2806b8f134, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e034576e3f0c83fd9d177d2806b8f134->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e034576e3f0c83fd9d177d2806b8f134, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e034576e3f0c83fd9d177d2806b8f134,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e034576e3f0c83fd9d177d2806b8f134 == cache_frame_e034576e3f0c83fd9d177d2806b8f134) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e034576e3f0c83fd9d177d2806b8f134);
        cache_frame_e034576e3f0c83fd9d177d2806b8f134 = NULL;
    }

    assertFrameObject(frame_e034576e3f0c83fd9d177d2806b8f134);

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


static PyObject *impl_flet_core$navigation_rail$$$function__8_icon_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_d3568def4a3064b854ebc38f74b2a459;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d3568def4a3064b854ebc38f74b2a459 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d3568def4a3064b854ebc38f74b2a459)) {
        Py_XDECREF(cache_frame_d3568def4a3064b854ebc38f74b2a459);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d3568def4a3064b854ebc38f74b2a459 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d3568def4a3064b854ebc38f74b2a459 = MAKE_FUNCTION_FRAME(codeobj_d3568def4a3064b854ebc38f74b2a459, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d3568def4a3064b854ebc38f74b2a459->m_type_description == NULL);
    frame_d3568def4a3064b854ebc38f74b2a459 = cache_frame_d3568def4a3064b854ebc38f74b2a459;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d3568def4a3064b854ebc38f74b2a459);
    assert(Py_REFCNT(frame_d3568def4a3064b854ebc38f74b2a459) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d3568def4a3064b854ebc38f74b2a459, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d3568def4a3064b854ebc38f74b2a459->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d3568def4a3064b854ebc38f74b2a459, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d3568def4a3064b854ebc38f74b2a459,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_d3568def4a3064b854ebc38f74b2a459 == cache_frame_d3568def4a3064b854ebc38f74b2a459) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d3568def4a3064b854ebc38f74b2a459);
        cache_frame_d3568def4a3064b854ebc38f74b2a459 = NULL;
    }

    assertFrameObject(frame_d3568def4a3064b854ebc38f74b2a459);

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


static PyObject *impl_flet_core$navigation_rail$$$function__9_selected_icon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_459024a8aa315c904ebe09e8afaf7a3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_459024a8aa315c904ebe09e8afaf7a3f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_459024a8aa315c904ebe09e8afaf7a3f)) {
        Py_XDECREF(cache_frame_459024a8aa315c904ebe09e8afaf7a3f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_459024a8aa315c904ebe09e8afaf7a3f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_459024a8aa315c904ebe09e8afaf7a3f = MAKE_FUNCTION_FRAME(codeobj_459024a8aa315c904ebe09e8afaf7a3f, module_flet_core$navigation_rail, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_459024a8aa315c904ebe09e8afaf7a3f->m_type_description == NULL);
    frame_459024a8aa315c904ebe09e8afaf7a3f = cache_frame_459024a8aa315c904ebe09e8afaf7a3f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_459024a8aa315c904ebe09e8afaf7a3f);
    assert(Py_REFCNT(frame_459024a8aa315c904ebe09e8afaf7a3f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_459024a8aa315c904ebe09e8afaf7a3f->m_frame.f_lineno = 97;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[26], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
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
        exception_tb = MAKE_TRACEBACK(frame_459024a8aa315c904ebe09e8afaf7a3f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_459024a8aa315c904ebe09e8afaf7a3f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_459024a8aa315c904ebe09e8afaf7a3f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_459024a8aa315c904ebe09e8afaf7a3f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_459024a8aa315c904ebe09e8afaf7a3f == cache_frame_459024a8aa315c904ebe09e8afaf7a3f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_459024a8aa315c904ebe09e8afaf7a3f);
        cache_frame_459024a8aa315c904ebe09e8afaf7a3f = NULL;
    }

    assertFrameObject(frame_459024a8aa315c904ebe09e8afaf7a3f);

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


static PyObject *impl_flet_core$navigation_rail$$$function__10_selected_icon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_f3a070c15d8db588c0453b1177aeac76;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f3a070c15d8db588c0453b1177aeac76 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f3a070c15d8db588c0453b1177aeac76)) {
        Py_XDECREF(cache_frame_f3a070c15d8db588c0453b1177aeac76);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f3a070c15d8db588c0453b1177aeac76 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f3a070c15d8db588c0453b1177aeac76 = MAKE_FUNCTION_FRAME(codeobj_f3a070c15d8db588c0453b1177aeac76, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f3a070c15d8db588c0453b1177aeac76->m_type_description == NULL);
    frame_f3a070c15d8db588c0453b1177aeac76 = cache_frame_f3a070c15d8db588c0453b1177aeac76;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f3a070c15d8db588c0453b1177aeac76);
    assert(Py_REFCNT(frame_f3a070c15d8db588c0453b1177aeac76) == 2);

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
        frame_f3a070c15d8db588c0453b1177aeac76->m_frame.f_lineno = 101;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[25],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
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
        exception_tb = MAKE_TRACEBACK(frame_f3a070c15d8db588c0453b1177aeac76, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f3a070c15d8db588c0453b1177aeac76->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f3a070c15d8db588c0453b1177aeac76, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f3a070c15d8db588c0453b1177aeac76,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_f3a070c15d8db588c0453b1177aeac76 == cache_frame_f3a070c15d8db588c0453b1177aeac76) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f3a070c15d8db588c0453b1177aeac76);
        cache_frame_f3a070c15d8db588c0453b1177aeac76 = NULL;
    }

    assertFrameObject(frame_f3a070c15d8db588c0453b1177aeac76);

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


static PyObject *impl_flet_core$navigation_rail$$$function__11_selected_icon_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5820b498490fb39257355b8df22a9763;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5820b498490fb39257355b8df22a9763 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5820b498490fb39257355b8df22a9763)) {
        Py_XDECREF(cache_frame_5820b498490fb39257355b8df22a9763);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5820b498490fb39257355b8df22a9763 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5820b498490fb39257355b8df22a9763 = MAKE_FUNCTION_FRAME(codeobj_5820b498490fb39257355b8df22a9763, module_flet_core$navigation_rail, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5820b498490fb39257355b8df22a9763->m_type_description == NULL);
    frame_5820b498490fb39257355b8df22a9763 = cache_frame_5820b498490fb39257355b8df22a9763;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5820b498490fb39257355b8df22a9763);
    assert(Py_REFCNT(frame_5820b498490fb39257355b8df22a9763) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
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
        exception_tb = MAKE_TRACEBACK(frame_5820b498490fb39257355b8df22a9763, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5820b498490fb39257355b8df22a9763->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5820b498490fb39257355b8df22a9763, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5820b498490fb39257355b8df22a9763,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5820b498490fb39257355b8df22a9763 == cache_frame_5820b498490fb39257355b8df22a9763) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5820b498490fb39257355b8df22a9763);
        cache_frame_5820b498490fb39257355b8df22a9763 = NULL;
    }

    assertFrameObject(frame_5820b498490fb39257355b8df22a9763);

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


static PyObject *impl_flet_core$navigation_rail$$$function__12_selected_icon_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_07bed50efbf6bbeba14154ba746d1a90;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_07bed50efbf6bbeba14154ba746d1a90 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_07bed50efbf6bbeba14154ba746d1a90)) {
        Py_XDECREF(cache_frame_07bed50efbf6bbeba14154ba746d1a90);

#if _DEBUG_REFCOUNTS
        if (cache_frame_07bed50efbf6bbeba14154ba746d1a90 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_07bed50efbf6bbeba14154ba746d1a90 = MAKE_FUNCTION_FRAME(codeobj_07bed50efbf6bbeba14154ba746d1a90, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_07bed50efbf6bbeba14154ba746d1a90->m_type_description == NULL);
    frame_07bed50efbf6bbeba14154ba746d1a90 = cache_frame_07bed50efbf6bbeba14154ba746d1a90;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_07bed50efbf6bbeba14154ba746d1a90);
    assert(Py_REFCNT(frame_07bed50efbf6bbeba14154ba746d1a90) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[8], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_07bed50efbf6bbeba14154ba746d1a90, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_07bed50efbf6bbeba14154ba746d1a90->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_07bed50efbf6bbeba14154ba746d1a90, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_07bed50efbf6bbeba14154ba746d1a90,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_07bed50efbf6bbeba14154ba746d1a90 == cache_frame_07bed50efbf6bbeba14154ba746d1a90) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_07bed50efbf6bbeba14154ba746d1a90);
        cache_frame_07bed50efbf6bbeba14154ba746d1a90 = NULL;
    }

    assertFrameObject(frame_07bed50efbf6bbeba14154ba746d1a90);

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


static PyObject *impl_flet_core$navigation_rail$$$function__13_label(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c5f33c5ca2334592fdb19c325437c246;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c5f33c5ca2334592fdb19c325437c246 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c5f33c5ca2334592fdb19c325437c246)) {
        Py_XDECREF(cache_frame_c5f33c5ca2334592fdb19c325437c246);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c5f33c5ca2334592fdb19c325437c246 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c5f33c5ca2334592fdb19c325437c246 = MAKE_FUNCTION_FRAME(codeobj_c5f33c5ca2334592fdb19c325437c246, module_flet_core$navigation_rail, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c5f33c5ca2334592fdb19c325437c246->m_type_description == NULL);
    frame_c5f33c5ca2334592fdb19c325437c246 = cache_frame_c5f33c5ca2334592fdb19c325437c246;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c5f33c5ca2334592fdb19c325437c246);
    assert(Py_REFCNT(frame_c5f33c5ca2334592fdb19c325437c246) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_c5f33c5ca2334592fdb19c325437c246->m_frame.f_lineno = 115;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[28], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
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
        exception_tb = MAKE_TRACEBACK(frame_c5f33c5ca2334592fdb19c325437c246, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5f33c5ca2334592fdb19c325437c246->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5f33c5ca2334592fdb19c325437c246, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c5f33c5ca2334592fdb19c325437c246,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c5f33c5ca2334592fdb19c325437c246 == cache_frame_c5f33c5ca2334592fdb19c325437c246) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c5f33c5ca2334592fdb19c325437c246);
        cache_frame_c5f33c5ca2334592fdb19c325437c246 = NULL;
    }

    assertFrameObject(frame_c5f33c5ca2334592fdb19c325437c246);

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


static PyObject *impl_flet_core$navigation_rail$$$function__14_label(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_1db6307c03d452f2ab4a199d0c9db7f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1db6307c03d452f2ab4a199d0c9db7f8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1db6307c03d452f2ab4a199d0c9db7f8)) {
        Py_XDECREF(cache_frame_1db6307c03d452f2ab4a199d0c9db7f8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1db6307c03d452f2ab4a199d0c9db7f8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1db6307c03d452f2ab4a199d0c9db7f8 = MAKE_FUNCTION_FRAME(codeobj_1db6307c03d452f2ab4a199d0c9db7f8, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1db6307c03d452f2ab4a199d0c9db7f8->m_type_description == NULL);
    frame_1db6307c03d452f2ab4a199d0c9db7f8 = cache_frame_1db6307c03d452f2ab4a199d0c9db7f8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1db6307c03d452f2ab4a199d0c9db7f8);
    assert(Py_REFCNT(frame_1db6307c03d452f2ab4a199d0c9db7f8) == 2);

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
        frame_1db6307c03d452f2ab4a199d0c9db7f8->m_frame.f_lineno = 119;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[25],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
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
        exception_tb = MAKE_TRACEBACK(frame_1db6307c03d452f2ab4a199d0c9db7f8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1db6307c03d452f2ab4a199d0c9db7f8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1db6307c03d452f2ab4a199d0c9db7f8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1db6307c03d452f2ab4a199d0c9db7f8,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_1db6307c03d452f2ab4a199d0c9db7f8 == cache_frame_1db6307c03d452f2ab4a199d0c9db7f8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1db6307c03d452f2ab4a199d0c9db7f8);
        cache_frame_1db6307c03d452f2ab4a199d0c9db7f8 = NULL;
    }

    assertFrameObject(frame_1db6307c03d452f2ab4a199d0c9db7f8);

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


static PyObject *impl_flet_core$navigation_rail$$$function__15_label_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ec0b8081b0af50e734b41e24864b28c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ec0b8081b0af50e734b41e24864b28c4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ec0b8081b0af50e734b41e24864b28c4)) {
        Py_XDECREF(cache_frame_ec0b8081b0af50e734b41e24864b28c4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ec0b8081b0af50e734b41e24864b28c4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ec0b8081b0af50e734b41e24864b28c4 = MAKE_FUNCTION_FRAME(codeobj_ec0b8081b0af50e734b41e24864b28c4, module_flet_core$navigation_rail, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ec0b8081b0af50e734b41e24864b28c4->m_type_description == NULL);
    frame_ec0b8081b0af50e734b41e24864b28c4 = cache_frame_ec0b8081b0af50e734b41e24864b28c4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ec0b8081b0af50e734b41e24864b28c4);
    assert(Py_REFCNT(frame_ec0b8081b0af50e734b41e24864b28c4) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
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
        exception_tb = MAKE_TRACEBACK(frame_ec0b8081b0af50e734b41e24864b28c4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ec0b8081b0af50e734b41e24864b28c4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ec0b8081b0af50e734b41e24864b28c4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ec0b8081b0af50e734b41e24864b28c4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ec0b8081b0af50e734b41e24864b28c4 == cache_frame_ec0b8081b0af50e734b41e24864b28c4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ec0b8081b0af50e734b41e24864b28c4);
        cache_frame_ec0b8081b0af50e734b41e24864b28c4 = NULL;
    }

    assertFrameObject(frame_ec0b8081b0af50e734b41e24864b28c4);

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


static PyObject *impl_flet_core$navigation_rail$$$function__16_label_content(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_ce4fda95cba07e8b96ff6c445cf4ae1a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ce4fda95cba07e8b96ff6c445cf4ae1a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ce4fda95cba07e8b96ff6c445cf4ae1a)) {
        Py_XDECREF(cache_frame_ce4fda95cba07e8b96ff6c445cf4ae1a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ce4fda95cba07e8b96ff6c445cf4ae1a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ce4fda95cba07e8b96ff6c445cf4ae1a = MAKE_FUNCTION_FRAME(codeobj_ce4fda95cba07e8b96ff6c445cf4ae1a, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ce4fda95cba07e8b96ff6c445cf4ae1a->m_type_description == NULL);
    frame_ce4fda95cba07e8b96ff6c445cf4ae1a = cache_frame_ce4fda95cba07e8b96ff6c445cf4ae1a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ce4fda95cba07e8b96ff6c445cf4ae1a);
    assert(Py_REFCNT(frame_ce4fda95cba07e8b96ff6c445cf4ae1a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value);
        tmp_assattr_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ce4fda95cba07e8b96ff6c445cf4ae1a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ce4fda95cba07e8b96ff6c445cf4ae1a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ce4fda95cba07e8b96ff6c445cf4ae1a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ce4fda95cba07e8b96ff6c445cf4ae1a,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_ce4fda95cba07e8b96ff6c445cf4ae1a == cache_frame_ce4fda95cba07e8b96ff6c445cf4ae1a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ce4fda95cba07e8b96ff6c445cf4ae1a);
        cache_frame_ce4fda95cba07e8b96ff6c445cf4ae1a = NULL;
    }

    assertFrameObject(frame_ce4fda95cba07e8b96ff6c445cf4ae1a);

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


static PyObject *impl_flet_core$navigation_rail$$$function__17_padding(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_eb92dfacb381377c81c836a696114bd3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eb92dfacb381377c81c836a696114bd3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_eb92dfacb381377c81c836a696114bd3)) {
        Py_XDECREF(cache_frame_eb92dfacb381377c81c836a696114bd3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_eb92dfacb381377c81c836a696114bd3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_eb92dfacb381377c81c836a696114bd3 = MAKE_FUNCTION_FRAME(codeobj_eb92dfacb381377c81c836a696114bd3, module_flet_core$navigation_rail, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_eb92dfacb381377c81c836a696114bd3->m_type_description == NULL);
    frame_eb92dfacb381377c81c836a696114bd3 = cache_frame_eb92dfacb381377c81c836a696114bd3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_eb92dfacb381377c81c836a696114bd3);
    assert(Py_REFCNT(frame_eb92dfacb381377c81c836a696114bd3) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
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
        exception_tb = MAKE_TRACEBACK(frame_eb92dfacb381377c81c836a696114bd3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_eb92dfacb381377c81c836a696114bd3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_eb92dfacb381377c81c836a696114bd3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_eb92dfacb381377c81c836a696114bd3,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_eb92dfacb381377c81c836a696114bd3 == cache_frame_eb92dfacb381377c81c836a696114bd3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_eb92dfacb381377c81c836a696114bd3);
        cache_frame_eb92dfacb381377c81c836a696114bd3 = NULL;
    }

    assertFrameObject(frame_eb92dfacb381377c81c836a696114bd3);

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


static PyObject *impl_flet_core$navigation_rail$$$function__18_padding(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_526a314e9ca94be10d43bfaebdfb1bf6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_526a314e9ca94be10d43bfaebdfb1bf6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_526a314e9ca94be10d43bfaebdfb1bf6)) {
        Py_XDECREF(cache_frame_526a314e9ca94be10d43bfaebdfb1bf6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_526a314e9ca94be10d43bfaebdfb1bf6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_526a314e9ca94be10d43bfaebdfb1bf6 = MAKE_FUNCTION_FRAME(codeobj_526a314e9ca94be10d43bfaebdfb1bf6, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_526a314e9ca94be10d43bfaebdfb1bf6->m_type_description == NULL);
    frame_526a314e9ca94be10d43bfaebdfb1bf6 = cache_frame_526a314e9ca94be10d43bfaebdfb1bf6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_526a314e9ca94be10d43bfaebdfb1bf6);
    assert(Py_REFCNT(frame_526a314e9ca94be10d43bfaebdfb1bf6) == 2);

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


            exception_lineno = 137;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_526a314e9ca94be10d43bfaebdfb1bf6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_526a314e9ca94be10d43bfaebdfb1bf6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_526a314e9ca94be10d43bfaebdfb1bf6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_526a314e9ca94be10d43bfaebdfb1bf6,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_526a314e9ca94be10d43bfaebdfb1bf6 == cache_frame_526a314e9ca94be10d43bfaebdfb1bf6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_526a314e9ca94be10d43bfaebdfb1bf6);
        cache_frame_526a314e9ca94be10d43bfaebdfb1bf6 = NULL;
    }

    assertFrameObject(frame_526a314e9ca94be10d43bfaebdfb1bf6);

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


static PyObject *impl_flet_core$navigation_rail$$$function__19___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ref = python_pars[1];
    PyObject *par_width = python_pars[2];
    PyObject *par_height = python_pars[3];
    PyObject *par_left = python_pars[4];
    PyObject *par_top = python_pars[5];
    PyObject *par_right = python_pars[6];
    PyObject *par_bottom = python_pars[7];
    PyObject *par_expand = python_pars[8];
    PyObject *par_col = python_pars[9];
    PyObject *par_opacity = python_pars[10];
    PyObject *par_rotate = python_pars[11];
    PyObject *par_scale = python_pars[12];
    PyObject *par_offset = python_pars[13];
    PyObject *par_aspect_ratio = python_pars[14];
    PyObject *par_animate_opacity = python_pars[15];
    PyObject *par_animate_size = python_pars[16];
    PyObject *par_animate_position = python_pars[17];
    PyObject *par_animate_rotation = python_pars[18];
    PyObject *par_animate_scale = python_pars[19];
    PyObject *par_animate_offset = python_pars[20];
    PyObject *par_on_animation_end = python_pars[21];
    PyObject *par_visible = python_pars[22];
    PyObject *par_disabled = python_pars[23];
    PyObject *par_data = python_pars[24];
    PyObject *par_destinations = python_pars[25];
    PyObject *par_selected_index = python_pars[26];
    PyObject *par_extended = python_pars[27];
    PyObject *par_label_type = python_pars[28];
    PyObject *par_bgcolor = python_pars[29];
    PyObject *par_leading = python_pars[30];
    PyObject *par_trailing = python_pars[31];
    PyObject *par_min_width = python_pars[32];
    PyObject *par_min_extended_width = python_pars[33];
    PyObject *par_group_alignment = python_pars[34];
    PyObject *par_on_change = python_pars[35];
    struct Nuitka_FrameObject *frame_9b4fd86021d17c87100bac06b7b32292;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9b4fd86021d17c87100bac06b7b32292 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9b4fd86021d17c87100bac06b7b32292)) {
        Py_XDECREF(cache_frame_9b4fd86021d17c87100bac06b7b32292);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9b4fd86021d17c87100bac06b7b32292 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9b4fd86021d17c87100bac06b7b32292 = MAKE_FUNCTION_FRAME(codeobj_9b4fd86021d17c87100bac06b7b32292, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9b4fd86021d17c87100bac06b7b32292->m_type_description == NULL);
    frame_9b4fd86021d17c87100bac06b7b32292 = cache_frame_9b4fd86021d17c87100bac06b7b32292;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9b4fd86021d17c87100bac06b7b32292);
    assert(Py_REFCNT(frame_9b4fd86021d17c87100bac06b7b32292) == 2);

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
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_ref);
        tmp_kw_call_dict_value_0_1 = par_ref;
        CHECK_OBJECT(par_width);
        tmp_kw_call_dict_value_1_1 = par_width;
        CHECK_OBJECT(par_height);
        tmp_kw_call_dict_value_2_1 = par_height;
        CHECK_OBJECT(par_left);
        tmp_kw_call_dict_value_3_1 = par_left;
        CHECK_OBJECT(par_top);
        tmp_kw_call_dict_value_4_1 = par_top;
        CHECK_OBJECT(par_right);
        tmp_kw_call_dict_value_5_1 = par_right;
        CHECK_OBJECT(par_bottom);
        tmp_kw_call_dict_value_6_1 = par_bottom;
        CHECK_OBJECT(par_expand);
        tmp_kw_call_dict_value_7_1 = par_expand;
        CHECK_OBJECT(par_col);
        tmp_kw_call_dict_value_8_1 = par_col;
        CHECK_OBJECT(par_opacity);
        tmp_kw_call_dict_value_9_1 = par_opacity;
        CHECK_OBJECT(par_rotate);
        tmp_kw_call_dict_value_10_1 = par_rotate;
        CHECK_OBJECT(par_scale);
        tmp_kw_call_dict_value_11_1 = par_scale;
        CHECK_OBJECT(par_offset);
        tmp_kw_call_dict_value_12_1 = par_offset;
        CHECK_OBJECT(par_aspect_ratio);
        tmp_kw_call_dict_value_13_1 = par_aspect_ratio;
        CHECK_OBJECT(par_animate_opacity);
        tmp_kw_call_dict_value_14_1 = par_animate_opacity;
        CHECK_OBJECT(par_animate_size);
        tmp_kw_call_dict_value_15_1 = par_animate_size;
        CHECK_OBJECT(par_animate_position);
        tmp_kw_call_dict_value_16_1 = par_animate_position;
        CHECK_OBJECT(par_animate_rotation);
        tmp_kw_call_dict_value_17_1 = par_animate_rotation;
        CHECK_OBJECT(par_animate_scale);
        tmp_kw_call_dict_value_18_1 = par_animate_scale;
        CHECK_OBJECT(par_animate_offset);
        tmp_kw_call_dict_value_19_1 = par_animate_offset;
        CHECK_OBJECT(par_on_animation_end);
        tmp_kw_call_dict_value_20_1 = par_on_animation_end;
        CHECK_OBJECT(par_visible);
        tmp_kw_call_dict_value_21_1 = par_visible;
        CHECK_OBJECT(par_disabled);
        tmp_kw_call_dict_value_22_1 = par_disabled;
        CHECK_OBJECT(par_data);
        tmp_kw_call_dict_value_23_1 = par_data;
        frame_9b4fd86021d17c87100bac06b7b32292->m_frame.f_lineno = 237;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[24] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1, tmp_kw_call_dict_value_13_1, tmp_kw_call_dict_value_14_1, tmp_kw_call_dict_value_15_1, tmp_kw_call_dict_value_16_1, tmp_kw_call_dict_value_17_1, tmp_kw_call_dict_value_18_1, tmp_kw_call_dict_value_19_1, tmp_kw_call_dict_value_20_1, tmp_kw_call_dict_value_21_1, tmp_kw_call_dict_value_22_1, tmp_kw_call_dict_value_23_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[30]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_destinations);
        tmp_assattr_value_1 = par_destinations;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[31], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_selected_index);
        tmp_assattr_value_2 = par_selected_index;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[32], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_extended);
        tmp_assattr_value_3 = par_extended;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[33], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_label_type);
        tmp_assattr_value_4 = par_label_type;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[34], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_bgcolor);
        tmp_assattr_value_5 = par_bgcolor;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[35], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[36], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_leading);
        tmp_assattr_value_7 = par_leading;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[37], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_trailing);
        tmp_assattr_value_8 = par_trailing;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[38], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_trailing);
        tmp_assattr_value_9 = par_trailing;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[39], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_min_width);
        tmp_assattr_value_10 = par_min_width;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[40], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_min_extended_width);
        tmp_assattr_value_11 = par_min_extended_width;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[41], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(par_group_alignment);
        tmp_assattr_value_12 = par_group_alignment;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[42], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(par_on_change);
        tmp_assattr_value_13 = par_on_change;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[43], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9b4fd86021d17c87100bac06b7b32292, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9b4fd86021d17c87100bac06b7b32292->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b4fd86021d17c87100bac06b7b32292, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9b4fd86021d17c87100bac06b7b32292,
        type_description_1,
        par_self,
        par_ref,
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
        par_visible,
        par_disabled,
        par_data,
        par_destinations,
        par_selected_index,
        par_extended,
        par_label_type,
        par_bgcolor,
        par_leading,
        par_trailing,
        par_min_width,
        par_min_extended_width,
        par_group_alignment,
        par_on_change
    );


    // Release cached frame if used for exception.
    if (frame_9b4fd86021d17c87100bac06b7b32292 == cache_frame_9b4fd86021d17c87100bac06b7b32292) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9b4fd86021d17c87100bac06b7b32292);
        cache_frame_9b4fd86021d17c87100bac06b7b32292 = NULL;
    }

    assertFrameObject(frame_9b4fd86021d17c87100bac06b7b32292);

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
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_destinations);
    Py_DECREF(par_destinations);
    CHECK_OBJECT(par_selected_index);
    Py_DECREF(par_selected_index);
    CHECK_OBJECT(par_extended);
    Py_DECREF(par_extended);
    CHECK_OBJECT(par_label_type);
    Py_DECREF(par_label_type);
    CHECK_OBJECT(par_bgcolor);
    Py_DECREF(par_bgcolor);
    CHECK_OBJECT(par_leading);
    Py_DECREF(par_leading);
    CHECK_OBJECT(par_trailing);
    Py_DECREF(par_trailing);
    CHECK_OBJECT(par_min_width);
    Py_DECREF(par_min_width);
    CHECK_OBJECT(par_min_extended_width);
    Py_DECREF(par_min_extended_width);
    CHECK_OBJECT(par_group_alignment);
    Py_DECREF(par_group_alignment);
    CHECK_OBJECT(par_on_change);
    Py_DECREF(par_on_change);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ref);
    Py_DECREF(par_ref);
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
    CHECK_OBJECT(par_visible);
    Py_DECREF(par_visible);
    CHECK_OBJECT(par_disabled);
    Py_DECREF(par_disabled);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_destinations);
    Py_DECREF(par_destinations);
    CHECK_OBJECT(par_selected_index);
    Py_DECREF(par_selected_index);
    CHECK_OBJECT(par_extended);
    Py_DECREF(par_extended);
    CHECK_OBJECT(par_label_type);
    Py_DECREF(par_label_type);
    CHECK_OBJECT(par_bgcolor);
    Py_DECREF(par_bgcolor);
    CHECK_OBJECT(par_leading);
    Py_DECREF(par_leading);
    CHECK_OBJECT(par_trailing);
    Py_DECREF(par_trailing);
    CHECK_OBJECT(par_min_width);
    Py_DECREF(par_min_width);
    CHECK_OBJECT(par_min_extended_width);
    Py_DECREF(par_min_extended_width);
    CHECK_OBJECT(par_group_alignment);
    Py_DECREF(par_group_alignment);
    CHECK_OBJECT(par_on_change);
    Py_DECREF(par_on_change);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet_core$navigation_rail$$$function__21__get_children(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_children = NULL;
    struct Nuitka_FrameObject *frame_3110482aa1cc3d147eeb88bea101ed33;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3110482aa1cc3d147eeb88bea101ed33 = NULL;
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
    if (isFrameUnusable(cache_frame_3110482aa1cc3d147eeb88bea101ed33)) {
        Py_XDECREF(cache_frame_3110482aa1cc3d147eeb88bea101ed33);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3110482aa1cc3d147eeb88bea101ed33 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3110482aa1cc3d147eeb88bea101ed33 = MAKE_FUNCTION_FRAME(codeobj_3110482aa1cc3d147eeb88bea101ed33, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3110482aa1cc3d147eeb88bea101ed33->m_type_description == NULL);
    frame_3110482aa1cc3d147eeb88bea101ed33 = cache_frame_3110482aa1cc3d147eeb88bea101ed33;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3110482aa1cc3d147eeb88bea101ed33);
    assert(Py_REFCNT(frame_3110482aa1cc3d147eeb88bea101ed33) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[36]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 284;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[36]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3110482aa1cc3d147eeb88bea101ed33->m_frame.f_lineno = 285;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[17],
            &PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_children);
        tmp_list_arg_value_1 = var_children;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_item_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[36]);
        if (tmp_item_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[38]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 287;
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[38]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3110482aa1cc3d147eeb88bea101ed33->m_frame.f_lineno = 288;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_2,
            mod_consts[17],
            &PyTuple_GET_ITEM(mod_consts[45], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        PyObject *tmp_expression_value_6;
        if (var_children == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 289;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_value_2 = var_children;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_item_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[38]);
        if (tmp_item_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_8;
        if (var_children == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = var_children;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[46]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[47]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3110482aa1cc3d147eeb88bea101ed33->m_frame.f_lineno = 290;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (var_children == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 291;
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
        exception_tb = MAKE_TRACEBACK(frame_3110482aa1cc3d147eeb88bea101ed33, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3110482aa1cc3d147eeb88bea101ed33->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3110482aa1cc3d147eeb88bea101ed33, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3110482aa1cc3d147eeb88bea101ed33,
        type_description_1,
        par_self,
        var_children
    );


    // Release cached frame if used for exception.
    if (frame_3110482aa1cc3d147eeb88bea101ed33 == cache_frame_3110482aa1cc3d147eeb88bea101ed33) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3110482aa1cc3d147eeb88bea101ed33);
        cache_frame_3110482aa1cc3d147eeb88bea101ed33 = NULL;
    }

    assertFrameObject(frame_3110482aa1cc3d147eeb88bea101ed33);

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


static PyObject *impl_flet_core$navigation_rail$$$function__22_destinations(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_76f1dd3d6595e2936daed0027df8973c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_76f1dd3d6595e2936daed0027df8973c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_76f1dd3d6595e2936daed0027df8973c)) {
        Py_XDECREF(cache_frame_76f1dd3d6595e2936daed0027df8973c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_76f1dd3d6595e2936daed0027df8973c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_76f1dd3d6595e2936daed0027df8973c = MAKE_FUNCTION_FRAME(codeobj_76f1dd3d6595e2936daed0027df8973c, module_flet_core$navigation_rail, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_76f1dd3d6595e2936daed0027df8973c->m_type_description == NULL);
    frame_76f1dd3d6595e2936daed0027df8973c = cache_frame_76f1dd3d6595e2936daed0027df8973c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_76f1dd3d6595e2936daed0027df8973c);
    assert(Py_REFCNT(frame_76f1dd3d6595e2936daed0027df8973c) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[47]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
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
        exception_tb = MAKE_TRACEBACK(frame_76f1dd3d6595e2936daed0027df8973c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_76f1dd3d6595e2936daed0027df8973c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_76f1dd3d6595e2936daed0027df8973c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_76f1dd3d6595e2936daed0027df8973c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_76f1dd3d6595e2936daed0027df8973c == cache_frame_76f1dd3d6595e2936daed0027df8973c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_76f1dd3d6595e2936daed0027df8973c);
        cache_frame_76f1dd3d6595e2936daed0027df8973c = NULL;
    }

    assertFrameObject(frame_76f1dd3d6595e2936daed0027df8973c);

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


static PyObject *impl_flet_core$navigation_rail$$$function__23_destinations(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_8ec2620f69329bf698de507834c10c0e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8ec2620f69329bf698de507834c10c0e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8ec2620f69329bf698de507834c10c0e)) {
        Py_XDECREF(cache_frame_8ec2620f69329bf698de507834c10c0e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8ec2620f69329bf698de507834c10c0e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8ec2620f69329bf698de507834c10c0e = MAKE_FUNCTION_FRAME(codeobj_8ec2620f69329bf698de507834c10c0e, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8ec2620f69329bf698de507834c10c0e->m_type_description == NULL);
    frame_8ec2620f69329bf698de507834c10c0e = cache_frame_8ec2620f69329bf698de507834c10c0e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8ec2620f69329bf698de507834c10c0e);
    assert(Py_REFCNT(frame_8ec2620f69329bf698de507834c10c0e) == 2);

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
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[47], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8ec2620f69329bf698de507834c10c0e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8ec2620f69329bf698de507834c10c0e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8ec2620f69329bf698de507834c10c0e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8ec2620f69329bf698de507834c10c0e,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_8ec2620f69329bf698de507834c10c0e == cache_frame_8ec2620f69329bf698de507834c10c0e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8ec2620f69329bf698de507834c10c0e);
        cache_frame_8ec2620f69329bf698de507834c10c0e = NULL;
    }

    assertFrameObject(frame_8ec2620f69329bf698de507834c10c0e);

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


static PyObject *impl_flet_core$navigation_rail$$$function__24_on_change(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_69870313b818336e414cb240ae5612f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_69870313b818336e414cb240ae5612f2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_69870313b818336e414cb240ae5612f2)) {
        Py_XDECREF(cache_frame_69870313b818336e414cb240ae5612f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_69870313b818336e414cb240ae5612f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_69870313b818336e414cb240ae5612f2 = MAKE_FUNCTION_FRAME(codeobj_69870313b818336e414cb240ae5612f2, module_flet_core$navigation_rail, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_69870313b818336e414cb240ae5612f2->m_type_description == NULL);
    frame_69870313b818336e414cb240ae5612f2 = cache_frame_69870313b818336e414cb240ae5612f2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_69870313b818336e414cb240ae5612f2);
    assert(Py_REFCNT(frame_69870313b818336e414cb240ae5612f2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_69870313b818336e414cb240ae5612f2->m_frame.f_lineno = 305;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[49], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
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
        exception_tb = MAKE_TRACEBACK(frame_69870313b818336e414cb240ae5612f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_69870313b818336e414cb240ae5612f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_69870313b818336e414cb240ae5612f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_69870313b818336e414cb240ae5612f2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_69870313b818336e414cb240ae5612f2 == cache_frame_69870313b818336e414cb240ae5612f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_69870313b818336e414cb240ae5612f2);
        cache_frame_69870313b818336e414cb240ae5612f2 = NULL;
    }

    assertFrameObject(frame_69870313b818336e414cb240ae5612f2);

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


static PyObject *impl_flet_core$navigation_rail$$$function__25_on_change(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_handler = python_pars[1];
    struct Nuitka_FrameObject *frame_41015cfc216fb371ea4cb580f0bf8d5f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_41015cfc216fb371ea4cb580f0bf8d5f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_41015cfc216fb371ea4cb580f0bf8d5f)) {
        Py_XDECREF(cache_frame_41015cfc216fb371ea4cb580f0bf8d5f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_41015cfc216fb371ea4cb580f0bf8d5f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_41015cfc216fb371ea4cb580f0bf8d5f = MAKE_FUNCTION_FRAME(codeobj_41015cfc216fb371ea4cb580f0bf8d5f, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_41015cfc216fb371ea4cb580f0bf8d5f->m_type_description == NULL);
    frame_41015cfc216fb371ea4cb580f0bf8d5f = cache_frame_41015cfc216fb371ea4cb580f0bf8d5f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_41015cfc216fb371ea4cb580f0bf8d5f);
    assert(Py_REFCNT(frame_41015cfc216fb371ea4cb580f0bf8d5f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[51];
        CHECK_OBJECT(par_handler);
        tmp_args_element_value_2 = par_handler;
        frame_41015cfc216fb371ea4cb580f0bf8d5f->m_frame.f_lineno = 309;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[50],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
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
        exception_tb = MAKE_TRACEBACK(frame_41015cfc216fb371ea4cb580f0bf8d5f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41015cfc216fb371ea4cb580f0bf8d5f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41015cfc216fb371ea4cb580f0bf8d5f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_41015cfc216fb371ea4cb580f0bf8d5f,
        type_description_1,
        par_self,
        par_handler
    );


    // Release cached frame if used for exception.
    if (frame_41015cfc216fb371ea4cb580f0bf8d5f == cache_frame_41015cfc216fb371ea4cb580f0bf8d5f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_41015cfc216fb371ea4cb580f0bf8d5f);
        cache_frame_41015cfc216fb371ea4cb580f0bf8d5f = NULL;
    }

    assertFrameObject(frame_41015cfc216fb371ea4cb580f0bf8d5f);

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


static PyObject *impl_flet_core$navigation_rail$$$function__26_selected_index(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b94ec56fc7a5ebf44e3e3a8defa18171;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b94ec56fc7a5ebf44e3e3a8defa18171 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b94ec56fc7a5ebf44e3e3a8defa18171)) {
        Py_XDECREF(cache_frame_b94ec56fc7a5ebf44e3e3a8defa18171);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b94ec56fc7a5ebf44e3e3a8defa18171 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b94ec56fc7a5ebf44e3e3a8defa18171 = MAKE_FUNCTION_FRAME(codeobj_b94ec56fc7a5ebf44e3e3a8defa18171, module_flet_core$navigation_rail, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b94ec56fc7a5ebf44e3e3a8defa18171->m_type_description == NULL);
    frame_b94ec56fc7a5ebf44e3e3a8defa18171 = cache_frame_b94ec56fc7a5ebf44e3e3a8defa18171;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b94ec56fc7a5ebf44e3e3a8defa18171);
    assert(Py_REFCNT(frame_b94ec56fc7a5ebf44e3e3a8defa18171) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b94ec56fc7a5ebf44e3e3a8defa18171->m_frame.f_lineno = 314;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[52], 0), mod_consts[53]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
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
        exception_tb = MAKE_TRACEBACK(frame_b94ec56fc7a5ebf44e3e3a8defa18171, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b94ec56fc7a5ebf44e3e3a8defa18171->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b94ec56fc7a5ebf44e3e3a8defa18171, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b94ec56fc7a5ebf44e3e3a8defa18171,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b94ec56fc7a5ebf44e3e3a8defa18171 == cache_frame_b94ec56fc7a5ebf44e3e3a8defa18171) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b94ec56fc7a5ebf44e3e3a8defa18171);
        cache_frame_b94ec56fc7a5ebf44e3e3a8defa18171 = NULL;
    }

    assertFrameObject(frame_b94ec56fc7a5ebf44e3e3a8defa18171);

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


static PyObject *impl_flet_core$navigation_rail$$$function__27_selected_index(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_69208d47a984697375227662a67a9f7d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_69208d47a984697375227662a67a9f7d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_69208d47a984697375227662a67a9f7d)) {
        Py_XDECREF(cache_frame_69208d47a984697375227662a67a9f7d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_69208d47a984697375227662a67a9f7d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_69208d47a984697375227662a67a9f7d = MAKE_FUNCTION_FRAME(codeobj_69208d47a984697375227662a67a9f7d, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_69208d47a984697375227662a67a9f7d->m_type_description == NULL);
    frame_69208d47a984697375227662a67a9f7d = cache_frame_69208d47a984697375227662a67a9f7d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_69208d47a984697375227662a67a9f7d);
    assert(Py_REFCNT(frame_69208d47a984697375227662a67a9f7d) == 2);

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
        frame_69208d47a984697375227662a67a9f7d->m_frame.f_lineno = 318;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[25],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
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
        exception_tb = MAKE_TRACEBACK(frame_69208d47a984697375227662a67a9f7d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_69208d47a984697375227662a67a9f7d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_69208d47a984697375227662a67a9f7d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_69208d47a984697375227662a67a9f7d,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_69208d47a984697375227662a67a9f7d == cache_frame_69208d47a984697375227662a67a9f7d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_69208d47a984697375227662a67a9f7d);
        cache_frame_69208d47a984697375227662a67a9f7d = NULL;
    }

    assertFrameObject(frame_69208d47a984697375227662a67a9f7d);

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


static PyObject *impl_flet_core$navigation_rail$$$function__28_label_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_c8b38f61adbc91ef08d31a7e665c46af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c8b38f61adbc91ef08d31a7e665c46af = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c8b38f61adbc91ef08d31a7e665c46af)) {
        Py_XDECREF(cache_frame_c8b38f61adbc91ef08d31a7e665c46af);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c8b38f61adbc91ef08d31a7e665c46af == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c8b38f61adbc91ef08d31a7e665c46af = MAKE_FUNCTION_FRAME(codeobj_c8b38f61adbc91ef08d31a7e665c46af, module_flet_core$navigation_rail, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c8b38f61adbc91ef08d31a7e665c46af->m_type_description == NULL);
    frame_c8b38f61adbc91ef08d31a7e665c46af = cache_frame_c8b38f61adbc91ef08d31a7e665c46af;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c8b38f61adbc91ef08d31a7e665c46af);
    assert(Py_REFCNT(frame_c8b38f61adbc91ef08d31a7e665c46af) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[55]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
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
        exception_tb = MAKE_TRACEBACK(frame_c8b38f61adbc91ef08d31a7e665c46af, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c8b38f61adbc91ef08d31a7e665c46af->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c8b38f61adbc91ef08d31a7e665c46af, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c8b38f61adbc91ef08d31a7e665c46af,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_c8b38f61adbc91ef08d31a7e665c46af == cache_frame_c8b38f61adbc91ef08d31a7e665c46af) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c8b38f61adbc91ef08d31a7e665c46af);
        cache_frame_c8b38f61adbc91ef08d31a7e665c46af = NULL;
    }

    assertFrameObject(frame_c8b38f61adbc91ef08d31a7e665c46af);

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


static PyObject *impl_flet_core$navigation_rail$$$function__29_label_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_bd50fa5b1efd7b79ee9a745ebfd98d7c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_bd50fa5b1efd7b79ee9a745ebfd98d7c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bd50fa5b1efd7b79ee9a745ebfd98d7c)) {
        Py_XDECREF(cache_frame_bd50fa5b1efd7b79ee9a745ebfd98d7c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bd50fa5b1efd7b79ee9a745ebfd98d7c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bd50fa5b1efd7b79ee9a745ebfd98d7c = MAKE_FUNCTION_FRAME(codeobj_bd50fa5b1efd7b79ee9a745ebfd98d7c, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bd50fa5b1efd7b79ee9a745ebfd98d7c->m_type_description == NULL);
    frame_bd50fa5b1efd7b79ee9a745ebfd98d7c = cache_frame_bd50fa5b1efd7b79ee9a745ebfd98d7c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bd50fa5b1efd7b79ee9a745ebfd98d7c);
    assert(Py_REFCNT(frame_bd50fa5b1efd7b79ee9a745ebfd98d7c) == 2);

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


            exception_lineno = 327;
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
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
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
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[57];
        CHECK_OBJECT(par_value);
        tmp_expression_value_2 = par_value;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[58]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 329;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_bd50fa5b1efd7b79ee9a745ebfd98d7c->m_frame.f_lineno = 329;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
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
        frame_bd50fa5b1efd7b79ee9a745ebfd98d7c->m_frame.f_lineno = 331;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[59], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
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
        exception_tb = MAKE_TRACEBACK(frame_bd50fa5b1efd7b79ee9a745ebfd98d7c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bd50fa5b1efd7b79ee9a745ebfd98d7c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bd50fa5b1efd7b79ee9a745ebfd98d7c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bd50fa5b1efd7b79ee9a745ebfd98d7c,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_bd50fa5b1efd7b79ee9a745ebfd98d7c == cache_frame_bd50fa5b1efd7b79ee9a745ebfd98d7c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bd50fa5b1efd7b79ee9a745ebfd98d7c);
        cache_frame_bd50fa5b1efd7b79ee9a745ebfd98d7c = NULL;
    }

    assertFrameObject(frame_bd50fa5b1efd7b79ee9a745ebfd98d7c);

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


static PyObject *impl_flet_core$navigation_rail$$$function__30___set_label_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_ffa1722f0f3424d40fc00721fcb68f87;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ffa1722f0f3424d40fc00721fcb68f87 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ffa1722f0f3424d40fc00721fcb68f87)) {
        Py_XDECREF(cache_frame_ffa1722f0f3424d40fc00721fcb68f87);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ffa1722f0f3424d40fc00721fcb68f87 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ffa1722f0f3424d40fc00721fcb68f87 = MAKE_FUNCTION_FRAME(codeobj_ffa1722f0f3424d40fc00721fcb68f87, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ffa1722f0f3424d40fc00721fcb68f87->m_type_description == NULL);
    frame_ffa1722f0f3424d40fc00721fcb68f87 = cache_frame_ffa1722f0f3424d40fc00721fcb68f87;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ffa1722f0f3424d40fc00721fcb68f87);
    assert(Py_REFCNT(frame_ffa1722f0f3424d40fc00721fcb68f87) == 2);

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
        frame_ffa1722f0f3424d40fc00721fcb68f87->m_frame.f_lineno = 334;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[25],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
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
        exception_tb = MAKE_TRACEBACK(frame_ffa1722f0f3424d40fc00721fcb68f87, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ffa1722f0f3424d40fc00721fcb68f87->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ffa1722f0f3424d40fc00721fcb68f87, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ffa1722f0f3424d40fc00721fcb68f87,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_ffa1722f0f3424d40fc00721fcb68f87 == cache_frame_ffa1722f0f3424d40fc00721fcb68f87) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ffa1722f0f3424d40fc00721fcb68f87);
        cache_frame_ffa1722f0f3424d40fc00721fcb68f87 = NULL;
    }

    assertFrameObject(frame_ffa1722f0f3424d40fc00721fcb68f87);

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


static PyObject *impl_flet_core$navigation_rail$$$function__31_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9292e09f3f0aeace7f880dc581b82fa9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9292e09f3f0aeace7f880dc581b82fa9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9292e09f3f0aeace7f880dc581b82fa9)) {
        Py_XDECREF(cache_frame_9292e09f3f0aeace7f880dc581b82fa9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9292e09f3f0aeace7f880dc581b82fa9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9292e09f3f0aeace7f880dc581b82fa9 = MAKE_FUNCTION_FRAME(codeobj_9292e09f3f0aeace7f880dc581b82fa9, module_flet_core$navigation_rail, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9292e09f3f0aeace7f880dc581b82fa9->m_type_description == NULL);
    frame_9292e09f3f0aeace7f880dc581b82fa9 = cache_frame_9292e09f3f0aeace7f880dc581b82fa9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9292e09f3f0aeace7f880dc581b82fa9);
    assert(Py_REFCNT(frame_9292e09f3f0aeace7f880dc581b82fa9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_9292e09f3f0aeace7f880dc581b82fa9->m_frame.f_lineno = 339;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
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
        exception_tb = MAKE_TRACEBACK(frame_9292e09f3f0aeace7f880dc581b82fa9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9292e09f3f0aeace7f880dc581b82fa9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9292e09f3f0aeace7f880dc581b82fa9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9292e09f3f0aeace7f880dc581b82fa9,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9292e09f3f0aeace7f880dc581b82fa9 == cache_frame_9292e09f3f0aeace7f880dc581b82fa9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9292e09f3f0aeace7f880dc581b82fa9);
        cache_frame_9292e09f3f0aeace7f880dc581b82fa9 = NULL;
    }

    assertFrameObject(frame_9292e09f3f0aeace7f880dc581b82fa9);

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


static PyObject *impl_flet_core$navigation_rail$$$function__32_bgcolor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_55ca09047d2f140f28fa2860ae01b165;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_55ca09047d2f140f28fa2860ae01b165 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_55ca09047d2f140f28fa2860ae01b165)) {
        Py_XDECREF(cache_frame_55ca09047d2f140f28fa2860ae01b165);

#if _DEBUG_REFCOUNTS
        if (cache_frame_55ca09047d2f140f28fa2860ae01b165 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_55ca09047d2f140f28fa2860ae01b165 = MAKE_FUNCTION_FRAME(codeobj_55ca09047d2f140f28fa2860ae01b165, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_55ca09047d2f140f28fa2860ae01b165->m_type_description == NULL);
    frame_55ca09047d2f140f28fa2860ae01b165 = cache_frame_55ca09047d2f140f28fa2860ae01b165;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_55ca09047d2f140f28fa2860ae01b165);
    assert(Py_REFCNT(frame_55ca09047d2f140f28fa2860ae01b165) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[35];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_55ca09047d2f140f28fa2860ae01b165->m_frame.f_lineno = 343;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[25],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
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
        exception_tb = MAKE_TRACEBACK(frame_55ca09047d2f140f28fa2860ae01b165, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_55ca09047d2f140f28fa2860ae01b165->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_55ca09047d2f140f28fa2860ae01b165, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_55ca09047d2f140f28fa2860ae01b165,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_55ca09047d2f140f28fa2860ae01b165 == cache_frame_55ca09047d2f140f28fa2860ae01b165) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_55ca09047d2f140f28fa2860ae01b165);
        cache_frame_55ca09047d2f140f28fa2860ae01b165 = NULL;
    }

    assertFrameObject(frame_55ca09047d2f140f28fa2860ae01b165);

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


static PyObject *impl_flet_core$navigation_rail$$$function__33_extended(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d1203ea05a3f9995b259eb8c12fe48f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d1203ea05a3f9995b259eb8c12fe48f8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d1203ea05a3f9995b259eb8c12fe48f8)) {
        Py_XDECREF(cache_frame_d1203ea05a3f9995b259eb8c12fe48f8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d1203ea05a3f9995b259eb8c12fe48f8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d1203ea05a3f9995b259eb8c12fe48f8 = MAKE_FUNCTION_FRAME(codeobj_d1203ea05a3f9995b259eb8c12fe48f8, module_flet_core$navigation_rail, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d1203ea05a3f9995b259eb8c12fe48f8->m_type_description == NULL);
    frame_d1203ea05a3f9995b259eb8c12fe48f8 = cache_frame_d1203ea05a3f9995b259eb8c12fe48f8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d1203ea05a3f9995b259eb8c12fe48f8);
    assert(Py_REFCNT(frame_d1203ea05a3f9995b259eb8c12fe48f8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_d1203ea05a3f9995b259eb8c12fe48f8->m_frame.f_lineno = 348;
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[61], 0), mod_consts[62]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
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
        exception_tb = MAKE_TRACEBACK(frame_d1203ea05a3f9995b259eb8c12fe48f8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d1203ea05a3f9995b259eb8c12fe48f8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d1203ea05a3f9995b259eb8c12fe48f8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d1203ea05a3f9995b259eb8c12fe48f8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d1203ea05a3f9995b259eb8c12fe48f8 == cache_frame_d1203ea05a3f9995b259eb8c12fe48f8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d1203ea05a3f9995b259eb8c12fe48f8);
        cache_frame_d1203ea05a3f9995b259eb8c12fe48f8 = NULL;
    }

    assertFrameObject(frame_d1203ea05a3f9995b259eb8c12fe48f8);

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


static PyObject *impl_flet_core$navigation_rail$$$function__34_extended(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_cc80d8aa386213e26cae9cabc954d8ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cc80d8aa386213e26cae9cabc954d8ac = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cc80d8aa386213e26cae9cabc954d8ac)) {
        Py_XDECREF(cache_frame_cc80d8aa386213e26cae9cabc954d8ac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cc80d8aa386213e26cae9cabc954d8ac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cc80d8aa386213e26cae9cabc954d8ac = MAKE_FUNCTION_FRAME(codeobj_cc80d8aa386213e26cae9cabc954d8ac, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cc80d8aa386213e26cae9cabc954d8ac->m_type_description == NULL);
    frame_cc80d8aa386213e26cae9cabc954d8ac = cache_frame_cc80d8aa386213e26cae9cabc954d8ac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cc80d8aa386213e26cae9cabc954d8ac);
    assert(Py_REFCNT(frame_cc80d8aa386213e26cae9cabc954d8ac) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[33];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_cc80d8aa386213e26cae9cabc954d8ac->m_frame.f_lineno = 352;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[25],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
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
        exception_tb = MAKE_TRACEBACK(frame_cc80d8aa386213e26cae9cabc954d8ac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cc80d8aa386213e26cae9cabc954d8ac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc80d8aa386213e26cae9cabc954d8ac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cc80d8aa386213e26cae9cabc954d8ac,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_cc80d8aa386213e26cae9cabc954d8ac == cache_frame_cc80d8aa386213e26cae9cabc954d8ac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cc80d8aa386213e26cae9cabc954d8ac);
        cache_frame_cc80d8aa386213e26cae9cabc954d8ac = NULL;
    }

    assertFrameObject(frame_cc80d8aa386213e26cae9cabc954d8ac);

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


static PyObject *impl_flet_core$navigation_rail$$$function__35_leading(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a88bacb7f488561cb3ed6ce7faa95593;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a88bacb7f488561cb3ed6ce7faa95593 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a88bacb7f488561cb3ed6ce7faa95593)) {
        Py_XDECREF(cache_frame_a88bacb7f488561cb3ed6ce7faa95593);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a88bacb7f488561cb3ed6ce7faa95593 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a88bacb7f488561cb3ed6ce7faa95593 = MAKE_FUNCTION_FRAME(codeobj_a88bacb7f488561cb3ed6ce7faa95593, module_flet_core$navigation_rail, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a88bacb7f488561cb3ed6ce7faa95593->m_type_description == NULL);
    frame_a88bacb7f488561cb3ed6ce7faa95593 = cache_frame_a88bacb7f488561cb3ed6ce7faa95593;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a88bacb7f488561cb3ed6ce7faa95593);
    assert(Py_REFCNT(frame_a88bacb7f488561cb3ed6ce7faa95593) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[36]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
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
        exception_tb = MAKE_TRACEBACK(frame_a88bacb7f488561cb3ed6ce7faa95593, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a88bacb7f488561cb3ed6ce7faa95593->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a88bacb7f488561cb3ed6ce7faa95593, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a88bacb7f488561cb3ed6ce7faa95593,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a88bacb7f488561cb3ed6ce7faa95593 == cache_frame_a88bacb7f488561cb3ed6ce7faa95593) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a88bacb7f488561cb3ed6ce7faa95593);
        cache_frame_a88bacb7f488561cb3ed6ce7faa95593 = NULL;
    }

    assertFrameObject(frame_a88bacb7f488561cb3ed6ce7faa95593);

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


static PyObject *impl_flet_core$navigation_rail$$$function__36_leading(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_f445d997746a78a3fd44fcc1da7ce3cc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f445d997746a78a3fd44fcc1da7ce3cc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f445d997746a78a3fd44fcc1da7ce3cc)) {
        Py_XDECREF(cache_frame_f445d997746a78a3fd44fcc1da7ce3cc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f445d997746a78a3fd44fcc1da7ce3cc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f445d997746a78a3fd44fcc1da7ce3cc = MAKE_FUNCTION_FRAME(codeobj_f445d997746a78a3fd44fcc1da7ce3cc, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f445d997746a78a3fd44fcc1da7ce3cc->m_type_description == NULL);
    frame_f445d997746a78a3fd44fcc1da7ce3cc = cache_frame_f445d997746a78a3fd44fcc1da7ce3cc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f445d997746a78a3fd44fcc1da7ce3cc);
    assert(Py_REFCNT(frame_f445d997746a78a3fd44fcc1da7ce3cc) == 2);

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


            exception_lineno = 361;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f445d997746a78a3fd44fcc1da7ce3cc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f445d997746a78a3fd44fcc1da7ce3cc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f445d997746a78a3fd44fcc1da7ce3cc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f445d997746a78a3fd44fcc1da7ce3cc,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_f445d997746a78a3fd44fcc1da7ce3cc == cache_frame_f445d997746a78a3fd44fcc1da7ce3cc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f445d997746a78a3fd44fcc1da7ce3cc);
        cache_frame_f445d997746a78a3fd44fcc1da7ce3cc = NULL;
    }

    assertFrameObject(frame_f445d997746a78a3fd44fcc1da7ce3cc);

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


static PyObject *impl_flet_core$navigation_rail$$$function__37_trailing(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6889d66cf159b415930bb922f1fdae95;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6889d66cf159b415930bb922f1fdae95 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6889d66cf159b415930bb922f1fdae95)) {
        Py_XDECREF(cache_frame_6889d66cf159b415930bb922f1fdae95);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6889d66cf159b415930bb922f1fdae95 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6889d66cf159b415930bb922f1fdae95 = MAKE_FUNCTION_FRAME(codeobj_6889d66cf159b415930bb922f1fdae95, module_flet_core$navigation_rail, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6889d66cf159b415930bb922f1fdae95->m_type_description == NULL);
    frame_6889d66cf159b415930bb922f1fdae95 = cache_frame_6889d66cf159b415930bb922f1fdae95;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6889d66cf159b415930bb922f1fdae95);
    assert(Py_REFCNT(frame_6889d66cf159b415930bb922f1fdae95) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[38]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
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
        exception_tb = MAKE_TRACEBACK(frame_6889d66cf159b415930bb922f1fdae95, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6889d66cf159b415930bb922f1fdae95->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6889d66cf159b415930bb922f1fdae95, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6889d66cf159b415930bb922f1fdae95,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6889d66cf159b415930bb922f1fdae95 == cache_frame_6889d66cf159b415930bb922f1fdae95) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6889d66cf159b415930bb922f1fdae95);
        cache_frame_6889d66cf159b415930bb922f1fdae95 = NULL;
    }

    assertFrameObject(frame_6889d66cf159b415930bb922f1fdae95);

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


static PyObject *impl_flet_core$navigation_rail$$$function__38_trailing(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_edae13ed398b0527c060a5719862b6a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_edae13ed398b0527c060a5719862b6a8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_edae13ed398b0527c060a5719862b6a8)) {
        Py_XDECREF(cache_frame_edae13ed398b0527c060a5719862b6a8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_edae13ed398b0527c060a5719862b6a8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_edae13ed398b0527c060a5719862b6a8 = MAKE_FUNCTION_FRAME(codeobj_edae13ed398b0527c060a5719862b6a8, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_edae13ed398b0527c060a5719862b6a8->m_type_description == NULL);
    frame_edae13ed398b0527c060a5719862b6a8 = cache_frame_edae13ed398b0527c060a5719862b6a8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_edae13ed398b0527c060a5719862b6a8);
    assert(Py_REFCNT(frame_edae13ed398b0527c060a5719862b6a8) == 2);

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


            exception_lineno = 370;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_edae13ed398b0527c060a5719862b6a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_edae13ed398b0527c060a5719862b6a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_edae13ed398b0527c060a5719862b6a8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_edae13ed398b0527c060a5719862b6a8,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_edae13ed398b0527c060a5719862b6a8 == cache_frame_edae13ed398b0527c060a5719862b6a8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_edae13ed398b0527c060a5719862b6a8);
        cache_frame_edae13ed398b0527c060a5719862b6a8 = NULL;
    }

    assertFrameObject(frame_edae13ed398b0527c060a5719862b6a8);

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


static PyObject *impl_flet_core$navigation_rail$$$function__39_min_width(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_08b6ca016628de7c6868e4abcdad7ee8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_08b6ca016628de7c6868e4abcdad7ee8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_08b6ca016628de7c6868e4abcdad7ee8)) {
        Py_XDECREF(cache_frame_08b6ca016628de7c6868e4abcdad7ee8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_08b6ca016628de7c6868e4abcdad7ee8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_08b6ca016628de7c6868e4abcdad7ee8 = MAKE_FUNCTION_FRAME(codeobj_08b6ca016628de7c6868e4abcdad7ee8, module_flet_core$navigation_rail, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_08b6ca016628de7c6868e4abcdad7ee8->m_type_description == NULL);
    frame_08b6ca016628de7c6868e4abcdad7ee8 = cache_frame_08b6ca016628de7c6868e4abcdad7ee8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_08b6ca016628de7c6868e4abcdad7ee8);
    assert(Py_REFCNT(frame_08b6ca016628de7c6868e4abcdad7ee8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_08b6ca016628de7c6868e4abcdad7ee8->m_frame.f_lineno = 375;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[63], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
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
        exception_tb = MAKE_TRACEBACK(frame_08b6ca016628de7c6868e4abcdad7ee8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_08b6ca016628de7c6868e4abcdad7ee8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_08b6ca016628de7c6868e4abcdad7ee8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_08b6ca016628de7c6868e4abcdad7ee8,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_08b6ca016628de7c6868e4abcdad7ee8 == cache_frame_08b6ca016628de7c6868e4abcdad7ee8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_08b6ca016628de7c6868e4abcdad7ee8);
        cache_frame_08b6ca016628de7c6868e4abcdad7ee8 = NULL;
    }

    assertFrameObject(frame_08b6ca016628de7c6868e4abcdad7ee8);

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


static PyObject *impl_flet_core$navigation_rail$$$function__40_min_width(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_d87c8129a8eafe6c2674124088002912;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d87c8129a8eafe6c2674124088002912 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d87c8129a8eafe6c2674124088002912)) {
        Py_XDECREF(cache_frame_d87c8129a8eafe6c2674124088002912);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d87c8129a8eafe6c2674124088002912 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d87c8129a8eafe6c2674124088002912 = MAKE_FUNCTION_FRAME(codeobj_d87c8129a8eafe6c2674124088002912, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d87c8129a8eafe6c2674124088002912->m_type_description == NULL);
    frame_d87c8129a8eafe6c2674124088002912 = cache_frame_d87c8129a8eafe6c2674124088002912;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d87c8129a8eafe6c2674124088002912);
    assert(Py_REFCNT(frame_d87c8129a8eafe6c2674124088002912) == 2);

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
        frame_d87c8129a8eafe6c2674124088002912->m_frame.f_lineno = 379;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[25],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
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
        exception_tb = MAKE_TRACEBACK(frame_d87c8129a8eafe6c2674124088002912, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d87c8129a8eafe6c2674124088002912->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d87c8129a8eafe6c2674124088002912, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d87c8129a8eafe6c2674124088002912,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_d87c8129a8eafe6c2674124088002912 == cache_frame_d87c8129a8eafe6c2674124088002912) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d87c8129a8eafe6c2674124088002912);
        cache_frame_d87c8129a8eafe6c2674124088002912 = NULL;
    }

    assertFrameObject(frame_d87c8129a8eafe6c2674124088002912);

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


static PyObject *impl_flet_core$navigation_rail$$$function__41_min_extended_width(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5faf9cd611ad81078bbc812b5004b573;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5faf9cd611ad81078bbc812b5004b573 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5faf9cd611ad81078bbc812b5004b573)) {
        Py_XDECREF(cache_frame_5faf9cd611ad81078bbc812b5004b573);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5faf9cd611ad81078bbc812b5004b573 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5faf9cd611ad81078bbc812b5004b573 = MAKE_FUNCTION_FRAME(codeobj_5faf9cd611ad81078bbc812b5004b573, module_flet_core$navigation_rail, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5faf9cd611ad81078bbc812b5004b573->m_type_description == NULL);
    frame_5faf9cd611ad81078bbc812b5004b573 = cache_frame_5faf9cd611ad81078bbc812b5004b573;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5faf9cd611ad81078bbc812b5004b573);
    assert(Py_REFCNT(frame_5faf9cd611ad81078bbc812b5004b573) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_5faf9cd611ad81078bbc812b5004b573->m_frame.f_lineno = 384;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[65], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
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
        exception_tb = MAKE_TRACEBACK(frame_5faf9cd611ad81078bbc812b5004b573, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5faf9cd611ad81078bbc812b5004b573->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5faf9cd611ad81078bbc812b5004b573, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5faf9cd611ad81078bbc812b5004b573,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5faf9cd611ad81078bbc812b5004b573 == cache_frame_5faf9cd611ad81078bbc812b5004b573) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5faf9cd611ad81078bbc812b5004b573);
        cache_frame_5faf9cd611ad81078bbc812b5004b573 = NULL;
    }

    assertFrameObject(frame_5faf9cd611ad81078bbc812b5004b573);

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


static PyObject *impl_flet_core$navigation_rail$$$function__42_min_extended_width(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_4ae380a675273c2c77e80c1f426d6e94;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4ae380a675273c2c77e80c1f426d6e94 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4ae380a675273c2c77e80c1f426d6e94)) {
        Py_XDECREF(cache_frame_4ae380a675273c2c77e80c1f426d6e94);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4ae380a675273c2c77e80c1f426d6e94 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4ae380a675273c2c77e80c1f426d6e94 = MAKE_FUNCTION_FRAME(codeobj_4ae380a675273c2c77e80c1f426d6e94, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4ae380a675273c2c77e80c1f426d6e94->m_type_description == NULL);
    frame_4ae380a675273c2c77e80c1f426d6e94 = cache_frame_4ae380a675273c2c77e80c1f426d6e94;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4ae380a675273c2c77e80c1f426d6e94);
    assert(Py_REFCNT(frame_4ae380a675273c2c77e80c1f426d6e94) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[66];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_4ae380a675273c2c77e80c1f426d6e94->m_frame.f_lineno = 388;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[25],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
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
        exception_tb = MAKE_TRACEBACK(frame_4ae380a675273c2c77e80c1f426d6e94, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ae380a675273c2c77e80c1f426d6e94->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ae380a675273c2c77e80c1f426d6e94, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4ae380a675273c2c77e80c1f426d6e94,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_4ae380a675273c2c77e80c1f426d6e94 == cache_frame_4ae380a675273c2c77e80c1f426d6e94) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4ae380a675273c2c77e80c1f426d6e94);
        cache_frame_4ae380a675273c2c77e80c1f426d6e94 = NULL;
    }

    assertFrameObject(frame_4ae380a675273c2c77e80c1f426d6e94);

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


static PyObject *impl_flet_core$navigation_rail$$$function__43_group_alignment(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_80d7b239071f5ea20f3a917fb6218b10;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_80d7b239071f5ea20f3a917fb6218b10 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_80d7b239071f5ea20f3a917fb6218b10)) {
        Py_XDECREF(cache_frame_80d7b239071f5ea20f3a917fb6218b10);

#if _DEBUG_REFCOUNTS
        if (cache_frame_80d7b239071f5ea20f3a917fb6218b10 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_80d7b239071f5ea20f3a917fb6218b10 = MAKE_FUNCTION_FRAME(codeobj_80d7b239071f5ea20f3a917fb6218b10, module_flet_core$navigation_rail, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_80d7b239071f5ea20f3a917fb6218b10->m_type_description == NULL);
    frame_80d7b239071f5ea20f3a917fb6218b10 = cache_frame_80d7b239071f5ea20f3a917fb6218b10;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_80d7b239071f5ea20f3a917fb6218b10);
    assert(Py_REFCNT(frame_80d7b239071f5ea20f3a917fb6218b10) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_80d7b239071f5ea20f3a917fb6218b10->m_frame.f_lineno = 393;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[67], 0)
        );

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
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
        exception_tb = MAKE_TRACEBACK(frame_80d7b239071f5ea20f3a917fb6218b10, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_80d7b239071f5ea20f3a917fb6218b10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_80d7b239071f5ea20f3a917fb6218b10, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_80d7b239071f5ea20f3a917fb6218b10,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_80d7b239071f5ea20f3a917fb6218b10 == cache_frame_80d7b239071f5ea20f3a917fb6218b10) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_80d7b239071f5ea20f3a917fb6218b10);
        cache_frame_80d7b239071f5ea20f3a917fb6218b10 = NULL;
    }

    assertFrameObject(frame_80d7b239071f5ea20f3a917fb6218b10);

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


static PyObject *impl_flet_core$navigation_rail$$$function__44_group_alignment(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_f11db2b9c4f49af49a08c92837569d16;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f11db2b9c4f49af49a08c92837569d16 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f11db2b9c4f49af49a08c92837569d16)) {
        Py_XDECREF(cache_frame_f11db2b9c4f49af49a08c92837569d16);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f11db2b9c4f49af49a08c92837569d16 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f11db2b9c4f49af49a08c92837569d16 = MAKE_FUNCTION_FRAME(codeobj_f11db2b9c4f49af49a08c92837569d16, module_flet_core$navigation_rail, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f11db2b9c4f49af49a08c92837569d16->m_type_description == NULL);
    frame_f11db2b9c4f49af49a08c92837569d16 = cache_frame_f11db2b9c4f49af49a08c92837569d16;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f11db2b9c4f49af49a08c92837569d16);
    assert(Py_REFCNT(frame_f11db2b9c4f49af49a08c92837569d16) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        tmp_args_element_value_1 = mod_consts[68];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_f11db2b9c4f49af49a08c92837569d16->m_frame.f_lineno = 397;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[25],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
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
        exception_tb = MAKE_TRACEBACK(frame_f11db2b9c4f49af49a08c92837569d16, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f11db2b9c4f49af49a08c92837569d16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f11db2b9c4f49af49a08c92837569d16, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f11db2b9c4f49af49a08c92837569d16,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_f11db2b9c4f49af49a08c92837569d16 == cache_frame_f11db2b9c4f49af49a08c92837569d16) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f11db2b9c4f49af49a08c92837569d16);
        cache_frame_f11db2b9c4f49af49a08c92837569d16 = NULL;
    }

    assertFrameObject(frame_f11db2b9c4f49af49a08c92837569d16);

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



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__10_selected_icon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__10_selected_icon,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_f3a070c15d8db588c0453b1177aeac76,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__11_selected_icon_content(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__11_selected_icon_content,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_5820b498490fb39257355b8df22a9763,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__12_selected_icon_content(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__12_selected_icon_content,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_07bed50efbf6bbeba14154ba746d1a90,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__13_label() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__13_label,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_c5f33c5ca2334592fdb19c325437c246,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__14_label() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__14_label,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_1db6307c03d452f2ab4a199d0c9db7f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__15_label_content(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__15_label_content,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_ec0b8081b0af50e734b41e24864b28c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__16_label_content(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__16_label_content,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_ce4fda95cba07e8b96ff6c445cf4ae1a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__17_padding(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__17_padding,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_eb92dfacb381377c81c836a696114bd3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__18_padding(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__18_padding,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_526a314e9ca94be10d43bfaebdfb1bf6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__19___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__19___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_9b4fd86021d17c87100bac06b7b32292,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_7ef46ffb019baa860a6ab7b7d1a0216b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__20__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_1bc458ddd2c596a5ca036907fffe8b7c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[169]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__21__get_children() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__21__get_children,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_3110482aa1cc3d147eeb88bea101ed33,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__22_destinations(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__22_destinations,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_76f1dd3d6595e2936daed0027df8973c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__23_destinations(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__23_destinations,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_8ec2620f69329bf698de507834c10c0e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__24_on_change() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__24_on_change,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_69870313b818336e414cb240ae5612f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__25_on_change() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__25_on_change,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_41015cfc216fb371ea4cb580f0bf8d5f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__26_selected_index(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__26_selected_index,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_b94ec56fc7a5ebf44e3e3a8defa18171,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__27_selected_index(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__27_selected_index,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_69208d47a984697375227662a67a9f7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__28_label_type(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__28_label_type,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_c8b38f61adbc91ef08d31a7e665c46af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__29_label_type(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__29_label_type,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_bd50fa5b1efd7b79ee9a745ebfd98d7c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__2__get_control_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_40eea8be3a38a70ad2bbb36392177afa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[125]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__30___set_label_type(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__30___set_label_type,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_ffa1722f0f3424d40fc00721fcb68f87,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__31_bgcolor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__31_bgcolor,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_9292e09f3f0aeace7f880dc581b82fa9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__32_bgcolor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__32_bgcolor,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_55ca09047d2f140f28fa2860ae01b165,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__33_extended(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__33_extended,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_d1203ea05a3f9995b259eb8c12fe48f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__34_extended(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__34_extended,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_cc80d8aa386213e26cae9cabc954d8ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__35_leading(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__35_leading,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_a88bacb7f488561cb3ed6ce7faa95593,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__36_leading(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__36_leading,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_f445d997746a78a3fd44fcc1da7ce3cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__37_trailing(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__37_trailing,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_6889d66cf159b415930bb922f1fdae95,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__38_trailing(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__38_trailing,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_edae13ed398b0527c060a5719862b6a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__39_min_width(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__39_min_width,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_08b6ca016628de7c6868e4abcdad7ee8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__3__before_build_command(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__3__before_build_command,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_3157465c1a22968e74624fb26fef5cb4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$navigation_rail,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__40_min_width(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__40_min_width,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_d87c8129a8eafe6c2674124088002912,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__41_min_extended_width(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__41_min_extended_width,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[183],
#endif
        codeobj_5faf9cd611ad81078bbc812b5004b573,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__42_min_extended_width(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__42_min_extended_width,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[183],
#endif
        codeobj_4ae380a675273c2c77e80c1f426d6e94,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__43_group_alignment(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__43_group_alignment,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_80d7b239071f5ea20f3a917fb6218b10,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__44_group_alignment(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__44_group_alignment,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_f11db2b9c4f49af49a08c92837569d16,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__4__get_children() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__4__get_children,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_e9863afbb3f53b67b9ddcc48d1beb18a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__5_icon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__5_icon,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_8f053fec81568ec4da6f46a17f2bb2af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__6_icon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__6_icon,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[132],
#endif
        codeobj_d1464efb724cd951086729f73f27851b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__7_icon_content(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__7_icon_content,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_e034576e3f0c83fd9d177d2806b8f134,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__8_icon_content(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__8_icon_content,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_d3568def4a3064b854ebc38f74b2a459,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet_core$navigation_rail,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet_core$navigation_rail$$$function__9_selected_icon() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet_core$navigation_rail$$$function__9_selected_icon,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_459024a8aa315c904ebe09e8afaf7a3f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet_core$navigation_rail,
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

function_impl_code functable_flet_core$navigation_rail[] = {
    impl_flet_core$navigation_rail$$$function__1___init__,
    NULL,
    impl_flet_core$navigation_rail$$$function__3__before_build_command,
    impl_flet_core$navigation_rail$$$function__4__get_children,
    impl_flet_core$navigation_rail$$$function__5_icon,
    impl_flet_core$navigation_rail$$$function__6_icon,
    impl_flet_core$navigation_rail$$$function__7_icon_content,
    impl_flet_core$navigation_rail$$$function__8_icon_content,
    impl_flet_core$navigation_rail$$$function__9_selected_icon,
    impl_flet_core$navigation_rail$$$function__10_selected_icon,
    impl_flet_core$navigation_rail$$$function__11_selected_icon_content,
    impl_flet_core$navigation_rail$$$function__12_selected_icon_content,
    impl_flet_core$navigation_rail$$$function__13_label,
    impl_flet_core$navigation_rail$$$function__14_label,
    impl_flet_core$navigation_rail$$$function__15_label_content,
    impl_flet_core$navigation_rail$$$function__16_label_content,
    impl_flet_core$navigation_rail$$$function__17_padding,
    impl_flet_core$navigation_rail$$$function__18_padding,
    impl_flet_core$navigation_rail$$$function__19___init__,
    NULL,
    impl_flet_core$navigation_rail$$$function__21__get_children,
    impl_flet_core$navigation_rail$$$function__22_destinations,
    impl_flet_core$navigation_rail$$$function__23_destinations,
    impl_flet_core$navigation_rail$$$function__24_on_change,
    impl_flet_core$navigation_rail$$$function__25_on_change,
    impl_flet_core$navigation_rail$$$function__26_selected_index,
    impl_flet_core$navigation_rail$$$function__27_selected_index,
    impl_flet_core$navigation_rail$$$function__28_label_type,
    impl_flet_core$navigation_rail$$$function__29_label_type,
    impl_flet_core$navigation_rail$$$function__30___set_label_type,
    impl_flet_core$navigation_rail$$$function__31_bgcolor,
    impl_flet_core$navigation_rail$$$function__32_bgcolor,
    impl_flet_core$navigation_rail$$$function__33_extended,
    impl_flet_core$navigation_rail$$$function__34_extended,
    impl_flet_core$navigation_rail$$$function__35_leading,
    impl_flet_core$navigation_rail$$$function__36_leading,
    impl_flet_core$navigation_rail$$$function__37_trailing,
    impl_flet_core$navigation_rail$$$function__38_trailing,
    impl_flet_core$navigation_rail$$$function__39_min_width,
    impl_flet_core$navigation_rail$$$function__40_min_width,
    impl_flet_core$navigation_rail$$$function__41_min_extended_width,
    impl_flet_core$navigation_rail$$$function__42_min_extended_width,
    impl_flet_core$navigation_rail$$$function__43_group_alignment,
    impl_flet_core$navigation_rail$$$function__44_group_alignment,
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

    function_impl_code *current = functable_flet_core$navigation_rail;
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

    if (offset > sizeof(functable_flet_core$navigation_rail) || offset < 0) {
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
        functable_flet_core$navigation_rail[offset],
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
        module_flet_core$navigation_rail,
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
PyObject *modulecode_flet_core$navigation_rail(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet_core.navigation_rail");

    // Store the module for future use.
    module_flet_core$navigation_rail = module;

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
        PRINT_STRING("flet_core.navigation_rail: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.navigation_rail: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet_core.navigation_rail: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet_core$navigation_rail\n");

    moduledict_flet_core$navigation_rail = MODULE_DICT(module_flet_core$navigation_rail);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet_core$navigation_rail,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet_core$navigation_rail,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[194]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet_core$navigation_rail,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$navigation_rail,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet_core$navigation_rail,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet_core$navigation_rail);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet_core$navigation_rail);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    struct Nuitka_CellObject *outline_1_var___class__ = Nuitka_Cell_Empty();
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
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_f1779819eb193d13a84507221320dd11;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *locals_flet_core$navigation_rail$$$class__1_NavigationRailLabelType_24 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_de96bb8471c7b3495a406a03bc9de25c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30 = NULL;
    struct Nuitka_FrameObject *frame_e1933c09ca4d707bd29b9e4de022043b_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *locals_flet_core$navigation_rail$$$class__3_NavigationRail_140 = NULL;
    struct Nuitka_FrameObject *frame_a3d1e32d5b6a5452979d15065f4dfe0c_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_2);
    }
    frame_f1779819eb193d13a84507221320dd11 = MAKE_MODULE_FRAME(codeobj_f1779819eb193d13a84507221320dd11, module_flet_core$navigation_rail);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f1779819eb193d13a84507221320dd11);
    assert(Py_REFCNT(frame_f1779819eb193d13a84507221320dd11) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[70];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[73], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[74], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[76];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet_core$navigation_rail;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[77];
        tmp_level_value_1 = mod_consts[78];
        frame_f1779819eb193d13a84507221320dd11->m_frame.f_lineno = 1;
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
                (PyObject *)moduledict_flet_core$navigation_rail,
                mod_consts[79],
                mod_consts[78]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[79]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_4);
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
                (PyObject *)moduledict_flet_core$navigation_rail,
                mod_consts[80],
                mod_consts[78]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[80]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_flet_core$navigation_rail,
                mod_consts[81],
                mod_consts[78]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[81]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_flet_core$navigation_rail,
                mod_consts[82],
                mod_consts[78]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[82]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_flet_core$navigation_rail,
                mod_consts[83],
                mod_consts[78]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[83]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_9);
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
        tmp_name_value_2 = mod_consts[84];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet_core$navigation_rail;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[85];
        tmp_level_value_2 = mod_consts[78];
        frame_f1779819eb193d13a84507221320dd11->m_frame.f_lineno = 4;
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
                (PyObject *)moduledict_flet_core$navigation_rail,
                mod_consts[29],
                mod_consts[78]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[86];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet_core$navigation_rail;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[87];
        tmp_level_value_3 = mod_consts[78];
        frame_f1779819eb193d13a84507221320dd11->m_frame.f_lineno = 5;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_flet_core$navigation_rail,
                mod_consts[0],
                mod_consts[78]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[0]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_flet_core$navigation_rail,
                mod_consts[88],
                mod_consts[78]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[88]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_13);
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[89];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet_core$navigation_rail;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[90];
        tmp_level_value_4 = mod_consts[78];
        frame_f1779819eb193d13a84507221320dd11->m_frame.f_lineno = 6;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_flet_core$navigation_rail,
                mod_consts[91],
                mod_consts[78]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[91]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[92];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_flet_core$navigation_rail;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[93];
        tmp_level_value_5 = mod_consts[78];
        frame_f1779819eb193d13a84507221320dd11->m_frame.f_lineno = 7;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

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
                (PyObject *)moduledict_flet_core$navigation_rail,
                mod_consts[94],
                mod_consts[78]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[94]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_flet_core$navigation_rail,
                mod_consts[95],
                mod_consts[78]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[95]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_flet_core$navigation_rail,
                mod_consts[96],
                mod_consts[78]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[96]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_flet_core$navigation_rail,
                mod_consts[97],
                mod_consts[78]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[97]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_14 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_flet_core$navigation_rail,
                mod_consts[98],
                mod_consts[78]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[98]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_15 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_flet_core$navigation_rail,
                mod_consts[99],
                mod_consts[78]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[99]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_21);
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
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        tmp_import_name_from_16 = IMPORT_HARD_TYPING();
        assert(!(tmp_import_name_from_16 == NULL));
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_flet_core$navigation_rail,
                mod_consts[100],
                mod_consts[78]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_16, mod_consts[100]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_22);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_4 == NULL) {
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_f1779819eb193d13a84507221320dd11, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_f1779819eb193d13a84507221320dd11, exception_keeper_lineno_4);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
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
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[101];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_flet_core$navigation_rail;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[102];
        tmp_level_value_6 = mod_consts[78];
        frame_f1779819eb193d13a84507221320dd11->m_frame.f_lineno = 19;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_5;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_flet_core$navigation_rail,
                mod_consts[100],
                mod_consts[78]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_17, mod_consts[100]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_23);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 16;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f1779819eb193d13a84507221320dd11->m_frame) frame_f1779819eb193d13a84507221320dd11->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_5;
    branch_end_1:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_4;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_subscript_value_1 = mod_consts[103];
        tmp_assign_source_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_24);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_6;
        }
        tmp_assign_source_25 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_25, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_26 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
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


            exception_lineno = 24;

            goto try_except_handler_6;
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
        tmp_subscript_value_2 = mod_consts[78];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_6;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_28 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_28;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[105]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[105]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_6;
        }
        tmp_tuple_element_2 = mod_consts[56];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_f1779819eb193d13a84507221320dd11->m_frame.f_lineno = 24;
        tmp_assign_source_29 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_29;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[106]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_6;
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
        tmp_mod_expr_left_1 = mod_consts[107];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[108];
        tmp_getattr_default_1 = mod_consts[109];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_6;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[108]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 24;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_30;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_31;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet_core$navigation_rail$$$class__1_NavigationRailLabelType_24 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__1_NavigationRailLabelType_24, mod_consts[111], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[56];
        tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__1_NavigationRailLabelType_24, mod_consts[112], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_8;
        }
        frame_de96bb8471c7b3495a406a03bc9de25c_2 = MAKE_CLASS_FRAME(codeobj_de96bb8471c7b3495a406a03bc9de25c, module_flet_core$navigation_rail, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_de96bb8471c7b3495a406a03bc9de25c_2);
        assert(Py_REFCNT(frame_de96bb8471c7b3495a406a03bc9de25c_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[113];
        tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__1_NavigationRailLabelType_24, mod_consts[114], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__1_NavigationRailLabelType_24, mod_consts[116], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[117];
        tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__1_NavigationRailLabelType_24, mod_consts[118], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_de96bb8471c7b3495a406a03bc9de25c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_de96bb8471c7b3495a406a03bc9de25c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_de96bb8471c7b3495a406a03bc9de25c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_de96bb8471c7b3495a406a03bc9de25c_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_de96bb8471c7b3495a406a03bc9de25c_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_8;
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


                exception_lineno = 24;

                goto try_except_handler_8;
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
        tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__1_NavigationRailLabelType_24, mod_consts[119], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto try_except_handler_8;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[56];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_flet_core$navigation_rail$$$class__1_NavigationRailLabelType_24;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_f1779819eb193d13a84507221320dd11->m_frame.f_lineno = 24;
            tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;

                goto try_except_handler_8;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_32;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_31 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_flet_core$navigation_rail$$$class__1_NavigationRailLabelType_24);
        locals_flet_core$navigation_rail$$$class__1_NavigationRailLabelType_24 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$navigation_rail$$$class__1_NavigationRailLabelType_24);
        locals_flet_core$navigation_rail$$$class__1_NavigationRailLabelType_24 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 24;
        goto try_except_handler_6;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_31);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
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
        PyObject *tmp_assign_source_33;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_9;
        }
        tmp_assign_source_33 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_34 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_9;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_7 = tmp_class_creation_2__bases;
        tmp_subscript_value_3 = mod_consts[78];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_3, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_9;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_36 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_36;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_8, mod_consts[105]);
        tmp_condition_result_7 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[105]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_9;
        }
        tmp_tuple_element_6 = mod_consts[120];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_f1779819eb193d13a84507221320dd11->m_frame.f_lineno = 30;
        tmp_assign_source_37 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_37;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_10 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_10, mod_consts[106]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_9;
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
        tmp_mod_expr_left_2 = mod_consts[107];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[108];
        tmp_getattr_default_2 = mod_consts[109];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_11 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_11 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[108]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 30;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_38;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[111], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[120];
        tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[112], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_11;
        }
        frame_e1933c09ca4d707bd29b9e4de022043b_3 = MAKE_CLASS_FRAME(codeobj_e1933c09ca4d707bd29b9e4de022043b, module_flet_core$navigation_rail, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_e1933c09ca4d707bd29b9e4de022043b_3);
        assert(Py_REFCNT(frame_e1933c09ca4d707bd29b9e4de022043b_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_4;
            tmp_defaults_1 = mod_consts[121];
            tmp_dict_key_1 = mod_consts[122];
            tmp_expression_value_12 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[82]);

            if (tmp_expression_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_12 == NULL)) {
                        tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 33;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_12);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_4 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[91]);

            if (tmp_subscript_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[91]);

                    if (unlikely(tmp_subscript_value_4 == NULL)) {
                        tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
                    }

                    if (tmp_subscript_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_12);

                        exception_lineno = 33;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_4);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_4);
            Py_DECREF(tmp_expression_value_12);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 8 );
            {
                PyObject *tmp_expression_value_13;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_subscript_value_6;
                PyObject *tmp_expression_value_15;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_subscript_value_8;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_subscript_value_10;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[4];
                tmp_expression_value_13 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[82]);

                if (tmp_expression_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_expression_value_13 == NULL)) {
                            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                        }

                        if (tmp_expression_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 34;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_13);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_5 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[123]);

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


                    exception_lineno = 34;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[6];
                tmp_expression_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[82]);

                if (tmp_expression_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_expression_value_14 == NULL)) {
                            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                        }

                        if (tmp_expression_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 35;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_14);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[0]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                        if (unlikely(tmp_subscript_value_6 == NULL)) {
                            tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                        }

                        if (tmp_subscript_value_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_14);

                            exception_lineno = 35;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
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


                    exception_lineno = 35;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[7];
                tmp_expression_value_15 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[82]);

                if (tmp_expression_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_expression_value_15 == NULL)) {
                            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                        }

                        if (tmp_expression_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 36;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_15);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_7 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[123]);

                if (tmp_subscript_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_7 = (PyObject *)&PyUnicode_Type;
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


                    exception_lineno = 36;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[9];
                tmp_expression_value_16 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[82]);

                if (tmp_expression_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_expression_value_16 == NULL)) {
                            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                        }

                        if (tmp_expression_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 37;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_16);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_8 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[0]);

                if (tmp_subscript_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_8 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                        if (unlikely(tmp_subscript_value_8 == NULL)) {
                            tmp_subscript_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                        }

                        if (tmp_subscript_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_16);

                            exception_lineno = 37;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_8);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_16);
                Py_DECREF(tmp_subscript_value_8);
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
                tmp_dict_key_1 = mod_consts[3];
                tmp_expression_value_17 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[82]);

                if (tmp_expression_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_expression_value_17 == NULL)) {
                            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                        }

                        if (tmp_expression_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 38;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_17);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_9 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[123]);

                if (tmp_subscript_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_9 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_9);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_17);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[11];
                tmp_expression_value_18 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[82]);

                if (tmp_expression_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_expression_value_18 == NULL)) {
                            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                        }

                        if (tmp_expression_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 39;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_18);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_10 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[0]);

                if (tmp_subscript_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_10 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                        if (unlikely(tmp_subscript_value_10 == NULL)) {
                            tmp_subscript_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                        }

                        if (tmp_subscript_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_18);

                            exception_lineno = 39;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_subscript_value_10);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_18);
                Py_DECREF(tmp_subscript_value_10);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[12];
                tmp_dict_value_1 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[96]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[96]);

                        if (unlikely(tmp_dict_value_1 == NULL)) {
                            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
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
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$navigation_rail$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$navigation_rail$$$function__2__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[126], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_2 = "c";
            goto frame_exception_exit_3;
        }
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_flet_core$navigation_rail$$$function__3__before_build_command(tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$navigation_rail$$$function__4__get_children();

        tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[129], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_2 = "c";
            goto frame_exception_exit_3;
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_4 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[131]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 77;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__5_icon();

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 77;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__5_icon();

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 77;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_3;
            tmp_called_instance_1 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[4]);

            if (unlikely(tmp_called_instance_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[4]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 81;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_3 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__6_icon();

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 81;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[133], tmp_args_element_value_3);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_12;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_6 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[131]);

            if (unlikely(tmp_called_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 86;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_2 = mod_consts[134];
            tmp_expression_value_19 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[82]);

            if (tmp_expression_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_19 == NULL)) {
                        tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_6);

                        exception_lineno = 87;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_19);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_11 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[0]);

            if (tmp_subscript_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_11 == NULL)) {
                        tmp_subscript_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_6);
                        Py_DECREF(tmp_expression_value_19);

                        exception_lineno = 87;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_11);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_11);
            Py_DECREF(tmp_expression_value_19);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_6);

                exception_lineno = 87;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_args_element_value_4 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__7_icon_content(tmp_annotations_2);

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 86;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_7 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_3 = mod_consts[134];
            tmp_expression_value_20 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[82]);

            if (tmp_expression_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_20 == NULL)) {
                        tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 87;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_20);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_12 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[0]);

            if (tmp_subscript_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_12 == NULL)) {
                        tmp_subscript_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_20);

                        exception_lineno = 87;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_12);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_12);
            Py_DECREF(tmp_expression_value_20);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_args_element_value_5 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__7_icon_content(tmp_annotations_3);

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 86;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_13;
            tmp_expression_value_21 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[6]);

            if (unlikely(tmp_expression_value_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[6]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 90;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[133]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_4 = mod_consts[58];
            tmp_expression_value_22 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[82]);

            if (tmp_expression_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_22 == NULL)) {
                        tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_22 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);

                        exception_lineno = 91;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_22);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_13 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[0]);

            if (tmp_subscript_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_13 == NULL)) {
                        tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_8);
                        Py_DECREF(tmp_expression_value_22);

                        exception_lineno = 91;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_13);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_13);
            Py_DECREF(tmp_expression_value_22);
            Py_DECREF(tmp_subscript_value_13);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 91;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_args_element_value_6 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__8_icon_content(tmp_annotations_4);

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 90;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_8;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_11 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_9 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[131]);

            if (unlikely(tmp_called_value_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 95;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_7 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__9_selected_icon();

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 95;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_10 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_8 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__9_selected_icon();

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 95;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_9;
            tmp_called_instance_2 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[7]);

            if (unlikely(tmp_called_instance_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[7]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 99;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_9 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__10_selected_icon();

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 99;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[133], tmp_args_element_value_9);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_15;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_12 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_11 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[131]);

            if (unlikely(tmp_called_value_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 104;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_5 = mod_consts[134];
            tmp_expression_value_23 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[82]);

            if (tmp_expression_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_23 == NULL)) {
                        tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);

                        exception_lineno = 105;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_23);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[0]);

            if (tmp_subscript_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_14 == NULL)) {
                        tmp_subscript_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);
                        Py_DECREF(tmp_expression_value_23);

                        exception_lineno = 105;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_14);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_23);
            Py_DECREF(tmp_subscript_value_14);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_11);

                exception_lineno = 105;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_10 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__11_selected_icon_content(tmp_annotations_5);

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 104;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_called_value_12 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_6 = mod_consts[134];
            tmp_expression_value_24 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[82]);

            if (tmp_expression_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_24 == NULL)) {
                        tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 105;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_24);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_15 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[0]);

            if (tmp_subscript_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_15 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_15 == NULL)) {
                        tmp_subscript_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_24);

                        exception_lineno = 105;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_15);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_15);
            Py_DECREF(tmp_expression_value_24);
            Py_DECREF(tmp_subscript_value_15);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_args_element_value_11 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__11_selected_icon_content(tmp_annotations_6);

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 104;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_16;
            tmp_expression_value_25 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[9]);

            if (unlikely(tmp_expression_value_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[9]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 108;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[133]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_7 = mod_consts[58];
            tmp_expression_value_26 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[82]);

            if (tmp_expression_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_26 == NULL)) {
                        tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_26 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);

                        exception_lineno = 109;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_26);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_16 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[0]);

            if (tmp_subscript_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_16 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_16 == NULL)) {
                        tmp_subscript_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);
                        Py_DECREF(tmp_expression_value_26);

                        exception_lineno = 109;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_16);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_16);
            Py_DECREF(tmp_expression_value_26);
            Py_DECREF(tmp_subscript_value_16);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_13);

                exception_lineno = 109;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_args_element_value_12 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__12_selected_icon_content(tmp_annotations_7);

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 108;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_14;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_13 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[131]);

            if (unlikely(tmp_called_value_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 113;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_13 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__13_label();

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 113;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_15 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_14 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__13_label();

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 113;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_15;
            tmp_called_instance_3 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[3]);

            if (unlikely(tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[3]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 117;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }


            tmp_args_element_value_15 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__14_label();

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 117;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[133], tmp_args_element_value_15);
            Py_DECREF(tmp_called_instance_3);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_18;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_14 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_8;
            } else {
                goto condexpr_false_8;
            }
            condexpr_true_8:;
            tmp_called_value_16 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[131]);

            if (unlikely(tmp_called_value_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_8 = mod_consts[134];
            tmp_expression_value_27 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[82]);

            if (tmp_expression_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_27 == NULL)) {
                        tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);

                        exception_lineno = 123;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_27);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_17 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[0]);

            if (tmp_subscript_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_17 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_17 == NULL)) {
                        tmp_subscript_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);
                        Py_DECREF(tmp_expression_value_27);

                        exception_lineno = 123;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_17);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_17);
            Py_DECREF(tmp_expression_value_27);
            Py_DECREF(tmp_subscript_value_17);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);

                exception_lineno = 123;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_16 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__15_label_content(tmp_annotations_8);

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 122;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_8;
            condexpr_false_8:;
            tmp_called_value_17 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_9 = mod_consts[134];
            tmp_expression_value_28 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[82]);

            if (tmp_expression_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_28 == NULL)) {
                        tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 123;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_28);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_18 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[0]);

            if (tmp_subscript_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_18 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_18 == NULL)) {
                        tmp_subscript_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_28);

                        exception_lineno = 123;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_18);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_18);
            Py_DECREF(tmp_expression_value_28);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_args_element_value_17 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__15_label_content(tmp_annotations_9);

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 122;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_8:;
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_18;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_19;
            tmp_expression_value_29 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[11]);

            if (unlikely(tmp_expression_value_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[11]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[133]);
            Py_DECREF(tmp_expression_value_29);
            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_10 = mod_consts[58];
            tmp_expression_value_30 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[82]);

            if (tmp_expression_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_30 == NULL)) {
                        tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);

                        exception_lineno = 127;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_30);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_19 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[0]);

            if (tmp_subscript_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_19 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_19 == NULL)) {
                        tmp_subscript_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);
                        Py_DECREF(tmp_expression_value_30);

                        exception_lineno = 127;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_19);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_19);
            Py_DECREF(tmp_expression_value_30);
            Py_DECREF(tmp_subscript_value_19);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_18);

                exception_lineno = 127;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_args_element_value_18 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__16_label_content(tmp_annotations_10);

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 126;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_18);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_18);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[11], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_15 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_9;
            } else {
                goto condexpr_false_9;
            }
            condexpr_true_9:;
            tmp_called_value_19 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[131]);

            if (unlikely(tmp_called_value_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 131;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_11 = mod_consts[134];
            tmp_dict_value_11 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[96]);

            if (tmp_dict_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_dict_value_11 == NULL)) {
                        tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_dict_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_19);

                        exception_lineno = 132;
                        type_description_2 = "c";
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


            tmp_args_element_value_19 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__17_padding(tmp_annotations_11);

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 131;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_19);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_args_element_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_9;
            condexpr_false_9:;
            tmp_called_value_20 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_12 = mod_consts[134];
            tmp_dict_value_12 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[96]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_dict_value_12 == NULL)) {
                        tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_dict_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 132;
                        type_description_2 = "c";
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


            tmp_args_element_value_20 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__17_padding(tmp_annotations_12);

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 131;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_9:;
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_called_value_21;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            tmp_expression_value_31 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[12]);

            if (unlikely(tmp_expression_value_31 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[12]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 135;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[133]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_13 = mod_consts[58];
            tmp_dict_value_13 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[96]);

            if (tmp_dict_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[96]);

                    if (unlikely(tmp_dict_value_13 == NULL)) {
                        tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
                    }

                    if (tmp_dict_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_21);

                        exception_lineno = 136;
                        type_description_2 = "c";
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


            tmp_args_element_value_21 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__18_padding(tmp_annotations_13);

            frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame.f_lineno = 135;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_21);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e1933c09ca4d707bd29b9e4de022043b_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e1933c09ca4d707bd29b9e4de022043b_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e1933c09ca4d707bd29b9e4de022043b_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e1933c09ca4d707bd29b9e4de022043b_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_e1933c09ca4d707bd29b9e4de022043b_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_11;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30, mod_consts[119], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_11;
        }
        branch_no_7:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_22 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_8 = mod_consts[120];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_8 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_f1779819eb193d13a84507221320dd11->m_frame.f_lineno = 30;
            tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_22, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto try_except_handler_11;
            }
            assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
            PyCell_SET(outline_1_var___class__, tmp_assign_source_40);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
        tmp_assign_source_39 = Nuitka_Cell_GET(outline_1_var___class__);
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30);
        locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30);
        locals_flet_core$navigation_rail$$$class__2_NavigationRailDestination_30 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 30;
        goto try_except_handler_9;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_39);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
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
        PyObject *tmp_assign_source_41;
        PyObject *tmp_tuple_element_9;
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_12;
        }
        tmp_assign_source_41 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_41, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_42 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_12;
        }
        tmp_condition_result_17 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_10;
        } else {
            goto condexpr_false_10;
        }
        condexpr_true_10:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_32 = tmp_class_creation_3__bases;
        tmp_subscript_value_20 = mod_consts[78];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_32, tmp_subscript_value_20, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_12;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_12;
        }
        goto condexpr_end_10;
        condexpr_false_10:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_10:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_44 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_44;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_expression_value_33;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_33 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_33, mod_consts[105]);
        tmp_condition_result_18 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_34 = tmp_class_creation_3__metaclass;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[105]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_12;
        }
        tmp_tuple_element_10 = mod_consts[141];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_10 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_f1779819eb193d13a84507221320dd11->m_frame.f_lineno = 140;
        tmp_assign_source_45 = CALL_FUNCTION(tmp_called_value_23, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_45;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_35 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_35, mod_consts[106]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_12;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
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
        tmp_mod_expr_left_3 = mod_consts[107];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[108];
        tmp_getattr_default_3 = mod_consts[109];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_12;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_36;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_36 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[108]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_12;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 140;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_12;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_46;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_47;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_flet_core$navigation_rail$$$class__3_NavigationRail_140 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[110];
        tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[111], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_14;
        }
        tmp_dictset_value = mod_consts[142];
        tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[69], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_14;
        }
        tmp_dictset_value = mod_consts[141];
        tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[112], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_14;
        }
        frame_a3d1e32d5b6a5452979d15065f4dfe0c_4 = MAKE_CLASS_FRAME(codeobj_a3d1e32d5b6a5452979d15065f4dfe0c, module_flet_core$navigation_rail, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a3d1e32d5b6a5452979d15065f4dfe0c_4);
        assert(Py_REFCNT(frame_a3d1e32d5b6a5452979d15065f4dfe0c_4) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_21;
            tmp_defaults_2 = mod_consts[143];
            tmp_dict_key_14 = mod_consts[122];
            tmp_expression_value_37 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

            if (tmp_expression_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 198;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_37);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_21 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[91]);

            if (tmp_subscript_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_21 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[91]);

                    if (unlikely(tmp_subscript_value_21 == NULL)) {
                        tmp_subscript_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
                    }

                    if (tmp_subscript_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_37);

                        exception_lineno = 198;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_21);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_21);
            Py_DECREF(tmp_expression_value_37);
            Py_DECREF(tmp_subscript_value_21);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 198;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_14 = _PyDict_NewPresized( 33 );
            {
                PyObject *tmp_expression_value_38;
                PyObject *tmp_subscript_value_22;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_expression_value_39;
                PyObject *tmp_subscript_value_23;
                PyObject *tmp_expression_value_40;
                PyObject *tmp_subscript_value_24;
                PyObject *tmp_expression_value_41;
                PyObject *tmp_subscript_value_25;
                PyObject *tmp_expression_value_42;
                PyObject *tmp_subscript_value_26;
                PyObject *tmp_expression_value_43;
                PyObject *tmp_subscript_value_27;
                PyObject *tmp_expression_value_44;
                PyObject *tmp_subscript_value_28;
                PyObject *tmp_expression_value_45;
                PyObject *tmp_subscript_value_29;
                PyObject *tmp_expression_value_46;
                PyObject *tmp_subscript_value_30;
                PyObject *tmp_expression_value_47;
                PyObject *tmp_subscript_value_31;
                PyObject *tmp_expression_value_48;
                PyObject *tmp_subscript_value_32;
                PyObject *tmp_expression_value_49;
                PyObject *tmp_subscript_value_33;
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[144];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 199;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[145];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 200;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[146];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 201;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[147];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 202;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[148];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 203;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[149];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 204;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[150];
                tmp_expression_value_38 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[83]);

                if (tmp_expression_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[83]);

                        if (unlikely(tmp_expression_value_38 == NULL)) {
                            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
                        }

                        if (tmp_expression_value_38 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 205;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_38);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_tuple_element_12 = Py_None;
                tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_22, 0, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[151]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_12 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_22, 1, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[152]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_12 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_22, 2, tmp_tuple_element_12);
                tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_22);
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_subscript_value_22);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 205;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[153];
                tmp_expression_value_39 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

                if (tmp_expression_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_expression_value_39 == NULL)) {
                            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                        }

                        if (tmp_expression_value_39 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 206;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_39);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_23 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[97]);

                if (tmp_subscript_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_23 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[97]);

                        if (unlikely(tmp_subscript_value_23 == NULL)) {
                            tmp_subscript_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
                        }

                        if (tmp_subscript_value_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_39);

                            exception_lineno = 206;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_subscript_value_23);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_23);
                Py_DECREF(tmp_expression_value_39);
                Py_DECREF(tmp_subscript_value_23);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 206;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[154];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 207;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[155];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[98]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[98]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 208;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[156];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[99]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[99]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 209;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[157];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[95]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[95]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 210;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[158];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 211;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[159];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[94]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[94]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 212;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[160];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[94]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[94]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 213;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[161];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[94]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[94]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 214;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[162];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[94]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[94]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 215;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[163];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[94]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[94]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 216;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[164];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[94]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[94]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 217;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[165];
                tmp_expression_value_40 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

                if (tmp_expression_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_expression_value_40 == NULL)) {
                            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                        }

                        if (tmp_expression_value_40 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 219;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_40);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_24 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[151]);

                if (tmp_subscript_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_24 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_24);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_24);
                Py_DECREF(tmp_expression_value_40);
                Py_DECREF(tmp_subscript_value_24);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 219;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[166];
                tmp_expression_value_41 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

                if (tmp_expression_value_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_expression_value_41 == NULL)) {
                            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                        }

                        if (tmp_expression_value_41 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 220;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_41);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_25 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[151]);

                if (tmp_subscript_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_25 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_25);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_25);
                Py_DECREF(tmp_expression_value_41);
                Py_DECREF(tmp_subscript_value_25);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 220;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[167];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[80]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[80]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 221;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[31];
                tmp_expression_value_42 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

                if (tmp_expression_value_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_expression_value_42 == NULL)) {
                            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                        }

                        if (tmp_expression_value_42 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 224;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_42);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_43 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[81]);

                if (tmp_expression_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[81]);

                        if (unlikely(tmp_expression_value_43 == NULL)) {
                            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
                        }

                        if (tmp_expression_value_43 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_42);

                            exception_lineno = 224;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_43);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_27 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[120]);

                if (tmp_subscript_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_27 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[120]);

                        if (unlikely(tmp_subscript_value_27 == NULL)) {
                            tmp_subscript_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
                        }

                        if (tmp_subscript_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_42);
                            Py_DECREF(tmp_expression_value_43);

                            exception_lineno = 224;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_subscript_value_27);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_27);
                Py_DECREF(tmp_expression_value_43);
                Py_DECREF(tmp_subscript_value_27);
                if (tmp_subscript_value_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_42);

                    exception_lineno = 224;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_26);
                Py_DECREF(tmp_expression_value_42);
                Py_DECREF(tmp_subscript_value_26);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 224;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[32];
                tmp_expression_value_44 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

                if (tmp_expression_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_expression_value_44 == NULL)) {
                            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                        }

                        if (tmp_expression_value_44 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 225;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_44);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_28 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[152]);

                if (tmp_subscript_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_28 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_28);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_28);
                Py_DECREF(tmp_expression_value_44);
                Py_DECREF(tmp_subscript_value_28);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 225;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[33];
                tmp_expression_value_45 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

                if (tmp_expression_value_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_expression_value_45 == NULL)) {
                            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                        }

                        if (tmp_expression_value_45 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 226;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_45);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_29 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[151]);

                if (tmp_subscript_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_29 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_29);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_29);
                Py_DECREF(tmp_expression_value_45);
                Py_DECREF(tmp_subscript_value_29);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 226;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[34];
                tmp_expression_value_46 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

                if (tmp_expression_value_46 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_expression_value_46 == NULL)) {
                            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                        }

                        if (tmp_expression_value_46 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 227;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_46);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_30 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[56]);

                if (tmp_subscript_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_30 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[56]);

                        if (unlikely(tmp_subscript_value_30 == NULL)) {
                            tmp_subscript_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                        }

                        if (tmp_subscript_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_46);

                            exception_lineno = 227;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_subscript_value_30);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_30);
                Py_DECREF(tmp_expression_value_46);
                Py_DECREF(tmp_subscript_value_30);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 227;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[35];
                tmp_expression_value_47 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

                if (tmp_expression_value_47 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_expression_value_47 == NULL)) {
                            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                        }

                        if (tmp_expression_value_47 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 228;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_47);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_31 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[123]);

                if (tmp_subscript_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_31 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_31);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_31);
                Py_DECREF(tmp_expression_value_47);
                Py_DECREF(tmp_subscript_value_31);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 228;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[37];
                tmp_expression_value_48 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

                if (tmp_expression_value_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_expression_value_48 == NULL)) {
                            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                        }

                        if (tmp_expression_value_48 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 229;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_48);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_32 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[0]);

                if (tmp_subscript_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_32 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                        if (unlikely(tmp_subscript_value_32 == NULL)) {
                            tmp_subscript_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                        }

                        if (tmp_subscript_value_32 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_48);

                            exception_lineno = 229;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_subscript_value_32);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_32);
                Py_DECREF(tmp_expression_value_48);
                Py_DECREF(tmp_subscript_value_32);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 229;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[39];
                tmp_expression_value_49 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

                if (tmp_expression_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                        if (unlikely(tmp_expression_value_49 == NULL)) {
                            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                        }

                        if (tmp_expression_value_49 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 230;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_49);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_33 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[0]);

                if (tmp_subscript_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_33 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                        if (unlikely(tmp_subscript_value_33 == NULL)) {
                            tmp_subscript_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                        }

                        if (tmp_subscript_value_33 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_49);

                            exception_lineno = 230;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_subscript_value_33);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_33);
                Py_DECREF(tmp_expression_value_49);
                Py_DECREF(tmp_subscript_value_33);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 230;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[40];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 231;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[41];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 232;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[42];
                tmp_dict_value_14 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

                if (tmp_dict_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                        if (unlikely(tmp_dict_value_14 == NULL)) {
                            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                        }

                        if (tmp_dict_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 233;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_14);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_flet_core$navigation_rail$$$function__19___init__(tmp_defaults_2, tmp_annotations_14);

            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$navigation_rail$$$function__20__get_control_name();

        tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[126], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet_core$navigation_rail$$$function__21__get_children();

        tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[129], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_subscript_value_34;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_subscript_value_35;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_subscript_value_36;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_subscript_value_37;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
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
            tmp_called_value_24 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (unlikely(tmp_called_value_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_15 = mod_consts[134];
            tmp_expression_value_50 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

            if (tmp_expression_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_50 == NULL)) {
                        tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_24);

                        exception_lineno = 295;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_50);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_51 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[81]);

            if (tmp_expression_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_51 == NULL)) {
                        tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
                    }

                    if (tmp_expression_value_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_24);
                        Py_DECREF(tmp_expression_value_50);

                        exception_lineno = 295;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_51);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_35 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[120]);

            if (tmp_subscript_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[120]);

                    if (unlikely(tmp_subscript_value_35 == NULL)) {
                        tmp_subscript_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
                    }

                    if (tmp_subscript_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_24);
                        Py_DECREF(tmp_expression_value_50);
                        Py_DECREF(tmp_expression_value_51);

                        exception_lineno = 295;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_35);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_35);
            Py_DECREF(tmp_expression_value_51);
            Py_DECREF(tmp_subscript_value_35);
            if (tmp_subscript_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_24);
                Py_DECREF(tmp_expression_value_50);

                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_34);
            Py_DECREF(tmp_expression_value_50);
            Py_DECREF(tmp_subscript_value_34);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_24);

                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_15 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));


            tmp_args_element_value_22 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__22_destinations(tmp_annotations_15);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 294;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_11;
            condexpr_false_11:;
            tmp_called_value_25 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_16 = mod_consts[134];
            tmp_expression_value_52 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

            if (tmp_expression_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_52 == NULL)) {
                        tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 295;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_52);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_53 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[81]);

            if (tmp_expression_value_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_53 == NULL)) {
                        tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
                    }

                    if (tmp_expression_value_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_52);

                        exception_lineno = 295;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_53);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_37 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[120]);

            if (tmp_subscript_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[120]);

                    if (unlikely(tmp_subscript_value_37 == NULL)) {
                        tmp_subscript_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
                    }

                    if (tmp_subscript_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_52);
                        Py_DECREF(tmp_expression_value_53);

                        exception_lineno = 295;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_37);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_37);
            Py_DECREF(tmp_expression_value_53);
            Py_DECREF(tmp_subscript_value_37);
            if (tmp_subscript_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_52);

                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_36);
            Py_DECREF(tmp_expression_value_52);
            Py_DECREF(tmp_subscript_value_36);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_16 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));


            tmp_args_element_value_23 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__22_destinations(tmp_annotations_16);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 294;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_11:;
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[31], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 295;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_26;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_annotations_17;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_subscript_value_38;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_subscript_value_39;
            tmp_expression_value_54 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[31]);

            if (unlikely(tmp_expression_value_54 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[31]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[133]);
            Py_DECREF(tmp_expression_value_54);
            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_17 = mod_consts[58];
            tmp_expression_value_55 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

            if (tmp_expression_value_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_55 == NULL)) {
                        tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_55 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);

                        exception_lineno = 299;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_55);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_56 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[81]);

            if (tmp_expression_value_56 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[81]);

                    if (unlikely(tmp_expression_value_56 == NULL)) {
                        tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
                    }

                    if (tmp_expression_value_56 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);
                        Py_DECREF(tmp_expression_value_55);

                        exception_lineno = 299;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_56);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_39 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[120]);

            if (tmp_subscript_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[120]);

                    if (unlikely(tmp_subscript_value_39 == NULL)) {
                        tmp_subscript_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
                    }

                    if (tmp_subscript_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_26);
                        Py_DECREF(tmp_expression_value_55);
                        Py_DECREF(tmp_expression_value_56);

                        exception_lineno = 299;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_39);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_38 = LOOKUP_SUBSCRIPT(tmp_expression_value_56, tmp_subscript_value_39);
            Py_DECREF(tmp_expression_value_56);
            Py_DECREF(tmp_subscript_value_39);
            if (tmp_subscript_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);
                Py_DECREF(tmp_expression_value_55);

                exception_lineno = 299;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_38);
            Py_DECREF(tmp_expression_value_55);
            Py_DECREF(tmp_subscript_value_38);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_26);

                exception_lineno = 299;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_17 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));


            tmp_args_element_value_24 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__23_destinations(tmp_annotations_17);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 298;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[31], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_21;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_26;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
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
            tmp_called_value_27 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (unlikely(tmp_called_value_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 303;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_25 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__24_on_change();

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 303;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_25);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_12;
            condexpr_false_12:;
            tmp_called_value_28 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_26 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__24_on_change();

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 303;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 303;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_12:;
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[43], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 304;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_27;
            tmp_called_instance_4 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[43]);

            if (unlikely(tmp_called_instance_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[43]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_27 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__25_on_change();

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 307;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[133], tmp_args_element_value_27);
            Py_DECREF(tmp_called_instance_4);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[43], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_22;
            PyObject *tmp_called_value_29;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_subscript_value_40;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_subscript_value_41;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
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
            tmp_called_value_29 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (unlikely(tmp_called_value_29 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 312;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_18 = mod_consts[134];
            tmp_expression_value_57 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

            if (tmp_expression_value_57 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_57 == NULL)) {
                        tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_57 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_29);

                        exception_lineno = 313;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_57);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_40 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[152]);

            if (tmp_subscript_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_40 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_40);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_40);
            Py_DECREF(tmp_expression_value_57);
            Py_DECREF(tmp_subscript_value_40);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_29);

                exception_lineno = 313;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_18 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));


            tmp_args_element_value_28 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__26_selected_index(tmp_annotations_18);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 312;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_28);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_13;
            condexpr_false_13:;
            tmp_called_value_30 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_19 = mod_consts[134];
            tmp_expression_value_58 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

            if (tmp_expression_value_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_58 == NULL)) {
                        tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_58 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 313;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_58);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_41 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[152]);

            if (tmp_subscript_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_41 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_41);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_41);
            Py_DECREF(tmp_expression_value_58);
            Py_DECREF(tmp_subscript_value_41);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_19 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));


            tmp_args_element_value_29 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__26_selected_index(tmp_annotations_19);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 312;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_13:;
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[32], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_31;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_subscript_value_42;
            tmp_expression_value_59 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[32]);

            if (unlikely(tmp_expression_value_59 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[32]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 316;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[133]);
            Py_DECREF(tmp_expression_value_59);
            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_20 = mod_consts[58];
            tmp_expression_value_60 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

            if (tmp_expression_value_60 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_60 == NULL)) {
                        tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_60 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_31);

                        exception_lineno = 317;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_60);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_42 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[152]);

            if (tmp_subscript_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_42 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_42);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_60, tmp_subscript_value_42);
            Py_DECREF(tmp_expression_value_60);
            Py_DECREF(tmp_subscript_value_42);
            if (tmp_dict_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_31);

                exception_lineno = 317;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_20 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));


            tmp_args_element_value_30 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__27_selected_index(tmp_annotations_20);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 316;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_30);
            Py_DECREF(tmp_called_value_31);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[32], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_called_value_32;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_43;
            PyObject *tmp_called_value_33;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_subscript_value_44;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
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
            tmp_called_value_32 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (unlikely(tmp_called_value_32 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 321;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_21 = mod_consts[134];
            tmp_expression_value_61 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

            if (tmp_expression_value_61 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_61 == NULL)) {
                        tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_61 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_32);

                        exception_lineno = 322;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_61);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_43 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[56]);

            if (tmp_subscript_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_43 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_subscript_value_43 == NULL)) {
                        tmp_subscript_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_subscript_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_32);
                        Py_DECREF(tmp_expression_value_61);

                        exception_lineno = 322;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_43);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_43);
            Py_DECREF(tmp_expression_value_61);
            Py_DECREF(tmp_subscript_value_43);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_32);

                exception_lineno = 322;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_21 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));


            tmp_args_element_value_31 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__28_label_type(tmp_annotations_21);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 321;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_31);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_14;
            condexpr_false_14:;
            tmp_called_value_33 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_22 = mod_consts[134];
            tmp_expression_value_62 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

            if (tmp_expression_value_62 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_62 == NULL)) {
                        tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_62 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 322;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_62);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_44 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[56]);

            if (tmp_subscript_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_44 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_subscript_value_44 == NULL)) {
                        tmp_subscript_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_subscript_value_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_62);

                        exception_lineno = 322;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_44);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_62, tmp_subscript_value_44);
            Py_DECREF(tmp_expression_value_62);
            Py_DECREF(tmp_subscript_value_44);
            if (tmp_dict_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_22 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));


            tmp_args_element_value_32 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__28_label_type(tmp_annotations_22);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 321;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_14:;
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[34], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_34;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_args_element_value_33;
            PyObject *tmp_annotations_23;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_subscript_value_45;
            tmp_expression_value_63 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[34]);

            if (unlikely(tmp_expression_value_63 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[34]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 325;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[133]);
            Py_DECREF(tmp_expression_value_63);
            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_23 = mod_consts[58];
            tmp_expression_value_64 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

            if (tmp_expression_value_64 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_64 == NULL)) {
                        tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_64 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_34);

                        exception_lineno = 326;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_64);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_45 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[56]);

            if (tmp_subscript_value_45 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_45 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_subscript_value_45 == NULL)) {
                        tmp_subscript_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_subscript_value_45 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_34);
                        Py_DECREF(tmp_expression_value_64);

                        exception_lineno = 326;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_45);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_64, tmp_subscript_value_45);
            Py_DECREF(tmp_expression_value_64);
            Py_DECREF(tmp_subscript_value_45);
            if (tmp_dict_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_34);

                exception_lineno = 326;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_23 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));


            tmp_args_element_value_33 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__29_label_type(tmp_annotations_23);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 325;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_33);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[34], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            tmp_dict_key_24 = mod_consts[58];
            tmp_dict_value_24 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[104]);

            if (tmp_dict_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[104]);

                    if (unlikely(tmp_dict_value_24 == NULL)) {
                        tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
                    }

                    if (tmp_dict_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 333;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_24);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_24 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_flet_core$navigation_rail$$$function__30___set_label_type(tmp_annotations_24);

            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_35;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
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
            tmp_called_value_35 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (unlikely(tmp_called_value_35 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_34 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__31_bgcolor();

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 337;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_34);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_15;
            condexpr_false_15:;
            tmp_called_value_36 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_35 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__31_bgcolor();

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 337;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_15:;
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_36;
            tmp_called_instance_5 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[35]);

            if (unlikely(tmp_called_instance_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[35]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }


            tmp_args_element_value_36 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__32_bgcolor();

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 341;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[133], tmp_args_element_value_36);
            Py_DECREF(tmp_called_instance_5);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_25;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_annotations_25;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_subscript_value_46;
            PyObject *tmp_called_value_38;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_annotations_26;
            PyObject *tmp_dict_key_26;
            PyObject *tmp_dict_value_26;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_subscript_value_47;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
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
            tmp_called_value_37 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (unlikely(tmp_called_value_37 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_25 = mod_consts[134];
            tmp_expression_value_65 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

            if (tmp_expression_value_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_65 == NULL)) {
                        tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_65 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_37);

                        exception_lineno = 347;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_65);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_46 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[151]);

            if (tmp_subscript_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_46 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_46);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_65, tmp_subscript_value_46);
            Py_DECREF(tmp_expression_value_65);
            Py_DECREF(tmp_subscript_value_46);
            if (tmp_dict_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_37);

                exception_lineno = 347;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_25 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));


            tmp_args_element_value_37 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__33_extended(tmp_annotations_25);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 346;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_37);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_16;
            condexpr_false_16:;
            tmp_called_value_38 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_26 = mod_consts[134];
            tmp_expression_value_66 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

            if (tmp_expression_value_66 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_66 == NULL)) {
                        tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_66 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 347;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_66);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_47 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[151]);

            if (tmp_subscript_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_47 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_47);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_66, tmp_subscript_value_47);
            Py_DECREF(tmp_expression_value_66);
            Py_DECREF(tmp_subscript_value_47);
            if (tmp_dict_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_26 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));


            tmp_args_element_value_38 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__33_extended(tmp_annotations_26);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 346;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_16:;
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[33], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_39;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_annotations_27;
            PyObject *tmp_dict_key_27;
            PyObject *tmp_dict_value_27;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_subscript_value_48;
            tmp_expression_value_67 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[33]);

            if (unlikely(tmp_expression_value_67 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[33]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 350;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[133]);
            Py_DECREF(tmp_expression_value_67);
            if (tmp_called_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_27 = mod_consts[58];
            tmp_expression_value_68 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

            if (tmp_expression_value_68 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_68 == NULL)) {
                        tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_68 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_39);

                        exception_lineno = 351;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_68);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_48 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[151]);

            if (tmp_subscript_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_48 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_48);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_68, tmp_subscript_value_48);
            Py_DECREF(tmp_expression_value_68);
            Py_DECREF(tmp_subscript_value_48);
            if (tmp_dict_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_39);

                exception_lineno = 351;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_27 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));


            tmp_args_element_value_39 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__34_extended(tmp_annotations_27);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 350;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_39);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 350;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[33], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_26;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_annotations_28;
            PyObject *tmp_dict_key_28;
            PyObject *tmp_dict_value_28;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_subscript_value_49;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_41;
            PyObject *tmp_annotations_29;
            PyObject *tmp_dict_key_29;
            PyObject *tmp_dict_value_29;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_subscript_value_50;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;
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
            tmp_called_value_40 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (unlikely(tmp_called_value_40 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 355;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_28 = mod_consts[134];
            tmp_expression_value_69 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

            if (tmp_expression_value_69 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_69 == NULL)) {
                        tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_69 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_40);

                        exception_lineno = 356;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_69);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_49 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[0]);

            if (tmp_subscript_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_49 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_49 == NULL)) {
                        tmp_subscript_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_40);
                        Py_DECREF(tmp_expression_value_69);

                        exception_lineno = 356;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_49);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_69, tmp_subscript_value_49);
            Py_DECREF(tmp_expression_value_69);
            Py_DECREF(tmp_subscript_value_49);
            if (tmp_dict_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_40);

                exception_lineno = 356;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_28 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));


            tmp_args_element_value_40 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__35_leading(tmp_annotations_28);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 355;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_40);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_17;
            condexpr_false_17:;
            tmp_called_value_41 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_29 = mod_consts[134];
            tmp_expression_value_70 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

            if (tmp_expression_value_70 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_70 == NULL)) {
                        tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_70 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 356;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_70);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_50 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[0]);

            if (tmp_subscript_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_50 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_50 == NULL)) {
                        tmp_subscript_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_70);

                        exception_lineno = 356;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_50);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_29 = LOOKUP_SUBSCRIPT(tmp_expression_value_70, tmp_subscript_value_50);
            Py_DECREF(tmp_expression_value_70);
            Py_DECREF(tmp_subscript_value_50);
            if (tmp_dict_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_29 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));


            tmp_args_element_value_41 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__35_leading(tmp_annotations_29);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 355;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_41);
            Py_DECREF(tmp_args_element_value_41);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 355;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_17:;
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_42;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_args_element_value_42;
            PyObject *tmp_annotations_30;
            PyObject *tmp_dict_key_30;
            PyObject *tmp_dict_value_30;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_subscript_value_51;
            tmp_expression_value_71 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[37]);

            if (unlikely(tmp_expression_value_71 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[37]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[133]);
            Py_DECREF(tmp_expression_value_71);
            if (tmp_called_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_30 = mod_consts[58];
            tmp_expression_value_72 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

            if (tmp_expression_value_72 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_72 == NULL)) {
                        tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_72 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_42);

                        exception_lineno = 360;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_72);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_51 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[0]);

            if (tmp_subscript_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_51 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_51 == NULL)) {
                        tmp_subscript_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_42);
                        Py_DECREF(tmp_expression_value_72);

                        exception_lineno = 360;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_51);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_72, tmp_subscript_value_51);
            Py_DECREF(tmp_expression_value_72);
            Py_DECREF(tmp_subscript_value_51);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_42);

                exception_lineno = 360;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_30 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));


            tmp_args_element_value_42 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__36_leading(tmp_annotations_30);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 359;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_42, tmp_args_element_value_42);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_args_element_value_42);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 360;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_27;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_element_value_43;
            PyObject *tmp_annotations_31;
            PyObject *tmp_dict_key_31;
            PyObject *tmp_dict_value_31;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_subscript_value_52;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_element_value_44;
            PyObject *tmp_annotations_32;
            PyObject *tmp_dict_key_32;
            PyObject *tmp_dict_value_32;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_subscript_value_53;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
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
            tmp_called_value_43 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (unlikely(tmp_called_value_43 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 364;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_31 = mod_consts[134];
            tmp_expression_value_73 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

            if (tmp_expression_value_73 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_73 == NULL)) {
                        tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_73 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_43);

                        exception_lineno = 365;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_73);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_52 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[0]);

            if (tmp_subscript_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_52 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_52 == NULL)) {
                        tmp_subscript_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_43);
                        Py_DECREF(tmp_expression_value_73);

                        exception_lineno = 365;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_52);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_31 = LOOKUP_SUBSCRIPT(tmp_expression_value_73, tmp_subscript_value_52);
            Py_DECREF(tmp_expression_value_73);
            Py_DECREF(tmp_subscript_value_52);
            if (tmp_dict_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_43);

                exception_lineno = 365;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_31 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));


            tmp_args_element_value_43 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__37_trailing(tmp_annotations_31);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 364;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_43);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_args_element_value_43);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_18;
            condexpr_false_18:;
            tmp_called_value_44 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_32 = mod_consts[134];
            tmp_expression_value_74 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

            if (tmp_expression_value_74 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_74 == NULL)) {
                        tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_74 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 365;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_74);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_53 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[0]);

            if (tmp_subscript_value_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_53 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_53 == NULL)) {
                        tmp_subscript_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_74);

                        exception_lineno = 365;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_53);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_32 = LOOKUP_SUBSCRIPT(tmp_expression_value_74, tmp_subscript_value_53);
            Py_DECREF(tmp_expression_value_74);
            Py_DECREF(tmp_subscript_value_53);
            if (tmp_dict_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_32 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_32, tmp_dict_value_32);
            Py_DECREF(tmp_dict_value_32);
            assert(!(tmp_res != 0));


            tmp_args_element_value_44 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__37_trailing(tmp_annotations_32);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 364;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_44);
            Py_DECREF(tmp_args_element_value_44);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 364;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_18:;
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_45;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_args_element_value_45;
            PyObject *tmp_annotations_33;
            PyObject *tmp_dict_key_33;
            PyObject *tmp_dict_value_33;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_subscript_value_54;
            tmp_expression_value_75 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[39]);

            if (unlikely(tmp_expression_value_75 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[39]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 368;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[133]);
            Py_DECREF(tmp_expression_value_75);
            if (tmp_called_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_33 = mod_consts[58];
            tmp_expression_value_76 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[82]);

            if (tmp_expression_value_76 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[82]);

                    if (unlikely(tmp_expression_value_76 == NULL)) {
                        tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
                    }

                    if (tmp_expression_value_76 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_45);

                        exception_lineno = 369;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_76);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_54 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[0]);

            if (tmp_subscript_value_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_54 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_subscript_value_54 == NULL)) {
                        tmp_subscript_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_subscript_value_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_45);
                        Py_DECREF(tmp_expression_value_76);

                        exception_lineno = 369;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_54);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_76, tmp_subscript_value_54);
            Py_DECREF(tmp_expression_value_76);
            Py_DECREF(tmp_subscript_value_54);
            if (tmp_dict_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_45);

                exception_lineno = 369;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_33 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_33, tmp_dict_value_33);
            Py_DECREF(tmp_dict_value_33);
            assert(!(tmp_res != 0));


            tmp_args_element_value_45 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__38_trailing(tmp_annotations_33);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 368;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_45);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_element_value_45);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 368;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[39], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 369;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_28;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_element_value_46;
            PyObject *tmp_annotations_34;
            PyObject *tmp_dict_key_34;
            PyObject *tmp_dict_value_34;
            PyObject *tmp_called_value_47;
            PyObject *tmp_args_element_value_47;
            PyObject *tmp_annotations_35;
            PyObject *tmp_dict_key_35;
            PyObject *tmp_dict_value_35;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_28 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_19;
            } else {
                goto condexpr_false_19;
            }
            condexpr_true_19:;
            tmp_called_value_46 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (unlikely(tmp_called_value_46 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 373;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_34 = mod_consts[134];
            tmp_dict_value_34 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

            if (tmp_dict_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_34 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_dict_value_34 == NULL)) {
                        tmp_dict_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_dict_value_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_46);

                        exception_lineno = 374;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_34);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_34 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_34, tmp_dict_value_34);
            Py_DECREF(tmp_dict_value_34);
            assert(!(tmp_res != 0));


            tmp_args_element_value_46 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__39_min_width(tmp_annotations_34);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 373;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_46);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_args_element_value_46);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_19;
            condexpr_false_19:;
            tmp_called_value_47 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_35 = mod_consts[134];
            tmp_dict_value_35 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

            if (tmp_dict_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_35 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_dict_value_35 == NULL)) {
                        tmp_dict_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_dict_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 374;
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


            tmp_args_element_value_47 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__39_min_width(tmp_annotations_35);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 373;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_47);
            Py_DECREF(tmp_args_element_value_47);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 373;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_19:;
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_48;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_args_element_value_48;
            PyObject *tmp_annotations_36;
            PyObject *tmp_dict_key_36;
            PyObject *tmp_dict_value_36;
            tmp_expression_value_77 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[40]);

            if (unlikely(tmp_expression_value_77 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[40]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 377;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[133]);
            Py_DECREF(tmp_expression_value_77);
            if (tmp_called_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_36 = mod_consts[58];
            tmp_dict_value_36 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

            if (tmp_dict_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_36 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_dict_value_36 == NULL)) {
                        tmp_dict_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_dict_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_48);

                        exception_lineno = 378;
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


            tmp_args_element_value_48 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__40_min_width(tmp_annotations_36);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 377;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_48);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_args_element_value_48);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 377;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_29;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_49;
            PyObject *tmp_annotations_37;
            PyObject *tmp_dict_key_37;
            PyObject *tmp_dict_value_37;
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_element_value_50;
            PyObject *tmp_annotations_38;
            PyObject *tmp_dict_key_38;
            PyObject *tmp_dict_value_38;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 382;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_29 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_20;
            } else {
                goto condexpr_false_20;
            }
            condexpr_true_20:;
            tmp_called_value_49 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (unlikely(tmp_called_value_49 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 382;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 382;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_37 = mod_consts[134];
            tmp_dict_value_37 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

            if (tmp_dict_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_37 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_dict_value_37 == NULL)) {
                        tmp_dict_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_dict_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_49);

                        exception_lineno = 383;
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


            tmp_args_element_value_49 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__41_min_extended_width(tmp_annotations_37);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 382;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_49);
            Py_DECREF(tmp_called_value_49);
            Py_DECREF(tmp_args_element_value_49);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 382;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_20;
            condexpr_false_20:;
            tmp_called_value_50 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_38 = mod_consts[134];
            tmp_dict_value_38 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

            if (tmp_dict_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_38 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_dict_value_38 == NULL)) {
                        tmp_dict_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_dict_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 383;
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


            tmp_args_element_value_50 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__41_min_extended_width(tmp_annotations_38);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 382;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_50);
            Py_DECREF(tmp_args_element_value_50);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 382;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_20:;
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[41], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_51;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_args_element_value_51;
            PyObject *tmp_annotations_39;
            PyObject *tmp_dict_key_39;
            PyObject *tmp_dict_value_39;
            tmp_expression_value_78 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[41]);

            if (unlikely(tmp_expression_value_78 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[41]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 386;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[133]);
            Py_DECREF(tmp_expression_value_78);
            if (tmp_called_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_39 = mod_consts[58];
            tmp_dict_value_39 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

            if (tmp_dict_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_39 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_dict_value_39 == NULL)) {
                        tmp_dict_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_dict_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_51);

                        exception_lineno = 387;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_39);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_39 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_39, tmp_dict_key_39, tmp_dict_value_39);
            Py_DECREF(tmp_dict_value_39);
            assert(!(tmp_res != 0));


            tmp_args_element_value_51 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__42_min_extended_width(tmp_annotations_39);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 386;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_51);
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_args_element_value_51);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[41], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 387;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_30;
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_element_value_52;
            PyObject *tmp_annotations_40;
            PyObject *tmp_dict_key_40;
            PyObject *tmp_dict_value_40;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_element_value_53;
            PyObject *tmp_annotations_41;
            PyObject *tmp_dict_key_41;
            PyObject *tmp_dict_value_41;
            tmp_res = MAPPING_HAS_ITEM(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_30 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_21;
            } else {
                goto condexpr_false_21;
            }
            condexpr_true_21:;
            tmp_called_value_52 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[131]);

            if (unlikely(tmp_called_value_52 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[131]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 391;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_40 = mod_consts[134];
            tmp_dict_value_40 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

            if (tmp_dict_value_40 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_40 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_dict_value_40 == NULL)) {
                        tmp_dict_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_dict_value_40 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_52);

                        exception_lineno = 392;
                        type_description_2 = "o";
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


            tmp_args_element_value_52 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__43_group_alignment(tmp_annotations_40);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 391;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_52);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_args_element_value_52);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_21;
            condexpr_false_21:;
            tmp_called_value_53 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_41 = mod_consts[134];
            tmp_dict_value_41 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

            if (tmp_dict_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_41 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_dict_value_41 == NULL)) {
                        tmp_dict_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_dict_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 392;
                        type_description_2 = "o";
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


            tmp_args_element_value_53 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__43_group_alignment(tmp_annotations_41);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 391;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_53, tmp_args_element_value_53);
            Py_DECREF(tmp_args_element_value_53);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 391;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_21:;
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[42], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_54;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_args_element_value_54;
            PyObject *tmp_annotations_42;
            PyObject *tmp_dict_key_42;
            PyObject *tmp_dict_value_42;
            tmp_expression_value_79 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[42]);

            if (unlikely(tmp_expression_value_79 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[42]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 395;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_expression_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[133]);
            Py_DECREF(tmp_expression_value_79);
            if (tmp_called_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_42 = mod_consts[58];
            tmp_dict_value_42 = PyObject_GetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[88]);

            if (tmp_dict_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_42 = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[88]);

                    if (unlikely(tmp_dict_value_42 == NULL)) {
                        tmp_dict_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
                    }

                    if (tmp_dict_value_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_54);

                        exception_lineno = 396;
                        type_description_2 = "o";
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


            tmp_args_element_value_54 = MAKE_FUNCTION_flet_core$navigation_rail$$$function__44_group_alignment(tmp_annotations_42);

            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame.f_lineno = 395;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_54);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_args_element_value_54);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 395;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[42], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 396;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a3d1e32d5b6a5452979d15065f4dfe0c_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a3d1e32d5b6a5452979d15065f4dfe0c_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a3d1e32d5b6a5452979d15065f4dfe0c_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a3d1e32d5b6a5452979d15065f4dfe0c_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_a3d1e32d5b6a5452979d15065f4dfe0c_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_14;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_31;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_31 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_31 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto try_except_handler_14;
            }
            if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140, mod_consts[119], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto try_except_handler_14;
        }
        branch_no_10:;
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_called_value_55;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_55 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_13 = mod_consts[141];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_13 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = locals_flet_core$navigation_rail$$$class__3_NavigationRail_140;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_f1779819eb193d13a84507221320dd11->m_frame.f_lineno = 140;
            tmp_assign_source_48 = CALL_FUNCTION(tmp_called_value_55, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto try_except_handler_14;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_48;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_47 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_47);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140);
        locals_flet_core$navigation_rail$$$class__3_NavigationRail_140 = NULL;
        goto try_return_handler_13;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_flet_core$navigation_rail$$$class__3_NavigationRail_140);
        locals_flet_core$navigation_rail$$$class__3_NavigationRail_140 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 140;
        goto try_except_handler_12;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_47);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
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
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f1779819eb193d13a84507221320dd11, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f1779819eb193d13a84507221320dd11->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f1779819eb193d13a84507221320dd11, exception_lineno);
    }



    assertFrameObject(frame_f1779819eb193d13a84507221320dd11);

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
    PGO_onModuleExit("flet_core.navigation_rail", false);

    Py_INCREF(module_flet_core$navigation_rail);
    return module_flet_core$navigation_rail;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet_core$navigation_rail, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet_core$navigation_rail", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
