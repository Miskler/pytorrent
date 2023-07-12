/* Generated code for Python module 'httpx._urls'
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

/* The "module_httpx$_urls" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpx$_urls;
PyDictObject *moduledict_httpx$_urls;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[304];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[304];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("httpx._urls"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 304; i++) {
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
void checkModuleConstants_httpx$_urls(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 304; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0ccbb449241cb4356ea8faed5579bb39;
static PyCodeObject *codeobj_c1f77db1ad30fa7c86ab9b541b6846f8;
static PyCodeObject *codeobj_21335dbde512a577c8274ac2fb51386e;
static PyCodeObject *codeobj_62cc0b3bdef74923336a61e996bd164f;
static PyCodeObject *codeobj_19e8f9a59f175e983f5563f1235c9348;
static PyCodeObject *codeobj_7aabe8453ffa2f0cde68fa42b339db39;
static PyCodeObject *codeobj_e247dd2833e4091a4fc7a9ba362a27fb;
static PyCodeObject *codeobj_122b7e511cfc39f4840e42e864fe0aa9;
static PyCodeObject *codeobj_bb34bcfb751cb3e72dcf6ced1e2a0d12;
static PyCodeObject *codeobj_de0a18a2035a671b08cdb86ee24f1f29;
static PyCodeObject *codeobj_f3d97483c00d46aa73406d0263449655;
static PyCodeObject *codeobj_a670165f59ea7e9dea1166171ff1ba52;
static PyCodeObject *codeobj_af2a3da4cea7550eec87563eab477807;
static PyCodeObject *codeobj_341b8002ab3bace7c7b795d6110fda26;
static PyCodeObject *codeobj_7a8ed8fafd0aa78287d99a598c3507f7;
static PyCodeObject *codeobj_e8e0eb7cce52b9038b1958ac3628cc42;
static PyCodeObject *codeobj_ee2f8950d7c58cdf76db6d854b2b0eff;
static PyCodeObject *codeobj_bdd02c43820c23ccf184a35bae82e593;
static PyCodeObject *codeobj_d66fa4d5f32cd715fe0adc7f3f2083ae;
static PyCodeObject *codeobj_4e915a3f3ff0816d130f5db7a463325f;
static PyCodeObject *codeobj_7faa37a57869b9f1fb14503d5e239a05;
static PyCodeObject *codeobj_c8faaf5a07456fa93d66fcd1ab9f5339;
static PyCodeObject *codeobj_840da881ff0808bae0c7d342ce892e2a;
static PyCodeObject *codeobj_77ae796b526a5862092b5646fde8a0e3;
static PyCodeObject *codeobj_100273f3e84733e51d5fba1d2f682c79;
static PyCodeObject *codeobj_00709aa2cbfecaeefb1e9594c47c888a;
static PyCodeObject *codeobj_b3d27fd5dbe5f90afea6d313b495abce;
static PyCodeObject *codeobj_3c5a1931b6082966c5a325471cc58b0c;
static PyCodeObject *codeobj_3047e2eb95846fa0cbfcb4b9b8666f9a;
static PyCodeObject *codeobj_549d0da44d99408e62e6d15b4ab41a78;
static PyCodeObject *codeobj_8ebf97abe2b15780f282021f2d4a85ba;
static PyCodeObject *codeobj_aaadfe664205032516bf24aae3a87e2a;
static PyCodeObject *codeobj_9621ddce7070f8988b80636ccf65b94a;
static PyCodeObject *codeobj_0cde59557e104455b872320dc652d4e6;
static PyCodeObject *codeobj_ee327020b8d044684d7f46c474aeefa2;
static PyCodeObject *codeobj_4a98f12515989d0736d849d00bbf32b7;
static PyCodeObject *codeobj_1553d18976fd0670d5a80f964548c204;
static PyCodeObject *codeobj_a454a82524de1a1bdf3a050c206bfad9;
static PyCodeObject *codeobj_4226362f140c7cb57216a5b65ad7a7b5;
static PyCodeObject *codeobj_450d208cc7aac68618af9f094bef9839;
static PyCodeObject *codeobj_7e50213cd05eccc774b3b00bced814af;
static PyCodeObject *codeobj_499c0dd172c06c4fdff4072e65467367;
static PyCodeObject *codeobj_5a3cb73cd991c46da717e5c011becc2e;
static PyCodeObject *codeobj_3fb8460dac6e62f28b7713f74d56264c;
static PyCodeObject *codeobj_08d106cd4cbd59fdbb2defe210da8c3e;
static PyCodeObject *codeobj_bbbc2b8ad03319e8a682d30dc158b538;
static PyCodeObject *codeobj_f416200e7cd32873864449bcfa48023c;
static PyCodeObject *codeobj_a0d6a853cc886759377991ccc2651dc7;
static PyCodeObject *codeobj_16bc0a34b2879f438740d8ae428eeca9;
static PyCodeObject *codeobj_88058cf9b3f36d10b96fafb9c1827122;
static PyCodeObject *codeobj_75663d7351c1fa1058af775afd8464e9;
static PyCodeObject *codeobj_7308b452e7c2a56d93ee602f5ed78f5a;
static PyCodeObject *codeobj_9cd96749de2a4d5f710004d4d030c680;
static PyCodeObject *codeobj_3685a74a139cad6a16058065df4241e9;
static PyCodeObject *codeobj_6e7afe79966cc1b07e48c48c9558aea4;
static PyCodeObject *codeobj_1b2ff2cc98cecdabda77a9c662e91a18;
static PyCodeObject *codeobj_92b01a523ea1d974991c7e23553213f9;
static PyCodeObject *codeobj_8ad6cef804c90357c635a45d3fc180c4;
static PyCodeObject *codeobj_9eb5bbd599d7ffafa1e0e879a694f0b5;
static PyCodeObject *codeobj_062505214ab10ff1aac01be11401a6ea;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[149]; CHECK_OBJECT(module_filename_obj);
    codeobj_0ccbb449241cb4356ea8faed5579bb39 = MAKE_CODE_OBJECT(module_filename_obj, 562, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[275], mod_consts[275], mod_consts[276], NULL, 1, 0, 0);
    codeobj_c1f77db1ad30fa7c86ab9b541b6846f8 = MAKE_CODE_OBJECT(module_filename_obj, 577, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[275], mod_consts[275], mod_consts[276], NULL, 1, 0, 0);
    codeobj_21335dbde512a577c8274ac2fb51386e = MAKE_CODE_OBJECT(module_filename_obj, 585, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[275], mod_consts[275], mod_consts[276], NULL, 1, 0, 0);
    codeobj_62cc0b3bdef74923336a61e996bd164f = MAKE_CODE_OBJECT(module_filename_obj, 611, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[275], mod_consts[275], mod_consts[276], NULL, 1, 0, 0);
    codeobj_19e8f9a59f175e983f5563f1235c9348 = MAKE_CODE_OBJECT(module_filename_obj, 623, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[275], mod_consts[275], mod_consts[276], NULL, 1, 0, 0);
    codeobj_7aabe8453ffa2f0cde68fa42b339db39 = MAKE_CODE_OBJECT(module_filename_obj, 636, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[277], mod_consts[277], mod_consts[278], NULL, 1, 0, 0);
    codeobj_e247dd2833e4091a4fc7a9ba362a27fb = MAKE_CODE_OBJECT(module_filename_obj, 586, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[277], mod_consts[277], mod_consts[279], NULL, 1, 0, 0);
    codeobj_122b7e511cfc39f4840e42e864fe0aa9 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[280], mod_consts[280], NULL, NULL, 0, 0, 0);
    codeobj_bb34bcfb751cb3e72dcf6ced1e2a0d12 = MAKE_CODE_OBJECT(module_filename_obj, 544, CO_NOFREE, mod_consts[56], mod_consts[56], mod_consts[281], NULL, 0, 0, 0);
    codeobj_de0a18a2035a671b08cdb86ee24f1f29 = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[281], NULL, 0, 0, 0);
    codeobj_f3d97483c00d46aa73406d0263449655 = MAKE_CODE_OBJECT(module_filename_obj, 739, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[264], mod_consts[264], mod_consts[282], NULL, 1, 0, 0);
    codeobj_a670165f59ea7e9dea1166171ff1ba52 = MAKE_CODE_OBJECT(module_filename_obj, 730, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[256], mod_consts[256], mod_consts[283], NULL, 2, 0, 0);
    codeobj_af2a3da4cea7550eec87563eab477807 = MAKE_CODE_OBJECT(module_filename_obj, 523, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[221], mod_consts[221], mod_consts[284], NULL, 2, 0, 0);
    codeobj_341b8002ab3bace7c7b795d6110fda26 = MAKE_CODE_OBJECT(module_filename_obj, 745, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[221], mod_consts[221], mod_consts[284], NULL, 2, 0, 0);
    codeobj_7a8ed8fafd0aa78287d99a598c3507f7 = MAKE_CODE_OBJECT(module_filename_obj, 727, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[231], mod_consts[231], mod_consts[283], NULL, 2, 0, 0);
    codeobj_e8e0eb7cce52b9038b1958ac3628cc42 = MAKE_CODE_OBJECT(module_filename_obj, 520, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[218], mod_consts[218], mod_consts[282], NULL, 1, 0, 0);
    codeobj_ee2f8950d7c58cdf76db6d854b2b0eff = MAKE_CODE_OBJECT(module_filename_obj, 742, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[218], mod_consts[218], mod_consts[282], NULL, 1, 0, 0);
    codeobj_bdd02c43820c23ccf184a35bae82e593 = MAKE_CODE_OBJECT(module_filename_obj, 549, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[179], mod_consts[179], mod_consts[285], NULL, 1, 0, 0);
    codeobj_d66fa4d5f32cd715fe0adc7f3f2083ae = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[179], mod_consts[179], mod_consts[286], NULL, 2, 0, 0);
    codeobj_4e915a3f3ff0816d130f5db7a463325f = MAKE_CODE_OBJECT(module_filename_obj, 733, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[259], mod_consts[259], mod_consts[282], NULL, 1, 0, 0);
    codeobj_7faa37a57869b9f1fb14503d5e239a05 = MAKE_CODE_OBJECT(module_filename_obj, 736, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[262], mod_consts[262], mod_consts[282], NULL, 1, 0, 0);
    codeobj_c8faaf5a07456fa93d66fcd1ab9f5339 = MAKE_CODE_OBJECT(module_filename_obj, 753, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[225], mod_consts[225], mod_consts[287], NULL, 1, 0, 0);
    codeobj_840da881ff0808bae0c7d342ce892e2a = MAKE_CODE_OBJECT(module_filename_obj, 529, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[225], mod_consts[225], mod_consts[288], NULL, 1, 0, 0);
    codeobj_77ae796b526a5862092b5646fde8a0e3 = MAKE_CODE_OBJECT(module_filename_obj, 764, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[272], mod_consts[272], mod_consts[289], NULL, 3, 0, 0);
    codeobj_100273f3e84733e51d5fba1d2f682c79 = MAKE_CODE_OBJECT(module_filename_obj, 526, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[223], mod_consts[223], mod_consts[282], NULL, 1, 0, 0);
    codeobj_00709aa2cbfecaeefb1e9594c47c888a = MAKE_CODE_OBJECT(module_filename_obj, 750, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[223], mod_consts[223], mod_consts[282], NULL, 1, 0, 0);
    codeobj_b3d27fd5dbe5f90afea6d313b495abce = MAKE_CODE_OBJECT(module_filename_obj, 679, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[290], NULL, 3, 0, 0);
    codeobj_3c5a1931b6082966c5a325471cc58b0c = MAKE_CODE_OBJECT(module_filename_obj, 485, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[209], mod_consts[209], mod_consts[289], NULL, 3, 0, 0);
    codeobj_3047e2eb95846fa0cbfcb4b9b8666f9a = MAKE_CODE_OBJECT(module_filename_obj, 491, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[214], mod_consts[214], mod_consts[291], NULL, 2, 0, 0);
    codeobj_549d0da44d99408e62e6d15b4ab41a78 = MAKE_CODE_OBJECT(module_filename_obj, 488, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[212], mod_consts[212], mod_consts[283], NULL, 2, 0, 0);
    codeobj_8ebf97abe2b15780f282021f2d4a85ba = MAKE_CODE_OBJECT(module_filename_obj, 482, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[207], mod_consts[207], mod_consts[289], NULL, 3, 0, 0);
    codeobj_aaadfe664205032516bf24aae3a87e2a = MAKE_CODE_OBJECT(module_filename_obj, 349, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[292], NULL, 1, 0, 0);
    codeobj_9621ddce7070f8988b80636ccf65b94a = MAKE_CODE_OBJECT(module_filename_obj, 307, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[282], NULL, 1, 0, 0);
    codeobj_0cde59557e104455b872320dc652d4e6 = MAKE_CODE_OBJECT(module_filename_obj, 639, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[293], NULL, 3, 0, 0);
    codeobj_ee327020b8d044684d7f46c474aeefa2 = MAKE_CODE_OBJECT(module_filename_obj, 653, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[140], mod_consts[140], mod_consts[283], NULL, 2, 0, 0);
    codeobj_4a98f12515989d0736d849d00bbf32b7 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[294], NULL, 1, 0, 0);
    codeobj_1553d18976fd0670d5a80f964548c204 = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[282], NULL, 1, 0, 0);
    codeobj_a454a82524de1a1bdf3a050c206bfad9 = MAKE_CODE_OBJECT(module_filename_obj, 342, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[282], NULL, 1, 0, 0);
    codeobj_4226362f140c7cb57216a5b65ad7a7b5 = MAKE_CODE_OBJECT(module_filename_obj, 613, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[122], mod_consts[122], mod_consts[282], NULL, 1, 0, 0);
    codeobj_450d208cc7aac68618af9f094bef9839 = MAKE_CODE_OBJECT(module_filename_obj, 494, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[103], mod_consts[103], mod_consts[295], NULL, 2, 0, 0);
    codeobj_7e50213cd05eccc774b3b00bced814af = MAKE_CODE_OBJECT(module_filename_obj, 590, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[129], mod_consts[129], mod_consts[282], NULL, 1, 0, 0);
    codeobj_499c0dd172c06c4fdff4072e65467367 = MAKE_CODE_OBJECT(module_filename_obj, 709, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[296], NULL, 2, 0, 0);
    codeobj_5a3cb73cd991c46da717e5c011becc2e = MAKE_CODE_OBJECT(module_filename_obj, 625, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[297], NULL, 1, 0, 0);
    codeobj_3fb8460dac6e62f28b7713f74d56264c = MAKE_CODE_OBJECT(module_filename_obj, 236, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[298], NULL, 1, 0, 0);
    codeobj_08d106cd4cbd59fdbb2defe210da8c3e = MAKE_CODE_OBJECT(module_filename_obj, 282, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[282], NULL, 1, 0, 0);
    codeobj_bbbc2b8ad03319e8a682d30dc158b538 = MAKE_CODE_OBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[299], NULL, 1, 0, 0);
    codeobj_f416200e7cd32873864449bcfa48023c = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[51], mod_consts[51], mod_consts[300], NULL, 1, 0, 0);
    codeobj_a0d6a853cc886759377991ccc2651dc7 = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[47], mod_consts[301], NULL, 1, 0, 0);
    codeobj_16bc0a34b2879f438740d8ae428eeca9 = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[54], mod_consts[302], NULL, 1, 0, 0);
    codeobj_88058cf9b3f36d10b96fafb9c1827122 = MAKE_CODE_OBJECT(module_filename_obj, 315, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[199], mod_consts[199], mod_consts[282], NULL, 1, 0, 0);
    codeobj_75663d7351c1fa1058af775afd8464e9 = MAKE_CODE_OBJECT(module_filename_obj, 191, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[64], mod_consts[294], NULL, 1, 0, 0);
    codeobj_7308b452e7c2a56d93ee602f5ed78f5a = MAKE_CODE_OBJECT(module_filename_obj, 290, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[300], NULL, 1, 0, 0);
    codeobj_9cd96749de2a4d5f710004d4d030c680 = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[282], NULL, 1, 0, 0);
    codeobj_3685a74a139cad6a16058065df4241e9 = MAKE_CODE_OBJECT(module_filename_obj, 694, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[98], mod_consts[98], mod_consts[303], NULL, 2, 0, 0);
    codeobj_6e7afe79966cc1b07e48c48c9558aea4 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[282], NULL, 1, 0, 0);
    codeobj_1b2ff2cc98cecdabda77a9c662e91a18 = MAKE_CODE_OBJECT(module_filename_obj, 664, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[96], mod_consts[96], mod_consts[290], NULL, 3, 0, 0);
    codeobj_92b01a523ea1d974991c7e23553213f9 = MAKE_CODE_OBJECT(module_filename_obj, 758, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[270], mod_consts[270], mod_consts[291], NULL, 2, 0, 0);
    codeobj_8ad6cef804c90357c635a45d3fc180c4 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[299], NULL, 1, 0, 0);
    codeobj_9eb5bbd599d7ffafa1e0e879a694f0b5 = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[299], NULL, 1, 0, 0);
    codeobj_062505214ab10ff1aac01be11401a6ea = MAKE_CODE_OBJECT(module_filename_obj, 601, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[131], mod_consts[131], mod_consts[282], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4__unpack_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__10_netloc(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__11_path(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__12_query(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__13_params(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__14_raw_path(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__15_fragment(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__16_raw(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__17_is_absolute_url(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__18_is_relative_url(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__19_copy_with(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__20_copy_set_param(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__21_copy_add_param(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__22_copy_remove_param(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__23_copy_merge_params(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__24_join(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__25___hash__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__26___eq__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__27___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__28___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__29___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__2_scheme(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__30_keys(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__31_values(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__32_items(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__33_multi_items(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__34_get(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__35_get_list(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__36_set(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__37_add(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__38_remove(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__39_merge(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__3_raw_scheme(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__40___getitem__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__41___contains__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__42___iter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__43___len__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__44___bool__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__45___hash__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__46___eq__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__47___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__48___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__49_update(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__4_userinfo(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__50___setitem__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__5_username(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__6_password(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__7_host(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__8_raw_host(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__9_port(PyObject *annotations);


// The module function definitions.
static PyObject *impl_httpx$_urls$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_exc = NULL;
    PyObject *var_default_port = NULL;
    PyObject *var_authority = NULL;
    struct Nuitka_FrameObject *frame_d66fa4d5f32cd715fe0adc7f3f2083ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_d66fa4d5f32cd715fe0adc7f3f2083ae = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d66fa4d5f32cd715fe0adc7f3f2083ae)) {
        Py_XDECREF(cache_frame_d66fa4d5f32cd715fe0adc7f3f2083ae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d66fa4d5f32cd715fe0adc7f3f2083ae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d66fa4d5f32cd715fe0adc7f3f2083ae = MAKE_FUNCTION_FRAME(codeobj_d66fa4d5f32cd715fe0adc7f3f2083ae, module_httpx$_urls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d66fa4d5f32cd715fe0adc7f3f2083ae->m_type_description == NULL);
    frame_d66fa4d5f32cd715fe0adc7f3f2083ae = cache_frame_d66fa4d5f32cd715fe0adc7f3f2083ae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d66fa4d5f32cd715fe0adc7f3f2083ae);
    assert(Py_REFCNT(frame_d66fa4d5f32cd715fe0adc7f3f2083ae) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_url);
        tmp_isinstance_inst_1 = par_url;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooo";
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
    // Tried code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_url);
        tmp_args_element_value_1 = par_url;
        frame_d66fa4d5f32cd715fe0adc7f3f2083ae->m_frame.f_lineno = 80;
        tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_d66fa4d5f32cd715fe0adc7f3f2083ae->m_frame.f_lineno = 80;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
    }
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_d66fa4d5f32cd715fe0adc7f3f2083ae, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_d66fa4d5f32cd715fe0adc7f3f2083ae, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        assert(var_exc == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_exc = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_raise_cause_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_exc);
        tmp_unicode_arg_1 = var_exc;
        tmp_kw_call_value_0_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        frame_d66fa4d5f32cd715fe0adc7f3f2083ae->m_frame.f_lineno = 82;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_raise_type_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_raise_cause_1 = Py_None;
        exception_type = tmp_raise_type_1;
        exception_value = NULL;
        Py_INCREF(tmp_raise_cause_1);
        exception_lineno = 82;
        RAISE_EXCEPTION_WITH_CAUSE(&exception_type, &exception_value, &exception_tb, tmp_raise_cause_1);
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    Py_XDECREF(var_exc);
    var_exc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 79;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d66fa4d5f32cd715fe0adc7f3f2083ae->m_frame) frame_d66fa4d5f32cd715fe0adc7f3f2083ae->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_3;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[8]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 84;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[3]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_d66fa4d5f32cd715fe0adc7f3f2083ae->m_frame.f_lineno = 87;
        tmp_assattr_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[9]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[3], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_url);
        tmp_isinstance_inst_2 = par_url;
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_url);
        tmp_expression_value_6 = par_url;
        tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[3]);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[3], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[11];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_type_arg_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_url);
            tmp_type_arg_1 = par_url;
            tmp_format_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_format_value_1 == NULL));
            tmp_format_spec_1 = mod_consts[12];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[13];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_url);
            tmp_operand_value_1 = par_url;
            tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[12];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[12], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_d66fa4d5f32cd715fe0adc7f3f2083ae->m_frame.f_lineno = 91;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 91;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_end_4:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_default_value_1;
        tmp_dict_arg_value_1 = DICT_COPY(mod_consts[14]);
        if (par_self == NULL) {
            Py_DECREF(tmp_dict_arg_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[3]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_arg_value_1);

            exception_lineno = 107;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_key_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[16]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_key_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_arg_value_1);

            exception_lineno = 107;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_default_value_1 = mod_consts[12];
        tmp_assign_source_2 = DICT_GET_ITEM_WITH_HASH_ERROR1(tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_assign_source_2 == NULL && !ERROR_OCCURRED()) {
            tmp_assign_source_2 = tmp_default_value_1;
            Py_INCREF(tmp_assign_source_2);
        }
        Py_DECREF(tmp_dict_arg_value_1);
        Py_DECREF(tmp_key_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_default_port == NULL);
        var_default_port = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 108;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = par_self;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[3]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[17]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 108;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[12];
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_3 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_authority == NULL);
        var_authority = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_default_port);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_default_port);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_authority);
        tmp_expression_value_11 = var_authority;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[18]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_default_port);
        tmp_args_element_value_2 = var_default_port;
        frame_d66fa4d5f32cd715fe0adc7f3f2083ae->m_frame.f_lineno = 109;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 109;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_len_arg_1;
        if (var_authority == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = var_authority;
        if (var_default_port == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[19]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = var_default_port;
        tmp_operand_value_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_value_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_stop_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_authority;
            var_authority = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_assattr_target_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 111;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = par_self;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[3]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[20]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_authority);
        tmp_kw_call_value_0_2 = var_authority;
        frame_d66fa4d5f32cd715fe0adc7f3f2083ae->m_frame.f_lineno = 111;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

            tmp_assattr_value_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, kw_values, mod_consts[21]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 111;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[3], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        CHECK_OBJECT(par_kwargs);
        tmp_condition_result_6 = CHECK_IF_TRUE(par_kwargs) == 1;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_assattr_target_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[20]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg2_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_expression_value_15 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[3]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[3], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_6:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d66fa4d5f32cd715fe0adc7f3f2083ae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d66fa4d5f32cd715fe0adc7f3f2083ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d66fa4d5f32cd715fe0adc7f3f2083ae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d66fa4d5f32cd715fe0adc7f3f2083ae,
        type_description_1,
        par_self,
        par_url,
        par_kwargs,
        var_exc,
        var_default_port,
        var_authority
    );


    // Release cached frame if used for exception.
    if (frame_d66fa4d5f32cd715fe0adc7f3f2083ae == cache_frame_d66fa4d5f32cd715fe0adc7f3f2083ae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d66fa4d5f32cd715fe0adc7f3f2083ae);
        cache_frame_d66fa4d5f32cd715fe0adc7f3f2083ae = NULL;
    }

    assertFrameObject(frame_d66fa4d5f32cd715fe0adc7f3f2083ae);

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
    Py_XDECREF(var_default_port);
    var_default_port = NULL;
    Py_XDECREF(var_authority);
    var_authority = NULL;
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

    Py_XDECREF(var_default_port);
    var_default_port = NULL;
    Py_XDECREF(var_authority);
    var_authority = NULL;
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
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_urls$$$function__2_scheme(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_6e7afe79966cc1b07e48c48c9558aea4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6e7afe79966cc1b07e48c48c9558aea4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6e7afe79966cc1b07e48c48c9558aea4)) {
        Py_XDECREF(cache_frame_6e7afe79966cc1b07e48c48c9558aea4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e7afe79966cc1b07e48c48c9558aea4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e7afe79966cc1b07e48c48c9558aea4 = MAKE_FUNCTION_FRAME(codeobj_6e7afe79966cc1b07e48c48c9558aea4, module_httpx$_urls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e7afe79966cc1b07e48c48c9558aea4->m_type_description == NULL);
    frame_6e7afe79966cc1b07e48c48c9558aea4 = cache_frame_6e7afe79966cc1b07e48c48c9558aea4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6e7afe79966cc1b07e48c48c9558aea4);
    assert(Py_REFCNT(frame_6e7afe79966cc1b07e48c48c9558aea4) == 2);

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[12];
        Py_INCREF(tmp_or_right_value_1);
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_6e7afe79966cc1b07e48c48c9558aea4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e7afe79966cc1b07e48c48c9558aea4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e7afe79966cc1b07e48c48c9558aea4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e7afe79966cc1b07e48c48c9558aea4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_6e7afe79966cc1b07e48c48c9558aea4 == cache_frame_6e7afe79966cc1b07e48c48c9558aea4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e7afe79966cc1b07e48c48c9558aea4);
        cache_frame_6e7afe79966cc1b07e48c48c9558aea4 = NULL;
    }

    assertFrameObject(frame_6e7afe79966cc1b07e48c48c9558aea4);

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


static PyObject *impl_httpx$_urls$$$function__3_raw_scheme(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9cd96749de2a4d5f710004d4d030c680;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9cd96749de2a4d5f710004d4d030c680 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9cd96749de2a4d5f710004d4d030c680)) {
        Py_XDECREF(cache_frame_9cd96749de2a4d5f710004d4d030c680);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9cd96749de2a4d5f710004d4d030c680 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9cd96749de2a4d5f710004d4d030c680 = MAKE_FUNCTION_FRAME(codeobj_9cd96749de2a4d5f710004d4d030c680, module_httpx$_urls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9cd96749de2a4d5f710004d4d030c680->m_type_description == NULL);
    frame_9cd96749de2a4d5f710004d4d030c680 = cache_frame_9cd96749de2a4d5f710004d4d030c680;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9cd96749de2a4d5f710004d4d030c680);
    assert(Py_REFCNT(frame_9cd96749de2a4d5f710004d4d030c680) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[16]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_9cd96749de2a4d5f710004d4d030c680->m_frame.f_lineno = 130;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[23]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
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
        exception_tb = MAKE_TRACEBACK(frame_9cd96749de2a4d5f710004d4d030c680, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9cd96749de2a4d5f710004d4d030c680->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9cd96749de2a4d5f710004d4d030c680, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9cd96749de2a4d5f710004d4d030c680,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9cd96749de2a4d5f710004d4d030c680 == cache_frame_9cd96749de2a4d5f710004d4d030c680) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9cd96749de2a4d5f710004d4d030c680);
        cache_frame_9cd96749de2a4d5f710004d4d030c680 = NULL;
    }

    assertFrameObject(frame_9cd96749de2a4d5f710004d4d030c680);

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


static PyObject *impl_httpx$_urls$$$function__4_userinfo(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_userinfo = NULL;
    struct Nuitka_FrameObject *frame_8ad6cef804c90357c635a45d3fc180c4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8ad6cef804c90357c635a45d3fc180c4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8ad6cef804c90357c635a45d3fc180c4)) {
        Py_XDECREF(cache_frame_8ad6cef804c90357c635a45d3fc180c4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8ad6cef804c90357c635a45d3fc180c4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8ad6cef804c90357c635a45d3fc180c4 = MAKE_FUNCTION_FRAME(codeobj_8ad6cef804c90357c635a45d3fc180c4, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8ad6cef804c90357c635a45d3fc180c4->m_type_description == NULL);
    frame_8ad6cef804c90357c635a45d3fc180c4 = cache_frame_8ad6cef804c90357c635a45d3fc180c4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8ad6cef804c90357c635a45d3fc180c4);
    assert(Py_REFCNT(frame_8ad6cef804c90357c635a45d3fc180c4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 138;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[12];
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_userinfo == NULL);
        var_userinfo = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_userinfo);
        tmp_expression_value_3 = var_userinfo;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8ad6cef804c90357c635a45d3fc180c4->m_frame.f_lineno = 139;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[23]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8ad6cef804c90357c635a45d3fc180c4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8ad6cef804c90357c635a45d3fc180c4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8ad6cef804c90357c635a45d3fc180c4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8ad6cef804c90357c635a45d3fc180c4,
        type_description_1,
        par_self,
        var_userinfo
    );


    // Release cached frame if used for exception.
    if (frame_8ad6cef804c90357c635a45d3fc180c4 == cache_frame_8ad6cef804c90357c635a45d3fc180c4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8ad6cef804c90357c635a45d3fc180c4);
        cache_frame_8ad6cef804c90357c635a45d3fc180c4 = NULL;
    }

    assertFrameObject(frame_8ad6cef804c90357c635a45d3fc180c4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_userinfo);
    Py_DECREF(var_userinfo);
    var_userinfo = NULL;
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

    Py_XDECREF(var_userinfo);
    var_userinfo = NULL;
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


static PyObject *impl_httpx$_urls$$$function__5_username(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_userinfo = NULL;
    struct Nuitka_FrameObject *frame_9eb5bbd599d7ffafa1e0e879a694f0b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9eb5bbd599d7ffafa1e0e879a694f0b5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9eb5bbd599d7ffafa1e0e879a694f0b5)) {
        Py_XDECREF(cache_frame_9eb5bbd599d7ffafa1e0e879a694f0b5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9eb5bbd599d7ffafa1e0e879a694f0b5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9eb5bbd599d7ffafa1e0e879a694f0b5 = MAKE_FUNCTION_FRAME(codeobj_9eb5bbd599d7ffafa1e0e879a694f0b5, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9eb5bbd599d7ffafa1e0e879a694f0b5->m_type_description == NULL);
    frame_9eb5bbd599d7ffafa1e0e879a694f0b5 = cache_frame_9eb5bbd599d7ffafa1e0e879a694f0b5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9eb5bbd599d7ffafa1e0e879a694f0b5);
    assert(Py_REFCNT(frame_9eb5bbd599d7ffafa1e0e879a694f0b5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 147;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[12];
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_userinfo == NULL);
        var_userinfo = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_userinfo);
        tmp_expression_value_4 = var_userinfo;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[28]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9eb5bbd599d7ffafa1e0e879a694f0b5->m_frame.f_lineno = 148;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[29]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[30];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9eb5bbd599d7ffafa1e0e879a694f0b5->m_frame.f_lineno = 148;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9eb5bbd599d7ffafa1e0e879a694f0b5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9eb5bbd599d7ffafa1e0e879a694f0b5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9eb5bbd599d7ffafa1e0e879a694f0b5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9eb5bbd599d7ffafa1e0e879a694f0b5,
        type_description_1,
        par_self,
        var_userinfo
    );


    // Release cached frame if used for exception.
    if (frame_9eb5bbd599d7ffafa1e0e879a694f0b5 == cache_frame_9eb5bbd599d7ffafa1e0e879a694f0b5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9eb5bbd599d7ffafa1e0e879a694f0b5);
        cache_frame_9eb5bbd599d7ffafa1e0e879a694f0b5 = NULL;
    }

    assertFrameObject(frame_9eb5bbd599d7ffafa1e0e879a694f0b5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_userinfo);
    Py_DECREF(var_userinfo);
    var_userinfo = NULL;
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

    Py_XDECREF(var_userinfo);
    var_userinfo = NULL;
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


static PyObject *impl_httpx$_urls$$$function__6_password(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_userinfo = NULL;
    struct Nuitka_FrameObject *frame_bbbc2b8ad03319e8a682d30dc158b538;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bbbc2b8ad03319e8a682d30dc158b538 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bbbc2b8ad03319e8a682d30dc158b538)) {
        Py_XDECREF(cache_frame_bbbc2b8ad03319e8a682d30dc158b538);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bbbc2b8ad03319e8a682d30dc158b538 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bbbc2b8ad03319e8a682d30dc158b538 = MAKE_FUNCTION_FRAME(codeobj_bbbc2b8ad03319e8a682d30dc158b538, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bbbc2b8ad03319e8a682d30dc158b538->m_type_description == NULL);
    frame_bbbc2b8ad03319e8a682d30dc158b538 = cache_frame_bbbc2b8ad03319e8a682d30dc158b538;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bbbc2b8ad03319e8a682d30dc158b538);
    assert(Py_REFCNT(frame_bbbc2b8ad03319e8a682d30dc158b538) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[12];
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_userinfo == NULL);
        var_userinfo = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_userinfo);
        tmp_expression_value_4 = var_userinfo;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[28]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_bbbc2b8ad03319e8a682d30dc158b538->m_frame.f_lineno = 157;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[29]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[32];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 2);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_bbbc2b8ad03319e8a682d30dc158b538->m_frame.f_lineno = 157;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bbbc2b8ad03319e8a682d30dc158b538, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bbbc2b8ad03319e8a682d30dc158b538->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bbbc2b8ad03319e8a682d30dc158b538, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bbbc2b8ad03319e8a682d30dc158b538,
        type_description_1,
        par_self,
        var_userinfo
    );


    // Release cached frame if used for exception.
    if (frame_bbbc2b8ad03319e8a682d30dc158b538 == cache_frame_bbbc2b8ad03319e8a682d30dc158b538) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bbbc2b8ad03319e8a682d30dc158b538);
        cache_frame_bbbc2b8ad03319e8a682d30dc158b538 = NULL;
    }

    assertFrameObject(frame_bbbc2b8ad03319e8a682d30dc158b538);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_userinfo);
    Py_DECREF(var_userinfo);
    var_userinfo = NULL;
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

    Py_XDECREF(var_userinfo);
    var_userinfo = NULL;
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


static PyObject *impl_httpx$_urls$$$function__7_host(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_host = NULL;
    struct Nuitka_FrameObject *frame_4a98f12515989d0736d849d00bbf32b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4a98f12515989d0736d849d00bbf32b7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4a98f12515989d0736d849d00bbf32b7)) {
        Py_XDECREF(cache_frame_4a98f12515989d0736d849d00bbf32b7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4a98f12515989d0736d849d00bbf32b7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4a98f12515989d0736d849d00bbf32b7 = MAKE_FUNCTION_FRAME(codeobj_4a98f12515989d0736d849d00bbf32b7, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4a98f12515989d0736d849d00bbf32b7->m_type_description == NULL);
    frame_4a98f12515989d0736d849d00bbf32b7 = cache_frame_4a98f12515989d0736d849d00bbf32b7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4a98f12515989d0736d849d00bbf32b7);
    assert(Py_REFCNT(frame_4a98f12515989d0736d849d00bbf32b7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 179;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[12];
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_host == NULL);
        var_host = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_host);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_host);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_cmp_expr_left_1 = mod_consts[35];
        CHECK_OBJECT(var_host);
        tmp_cmp_expr_right_1 = var_host;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_host);
        tmp_expression_value_3 = var_host;
        tmp_subscript_value_1 = mod_consts[30];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[36];
        tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_host);
        tmp_expression_value_5 = var_host;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[37]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_4a98f12515989d0736d849d00bbf32b7->m_frame.f_lineno = 183;
        tmp_expression_value_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[38]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[39]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_4a98f12515989d0736d849d00bbf32b7->m_frame.f_lineno = 183;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[40]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_host;
            assert(old != NULL);
            var_host = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_host);
        tmp_expression_value_6 = var_host;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[41]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_4a98f12515989d0736d849d00bbf32b7->m_frame.f_lineno = 185;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[42]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 185;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[44]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_host);
        tmp_args_element_value_1 = var_host;
        frame_4a98f12515989d0736d849d00bbf32b7->m_frame.f_lineno = 186;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_host;
            assert(old != NULL);
            var_host = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    if (var_host == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 188;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_host;
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
        exception_tb = MAKE_TRACEBACK(frame_4a98f12515989d0736d849d00bbf32b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4a98f12515989d0736d849d00bbf32b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4a98f12515989d0736d849d00bbf32b7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4a98f12515989d0736d849d00bbf32b7,
        type_description_1,
        par_self,
        var_host
    );


    // Release cached frame if used for exception.
    if (frame_4a98f12515989d0736d849d00bbf32b7 == cache_frame_4a98f12515989d0736d849d00bbf32b7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4a98f12515989d0736d849d00bbf32b7);
        cache_frame_4a98f12515989d0736d849d00bbf32b7 = NULL;
    }

    assertFrameObject(frame_4a98f12515989d0736d849d00bbf32b7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_host);
    var_host = NULL;
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

    Py_XDECREF(var_host);
    var_host = NULL;
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


static PyObject *impl_httpx$_urls$$$function__8_raw_host(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_host = NULL;
    struct Nuitka_FrameObject *frame_75663d7351c1fa1058af775afd8464e9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_75663d7351c1fa1058af775afd8464e9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_75663d7351c1fa1058af775afd8464e9)) {
        Py_XDECREF(cache_frame_75663d7351c1fa1058af775afd8464e9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_75663d7351c1fa1058af775afd8464e9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_75663d7351c1fa1058af775afd8464e9 = MAKE_FUNCTION_FRAME(codeobj_75663d7351c1fa1058af775afd8464e9, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_75663d7351c1fa1058af775afd8464e9->m_type_description == NULL);
    frame_75663d7351c1fa1058af775afd8464e9 = cache_frame_75663d7351c1fa1058af775afd8464e9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_75663d7351c1fa1058af775afd8464e9);
    assert(Py_REFCNT(frame_75663d7351c1fa1058af775afd8464e9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[12];
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_host == NULL);
        var_host = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_host);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_host);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_cmp_expr_left_1 = mod_consts[35];
        CHECK_OBJECT(var_host);
        tmp_cmp_expr_right_1 = var_host;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_host);
        tmp_expression_value_3 = var_host;
        tmp_subscript_value_1 = mod_consts[30];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[36];
        tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_host);
        tmp_expression_value_5 = var_host;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[37]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_75663d7351c1fa1058af775afd8464e9->m_frame.f_lineno = 214;
        tmp_expression_value_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[38]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[39]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_75663d7351c1fa1058af775afd8464e9->m_frame.f_lineno = 214;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[40]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_host;
            assert(old != NULL);
            var_host = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_host);
        tmp_expression_value_6 = var_host;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[2]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_75663d7351c1fa1058af775afd8464e9->m_frame.f_lineno = 216;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[23]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_75663d7351c1fa1058af775afd8464e9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_75663d7351c1fa1058af775afd8464e9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_75663d7351c1fa1058af775afd8464e9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_75663d7351c1fa1058af775afd8464e9,
        type_description_1,
        par_self,
        var_host
    );


    // Release cached frame if used for exception.
    if (frame_75663d7351c1fa1058af775afd8464e9 == cache_frame_75663d7351c1fa1058af775afd8464e9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_75663d7351c1fa1058af775afd8464e9);
        cache_frame_75663d7351c1fa1058af775afd8464e9 = NULL;
    }

    assertFrameObject(frame_75663d7351c1fa1058af775afd8464e9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_host);
    Py_DECREF(var_host);
    var_host = NULL;
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

    Py_XDECREF(var_host);
    var_host = NULL;
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


static PyObject *impl_httpx$_urls$$$function__9_port(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_port = NULL;
    struct Nuitka_FrameObject *frame_a0d6a853cc886759377991ccc2651dc7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a0d6a853cc886759377991ccc2651dc7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a0d6a853cc886759377991ccc2651dc7)) {
        Py_XDECREF(cache_frame_a0d6a853cc886759377991ccc2651dc7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a0d6a853cc886759377991ccc2651dc7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a0d6a853cc886759377991ccc2651dc7 = MAKE_FUNCTION_FRAME(codeobj_a0d6a853cc886759377991ccc2651dc7, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a0d6a853cc886759377991ccc2651dc7->m_type_description == NULL);
    frame_a0d6a853cc886759377991ccc2651dc7 = cache_frame_a0d6a853cc886759377991ccc2651dc7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a0d6a853cc886759377991ccc2651dc7);
    assert(Py_REFCNT(frame_a0d6a853cc886759377991ccc2651dc7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[47]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_port == NULL);
        var_port = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(var_port);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_port);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
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
        CHECK_OBJECT(var_port);
        tmp_int_arg_1 = var_port;
        tmp_return_value = PyNumber_Int(tmp_int_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
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
        exception_tb = MAKE_TRACEBACK(frame_a0d6a853cc886759377991ccc2651dc7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a0d6a853cc886759377991ccc2651dc7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a0d6a853cc886759377991ccc2651dc7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a0d6a853cc886759377991ccc2651dc7,
        type_description_1,
        par_self,
        var_port
    );


    // Release cached frame if used for exception.
    if (frame_a0d6a853cc886759377991ccc2651dc7 == cache_frame_a0d6a853cc886759377991ccc2651dc7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a0d6a853cc886759377991ccc2651dc7);
        cache_frame_a0d6a853cc886759377991ccc2651dc7 = NULL;
    }

    assertFrameObject(frame_a0d6a853cc886759377991ccc2651dc7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_port);
    Py_DECREF(var_port);
    var_port = NULL;
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

    Py_XDECREF(var_port);
    var_port = NULL;
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


static PyObject *impl_httpx$_urls$$$function__10_netloc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
    PyObject *var_netloc = NULL;
    struct Nuitka_FrameObject *frame_3fb8460dac6e62f28b7713f74d56264c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3fb8460dac6e62f28b7713f74d56264c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3fb8460dac6e62f28b7713f74d56264c)) {
        Py_XDECREF(cache_frame_3fb8460dac6e62f28b7713f74d56264c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3fb8460dac6e62f28b7713f74d56264c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3fb8460dac6e62f28b7713f74d56264c = MAKE_FUNCTION_FRAME(codeobj_3fb8460dac6e62f28b7713f74d56264c, module_httpx$_urls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3fb8460dac6e62f28b7713f74d56264c->m_type_description == NULL);
    frame_3fb8460dac6e62f28b7713f74d56264c = cache_frame_3fb8460dac6e62f28b7713f74d56264c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3fb8460dac6e62f28b7713f74d56264c);
    assert(Py_REFCNT(frame_3fb8460dac6e62f28b7713f74d56264c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 244;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[12];
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_host == NULL);
        var_host = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[47]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_port == NULL);
        var_port = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_host);
        tmp_expression_value_5 = var_host;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_3fb8460dac6e62f28b7713f74d56264c->m_frame.f_lineno = 246;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[23]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_netloc == NULL);
        var_netloc = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_port);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_port);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooo";
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_netloc);
        tmp_add_expr_left_2 = var_netloc;
        tmp_add_expr_right_2 = mod_consts[49];
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_BYTES(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_port);
        tmp_expression_value_6 = var_port;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[2]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 248;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_3fb8460dac6e62f28b7713f74d56264c->m_frame.f_lineno = 248;
        tmp_add_expr_right_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[23]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 248;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_netloc;
            assert(old != NULL);
            var_netloc = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3fb8460dac6e62f28b7713f74d56264c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3fb8460dac6e62f28b7713f74d56264c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3fb8460dac6e62f28b7713f74d56264c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3fb8460dac6e62f28b7713f74d56264c,
        type_description_1,
        par_self,
        var_host,
        var_port,
        var_netloc
    );


    // Release cached frame if used for exception.
    if (frame_3fb8460dac6e62f28b7713f74d56264c == cache_frame_3fb8460dac6e62f28b7713f74d56264c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3fb8460dac6e62f28b7713f74d56264c);
        cache_frame_3fb8460dac6e62f28b7713f74d56264c = NULL;
    }

    assertFrameObject(frame_3fb8460dac6e62f28b7713f74d56264c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_netloc);
    tmp_return_value = var_netloc;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_host);
    Py_DECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
    CHECK_OBJECT(var_netloc);
    Py_DECREF(var_netloc);
    var_netloc = NULL;
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

    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
    Py_XDECREF(var_netloc);
    var_netloc = NULL;
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


static PyObject *impl_httpx$_urls$$$function__11_path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_path = NULL;
    struct Nuitka_FrameObject *frame_f416200e7cd32873864449bcfa48023c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f416200e7cd32873864449bcfa48023c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f416200e7cd32873864449bcfa48023c)) {
        Py_XDECREF(cache_frame_f416200e7cd32873864449bcfa48023c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f416200e7cd32873864449bcfa48023c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f416200e7cd32873864449bcfa48023c = MAKE_FUNCTION_FRAME(codeobj_f416200e7cd32873864449bcfa48023c, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f416200e7cd32873864449bcfa48023c->m_type_description == NULL);
    frame_f416200e7cd32873864449bcfa48023c = cache_frame_f416200e7cd32873864449bcfa48023c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f416200e7cd32873864449bcfa48023c);
    assert(Py_REFCNT(frame_f416200e7cd32873864449bcfa48023c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[51]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 261;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[52];
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_path == NULL);
        var_path = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_path);
        tmp_args_element_value_1 = var_path;
        frame_f416200e7cd32873864449bcfa48023c->m_frame.f_lineno = 262;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f416200e7cd32873864449bcfa48023c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f416200e7cd32873864449bcfa48023c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f416200e7cd32873864449bcfa48023c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f416200e7cd32873864449bcfa48023c,
        type_description_1,
        par_self,
        var_path
    );


    // Release cached frame if used for exception.
    if (frame_f416200e7cd32873864449bcfa48023c == cache_frame_f416200e7cd32873864449bcfa48023c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f416200e7cd32873864449bcfa48023c);
        cache_frame_f416200e7cd32873864449bcfa48023c = NULL;
    }

    assertFrameObject(frame_f416200e7cd32873864449bcfa48023c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_path);
    Py_DECREF(var_path);
    var_path = NULL;
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

    Py_XDECREF(var_path);
    var_path = NULL;
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


static PyObject *impl_httpx$_urls$$$function__12_query(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_query = NULL;
    struct Nuitka_FrameObject *frame_16bc0a34b2879f438740d8ae428eeca9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_16bc0a34b2879f438740d8ae428eeca9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_16bc0a34b2879f438740d8ae428eeca9)) {
        Py_XDECREF(cache_frame_16bc0a34b2879f438740d8ae428eeca9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_16bc0a34b2879f438740d8ae428eeca9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_16bc0a34b2879f438740d8ae428eeca9 = MAKE_FUNCTION_FRAME(codeobj_16bc0a34b2879f438740d8ae428eeca9, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_16bc0a34b2879f438740d8ae428eeca9->m_type_description == NULL);
    frame_16bc0a34b2879f438740d8ae428eeca9 = cache_frame_16bc0a34b2879f438740d8ae428eeca9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_16bc0a34b2879f438740d8ae428eeca9);
    assert(Py_REFCNT(frame_16bc0a34b2879f438740d8ae428eeca9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[12];
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_query == NULL);
        var_query = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_query);
        tmp_expression_value_3 = var_query;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_16bc0a34b2879f438740d8ae428eeca9->m_frame.f_lineno = 279;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[23]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_16bc0a34b2879f438740d8ae428eeca9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_16bc0a34b2879f438740d8ae428eeca9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_16bc0a34b2879f438740d8ae428eeca9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_16bc0a34b2879f438740d8ae428eeca9,
        type_description_1,
        par_self,
        var_query
    );


    // Release cached frame if used for exception.
    if (frame_16bc0a34b2879f438740d8ae428eeca9 == cache_frame_16bc0a34b2879f438740d8ae428eeca9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_16bc0a34b2879f438740d8ae428eeca9);
        cache_frame_16bc0a34b2879f438740d8ae428eeca9 = NULL;
    }

    assertFrameObject(frame_16bc0a34b2879f438740d8ae428eeca9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_query);
    Py_DECREF(var_query);
    var_query = NULL;
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

    Py_XDECREF(var_query);
    var_query = NULL;
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


static PyObject *impl_httpx$_urls$$$function__13_params(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_08d106cd4cbd59fdbb2defe210da8c3e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_08d106cd4cbd59fdbb2defe210da8c3e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_08d106cd4cbd59fdbb2defe210da8c3e)) {
        Py_XDECREF(cache_frame_08d106cd4cbd59fdbb2defe210da8c3e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_08d106cd4cbd59fdbb2defe210da8c3e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_08d106cd4cbd59fdbb2defe210da8c3e = MAKE_FUNCTION_FRAME(codeobj_08d106cd4cbd59fdbb2defe210da8c3e, module_httpx$_urls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_08d106cd4cbd59fdbb2defe210da8c3e->m_type_description == NULL);
    frame_08d106cd4cbd59fdbb2defe210da8c3e = cache_frame_08d106cd4cbd59fdbb2defe210da8c3e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_08d106cd4cbd59fdbb2defe210da8c3e);
    assert(Py_REFCNT(frame_08d106cd4cbd59fdbb2defe210da8c3e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[54]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_08d106cd4cbd59fdbb2defe210da8c3e->m_frame.f_lineno = 287;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
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
        exception_tb = MAKE_TRACEBACK(frame_08d106cd4cbd59fdbb2defe210da8c3e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_08d106cd4cbd59fdbb2defe210da8c3e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_08d106cd4cbd59fdbb2defe210da8c3e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_08d106cd4cbd59fdbb2defe210da8c3e,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_08d106cd4cbd59fdbb2defe210da8c3e == cache_frame_08d106cd4cbd59fdbb2defe210da8c3e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_08d106cd4cbd59fdbb2defe210da8c3e);
        cache_frame_08d106cd4cbd59fdbb2defe210da8c3e = NULL;
    }

    assertFrameObject(frame_08d106cd4cbd59fdbb2defe210da8c3e);

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


static PyObject *impl_httpx$_urls$$$function__14_raw_path(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_path = NULL;
    struct Nuitka_FrameObject *frame_7308b452e7c2a56d93ee602f5ed78f5a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7308b452e7c2a56d93ee602f5ed78f5a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7308b452e7c2a56d93ee602f5ed78f5a)) {
        Py_XDECREF(cache_frame_7308b452e7c2a56d93ee602f5ed78f5a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7308b452e7c2a56d93ee602f5ed78f5a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7308b452e7c2a56d93ee602f5ed78f5a = MAKE_FUNCTION_FRAME(codeobj_7308b452e7c2a56d93ee602f5ed78f5a, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7308b452e7c2a56d93ee602f5ed78f5a->m_type_description == NULL);
    frame_7308b452e7c2a56d93ee602f5ed78f5a = cache_frame_7308b452e7c2a56d93ee602f5ed78f5a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7308b452e7c2a56d93ee602f5ed78f5a);
    assert(Py_REFCNT(frame_7308b452e7c2a56d93ee602f5ed78f5a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[51]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[52];
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_path == NULL);
        var_path = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[54]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_path);
        tmp_iadd_expr_left_1 = var_path;
        tmp_add_expr_left_1 = mod_consts[58];
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[3]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[54]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        var_path = tmp_assign_source_2;

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_path);
        tmp_expression_value_7 = var_path;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_7308b452e7c2a56d93ee602f5ed78f5a->m_frame.f_lineno = 304;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[23]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7308b452e7c2a56d93ee602f5ed78f5a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7308b452e7c2a56d93ee602f5ed78f5a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7308b452e7c2a56d93ee602f5ed78f5a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7308b452e7c2a56d93ee602f5ed78f5a,
        type_description_1,
        par_self,
        var_path
    );


    // Release cached frame if used for exception.
    if (frame_7308b452e7c2a56d93ee602f5ed78f5a == cache_frame_7308b452e7c2a56d93ee602f5ed78f5a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7308b452e7c2a56d93ee602f5ed78f5a);
        cache_frame_7308b452e7c2a56d93ee602f5ed78f5a = NULL;
    }

    assertFrameObject(frame_7308b452e7c2a56d93ee602f5ed78f5a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_path);
    Py_DECREF(var_path);
    var_path = NULL;
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

    Py_XDECREF(var_path);
    var_path = NULL;
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


static PyObject *impl_httpx$_urls$$$function__15_fragment(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9621ddce7070f8988b80636ccf65b94a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9621ddce7070f8988b80636ccf65b94a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9621ddce7070f8988b80636ccf65b94a)) {
        Py_XDECREF(cache_frame_9621ddce7070f8988b80636ccf65b94a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9621ddce7070f8988b80636ccf65b94a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9621ddce7070f8988b80636ccf65b94a = MAKE_FUNCTION_FRAME(codeobj_9621ddce7070f8988b80636ccf65b94a, module_httpx$_urls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9621ddce7070f8988b80636ccf65b94a->m_type_description == NULL);
    frame_9621ddce7070f8988b80636ccf65b94a = cache_frame_9621ddce7070f8988b80636ccf65b94a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9621ddce7070f8988b80636ccf65b94a);
    assert(Py_REFCNT(frame_9621ddce7070f8988b80636ccf65b94a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[60]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 312;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = mod_consts[12];
        Py_INCREF(tmp_or_right_value_1);
        tmp_args_element_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_value_1 = tmp_or_left_value_1;
        or_end_1:;
        frame_9621ddce7070f8988b80636ccf65b94a->m_frame.f_lineno = 312;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
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
        exception_tb = MAKE_TRACEBACK(frame_9621ddce7070f8988b80636ccf65b94a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9621ddce7070f8988b80636ccf65b94a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9621ddce7070f8988b80636ccf65b94a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9621ddce7070f8988b80636ccf65b94a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9621ddce7070f8988b80636ccf65b94a == cache_frame_9621ddce7070f8988b80636ccf65b94a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9621ddce7070f8988b80636ccf65b94a);
        cache_frame_9621ddce7070f8988b80636ccf65b94a = NULL;
    }

    assertFrameObject(frame_9621ddce7070f8988b80636ccf65b94a);

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


static PyObject *impl_httpx$_urls$$$function__16_raw(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_88058cf9b3f36d10b96fafb9c1827122;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_88058cf9b3f36d10b96fafb9c1827122 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_88058cf9b3f36d10b96fafb9c1827122)) {
        Py_XDECREF(cache_frame_88058cf9b3f36d10b96fafb9c1827122);

#if _DEBUG_REFCOUNTS
        if (cache_frame_88058cf9b3f36d10b96fafb9c1827122 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_88058cf9b3f36d10b96fafb9c1827122 = MAKE_FUNCTION_FRAME(codeobj_88058cf9b3f36d10b96fafb9c1827122, module_httpx$_urls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_88058cf9b3f36d10b96fafb9c1827122->m_type_description == NULL);
    frame_88058cf9b3f36d10b96fafb9c1827122 = cache_frame_88058cf9b3f36d10b96fafb9c1827122;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_88058cf9b3f36d10b96fafb9c1827122);
    assert(Py_REFCNT(frame_88058cf9b3f36d10b96fafb9c1827122) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[64]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 324;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[47]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 325;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[65]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 326;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_88058cf9b3f36d10b96fafb9c1827122->m_frame.f_lineno = 322;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
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
        exception_tb = MAKE_TRACEBACK(frame_88058cf9b3f36d10b96fafb9c1827122, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_88058cf9b3f36d10b96fafb9c1827122->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_88058cf9b3f36d10b96fafb9c1827122, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_88058cf9b3f36d10b96fafb9c1827122,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_88058cf9b3f36d10b96fafb9c1827122 == cache_frame_88058cf9b3f36d10b96fafb9c1827122) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_88058cf9b3f36d10b96fafb9c1827122);
        cache_frame_88058cf9b3f36d10b96fafb9c1827122 = NULL;
    }

    assertFrameObject(frame_88058cf9b3f36d10b96fafb9c1827122);

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


static PyObject *impl_httpx$_urls$$$function__17_is_absolute_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1553d18976fd0670d5a80f964548c204;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1553d18976fd0670d5a80f964548c204 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1553d18976fd0670d5a80f964548c204)) {
        Py_XDECREF(cache_frame_1553d18976fd0670d5a80f964548c204);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1553d18976fd0670d5a80f964548c204 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1553d18976fd0670d5a80f964548c204 = MAKE_FUNCTION_FRAME(codeobj_1553d18976fd0670d5a80f964548c204, module_httpx$_urls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1553d18976fd0670d5a80f964548c204->m_type_description == NULL);
    frame_1553d18976fd0670d5a80f964548c204 = cache_frame_1553d18976fd0670d5a80f964548c204;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1553d18976fd0670d5a80f964548c204);
    assert(Py_REFCNT(frame_1553d18976fd0670d5a80f964548c204) == 2);

    // Framed code:
    {
        PyObject *tmp_value_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[34]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_value_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_value_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_1553d18976fd0670d5a80f964548c204, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1553d18976fd0670d5a80f964548c204->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1553d18976fd0670d5a80f964548c204, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1553d18976fd0670d5a80f964548c204,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1553d18976fd0670d5a80f964548c204 == cache_frame_1553d18976fd0670d5a80f964548c204) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1553d18976fd0670d5a80f964548c204);
        cache_frame_1553d18976fd0670d5a80f964548c204 = NULL;
    }

    assertFrameObject(frame_1553d18976fd0670d5a80f964548c204);

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


static PyObject *impl_httpx$_urls$$$function__18_is_relative_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a454a82524de1a1bdf3a050c206bfad9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a454a82524de1a1bdf3a050c206bfad9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a454a82524de1a1bdf3a050c206bfad9)) {
        Py_XDECREF(cache_frame_a454a82524de1a1bdf3a050c206bfad9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a454a82524de1a1bdf3a050c206bfad9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a454a82524de1a1bdf3a050c206bfad9 = MAKE_FUNCTION_FRAME(codeobj_a454a82524de1a1bdf3a050c206bfad9, module_httpx$_urls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a454a82524de1a1bdf3a050c206bfad9->m_type_description == NULL);
    frame_a454a82524de1a1bdf3a050c206bfad9 = cache_frame_a454a82524de1a1bdf3a050c206bfad9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a454a82524de1a1bdf3a050c206bfad9);
    assert(Py_REFCNT(frame_a454a82524de1a1bdf3a050c206bfad9) == 2);

    // Framed code:
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_a454a82524de1a1bdf3a050c206bfad9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a454a82524de1a1bdf3a050c206bfad9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a454a82524de1a1bdf3a050c206bfad9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a454a82524de1a1bdf3a050c206bfad9,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a454a82524de1a1bdf3a050c206bfad9 == cache_frame_a454a82524de1a1bdf3a050c206bfad9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a454a82524de1a1bdf3a050c206bfad9);
        cache_frame_a454a82524de1a1bdf3a050c206bfad9 = NULL;
    }

    assertFrameObject(frame_a454a82524de1a1bdf3a050c206bfad9);

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


static PyObject *impl_httpx$_urls$$$function__19_copy_with(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_allowed = NULL;
    PyObject *var_key = NULL;
    PyObject *var_value = NULL;
    PyObject *var_message = NULL;
    PyObject *var_expected = NULL;
    PyObject *var_seen = NULL;
    PyObject *var_username = NULL;
    PyObject *var_password = NULL;
    PyObject *var_userinfo = NULL;
    PyObject *var_host = NULL;
    PyObject *var_port = NULL;
    PyObject *var_netloc = NULL;
    PyObject *var_authority = NULL;
    PyObject *var_raw_path = NULL;
    PyObject *var_path = NULL;
    PyObject *var_has_query = NULL;
    PyObject *var_query = NULL;
    PyObject *var_params = NULL;
    PyObject *var_new_url = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_aaadfe664205032516bf24aae3a87e2a;
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
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_aaadfe664205032516bf24aae3a87e2a = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = DICT_COPY(mod_consts[69]);
        assert(var_allowed == NULL);
        var_allowed = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_aaadfe664205032516bf24aae3a87e2a)) {
        Py_XDECREF(cache_frame_aaadfe664205032516bf24aae3a87e2a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aaadfe664205032516bf24aae3a87e2a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aaadfe664205032516bf24aae3a87e2a = MAKE_FUNCTION_FRAME(codeobj_aaadfe664205032516bf24aae3a87e2a, module_httpx$_urls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aaadfe664205032516bf24aae3a87e2a->m_type_description == NULL);
    frame_aaadfe664205032516bf24aae3a87e2a = cache_frame_aaadfe664205032516bf24aae3a87e2a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_aaadfe664205032516bf24aae3a87e2a);
    assert(Py_REFCNT(frame_aaadfe664205032516bf24aae3a87e2a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_dict_arg_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_1 = par_kwargs;
        tmp_iter_arg_1 = DICT_ITERITEMS(tmp_dict_arg_1);
        assert(!(tmp_iter_arg_1 == NULL));
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooooooooooooooooooo";
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
                type_description_1 = "ooooooooooooooooooooo";
                exception_lineno = 379;
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


            exception_lineno = 379;
            type_description_1 = "ooooooooooooooooooooo";
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 379;
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 379;
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

                    type_description_1 = "ooooooooooooooooooooo";
                    exception_lineno = 379;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[70];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 379;
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
            PyObject *old = var_key;
            var_key = tmp_assign_source_7;
            Py_INCREF(var_key);
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
            PyObject *old = var_value;
            var_value = tmp_assign_source_8;
            Py_INCREF(var_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        CHECK_OBJECT(var_key);
        tmp_key_value_1 = var_key;
        CHECK_OBJECT(var_allowed);
        tmp_dict_arg_value_1 = var_allowed;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(var_key);
        tmp_operand_value_1 = var_key;
        tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_format_spec_1 = mod_consts[12];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[71];
        PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        tmp_assign_source_9 = PyUnicode_Join(mod_consts[12], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_message == NULL);
        var_message = tmp_assign_source_9;
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        CHECK_OBJECT(var_message);
        tmp_make_exception_arg_1 = var_message;
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 382;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 382;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_1 = var_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_value);
        tmp_isinstance_inst_1 = var_value;
        CHECK_OBJECT(var_allowed);
        tmp_dict_arg_value_2 = var_allowed;
        CHECK_OBJECT(var_key);
        tmp_key_value_2 = var_key;
        tmp_isinstance_cls_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dict_arg_value_3;
        PyObject *tmp_key_value_3;
        CHECK_OBJECT(var_allowed);
        tmp_dict_arg_value_3 = var_allowed;
        CHECK_OBJECT(var_key);
        tmp_key_value_3 = var_key;
        tmp_expression_value_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_value_3, tmp_key_value_3);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[72]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_expected == NULL);
        var_expected = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(var_value);
        tmp_type_arg_1 = var_value;
        tmp_expression_value_2 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_expression_value_2 == NULL));
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[72]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_seen == NULL);
        var_seen = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[73];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_operand_value_3;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_key);
            tmp_operand_value_3 = var_key;
            tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;
                type_description_1 = "ooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[12];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;
                type_description_1 = "ooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[74];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(var_expected);
            tmp_format_value_3 = var_expected;
            tmp_format_spec_3 = mod_consts[12];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;
                type_description_1 = "ooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[75];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_2);
            CHECK_OBJECT(var_seen);
            tmp_format_value_4 = var_seen;
            tmp_format_spec_4 = mod_consts[12];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 386;
                type_description_1 = "ooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 5, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_12 = PyUnicode_Join(mod_consts[12], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_message == NULL);
        var_message = tmp_assign_source_12;
    }
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        CHECK_OBJECT(var_message);
        tmp_make_exception_arg_2 = var_message;
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 387;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 387;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    branch_no_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 379;
        type_description_1 = "ooooooooooooooooooooo";
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
        bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_key_value_4;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_key_value_5;
        PyObject *tmp_dict_arg_value_5;
        tmp_key_value_4 = mod_consts[76];
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_4 = par_kwargs;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_4, tmp_key_value_4);
        assert(!(tmp_res == -1));
        tmp_or_left_value_1 = (tmp_res != 0) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_key_value_5 = mod_consts[77];
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_5 = par_kwargs;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_5, tmp_key_value_5);
        assert(!(tmp_res == -1));
        tmp_or_right_value_1 = (tmp_res != 0) ? true : false;
        tmp_condition_result_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_3 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_dict_arg_value_6;
        PyObject *tmp_key_value_6;
        PyObject *tmp_default_value_1;
        PyObject *tmp_expression_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_6 = par_kwargs;
        tmp_key_value_6 = mod_consts[76];
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_default_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[76]);
        if (tmp_default_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = DICT_POP3(tmp_dict_arg_value_6, tmp_key_value_6, tmp_default_value_1);
        Py_DECREF(tmp_default_value_1);
        assert(!(tmp_or_left_value_2 == NULL));
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 396;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        tmp_or_right_value_2 = mod_consts[12];
        Py_INCREF(tmp_or_right_value_2);
        tmp_args_element_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_args_element_value_1 = tmp_or_left_value_2;
        or_end_2:;
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 396;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_username == NULL);
        var_username = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kwargs);
        tmp_expression_value_4 = par_kwargs;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[79]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[77];
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[77]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 397;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 397;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_or_left_value_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_or_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_3);

            exception_lineno = 397;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        Py_DECREF(tmp_or_left_value_3);
        tmp_or_right_value_3 = mod_consts[12];
        Py_INCREF(tmp_or_right_value_3);
        tmp_args_element_value_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_args_element_value_2 = tmp_or_left_value_3;
        or_end_3:;
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 397;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_password == NULL);
        var_password = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_format_value_5;
        PyObject *tmp_format_spec_5;
        CHECK_OBJECT(var_password);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_password);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_username);
        tmp_format_value_5 = var_username;
        tmp_format_spec_5 = mod_consts[12];
        tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_6;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            CHECK_OBJECT(var_password);
            tmp_format_value_6 = var_password;
            tmp_format_spec_6 = mod_consts[12];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_6, tmp_format_spec_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 398;
                type_description_1 = "ooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_15 = PyUnicode_Join(mod_consts[12], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(var_username);
        tmp_assign_source_15 = var_username;
        Py_INCREF(tmp_assign_source_15);
        condexpr_end_1:;
        assert(var_userinfo == NULL);
        var_userinfo = tmp_assign_source_15;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_userinfo);
        tmp_expression_value_6 = var_userinfo;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[2]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 399;
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[23]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kwargs);
        tmp_ass_subscribed_1 = par_kwargs;
        tmp_ass_subscript_1 = mod_consts[25];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    {
        bool tmp_condition_result_5;
        int tmp_or_left_truth_4;
        bool tmp_or_left_value_4;
        bool tmp_or_right_value_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_2 = mod_consts[34];
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 401;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_2 = par_kwargs;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_4 = (tmp_res == 1) ? true : false;
        tmp_or_left_truth_4 = tmp_or_left_value_4 != false ? 1 : 0;
        if (tmp_or_left_truth_4 == 1) {
            goto or_left_4;
        } else {
            goto or_right_4;
        }
        or_right_4:;
        tmp_cmp_expr_left_3 = mod_consts[47];
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 401;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_3 = par_kwargs;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_4 = (tmp_res == 1) ? true : false;
        tmp_condition_result_5 = tmp_or_right_value_4;
        goto or_end_4;
        or_left_4:;
        tmp_condition_result_5 = tmp_or_left_value_4;
        or_end_4:;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_16;
        int tmp_or_left_truth_5;
        PyObject *tmp_or_left_value_5;
        PyObject *tmp_or_right_value_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_8;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = par_kwargs;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[79]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = mod_consts[34];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_self;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[34]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 403;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 403;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_or_left_value_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_or_left_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_5 = CHECK_IF_TRUE(tmp_or_left_value_5);
        if (tmp_or_left_truth_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_5);

            exception_lineno = 403;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_5 == 1) {
            goto or_left_5;
        } else {
            goto or_right_5;
        }
        or_right_5:;
        Py_DECREF(tmp_or_left_value_5);
        tmp_or_right_value_5 = mod_consts[12];
        Py_INCREF(tmp_or_right_value_5);
        tmp_assign_source_16 = tmp_or_right_value_5;
        goto or_end_5;
        or_left_5:;
        tmp_assign_source_16 = tmp_or_left_value_5;
        or_end_5:;
        assert(var_host == NULL);
        var_host = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_10;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = par_kwargs;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[79]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[47];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = par_self;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[47]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 404;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_port == NULL);
        var_port = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_2;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_host);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_host);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        tmp_cmp_expr_left_4 = mod_consts[35];
        CHECK_OBJECT(var_host);
        tmp_cmp_expr_right_4 = var_host;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(var_host);
        tmp_expression_value_11 = var_host;
        tmp_subscript_value_1 = mod_consts[30];
        tmp_cmp_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_1, 0);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = mod_consts[36];
        tmp_and_right_value_3 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
        tmp_condition_result_6 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_6 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = mod_consts[36];
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_7;
            PyObject *tmp_format_spec_7;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_host);
            tmp_format_value_7 = var_host;
            tmp_format_spec_7 = mod_consts[12];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_7, tmp_format_spec_7);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_1 = "ooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[81];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_18 = PyUnicode_Join(mod_consts[12], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_host;
            assert(old != NULL);
            var_host = tmp_assign_source_18;
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    {
        PyObject *tmp_ass_subvalue_2;
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_string_concat_values_5;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_format_value_8;
        PyObject *tmp_format_spec_8;
        PyObject *tmp_encoding_value_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_port);
        tmp_cmp_expr_left_6 = var_port;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(var_host);
        tmp_format_value_8 = var_host;
        tmp_format_spec_8 = mod_consts[12];
        tmp_tuple_element_5 = BUILTIN_FORMAT(tmp_format_value_8, tmp_format_spec_8);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_9;
            PyObject *tmp_format_spec_9;
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
            CHECK_OBJECT(var_port);
            tmp_format_value_9 = var_port;
            tmp_format_spec_9 = mod_consts[12];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tmp_format_value_9, tmp_format_spec_9);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;
                type_description_1 = "ooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 2, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_string_concat_values_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_str_arg_value_1 = PyUnicode_Join(mod_consts[12], tmp_string_concat_values_5);
        Py_DECREF(tmp_string_concat_values_5);
        if (tmp_str_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_encoding_value_1 = mod_consts[82];
        tmp_ass_subvalue_2 = UNICODE_ENCODE2(tmp_str_arg_value_1, tmp_encoding_value_1);
        Py_DECREF(tmp_str_arg_value_1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT(var_host);
        tmp_expression_value_12 = var_host;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[2]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 413;
        tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[23]);

        Py_DECREF(tmp_called_value_7);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_2:;
        if (par_kwargs == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = par_kwargs;
        tmp_ass_subscript_2 = mod_consts[83];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_4:;
    {
        bool tmp_condition_result_8;
        int tmp_or_left_truth_6;
        bool tmp_or_left_value_6;
        bool tmp_or_right_value_6;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        tmp_cmp_expr_left_7 = mod_consts[25];
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_7 = par_kwargs;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_6 = (tmp_res == 1) ? true : false;
        tmp_or_left_truth_6 = tmp_or_left_value_6 != false ? 1 : 0;
        if (tmp_or_left_truth_6 == 1) {
            goto or_left_6;
        } else {
            goto or_right_6;
        }
        or_right_6:;
        tmp_cmp_expr_left_8 = mod_consts[83];
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_8 = par_kwargs;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_6 = (tmp_res == 1) ? true : false;
        tmp_condition_result_8 = tmp_or_right_value_6;
        goto or_end_6;
        or_left_6:;
        tmp_condition_result_8 = tmp_or_left_value_6;
        or_end_6:;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_13;
        int tmp_or_left_truth_7;
        PyObject *tmp_or_left_value_7;
        PyObject *tmp_or_right_value_7;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_15;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = par_kwargs;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[79]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[25];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = par_self;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[25]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 418;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_or_left_value_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_or_left_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_7 = CHECK_IF_TRUE(tmp_or_left_value_7);
        if (tmp_or_left_truth_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_7);

            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_7 == 1) {
            goto or_left_7;
        } else {
            goto or_right_7;
        }
        or_right_7:;
        Py_DECREF(tmp_or_left_value_7);
        tmp_or_right_value_7 = mod_consts[84];
        Py_INCREF(tmp_or_right_value_7);
        tmp_expression_value_13 = tmp_or_right_value_7;
        goto or_end_7;
        or_left_7:;
        tmp_expression_value_13 = tmp_or_left_value_7;
        or_end_7:;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[44]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 418;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[23]);

        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_userinfo;
            var_userinfo = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_16;
        int tmp_or_left_truth_8;
        PyObject *tmp_or_left_value_8;
        PyObject *tmp_or_right_value_8;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_18;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = par_kwargs;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[79]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = mod_consts[83];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = par_self;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[83]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 419;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_or_left_value_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_or_left_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_8 = CHECK_IF_TRUE(tmp_or_left_value_8);
        if (tmp_or_left_truth_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_8);

            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_8 == 1) {
            goto or_left_8;
        } else {
            goto or_right_8;
        }
        or_right_8:;
        Py_DECREF(tmp_or_left_value_8);
        tmp_or_right_value_8 = mod_consts[84];
        Py_INCREF(tmp_or_right_value_8);
        tmp_expression_value_16 = tmp_or_right_value_8;
        goto or_end_8;
        or_left_8:;
        tmp_expression_value_16 = tmp_or_left_value_8;
        or_end_8:;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[44]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 419;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_10, mod_consts[23]);

        Py_DECREF(tmp_called_value_10);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_netloc == NULL);
        var_netloc = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_string_concat_values_6;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_format_value_10;
        PyObject *tmp_format_spec_10;
        CHECK_OBJECT(var_userinfo);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_userinfo);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(var_userinfo);
        tmp_format_value_10 = var_userinfo;
        tmp_format_spec_10 = mod_consts[12];
        tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_10, tmp_format_spec_10);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_11;
            PyObject *tmp_format_spec_11;
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[85];
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 1, tmp_tuple_element_6);
            CHECK_OBJECT(var_netloc);
            tmp_format_value_11 = var_netloc;
            tmp_format_spec_11 = mod_consts[12];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tmp_format_value_11, tmp_format_spec_11);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_1 = "ooooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 2, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_string_concat_values_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_assign_source_21 = PyUnicode_Join(mod_consts[12], tmp_string_concat_values_6);
        Py_DECREF(tmp_string_concat_values_6);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(var_netloc);
        tmp_assign_source_21 = var_netloc;
        Py_INCREF(tmp_assign_source_21);
        condexpr_end_3:;
        assert(var_authority == NULL);
        var_authority = tmp_assign_source_21;
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(var_authority);
        tmp_ass_subvalue_3 = var_authority;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 421;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_3 = par_kwargs;
        tmp_ass_subscript_3 = mod_consts[17];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_6:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        tmp_cmp_expr_left_9 = mod_consts[65];
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 428;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_9 = par_kwargs;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_9, tmp_cmp_expr_left_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_22;
        int tmp_or_left_truth_9;
        PyObject *tmp_or_left_value_9;
        PyObject *tmp_or_right_value_9;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_19;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_19 = par_kwargs;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[79]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 430;
        tmp_or_left_value_9 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_12, mod_consts[86]);

        Py_DECREF(tmp_called_value_12);
        if (tmp_or_left_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_9 = CHECK_IF_TRUE(tmp_or_left_value_9);
        if (tmp_or_left_truth_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_9);

            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_9 == 1) {
            goto or_left_9;
        } else {
            goto or_right_9;
        }
        or_right_9:;
        Py_DECREF(tmp_or_left_value_9);
        tmp_or_right_value_9 = mod_consts[84];
        Py_INCREF(tmp_or_right_value_9);
        tmp_assign_source_22 = tmp_or_right_value_9;
        goto or_end_9;
        or_left_9:;
        tmp_assign_source_22 = tmp_or_left_value_9;
        or_end_9:;
        assert(var_raw_path == NULL);
        var_raw_path = tmp_assign_source_22;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(var_raw_path);
        tmp_expression_value_21 = var_raw_path;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[44]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 431;
        tmp_expression_value_20 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_14, mod_consts[23]);

        Py_DECREF(tmp_called_value_14);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[28]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 431;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_13, mod_consts[87]);

        Py_DECREF(tmp_called_value_13);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_23 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_23;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_24 = UNPACK_NEXT(tmp_unpack_3, 0, 3);
        if (tmp_assign_source_24 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 431;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT(tmp_unpack_4, 1, 3);
        if (tmp_assign_source_25 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 431;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_26 = UNPACK_NEXT(tmp_unpack_5, 2, 3);
        if (tmp_assign_source_26 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 431;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_2__element_3 == NULL);
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_26;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooooooooo";
                    exception_lineno = 431;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[88];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 431;
            goto try_except_handler_6;
        }
    }
    goto try_end_4;
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_27 = tmp_tuple_unpack_2__element_1;
        assert(var_path == NULL);
        Py_INCREF(tmp_assign_source_27);
        var_path = tmp_assign_source_27;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_28 = tmp_tuple_unpack_2__element_2;
        assert(var_has_query == NULL);
        Py_INCREF(tmp_assign_source_28);
        var_has_query = tmp_assign_source_28;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_29 = tmp_tuple_unpack_2__element_3;
        assert(var_query == NULL);
        Py_INCREF(tmp_assign_source_29);
        var_query = tmp_assign_source_29;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT(var_path);
        tmp_ass_subvalue_4 = var_path;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 432;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_4 = par_kwargs;
        tmp_ass_subscript_4 = mod_consts[51];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_5;
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_4;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        CHECK_OBJECT(var_has_query);
        tmp_truth_name_4 = CHECK_IF_TRUE(var_has_query);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(var_query);
        tmp_ass_subvalue_5 = var_query;
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_ass_subvalue_5 = Py_None;
        condexpr_end_4:;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_5 = par_kwargs;
        tmp_ass_subscript_5 = mod_consts[54];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_7;
    branch_no_7:;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_22;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 436;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_22 = par_kwargs;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[89]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 436;
        tmp_cmp_expr_left_10 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_15, mod_consts[90]);

        Py_DECREF(tmp_called_value_15);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_10 = Py_None;
        tmp_condition_result_12 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_10);
        if (tmp_condition_result_12 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 438;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_23 = par_kwargs;
        tmp_subscript_value_2 = mod_consts[51];
        tmp_args_element_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_2);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 438;
        tmp_ass_subvalue_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_ass_subvalue_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_kwargs == NULL) {
            Py_DECREF(tmp_ass_subvalue_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 438;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_6 = par_kwargs;
        tmp_ass_subscript_6 = mod_consts[51];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_8:;
    {
        bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_24;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 440;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_24 = par_kwargs;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[89]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 440;
        tmp_cmp_expr_left_11 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_17, mod_consts[91]);

        Py_DECREF(tmp_called_value_17);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_11 = Py_None;
        tmp_condition_result_13 = (tmp_cmp_expr_left_11 != tmp_cmp_expr_right_11) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_condition_result_13 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_26 = par_kwargs;
        tmp_subscript_value_3 = mod_consts[54];
        tmp_expression_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_3);
        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[44]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 446;
        tmp_ass_subvalue_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_18, mod_consts[23]);

        Py_DECREF(tmp_called_value_18);
        if (tmp_ass_subvalue_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_kwargs == NULL) {
            Py_DECREF(tmp_ass_subvalue_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_7 = par_kwargs;
        tmp_ass_subscript_7 = mod_consts[54];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        Py_DECREF(tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_9:;
    {
        bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        tmp_cmp_expr_left_12 = mod_consts[92];
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_12 = par_kwargs;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_12, tmp_cmp_expr_left_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_27;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 454;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_27 = par_kwargs;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[79]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 454;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_19, mod_consts[93]);

        Py_DECREF(tmp_called_value_19);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_params == NULL);
        var_params = tmp_assign_source_30;
    }
    {
        PyObject *tmp_ass_subvalue_8;
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        CHECK_OBJECT(var_params);
        tmp_operand_value_4 = var_params;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        tmp_ass_subvalue_8 = Py_None;
        Py_INCREF(tmp_ass_subvalue_8);
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_params);
        tmp_args_element_value_14 = var_params;
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 455;
        tmp_unicode_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_14);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_8 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_ass_subvalue_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_5:;
        if (par_kwargs == NULL) {
            Py_DECREF(tmp_ass_subvalue_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 455;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_8 = par_kwargs;
        tmp_ass_subscript_8 = mod_consts[54];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        Py_DECREF(tmp_ass_subvalue_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_10:;
    branch_end_7:;
    {
        bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_28;
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 461;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_28 = par_kwargs;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[89]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 461;
        tmp_cmp_expr_left_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_21, mod_consts[94]);

        Py_DECREF(tmp_called_value_21);
        if (tmp_cmp_expr_left_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_13 = Py_None;
        tmp_condition_result_16 = (tmp_cmp_expr_left_13 != tmp_cmp_expr_right_13) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_13);
        if (tmp_condition_result_16 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_kwargs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_29 = par_kwargs;
        tmp_subscript_value_4 = mod_consts[60];
        tmp_args_element_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_4);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 462;
        tmp_ass_subvalue_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_15);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_ass_subvalue_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_kwargs == NULL) {
            Py_DECREF(tmp_ass_subvalue_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_9 = par_kwargs;
        tmp_ass_subscript_9 = mod_consts[60];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        Py_DECREF(tmp_ass_subvalue_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_11:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_16;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_16 = par_self;
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 476;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_16);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_url == NULL);
        var_new_url = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_assattr_target_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 477;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_31 = par_self;
        tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[3]);
        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[20]);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_kwargs == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[80]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 477;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assattr_value_1 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_url);
        tmp_assattr_target_1 = var_new_url;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_new_url);
        tmp_expression_value_32 = var_new_url;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[8]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 478;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_new_url);
        tmp_expression_value_33 = var_new_url;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 479;
        tmp_assattr_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[9]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_url);
        tmp_assattr_target_2 = var_new_url;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[3], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_12:;
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_url);
        tmp_args_element_value_17 = var_new_url;
        frame_aaadfe664205032516bf24aae3a87e2a->m_frame.f_lineno = 480;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_17);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_aaadfe664205032516bf24aae3a87e2a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aaadfe664205032516bf24aae3a87e2a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aaadfe664205032516bf24aae3a87e2a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aaadfe664205032516bf24aae3a87e2a,
        type_description_1,
        par_self,
        par_kwargs,
        var_allowed,
        var_key,
        var_value,
        var_message,
        var_expected,
        var_seen,
        var_username,
        var_password,
        var_userinfo,
        var_host,
        var_port,
        var_netloc,
        var_authority,
        var_raw_path,
        var_path,
        var_has_query,
        var_query,
        var_params,
        var_new_url
    );


    // Release cached frame if used for exception.
    if (frame_aaadfe664205032516bf24aae3a87e2a == cache_frame_aaadfe664205032516bf24aae3a87e2a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aaadfe664205032516bf24aae3a87e2a);
        cache_frame_aaadfe664205032516bf24aae3a87e2a = NULL;
    }

    assertFrameObject(frame_aaadfe664205032516bf24aae3a87e2a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_allowed);
    Py_DECREF(var_allowed);
    var_allowed = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_username);
    var_username = NULL;
    Py_XDECREF(var_password);
    var_password = NULL;
    Py_XDECREF(var_userinfo);
    var_userinfo = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
    Py_XDECREF(var_netloc);
    var_netloc = NULL;
    Py_XDECREF(var_authority);
    var_authority = NULL;
    Py_XDECREF(var_raw_path);
    var_raw_path = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_has_query);
    var_has_query = NULL;
    Py_XDECREF(var_query);
    var_query = NULL;
    Py_XDECREF(var_params);
    var_params = NULL;
    CHECK_OBJECT(var_new_url);
    Py_DECREF(var_new_url);
    var_new_url = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_allowed);
    Py_DECREF(var_allowed);
    var_allowed = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_expected);
    var_expected = NULL;
    Py_XDECREF(var_seen);
    var_seen = NULL;
    Py_XDECREF(var_username);
    var_username = NULL;
    Py_XDECREF(var_password);
    var_password = NULL;
    Py_XDECREF(var_userinfo);
    var_userinfo = NULL;
    Py_XDECREF(var_host);
    var_host = NULL;
    Py_XDECREF(var_port);
    var_port = NULL;
    Py_XDECREF(var_netloc);
    var_netloc = NULL;
    Py_XDECREF(var_authority);
    var_authority = NULL;
    Py_XDECREF(var_raw_path);
    var_raw_path = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_has_query);
    var_has_query = NULL;
    Py_XDECREF(var_query);
    var_query = NULL;
    Py_XDECREF(var_params);
    var_params = NULL;
    Py_XDECREF(var_new_url);
    var_new_url = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_urls$$$function__20_copy_set_param(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_8ebf97abe2b15780f282021f2d4a85ba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8ebf97abe2b15780f282021f2d4a85ba = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8ebf97abe2b15780f282021f2d4a85ba)) {
        Py_XDECREF(cache_frame_8ebf97abe2b15780f282021f2d4a85ba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8ebf97abe2b15780f282021f2d4a85ba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8ebf97abe2b15780f282021f2d4a85ba = MAKE_FUNCTION_FRAME(codeobj_8ebf97abe2b15780f282021f2d4a85ba, module_httpx$_urls, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8ebf97abe2b15780f282021f2d4a85ba->m_type_description == NULL);
    frame_8ebf97abe2b15780f282021f2d4a85ba = cache_frame_8ebf97abe2b15780f282021f2d4a85ba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8ebf97abe2b15780f282021f2d4a85ba);
    assert(Py_REFCNT(frame_8ebf97abe2b15780f282021f2d4a85ba) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[92]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 483;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_8ebf97abe2b15780f282021f2d4a85ba->m_frame.f_lineno = 483;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_kw_call_value_0_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[96],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 483;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_8ebf97abe2b15780f282021f2d4a85ba->m_frame.f_lineno = 483;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[93]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_8ebf97abe2b15780f282021f2d4a85ba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8ebf97abe2b15780f282021f2d4a85ba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8ebf97abe2b15780f282021f2d4a85ba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8ebf97abe2b15780f282021f2d4a85ba,
        type_description_1,
        par_self,
        par_key,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_8ebf97abe2b15780f282021f2d4a85ba == cache_frame_8ebf97abe2b15780f282021f2d4a85ba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8ebf97abe2b15780f282021f2d4a85ba);
        cache_frame_8ebf97abe2b15780f282021f2d4a85ba = NULL;
    }

    assertFrameObject(frame_8ebf97abe2b15780f282021f2d4a85ba);

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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_urls$$$function__21_copy_add_param(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_3c5a1931b6082966c5a325471cc58b0c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3c5a1931b6082966c5a325471cc58b0c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3c5a1931b6082966c5a325471cc58b0c)) {
        Py_XDECREF(cache_frame_3c5a1931b6082966c5a325471cc58b0c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3c5a1931b6082966c5a325471cc58b0c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3c5a1931b6082966c5a325471cc58b0c = MAKE_FUNCTION_FRAME(codeobj_3c5a1931b6082966c5a325471cc58b0c, module_httpx$_urls, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3c5a1931b6082966c5a325471cc58b0c->m_type_description == NULL);
    frame_3c5a1931b6082966c5a325471cc58b0c = cache_frame_3c5a1931b6082966c5a325471cc58b0c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3c5a1931b6082966c5a325471cc58b0c);
    assert(Py_REFCNT(frame_3c5a1931b6082966c5a325471cc58b0c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[92]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 486;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_3c5a1931b6082966c5a325471cc58b0c->m_frame.f_lineno = 486;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_kw_call_value_0_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[97],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 486;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_3c5a1931b6082966c5a325471cc58b0c->m_frame.f_lineno = 486;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[93]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_3c5a1931b6082966c5a325471cc58b0c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3c5a1931b6082966c5a325471cc58b0c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3c5a1931b6082966c5a325471cc58b0c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3c5a1931b6082966c5a325471cc58b0c,
        type_description_1,
        par_self,
        par_key,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_3c5a1931b6082966c5a325471cc58b0c == cache_frame_3c5a1931b6082966c5a325471cc58b0c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3c5a1931b6082966c5a325471cc58b0c);
        cache_frame_3c5a1931b6082966c5a325471cc58b0c = NULL;
    }

    assertFrameObject(frame_3c5a1931b6082966c5a325471cc58b0c);

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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_urls$$$function__22_copy_remove_param(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    struct Nuitka_FrameObject *frame_549d0da44d99408e62e6d15b4ab41a78;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_549d0da44d99408e62e6d15b4ab41a78 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_549d0da44d99408e62e6d15b4ab41a78)) {
        Py_XDECREF(cache_frame_549d0da44d99408e62e6d15b4ab41a78);

#if _DEBUG_REFCOUNTS
        if (cache_frame_549d0da44d99408e62e6d15b4ab41a78 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_549d0da44d99408e62e6d15b4ab41a78 = MAKE_FUNCTION_FRAME(codeobj_549d0da44d99408e62e6d15b4ab41a78, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_549d0da44d99408e62e6d15b4ab41a78->m_type_description == NULL);
    frame_549d0da44d99408e62e6d15b4ab41a78 = cache_frame_549d0da44d99408e62e6d15b4ab41a78;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_549d0da44d99408e62e6d15b4ab41a78);
    assert(Py_REFCNT(frame_549d0da44d99408e62e6d15b4ab41a78) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[92]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 489;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[98]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 489;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_549d0da44d99408e62e6d15b4ab41a78->m_frame.f_lineno = 489;
        tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 489;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_549d0da44d99408e62e6d15b4ab41a78->m_frame.f_lineno = 489;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[93]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
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
        exception_tb = MAKE_TRACEBACK(frame_549d0da44d99408e62e6d15b4ab41a78, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_549d0da44d99408e62e6d15b4ab41a78->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_549d0da44d99408e62e6d15b4ab41a78, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_549d0da44d99408e62e6d15b4ab41a78,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame if used for exception.
    if (frame_549d0da44d99408e62e6d15b4ab41a78 == cache_frame_549d0da44d99408e62e6d15b4ab41a78) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_549d0da44d99408e62e6d15b4ab41a78);
        cache_frame_549d0da44d99408e62e6d15b4ab41a78 = NULL;
    }

    assertFrameObject(frame_549d0da44d99408e62e6d15b4ab41a78);

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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_urls$$$function__23_copy_merge_params(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_params = python_pars[1];
    struct Nuitka_FrameObject *frame_3047e2eb95846fa0cbfcb4b9b8666f9a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3047e2eb95846fa0cbfcb4b9b8666f9a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3047e2eb95846fa0cbfcb4b9b8666f9a)) {
        Py_XDECREF(cache_frame_3047e2eb95846fa0cbfcb4b9b8666f9a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3047e2eb95846fa0cbfcb4b9b8666f9a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3047e2eb95846fa0cbfcb4b9b8666f9a = MAKE_FUNCTION_FRAME(codeobj_3047e2eb95846fa0cbfcb4b9b8666f9a, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3047e2eb95846fa0cbfcb4b9b8666f9a->m_type_description == NULL);
    frame_3047e2eb95846fa0cbfcb4b9b8666f9a = cache_frame_3047e2eb95846fa0cbfcb4b9b8666f9a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3047e2eb95846fa0cbfcb4b9b8666f9a);
    assert(Py_REFCNT(frame_3047e2eb95846fa0cbfcb4b9b8666f9a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[92]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 492;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        frame_3047e2eb95846fa0cbfcb4b9b8666f9a->m_frame.f_lineno = 492;
        tmp_kw_call_value_0_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[99], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 492;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3047e2eb95846fa0cbfcb4b9b8666f9a->m_frame.f_lineno = 492;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[93]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
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
        exception_tb = MAKE_TRACEBACK(frame_3047e2eb95846fa0cbfcb4b9b8666f9a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3047e2eb95846fa0cbfcb4b9b8666f9a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3047e2eb95846fa0cbfcb4b9b8666f9a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3047e2eb95846fa0cbfcb4b9b8666f9a,
        type_description_1,
        par_self,
        par_params
    );


    // Release cached frame if used for exception.
    if (frame_3047e2eb95846fa0cbfcb4b9b8666f9a == cache_frame_3047e2eb95846fa0cbfcb4b9b8666f9a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3047e2eb95846fa0cbfcb4b9b8666f9a);
        cache_frame_3047e2eb95846fa0cbfcb4b9b8666f9a = NULL;
    }

    assertFrameObject(frame_3047e2eb95846fa0cbfcb4b9b8666f9a);

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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_urls$$$function__24_join(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *var_base_uri = NULL;
    PyObject *var_relative_url = NULL;
    struct Nuitka_FrameObject *frame_450d208cc7aac68618af9f094bef9839;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_450d208cc7aac68618af9f094bef9839 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_450d208cc7aac68618af9f094bef9839)) {
        Py_XDECREF(cache_frame_450d208cc7aac68618af9f094bef9839);

#if _DEBUG_REFCOUNTS
        if (cache_frame_450d208cc7aac68618af9f094bef9839 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_450d208cc7aac68618af9f094bef9839 = MAKE_FUNCTION_FRAME(codeobj_450d208cc7aac68618af9f094bef9839, module_httpx$_urls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_450d208cc7aac68618af9f094bef9839->m_type_description == NULL);
    frame_450d208cc7aac68618af9f094bef9839 = cache_frame_450d208cc7aac68618af9f094bef9839;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_450d208cc7aac68618af9f094bef9839);
    assert(Py_REFCNT(frame_450d208cc7aac68618af9f094bef9839) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[100]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 504;
            type_description_1 = "oooo";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[20]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_450d208cc7aac68618af9f094bef9839->m_frame.f_lineno = 509;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[101], 0), mod_consts[102]);
        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[103]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_url);
        tmp_args_element_value_1 = par_url;
        frame_450d208cc7aac68618af9f094bef9839->m_frame.f_lineno = 509;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_450d208cc7aac68618af9f094bef9839->m_frame.f_lineno = 509;
        tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[104], 0), mod_consts[102]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[3]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[20]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_450d208cc7aac68618af9f094bef9839->m_frame.f_lineno = 516;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[105], 0), mod_consts[94]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_base_uri == NULL);
        var_base_uri = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_url);
        tmp_args_element_value_2 = par_url;
        frame_450d208cc7aac68618af9f094bef9839->m_frame.f_lineno = 517;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_relative_url == NULL);
        var_relative_url = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_relative_url);
        tmp_expression_value_7 = var_relative_url;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[3]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_base_uri);
        tmp_args_element_value_4 = var_base_uri;
        frame_450d208cc7aac68618af9f094bef9839->m_frame.f_lineno = 518;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[106], tmp_args_element_value_4);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_450d208cc7aac68618af9f094bef9839->m_frame.f_lineno = 518;
        tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[107]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_450d208cc7aac68618af9f094bef9839->m_frame.f_lineno = 518;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
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
        exception_tb = MAKE_TRACEBACK(frame_450d208cc7aac68618af9f094bef9839, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_450d208cc7aac68618af9f094bef9839->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_450d208cc7aac68618af9f094bef9839, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_450d208cc7aac68618af9f094bef9839,
        type_description_1,
        par_self,
        par_url,
        var_base_uri,
        var_relative_url
    );


    // Release cached frame if used for exception.
    if (frame_450d208cc7aac68618af9f094bef9839 == cache_frame_450d208cc7aac68618af9f094bef9839) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_450d208cc7aac68618af9f094bef9839);
        cache_frame_450d208cc7aac68618af9f094bef9839 = NULL;
    }

    assertFrameObject(frame_450d208cc7aac68618af9f094bef9839);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_base_uri);
    var_base_uri = NULL;
    Py_XDECREF(var_relative_url);
    var_relative_url = NULL;
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

    Py_XDECREF(var_base_uri);
    var_base_uri = NULL;
    Py_XDECREF(var_relative_url);
    var_relative_url = NULL;
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
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_urls$$$function__25___hash__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e8e0eb7cce52b9038b1958ac3628cc42;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e8e0eb7cce52b9038b1958ac3628cc42 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e8e0eb7cce52b9038b1958ac3628cc42)) {
        Py_XDECREF(cache_frame_e8e0eb7cce52b9038b1958ac3628cc42);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e8e0eb7cce52b9038b1958ac3628cc42 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e8e0eb7cce52b9038b1958ac3628cc42 = MAKE_FUNCTION_FRAME(codeobj_e8e0eb7cce52b9038b1958ac3628cc42, module_httpx$_urls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e8e0eb7cce52b9038b1958ac3628cc42->m_type_description == NULL);
    frame_e8e0eb7cce52b9038b1958ac3628cc42 = cache_frame_e8e0eb7cce52b9038b1958ac3628cc42;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e8e0eb7cce52b9038b1958ac3628cc42);
    assert(Py_REFCNT(frame_e8e0eb7cce52b9038b1958ac3628cc42) == 2);

    // Framed code:
    {
        PyObject *tmp_hash_arg_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_self);
        tmp_unicode_arg_1 = par_self;
        tmp_hash_arg_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_hash_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_HASH(tmp_hash_arg_1);
        Py_DECREF(tmp_hash_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
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
        exception_tb = MAKE_TRACEBACK(frame_e8e0eb7cce52b9038b1958ac3628cc42, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e8e0eb7cce52b9038b1958ac3628cc42->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e8e0eb7cce52b9038b1958ac3628cc42, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e8e0eb7cce52b9038b1958ac3628cc42,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_e8e0eb7cce52b9038b1958ac3628cc42 == cache_frame_e8e0eb7cce52b9038b1958ac3628cc42) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e8e0eb7cce52b9038b1958ac3628cc42);
        cache_frame_e8e0eb7cce52b9038b1958ac3628cc42 = NULL;
    }

    assertFrameObject(frame_e8e0eb7cce52b9038b1958ac3628cc42);

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


static PyObject *impl_httpx$_urls$$$function__26___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_af2a3da4cea7550eec87563eab477807;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_af2a3da4cea7550eec87563eab477807 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_af2a3da4cea7550eec87563eab477807)) {
        Py_XDECREF(cache_frame_af2a3da4cea7550eec87563eab477807);

#if _DEBUG_REFCOUNTS
        if (cache_frame_af2a3da4cea7550eec87563eab477807 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_af2a3da4cea7550eec87563eab477807 = MAKE_FUNCTION_FRAME(codeobj_af2a3da4cea7550eec87563eab477807, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_af2a3da4cea7550eec87563eab477807->m_type_description == NULL);
    frame_af2a3da4cea7550eec87563eab477807 = cache_frame_af2a3da4cea7550eec87563eab477807;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_af2a3da4cea7550eec87563eab477807);
    assert(Py_REFCNT(frame_af2a3da4cea7550eec87563eab477807) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_other);
        tmp_isinstance_inst_1 = par_other;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_unicode_arg_1 = par_self;
        tmp_cmp_expr_left_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 524;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_args_element_value_1 = par_other;
        frame_af2a3da4cea7550eec87563eab477807->m_frame.f_lineno = 524;
        tmp_unicode_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_unicode_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 524;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
        Py_DECREF(tmp_unicode_arg_2);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 524;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_af2a3da4cea7550eec87563eab477807, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_af2a3da4cea7550eec87563eab477807->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_af2a3da4cea7550eec87563eab477807, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_af2a3da4cea7550eec87563eab477807,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_af2a3da4cea7550eec87563eab477807 == cache_frame_af2a3da4cea7550eec87563eab477807) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_af2a3da4cea7550eec87563eab477807);
        cache_frame_af2a3da4cea7550eec87563eab477807 = NULL;
    }

    assertFrameObject(frame_af2a3da4cea7550eec87563eab477807);

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
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_urls$$$function__27___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_100273f3e84733e51d5fba1d2f682c79;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_100273f3e84733e51d5fba1d2f682c79 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_100273f3e84733e51d5fba1d2f682c79)) {
        Py_XDECREF(cache_frame_100273f3e84733e51d5fba1d2f682c79);

#if _DEBUG_REFCOUNTS
        if (cache_frame_100273f3e84733e51d5fba1d2f682c79 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_100273f3e84733e51d5fba1d2f682c79 = MAKE_FUNCTION_FRAME(codeobj_100273f3e84733e51d5fba1d2f682c79, module_httpx$_urls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_100273f3e84733e51d5fba1d2f682c79->m_type_description == NULL);
    frame_100273f3e84733e51d5fba1d2f682c79 = cache_frame_100273f3e84733e51d5fba1d2f682c79;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_100273f3e84733e51d5fba1d2f682c79);
    assert(Py_REFCNT(frame_100273f3e84733e51d5fba1d2f682c79) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[110]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = (PyObject *)&PyUnicode_Type;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 527;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_100273f3e84733e51d5fba1d2f682c79->m_frame.f_lineno = 527;
        tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[107]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 527;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_100273f3e84733e51d5fba1d2f682c79->m_frame.f_lineno = 527;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
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
        exception_tb = MAKE_TRACEBACK(frame_100273f3e84733e51d5fba1d2f682c79, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_100273f3e84733e51d5fba1d2f682c79->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_100273f3e84733e51d5fba1d2f682c79, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_100273f3e84733e51d5fba1d2f682c79,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_100273f3e84733e51d5fba1d2f682c79 == cache_frame_100273f3e84733e51d5fba1d2f682c79) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_100273f3e84733e51d5fba1d2f682c79);
        cache_frame_100273f3e84733e51d5fba1d2f682c79 = NULL;
    }

    assertFrameObject(frame_100273f3e84733e51d5fba1d2f682c79);

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


static PyObject *impl_httpx$_urls$$$function__28___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_class_name = NULL;
    PyObject *var_url_str = NULL;
    PyObject *var_username = NULL;
    struct Nuitka_FrameObject *frame_840da881ff0808bae0c7d342ce892e2a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_840da881ff0808bae0c7d342ce892e2a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_840da881ff0808bae0c7d342ce892e2a)) {
        Py_XDECREF(cache_frame_840da881ff0808bae0c7d342ce892e2a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_840da881ff0808bae0c7d342ce892e2a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_840da881ff0808bae0c7d342ce892e2a = MAKE_FUNCTION_FRAME(codeobj_840da881ff0808bae0c7d342ce892e2a, module_httpx$_urls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_840da881ff0808bae0c7d342ce892e2a->m_type_description == NULL);
    frame_840da881ff0808bae0c7d342ce892e2a = cache_frame_840da881ff0808bae0c7d342ce892e2a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_840da881ff0808bae0c7d342ce892e2a);
    assert(Py_REFCNT(frame_840da881ff0808bae0c7d342ce892e2a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[72]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_class_name == NULL);
        var_class_name = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_self);
        tmp_unicode_arg_1 = par_self;
        tmp_assign_source_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_url_str == NULL);
        var_url_str = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[25]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 532;
            type_description_1 = "oooo";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_5;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[76]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_840da881ff0808bae0c7d342ce892e2a->m_frame.f_lineno = 535;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_username == NULL);
        var_username = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_url_str);
        tmp_args_element_value_2 = var_url_str;
        frame_840da881ff0808bae0c7d342ce892e2a->m_frame.f_lineno = 537;
        tmp_expression_value_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[111], tmp_args_element_value_2);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[20]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_username);
        tmp_format_value_1 = var_username;
        tmp_format_spec_1 = mod_consts[12];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 538;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[112];
        PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        tmp_kw_call_value_0_1 = PyUnicode_Join(mod_consts[12], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 538;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_840da881ff0808bae0c7d342ce892e2a->m_frame.f_lineno = 537;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_called_instance_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[113]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_840da881ff0808bae0c7d342ce892e2a->m_frame.f_lineno = 537;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[107]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_url_str;
            assert(old != NULL);
            var_url_str = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_format_value_2;
        PyObject *tmp_format_spec_2;
        CHECK_OBJECT(var_class_name);
        tmp_format_value_2 = var_class_name;
        tmp_format_spec_2 = mod_consts[12];
        tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[114];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            CHECK_OBJECT(var_url_str);
            tmp_operand_value_1 = var_url_str;
            tmp_format_value_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[12];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[115];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[12], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
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
        exception_tb = MAKE_TRACEBACK(frame_840da881ff0808bae0c7d342ce892e2a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_840da881ff0808bae0c7d342ce892e2a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_840da881ff0808bae0c7d342ce892e2a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_840da881ff0808bae0c7d342ce892e2a,
        type_description_1,
        par_self,
        var_class_name,
        var_url_str,
        var_username
    );


    // Release cached frame if used for exception.
    if (frame_840da881ff0808bae0c7d342ce892e2a == cache_frame_840da881ff0808bae0c7d342ce892e2a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_840da881ff0808bae0c7d342ce892e2a);
        cache_frame_840da881ff0808bae0c7d342ce892e2a = NULL;
    }

    assertFrameObject(frame_840da881ff0808bae0c7d342ce892e2a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_class_name);
    Py_DECREF(var_class_name);
    var_class_name = NULL;
    CHECK_OBJECT(var_url_str);
    Py_DECREF(var_url_str);
    var_url_str = NULL;
    Py_XDECREF(var_username);
    var_username = NULL;
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

    Py_XDECREF(var_class_name);
    var_class_name = NULL;
    Py_XDECREF(var_url_str);
    var_url_str = NULL;
    Py_XDECREF(var_username);
    var_username = NULL;
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


static PyObject *impl_httpx$_urls$$$function__29___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_dict_value = NULL;
    PyObject *var_value = NULL;
    PyObject *var_item = NULL;
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *outline_1_var_k = NULL;
    PyObject *outline_1_var_v = NULL;
    PyObject *outline_2_var_k = NULL;
    PyObject *outline_2_var_v = NULL;
    PyObject *outline_3_var_item = NULL;
    PyObject *tmp_dictcontraction$listcomp_1__$0 = NULL;
    PyObject *tmp_dictcontraction$listcomp_1__contraction = NULL;
    PyObject *tmp_dictcontraction$listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_dictcontraction_2__$0 = NULL;
    PyObject *tmp_dictcontraction_2__contraction = NULL;
    PyObject *tmp_dictcontraction_2__iter_value_0 = NULL;
    PyObject *tmp_dictcontraction_3__$0 = NULL;
    PyObject *tmp_dictcontraction_3__contraction = NULL;
    PyObject *tmp_dictcontraction_3__iter_value_0 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_bdd02c43820c23ccf184a35bae82e593;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    struct Nuitka_FrameObject *frame_0ccbb449241cb4356ea8faed5579bb39_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_0ccbb449241cb4356ea8faed5579bb39_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_FrameObject *frame_c1f77db1ad30fa7c86ab9b541b6846f8_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_c1f77db1ad30fa7c86ab9b541b6846f8_3 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_FrameObject *frame_21335dbde512a577c8274ac2fb51386e_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    struct Nuitka_FrameObject *frame_e247dd2833e4091a4fc7a9ba362a27fb_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    static struct Nuitka_FrameObject *cache_frame_e247dd2833e4091a4fc7a9ba362a27fb_5 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    static struct Nuitka_FrameObject *cache_frame_21335dbde512a577c8274ac2fb51386e_4 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    static struct Nuitka_FrameObject *cache_frame_bdd02c43820c23ccf184a35bae82e593 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bdd02c43820c23ccf184a35bae82e593)) {
        Py_XDECREF(cache_frame_bdd02c43820c23ccf184a35bae82e593);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bdd02c43820c23ccf184a35bae82e593 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bdd02c43820c23ccf184a35bae82e593 = MAKE_FUNCTION_FRAME(codeobj_bdd02c43820c23ccf184a35bae82e593, module_httpx$_urls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bdd02c43820c23ccf184a35bae82e593->m_type_description == NULL);
    frame_bdd02c43820c23ccf184a35bae82e593 = cache_frame_bdd02c43820c23ccf184a35bae82e593;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bdd02c43820c23ccf184a35bae82e593);
    assert(Py_REFCNT(frame_bdd02c43820c23ccf184a35bae82e593) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_args);
        tmp_len_arg_1 = par_args;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        assert(!(tmp_cmp_expr_left_1 == NULL));
        tmp_cmp_expr_right_1 = 2;
        tmp_condition_result_1 = RICH_COMPARE_GE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
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
        tmp_raise_value_1 = mod_consts[116];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 552;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooNooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_operand_value_2;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        CHECK_OBJECT(par_args);
        tmp_and_left_value_1 = par_args;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "oooNooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_kwargs);
        tmp_and_right_value_1 = par_kwargs;
        tmp_operand_value_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_operand_value_2 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "oooNooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        tmp_raise_value_2 = mod_consts[117];
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        Py_INCREF(tmp_raise_value_2);
        exception_lineno = 553;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooNooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_args);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_args);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "oooNooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_args);
        tmp_expression_value_1 = par_args;
        tmp_subscript_value_1 = mod_consts[30];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "oooNooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_kwargs);
        tmp_assign_source_1 = par_kwargs;
        Py_INCREF(tmp_assign_source_1);
        condexpr_end_1:;
        assert(var_value == NULL);
        var_value = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_2 = var_value;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_value);
        tmp_isinstance_inst_1 = var_value;
        tmp_isinstance_cls_1 = mod_consts[118];
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "oooNooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_4 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_value);
        tmp_isinstance_inst_2 = var_value;
        tmp_isinstance_cls_2 = (PyObject *)&PyBytes_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "oooNooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(var_value);
        tmp_expression_value_2 = var_value;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "oooNooo";
            goto frame_exception_exit_1;
        }
        frame_bdd02c43820c23ccf184a35bae82e593->m_frame.f_lineno = 559;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[23]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "oooNooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT(var_value);
        tmp_assign_source_2 = var_value;
        Py_INCREF(tmp_assign_source_2);
        condexpr_end_2:;
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "oooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_value);
        tmp_tuple_element_1 = var_value;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[120]);
        frame_bdd02c43820c23ccf184a35bae82e593->m_frame.f_lineno = 560;
        tmp_assattr_value_1 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "oooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[121], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 560;
            type_description_1 = "oooNooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(var_value);
        tmp_isinstance_inst_3 = var_value;
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_isinstance_cls_3 == NULL)) {
            tmp_isinstance_cls_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "oooNooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "oooNooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            CHECK_OBJECT(var_value);
            tmp_expression_value_4 = var_value;
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[121]);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;
                type_description_1 = "oooNooo";
                goto try_except_handler_2;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[122]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;
                type_description_1 = "oooNooo";
                goto try_except_handler_2;
            }
            frame_bdd02c43820c23ccf184a35bae82e593->m_frame.f_lineno = 562;
            tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
            Py_DECREF(tmp_called_value_3);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;
                type_description_1 = "oooNooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;
                type_description_1 = "oooNooo";
                goto try_except_handler_2;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_4;
        }
        if (isFrameUnusable(cache_frame_0ccbb449241cb4356ea8faed5579bb39_2)) {
            Py_XDECREF(cache_frame_0ccbb449241cb4356ea8faed5579bb39_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0ccbb449241cb4356ea8faed5579bb39_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0ccbb449241cb4356ea8faed5579bb39_2 = MAKE_FUNCTION_FRAME(codeobj_0ccbb449241cb4356ea8faed5579bb39, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_0ccbb449241cb4356ea8faed5579bb39_2->m_type_description == NULL);
        frame_0ccbb449241cb4356ea8faed5579bb39_2 = cache_frame_0ccbb449241cb4356ea8faed5579bb39_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0ccbb449241cb4356ea8faed5579bb39_2);
        assert(Py_REFCNT(frame_0ccbb449241cb4356ea8faed5579bb39_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 562;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
            tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
                tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
            if (tmp_assign_source_7 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 562;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
                tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
            if (tmp_assign_source_8 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 562;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
                tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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

                        type_description_2 = "oo";
                        exception_lineno = 562;
                        goto try_except_handler_5;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[70];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 562;
                goto try_except_handler_5;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_4;
        // End of try:
        try_end_1:;
        goto try_end_2;
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

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
            tmp_assign_source_9 = tmp_dictcontraction$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_k;
                outline_0_var_k = tmp_assign_source_9;
                Py_INCREF(outline_0_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
            tmp_assign_source_10 = tmp_dictcontraction$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_v;
                outline_0_var_v = tmp_assign_source_10;
                Py_INCREF(outline_0_var_v);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_dictset38_key_1;
            PyObject *tmp_dictset38_value_1;
            PyObject *tmp_list_arg_1;
            PyObject *tmp_dictset38_dict_1;
            CHECK_OBJECT(outline_0_var_k);
            tmp_dictset38_key_1 = outline_0_var_k;
            CHECK_OBJECT(outline_0_var_v);
            tmp_list_arg_1 = outline_0_var_v;
            tmp_dictset38_value_1 = MAKE_LIST(tmp_list_arg_1);
            if (tmp_dictset38_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_1));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

            Py_DECREF(tmp_dictset38_value_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 562;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_assattr_value_2 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_assattr_value_2);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
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

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

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
            exception_tb = MAKE_TRACEBACK(frame_0ccbb449241cb4356ea8faed5579bb39_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0ccbb449241cb4356ea8faed5579bb39_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0ccbb449241cb4356ea8faed5579bb39_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0ccbb449241cb4356ea8faed5579bb39_2,
            type_description_2,
            outline_0_var_k,
            outline_0_var_v
        );


        // Release cached frame if used for exception.
        if (frame_0ccbb449241cb4356ea8faed5579bb39_2 == cache_frame_0ccbb449241cb4356ea8faed5579bb39_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_0ccbb449241cb4356ea8faed5579bb39_2);
            cache_frame_0ccbb449241cb4356ea8faed5579bb39_2 = NULL;
        }

        assertFrameObject(frame_0ccbb449241cb4356ea8faed5579bb39_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooNooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
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
        exception_lineno = 562;
        goto frame_exception_exit_1;
        outline_result_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[121], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "oooNooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_DICT_EMPTY();
        assert(var_dict_value == NULL);
        var_dict_value = tmp_assign_source_11;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        CHECK_OBJECT(var_value);
        tmp_isinstance_inst_4 = var_value;
        tmp_isinstance_cls_4 = mod_consts[123];
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "oooNooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(var_value);
        tmp_iter_arg_3 = var_value;
        tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "oooNooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_12;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_13 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooNooo";
                exception_lineno = 570;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_14 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_item;
            var_item = tmp_assign_source_14;
            Py_INCREF(var_item);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        if (var_dict_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[124]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 571;
            type_description_1 = "oooNooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_6 = var_dict_value;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[125]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "oooNooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_item);
        tmp_expression_value_7 = var_item;
        tmp_subscript_value_2 = mod_consts[30];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_2, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 571;
            type_description_1 = "oooNooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(0);
        frame_bdd02c43820c23ccf184a35bae82e593->m_frame.f_lineno = 571;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "oooNooo";
            goto try_except_handler_6;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[126]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "oooNooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_item);
        tmp_expression_value_8 = var_item;
        tmp_subscript_value_3 = mod_consts[127];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_3, 1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 571;
            type_description_1 = "oooNooo";
            goto try_except_handler_6;
        }
        frame_bdd02c43820c23ccf184a35bae82e593->m_frame.f_lineno = 571;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "oooNooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 570;
        type_description_1 = "oooNooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_15;
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_9;
            CHECK_OBJECT(var_value);
            tmp_expression_value_9 = var_value;
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[122]);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 579;
                type_description_1 = "oooNooo";
                goto try_except_handler_7;
            }
            frame_bdd02c43820c23ccf184a35bae82e593->m_frame.f_lineno = 579;
            tmp_iter_arg_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
            Py_DECREF(tmp_called_value_6);
            if (tmp_iter_arg_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 579;
                type_description_1 = "oooNooo";
                goto try_except_handler_7;
            }
            tmp_assign_source_16 = MAKE_ITERATOR(tmp_iter_arg_4);
            Py_DECREF(tmp_iter_arg_4);
            if (tmp_assign_source_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 577;
                type_description_1 = "oooNooo";
                goto try_except_handler_7;
            }
            assert(tmp_dictcontraction_2__$0 == NULL);
            tmp_dictcontraction_2__$0 = tmp_assign_source_16;
        }
        {
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_2__contraction == NULL);
            tmp_dictcontraction_2__contraction = tmp_assign_source_17;
        }
        if (isFrameUnusable(cache_frame_c1f77db1ad30fa7c86ab9b541b6846f8_3)) {
            Py_XDECREF(cache_frame_c1f77db1ad30fa7c86ab9b541b6846f8_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c1f77db1ad30fa7c86ab9b541b6846f8_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c1f77db1ad30fa7c86ab9b541b6846f8_3 = MAKE_FUNCTION_FRAME(codeobj_c1f77db1ad30fa7c86ab9b541b6846f8, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_c1f77db1ad30fa7c86ab9b541b6846f8_3->m_type_description == NULL);
        frame_c1f77db1ad30fa7c86ab9b541b6846f8_3 = cache_frame_c1f77db1ad30fa7c86ab9b541b6846f8_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c1f77db1ad30fa7c86ab9b541b6846f8_3);
        assert(Py_REFCNT(frame_c1f77db1ad30fa7c86ab9b541b6846f8_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_dictcontraction_2__$0);
            tmp_next_source_3 = tmp_dictcontraction_2__$0;
            tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_18 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 577;
                    goto try_except_handler_8;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_2__iter_value_0;
                tmp_dictcontraction_2__iter_value_0 = tmp_assign_source_18;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT(tmp_dictcontraction_2__iter_value_0);
            tmp_iter_arg_5 = tmp_dictcontraction_2__iter_value_0;
            tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 577;
                type_description_2 = "oo";
                goto try_except_handler_9;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_2__source_iter;
                tmp_dictcontraction$tuple_unpack_2__source_iter = tmp_assign_source_19;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
            tmp_unpack_3 = tmp_dictcontraction$tuple_unpack_2__source_iter;
            tmp_assign_source_20 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
            if (tmp_assign_source_20 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 577;
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_2__element_1;
                tmp_dictcontraction$tuple_unpack_2__element_1 = tmp_assign_source_20;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
            tmp_unpack_4 = tmp_dictcontraction$tuple_unpack_2__source_iter;
            tmp_assign_source_21 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
            if (tmp_assign_source_21 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 577;
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_2__element_2;
                tmp_dictcontraction$tuple_unpack_2__element_2 = tmp_assign_source_21;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
            tmp_iterator_name_2 = tmp_dictcontraction$tuple_unpack_2__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "oo";
                        exception_lineno = 577;
                        goto try_except_handler_10;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[70];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 577;
                goto try_except_handler_10;
            }
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_2__source_iter);
        tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_9;
        // End of try:
        try_end_4:;
        goto try_end_5;
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

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_1);
        tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_2);
        tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        try_end_5:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_2__source_iter);
        tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
        {
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__element_1);
            tmp_assign_source_22 = tmp_dictcontraction$tuple_unpack_2__element_1;
            {
                PyObject *old = outline_1_var_k;
                outline_1_var_k = tmp_assign_source_22;
                Py_INCREF(outline_1_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_1);
        tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_23;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_2__element_2);
            tmp_assign_source_23 = tmp_dictcontraction$tuple_unpack_2__element_2;
            {
                PyObject *old = outline_1_var_v;
                outline_1_var_v = tmp_assign_source_23;
                Py_INCREF(outline_1_var_v);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_2__element_2);
        tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_dictset38_key_2;
            PyObject *tmp_dictset38_value_2;
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_isinstance_inst_5;
            PyObject *tmp_isinstance_cls_5;
            PyObject *tmp_list_arg_2;
            PyObject *tmp_list_element_1;
            PyObject *tmp_dictset38_dict_2;
            CHECK_OBJECT(outline_1_var_k);
            tmp_dictset38_key_2 = outline_1_var_k;
            CHECK_OBJECT(outline_1_var_v);
            tmp_isinstance_inst_5 = outline_1_var_v;
            tmp_isinstance_cls_5 = mod_consts[123];
            tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 578;
                type_description_2 = "oo";
                goto try_except_handler_8;
            }
            tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            CHECK_OBJECT(outline_1_var_v);
            tmp_list_arg_2 = outline_1_var_v;
            tmp_dictset38_value_2 = MAKE_LIST(tmp_list_arg_2);
            if (tmp_dictset38_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 578;
                type_description_2 = "oo";
                goto try_except_handler_8;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            CHECK_OBJECT(outline_1_var_v);
            tmp_list_element_1 = outline_1_var_v;
            tmp_dictset38_value_2 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM0(tmp_dictset38_value_2, 0, tmp_list_element_1);
            condexpr_end_3:;
            CHECK_OBJECT(tmp_dictcontraction_2__contraction);
            tmp_dictset38_dict_2 = tmp_dictcontraction_2__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_2));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_2, tmp_dictset38_key_2, tmp_dictset38_value_2);

            Py_DECREF(tmp_dictset38_value_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 577;
                type_description_2 = "oo";
                goto try_except_handler_8;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 577;
            type_description_2 = "oo";
            goto try_except_handler_8;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_dictcontraction_2__contraction);
        tmp_assign_source_15 = tmp_dictcontraction_2__contraction;
        Py_INCREF(tmp_assign_source_15);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(tmp_dictcontraction_2__$0);
        Py_DECREF(tmp_dictcontraction_2__$0);
        tmp_dictcontraction_2__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_2__contraction);
        Py_DECREF(tmp_dictcontraction_2__contraction);
        tmp_dictcontraction_2__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
        tmp_dictcontraction_2__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_dictcontraction_2__$0);
        Py_DECREF(tmp_dictcontraction_2__$0);
        tmp_dictcontraction_2__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_2__contraction);
        Py_DECREF(tmp_dictcontraction_2__contraction);
        tmp_dictcontraction_2__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
        tmp_dictcontraction_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_7;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c1f77db1ad30fa7c86ab9b541b6846f8_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c1f77db1ad30fa7c86ab9b541b6846f8_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c1f77db1ad30fa7c86ab9b541b6846f8_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c1f77db1ad30fa7c86ab9b541b6846f8_3,
            type_description_2,
            outline_1_var_k,
            outline_1_var_v
        );


        // Release cached frame if used for exception.
        if (frame_c1f77db1ad30fa7c86ab9b541b6846f8_3 == cache_frame_c1f77db1ad30fa7c86ab9b541b6846f8_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_c1f77db1ad30fa7c86ab9b541b6846f8_3);
            cache_frame_c1f77db1ad30fa7c86ab9b541b6846f8_3 = NULL;
        }

        assertFrameObject(frame_c1f77db1ad30fa7c86ab9b541b6846f8_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "oooNooo";
        goto try_except_handler_7;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_XDECREF(outline_1_var_k);
        outline_1_var_k = NULL;
        Py_XDECREF(outline_1_var_v);
        outline_1_var_v = NULL;
        goto outline_result_2;
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

        Py_XDECREF(outline_1_var_k);
        outline_1_var_k = NULL;
        Py_XDECREF(outline_1_var_v);
        outline_1_var_v = NULL;
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
        exception_lineno = 577;
        goto frame_exception_exit_1;
        outline_result_2:;
        {
            PyObject *old = var_dict_value;
            assert(old != NULL);
            var_dict_value = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    branch_end_5:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        // Tried code:
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_called_value_7;
            PyObject *tmp_expression_value_10;
            if (var_dict_value == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[124]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 587;
                type_description_1 = "oooNooo";
                goto try_except_handler_11;
            }

            tmp_expression_value_10 = var_dict_value;
            tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[122]);
            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 587;
                type_description_1 = "oooNooo";
                goto try_except_handler_11;
            }
            frame_bdd02c43820c23ccf184a35bae82e593->m_frame.f_lineno = 587;
            tmp_iter_arg_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
            Py_DECREF(tmp_called_value_7);
            if (tmp_iter_arg_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 587;
                type_description_1 = "oooNooo";
                goto try_except_handler_11;
            }
            tmp_assign_source_24 = MAKE_ITERATOR(tmp_iter_arg_6);
            Py_DECREF(tmp_iter_arg_6);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 585;
                type_description_1 = "oooNooo";
                goto try_except_handler_11;
            }
            assert(tmp_dictcontraction_3__$0 == NULL);
            tmp_dictcontraction_3__$0 = tmp_assign_source_24;
        }
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_3__contraction == NULL);
            tmp_dictcontraction_3__contraction = tmp_assign_source_25;
        }
        if (isFrameUnusable(cache_frame_21335dbde512a577c8274ac2fb51386e_4)) {
            Py_XDECREF(cache_frame_21335dbde512a577c8274ac2fb51386e_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_21335dbde512a577c8274ac2fb51386e_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_21335dbde512a577c8274ac2fb51386e_4 = MAKE_FUNCTION_FRAME(codeobj_21335dbde512a577c8274ac2fb51386e, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_21335dbde512a577c8274ac2fb51386e_4->m_type_description == NULL);
        frame_21335dbde512a577c8274ac2fb51386e_4 = cache_frame_21335dbde512a577c8274ac2fb51386e_4;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_21335dbde512a577c8274ac2fb51386e_4);
        assert(Py_REFCNT(frame_21335dbde512a577c8274ac2fb51386e_4) == 2);

        // Framed code:
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT(tmp_dictcontraction_3__$0);
            tmp_next_source_4 = tmp_dictcontraction_3__$0;
            tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_4);
            if (tmp_assign_source_26 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_4;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 585;
                    goto try_except_handler_12;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_3__iter_value_0;
                tmp_dictcontraction_3__iter_value_0 = tmp_assign_source_26;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_iter_arg_7;
            CHECK_OBJECT(tmp_dictcontraction_3__iter_value_0);
            tmp_iter_arg_7 = tmp_dictcontraction_3__iter_value_0;
            tmp_assign_source_27 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 585;
                type_description_2 = "oo";
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_3__source_iter;
                tmp_dictcontraction$tuple_unpack_3__source_iter = tmp_assign_source_27;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_3__source_iter);
            tmp_unpack_5 = tmp_dictcontraction$tuple_unpack_3__source_iter;
            tmp_assign_source_28 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
            if (tmp_assign_source_28 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 585;
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_3__element_1;
                tmp_dictcontraction$tuple_unpack_3__element_1 = tmp_assign_source_28;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_3__source_iter);
            tmp_unpack_6 = tmp_dictcontraction$tuple_unpack_3__source_iter;
            tmp_assign_source_29 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
            if (tmp_assign_source_29 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 585;
                goto try_except_handler_14;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_3__element_2;
                tmp_dictcontraction$tuple_unpack_3__element_2 = tmp_assign_source_29;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_3;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_3__source_iter);
            tmp_iterator_name_3 = tmp_dictcontraction$tuple_unpack_3__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED();

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED();
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                        type_description_2 = "oo";
                        exception_lineno = 585;
                        goto try_except_handler_14;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[70];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 585;
                goto try_except_handler_14;
            }
        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_3__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_3__source_iter);
        tmp_dictcontraction$tuple_unpack_3__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_13;
        // End of try:
        try_end_6:;
        goto try_end_7;
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

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_3__element_1);
        tmp_dictcontraction$tuple_unpack_3__element_1 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_3__element_2);
        tmp_dictcontraction$tuple_unpack_3__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        try_end_7:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_3__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_3__source_iter);
        tmp_dictcontraction$tuple_unpack_3__source_iter = NULL;
        {
            PyObject *tmp_assign_source_30;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_3__element_1);
            tmp_assign_source_30 = tmp_dictcontraction$tuple_unpack_3__element_1;
            {
                PyObject *old = outline_2_var_k;
                outline_2_var_k = tmp_assign_source_30;
                Py_INCREF(outline_2_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_3__element_1);
        tmp_dictcontraction$tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_3__element_2);
            tmp_assign_source_31 = tmp_dictcontraction$tuple_unpack_3__element_2;
            {
                PyObject *old = outline_2_var_v;
                outline_2_var_v = tmp_assign_source_31;
                Py_INCREF(outline_2_var_v);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_3__element_2);
        tmp_dictcontraction$tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_dictset38_key_3;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_dictset38_value_3;
            PyObject *tmp_dictset38_dict_3;
            CHECK_OBJECT(outline_2_var_k);
            tmp_unicode_arg_1 = outline_2_var_k;
            tmp_dictset38_key_3 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            if (tmp_dictset38_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 586;
                type_description_2 = "oo";
                goto try_except_handler_12;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_32;
                PyObject *tmp_iter_arg_8;
                CHECK_OBJECT(outline_2_var_v);
                tmp_iter_arg_8 = outline_2_var_v;
                tmp_assign_source_32 = MAKE_ITERATOR(tmp_iter_arg_8);
                if (tmp_assign_source_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 586;
                    type_description_2 = "oo";
                    goto try_except_handler_15;
                }
                {
                    PyObject *old = tmp_dictcontraction$listcomp_1__$0;
                    tmp_dictcontraction$listcomp_1__$0 = tmp_assign_source_32;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_33;
                tmp_assign_source_33 = MAKE_LIST_EMPTY(0);
                {
                    PyObject *old = tmp_dictcontraction$listcomp_1__contraction;
                    tmp_dictcontraction$listcomp_1__contraction = tmp_assign_source_33;
                    Py_XDECREF(old);
                }

            }
            if (isFrameUnusable(cache_frame_e247dd2833e4091a4fc7a9ba362a27fb_5)) {
                Py_XDECREF(cache_frame_e247dd2833e4091a4fc7a9ba362a27fb_5);

#if _DEBUG_REFCOUNTS
                if (cache_frame_e247dd2833e4091a4fc7a9ba362a27fb_5 == NULL) {
                    count_active_frame_cache_instances += 1;
                } else {
                    count_released_frame_cache_instances += 1;
                }
                count_allocated_frame_cache_instances += 1;
#endif
                cache_frame_e247dd2833e4091a4fc7a9ba362a27fb_5 = MAKE_FUNCTION_FRAME(codeobj_e247dd2833e4091a4fc7a9ba362a27fb, module_httpx$_urls, sizeof(void *));
#if _DEBUG_REFCOUNTS
            } else {
                count_hit_frame_cache_instances += 1;
#endif
            }

            assert(cache_frame_e247dd2833e4091a4fc7a9ba362a27fb_5->m_type_description == NULL);
            frame_e247dd2833e4091a4fc7a9ba362a27fb_5 = cache_frame_e247dd2833e4091a4fc7a9ba362a27fb_5;

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_e247dd2833e4091a4fc7a9ba362a27fb_5);
            assert(Py_REFCNT(frame_e247dd2833e4091a4fc7a9ba362a27fb_5) == 2);

            // Framed code:
            // Tried code:
            loop_start_5:;
            {
                PyObject *tmp_next_source_5;
                PyObject *tmp_assign_source_34;
                CHECK_OBJECT(tmp_dictcontraction$listcomp_1__$0);
                tmp_next_source_5 = tmp_dictcontraction$listcomp_1__$0;
                tmp_assign_source_34 = ITERATOR_NEXT(tmp_next_source_5);
                if (tmp_assign_source_34 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_5;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_3 = "o";
                        exception_lineno = 586;
                        goto try_except_handler_16;
                    }
                }

                {
                    PyObject *old = tmp_dictcontraction$listcomp_1__iter_value_0;
                    tmp_dictcontraction$listcomp_1__iter_value_0 = tmp_assign_source_34;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_35;
                CHECK_OBJECT(tmp_dictcontraction$listcomp_1__iter_value_0);
                tmp_assign_source_35 = tmp_dictcontraction$listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_3_var_item;
                    outline_3_var_item = tmp_assign_source_35;
                    Py_INCREF(outline_3_var_item);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_called_value_8;
                PyObject *tmp_args_element_value_4;
                CHECK_OBJECT(tmp_dictcontraction$listcomp_1__contraction);
                tmp_append_list_1 = tmp_dictcontraction$listcomp_1__contraction;
                tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[128]);

                if (unlikely(tmp_called_value_8 == NULL)) {
                    tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                }

                if (tmp_called_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 586;
                    type_description_3 = "o";
                    goto try_except_handler_16;
                }
                CHECK_OBJECT(outline_3_var_item);
                tmp_args_element_value_4 = outline_3_var_item;
                frame_e247dd2833e4091a4fc7a9ba362a27fb_5->m_frame.f_lineno = 586;
                tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_4);
                if (tmp_append_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 586;
                    type_description_3 = "o";
                    goto try_except_handler_16;
                }
                tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 586;
                    type_description_3 = "o";
                    goto try_except_handler_16;
                }
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 586;
                type_description_3 = "o";
                goto try_except_handler_16;
            }
            goto loop_start_5;
            loop_end_5:;
            CHECK_OBJECT(tmp_dictcontraction$listcomp_1__contraction);
            tmp_dictset38_value_3 = tmp_dictcontraction$listcomp_1__contraction;
            Py_INCREF(tmp_dictset38_value_3);
            goto try_return_handler_16;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_16:;
            CHECK_OBJECT(tmp_dictcontraction$listcomp_1__$0);
            Py_DECREF(tmp_dictcontraction$listcomp_1__$0);
            tmp_dictcontraction$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_dictcontraction$listcomp_1__contraction);
            Py_DECREF(tmp_dictcontraction$listcomp_1__contraction);
            tmp_dictcontraction$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_dictcontraction$listcomp_1__iter_value_0);
            tmp_dictcontraction$listcomp_1__iter_value_0 = NULL;
            goto frame_return_exit_4;
            // Exception handler code:
            try_except_handler_16:;
            exception_keeper_type_12 = exception_type;
            exception_keeper_value_12 = exception_value;
            exception_keeper_tb_12 = exception_tb;
            exception_keeper_lineno_12 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT(tmp_dictcontraction$listcomp_1__$0);
            Py_DECREF(tmp_dictcontraction$listcomp_1__$0);
            tmp_dictcontraction$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_dictcontraction$listcomp_1__contraction);
            Py_DECREF(tmp_dictcontraction$listcomp_1__contraction);
            tmp_dictcontraction$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_dictcontraction$listcomp_1__iter_value_0);
            tmp_dictcontraction$listcomp_1__iter_value_0 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_12;
            exception_value = exception_keeper_value_12;
            exception_tb = exception_keeper_tb_12;
            exception_lineno = exception_keeper_lineno_12;

            goto frame_exception_exit_5;
            // End of try:


            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_3;
            frame_return_exit_4:

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_15;
            frame_exception_exit_5:


            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_e247dd2833e4091a4fc7a9ba362a27fb_5, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_e247dd2833e4091a4fc7a9ba362a27fb_5->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_e247dd2833e4091a4fc7a9ba362a27fb_5, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_e247dd2833e4091a4fc7a9ba362a27fb_5,
                type_description_3,
                outline_3_var_item
            );


            // Release cached frame if used for exception.
            if (frame_e247dd2833e4091a4fc7a9ba362a27fb_5 == cache_frame_e247dd2833e4091a4fc7a9ba362a27fb_5) {
#if _DEBUG_REFCOUNTS
                count_active_frame_cache_instances -= 1;
                count_released_frame_cache_instances += 1;
#endif
                Py_DECREF(cache_frame_e247dd2833e4091a4fc7a9ba362a27fb_5);
                cache_frame_e247dd2833e4091a4fc7a9ba362a27fb_5 = NULL;
            }

            assertFrameObject(frame_e247dd2833e4091a4fc7a9ba362a27fb_5);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_4;
            frame_no_exception_3:;
            goto skip_nested_handling_3;
            nested_frame_exit_4:;
            type_description_2 = "oo";
            goto try_except_handler_15;
            skip_nested_handling_3:;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_15:;
            Py_XDECREF(outline_3_var_item);
            outline_3_var_item = NULL;
            goto outline_result_4;
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

            Py_XDECREF(outline_3_var_item);
            outline_3_var_item = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_13;
            exception_value = exception_keeper_value_13;
            exception_tb = exception_keeper_tb_13;
            exception_lineno = exception_keeper_lineno_13;

            goto outline_exception_4;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_4:;
            exception_lineno = 586;
            goto try_except_handler_12;
            outline_result_4:;
            CHECK_OBJECT(tmp_dictcontraction_3__contraction);
            tmp_dictset38_dict_3 = tmp_dictcontraction_3__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_3));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_3, tmp_dictset38_key_3, tmp_dictset38_value_3);

            Py_DECREF(tmp_dictset38_value_3);
            Py_DECREF(tmp_dictset38_key_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 585;
                type_description_2 = "oo";
                goto try_except_handler_12;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_2 = "oo";
            goto try_except_handler_12;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT(tmp_dictcontraction_3__contraction);
        tmp_assattr_value_3 = tmp_dictcontraction_3__contraction;
        Py_INCREF(tmp_assattr_value_3);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(tmp_dictcontraction_3__$0);
        Py_DECREF(tmp_dictcontraction_3__$0);
        tmp_dictcontraction_3__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_3__contraction);
        Py_DECREF(tmp_dictcontraction_3__contraction);
        tmp_dictcontraction_3__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_3__iter_value_0);
        tmp_dictcontraction_3__iter_value_0 = NULL;
        goto frame_return_exit_3;
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

        CHECK_OBJECT(tmp_dictcontraction_3__$0);
        Py_DECREF(tmp_dictcontraction_3__$0);
        tmp_dictcontraction_3__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_3__contraction);
        Py_DECREF(tmp_dictcontraction_3__contraction);
        tmp_dictcontraction_3__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_3__iter_value_0);
        tmp_dictcontraction_3__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto frame_exception_exit_4;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_11;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_21335dbde512a577c8274ac2fb51386e_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_21335dbde512a577c8274ac2fb51386e_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_21335dbde512a577c8274ac2fb51386e_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_21335dbde512a577c8274ac2fb51386e_4,
            type_description_2,
            outline_2_var_k,
            outline_2_var_v
        );


        // Release cached frame if used for exception.
        if (frame_21335dbde512a577c8274ac2fb51386e_4 == cache_frame_21335dbde512a577c8274ac2fb51386e_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_21335dbde512a577c8274ac2fb51386e_4);
            cache_frame_21335dbde512a577c8274ac2fb51386e_4 = NULL;
        }

        assertFrameObject(frame_21335dbde512a577c8274ac2fb51386e_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_3:;
        type_description_1 = "oooNooo";
        goto try_except_handler_11;
        skip_nested_handling_4:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_XDECREF(outline_2_var_k);
        outline_2_var_k = NULL;
        Py_XDECREF(outline_2_var_v);
        outline_2_var_v = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_2_var_k);
        outline_2_var_k = NULL;
        Py_XDECREF(outline_2_var_v);
        outline_2_var_v = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 585;
        goto frame_exception_exit_1;
        outline_result_3:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[121], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "oooNooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_4:;
    branch_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bdd02c43820c23ccf184a35bae82e593, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bdd02c43820c23ccf184a35bae82e593->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bdd02c43820c23ccf184a35bae82e593, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bdd02c43820c23ccf184a35bae82e593,
        type_description_1,
        par_self,
        par_args,
        par_kwargs,
        NULL,
        var_dict_value,
        var_value,
        var_item
    );


    // Release cached frame if used for exception.
    if (frame_bdd02c43820c23ccf184a35bae82e593 == cache_frame_bdd02c43820c23ccf184a35bae82e593) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bdd02c43820c23ccf184a35bae82e593);
        cache_frame_bdd02c43820c23ccf184a35bae82e593 = NULL;
    }

    assertFrameObject(frame_bdd02c43820c23ccf184a35bae82e593);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_5:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_dict_value);
    var_dict_value = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_dict_value);
    var_dict_value = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_item);
    var_item = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_urls$$$function__30_keys(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7e50213cd05eccc774b3b00bced814af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7e50213cd05eccc774b3b00bced814af = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7e50213cd05eccc774b3b00bced814af)) {
        Py_XDECREF(cache_frame_7e50213cd05eccc774b3b00bced814af);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7e50213cd05eccc774b3b00bced814af == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7e50213cd05eccc774b3b00bced814af = MAKE_FUNCTION_FRAME(codeobj_7e50213cd05eccc774b3b00bced814af, module_httpx$_urls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7e50213cd05eccc774b3b00bced814af->m_type_description == NULL);
    frame_7e50213cd05eccc774b3b00bced814af = cache_frame_7e50213cd05eccc774b3b00bced814af;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7e50213cd05eccc774b3b00bced814af);
    assert(Py_REFCNT(frame_7e50213cd05eccc774b3b00bced814af) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[121]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[129]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7e50213cd05eccc774b3b00bced814af->m_frame.f_lineno = 599;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
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
        exception_tb = MAKE_TRACEBACK(frame_7e50213cd05eccc774b3b00bced814af, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7e50213cd05eccc774b3b00bced814af->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7e50213cd05eccc774b3b00bced814af, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7e50213cd05eccc774b3b00bced814af,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7e50213cd05eccc774b3b00bced814af == cache_frame_7e50213cd05eccc774b3b00bced814af) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7e50213cd05eccc774b3b00bced814af);
        cache_frame_7e50213cd05eccc774b3b00bced814af = NULL;
    }

    assertFrameObject(frame_7e50213cd05eccc774b3b00bced814af);

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


static PyObject *impl_httpx$_urls$$$function__31_values(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_062505214ab10ff1aac01be11401a6ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_62cc0b3bdef74923336a61e996bd164f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_62cc0b3bdef74923336a61e996bd164f_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_062505214ab10ff1aac01be11401a6ea = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_062505214ab10ff1aac01be11401a6ea)) {
        Py_XDECREF(cache_frame_062505214ab10ff1aac01be11401a6ea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_062505214ab10ff1aac01be11401a6ea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_062505214ab10ff1aac01be11401a6ea = MAKE_FUNCTION_FRAME(codeobj_062505214ab10ff1aac01be11401a6ea, module_httpx$_urls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_062505214ab10ff1aac01be11401a6ea->m_type_description == NULL);
    frame_062505214ab10ff1aac01be11401a6ea = cache_frame_062505214ab10ff1aac01be11401a6ea;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_062505214ab10ff1aac01be11401a6ea);
    assert(Py_REFCNT(frame_062505214ab10ff1aac01be11401a6ea) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[121]);
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 611;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[122]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 611;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            frame_062505214ab10ff1aac01be11401a6ea->m_frame.f_lineno = 611;
            tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
            Py_DECREF(tmp_called_value_2);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 611;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 611;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_2;
        }
        if (isFrameUnusable(cache_frame_62cc0b3bdef74923336a61e996bd164f_2)) {
            Py_XDECREF(cache_frame_62cc0b3bdef74923336a61e996bd164f_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_62cc0b3bdef74923336a61e996bd164f_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_62cc0b3bdef74923336a61e996bd164f_2 = MAKE_FUNCTION_FRAME(codeobj_62cc0b3bdef74923336a61e996bd164f, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_62cc0b3bdef74923336a61e996bd164f_2->m_type_description == NULL);
        frame_62cc0b3bdef74923336a61e996bd164f_2 = cache_frame_62cc0b3bdef74923336a61e996bd164f_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_62cc0b3bdef74923336a61e996bd164f_2);
        assert(Py_REFCNT(frame_62cc0b3bdef74923336a61e996bd164f_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
            tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_3 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 611;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
            tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 611;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
                tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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


                type_description_2 = "oo";
                exception_lineno = 611;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
                tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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


                type_description_2 = "oo";
                exception_lineno = 611;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
                tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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

                        type_description_2 = "oo";
                        exception_lineno = 611;
                        goto try_except_handler_4;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[70];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 611;
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

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
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

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_2;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
            tmp_assign_source_7 = tmp_dictcontraction$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_k;
                outline_0_var_k = tmp_assign_source_7;
                Py_INCREF(outline_0_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
            tmp_assign_source_8 = tmp_dictcontraction$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_v;
                outline_0_var_v = tmp_assign_source_8;
                Py_INCREF(outline_0_var_v);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_dictset38_key_1;
            PyObject *tmp_dictset38_value_1;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_dictset38_dict_1;
            CHECK_OBJECT(outline_0_var_k);
            tmp_dictset38_key_1 = outline_0_var_k;
            CHECK_OBJECT(outline_0_var_v);
            tmp_expression_value_4 = outline_0_var_v;
            tmp_subscript_value_1 = mod_consts[30];
            tmp_dictset38_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_1, 0);
            if (tmp_dictset38_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 611;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_1));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

            Py_DECREF(tmp_dictset38_value_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 611;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_expression_value_1 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_expression_value_1);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_62cc0b3bdef74923336a61e996bd164f_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_62cc0b3bdef74923336a61e996bd164f_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_62cc0b3bdef74923336a61e996bd164f_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_62cc0b3bdef74923336a61e996bd164f_2,
            type_description_2,
            outline_0_var_k,
            outline_0_var_v
        );


        // Release cached frame if used for exception.
        if (frame_62cc0b3bdef74923336a61e996bd164f_2 == cache_frame_62cc0b3bdef74923336a61e996bd164f_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_62cc0b3bdef74923336a61e996bd164f_2);
            cache_frame_62cc0b3bdef74923336a61e996bd164f_2 = NULL;
        }

        assertFrameObject(frame_62cc0b3bdef74923336a61e996bd164f_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "o";
        goto try_except_handler_1;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
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
        exception_lineno = 611;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[131]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_062505214ab10ff1aac01be11401a6ea->m_frame.f_lineno = 611;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 611;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_062505214ab10ff1aac01be11401a6ea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_062505214ab10ff1aac01be11401a6ea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_062505214ab10ff1aac01be11401a6ea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_062505214ab10ff1aac01be11401a6ea,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_062505214ab10ff1aac01be11401a6ea == cache_frame_062505214ab10ff1aac01be11401a6ea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_062505214ab10ff1aac01be11401a6ea);
        cache_frame_062505214ab10ff1aac01be11401a6ea = NULL;
    }

    assertFrameObject(frame_062505214ab10ff1aac01be11401a6ea);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_2:;

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


static PyObject *impl_httpx$_urls$$$function__32_items(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_4226362f140c7cb57216a5b65ad7a7b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_19e8f9a59f175e983f5563f1235c9348_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_19e8f9a59f175e983f5563f1235c9348_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_4226362f140c7cb57216a5b65ad7a7b5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4226362f140c7cb57216a5b65ad7a7b5)) {
        Py_XDECREF(cache_frame_4226362f140c7cb57216a5b65ad7a7b5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4226362f140c7cb57216a5b65ad7a7b5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4226362f140c7cb57216a5b65ad7a7b5 = MAKE_FUNCTION_FRAME(codeobj_4226362f140c7cb57216a5b65ad7a7b5, module_httpx$_urls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4226362f140c7cb57216a5b65ad7a7b5->m_type_description == NULL);
    frame_4226362f140c7cb57216a5b65ad7a7b5 = cache_frame_4226362f140c7cb57216a5b65ad7a7b5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4226362f140c7cb57216a5b65ad7a7b5);
    assert(Py_REFCNT(frame_4226362f140c7cb57216a5b65ad7a7b5) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[121]);
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 623;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[122]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 623;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            frame_4226362f140c7cb57216a5b65ad7a7b5->m_frame.f_lineno = 623;
            tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
            Py_DECREF(tmp_called_value_2);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 623;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 623;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_2;
        }
        if (isFrameUnusable(cache_frame_19e8f9a59f175e983f5563f1235c9348_2)) {
            Py_XDECREF(cache_frame_19e8f9a59f175e983f5563f1235c9348_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_19e8f9a59f175e983f5563f1235c9348_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_19e8f9a59f175e983f5563f1235c9348_2 = MAKE_FUNCTION_FRAME(codeobj_19e8f9a59f175e983f5563f1235c9348, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_19e8f9a59f175e983f5563f1235c9348_2->m_type_description == NULL);
        frame_19e8f9a59f175e983f5563f1235c9348_2 = cache_frame_19e8f9a59f175e983f5563f1235c9348_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_19e8f9a59f175e983f5563f1235c9348_2);
        assert(Py_REFCNT(frame_19e8f9a59f175e983f5563f1235c9348_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
            tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_3 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 623;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
            tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 623;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
                tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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


                type_description_2 = "oo";
                exception_lineno = 623;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
                tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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


                type_description_2 = "oo";
                exception_lineno = 623;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
                tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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

                        type_description_2 = "oo";
                        exception_lineno = 623;
                        goto try_except_handler_4;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[70];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 623;
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

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
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

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_2;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
            tmp_assign_source_7 = tmp_dictcontraction$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_k;
                outline_0_var_k = tmp_assign_source_7;
                Py_INCREF(outline_0_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
            tmp_assign_source_8 = tmp_dictcontraction$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_v;
                outline_0_var_v = tmp_assign_source_8;
                Py_INCREF(outline_0_var_v);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_dictset38_key_1;
            PyObject *tmp_dictset38_value_1;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_dictset38_dict_1;
            CHECK_OBJECT(outline_0_var_k);
            tmp_dictset38_key_1 = outline_0_var_k;
            CHECK_OBJECT(outline_0_var_v);
            tmp_expression_value_4 = outline_0_var_v;
            tmp_subscript_value_1 = mod_consts[30];
            tmp_dictset38_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_1, 0);
            if (tmp_dictset38_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 623;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_1));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

            Py_DECREF(tmp_dictset38_value_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 623;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_expression_value_1 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_expression_value_1);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_19e8f9a59f175e983f5563f1235c9348_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_19e8f9a59f175e983f5563f1235c9348_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_19e8f9a59f175e983f5563f1235c9348_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_19e8f9a59f175e983f5563f1235c9348_2,
            type_description_2,
            outline_0_var_k,
            outline_0_var_v
        );


        // Release cached frame if used for exception.
        if (frame_19e8f9a59f175e983f5563f1235c9348_2 == cache_frame_19e8f9a59f175e983f5563f1235c9348_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_19e8f9a59f175e983f5563f1235c9348_2);
            cache_frame_19e8f9a59f175e983f5563f1235c9348_2 = NULL;
        }

        assertFrameObject(frame_19e8f9a59f175e983f5563f1235c9348_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "o";
        goto try_except_handler_1;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        Py_XDECREF(outline_0_var_v);
        outline_0_var_v = NULL;
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
        exception_lineno = 623;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[122]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4226362f140c7cb57216a5b65ad7a7b5->m_frame.f_lineno = 623;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 623;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4226362f140c7cb57216a5b65ad7a7b5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4226362f140c7cb57216a5b65ad7a7b5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4226362f140c7cb57216a5b65ad7a7b5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4226362f140c7cb57216a5b65ad7a7b5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4226362f140c7cb57216a5b65ad7a7b5 == cache_frame_4226362f140c7cb57216a5b65ad7a7b5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4226362f140c7cb57216a5b65ad7a7b5);
        cache_frame_4226362f140c7cb57216a5b65ad7a7b5 = NULL;
    }

    assertFrameObject(frame_4226362f140c7cb57216a5b65ad7a7b5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_2:;

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


static PyObject *impl_httpx$_urls$$$function__33_multi_items(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_multi_items = NULL;
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_5a3cb73cd991c46da717e5c011becc2e;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_7aabe8453ffa2f0cde68fa42b339db39_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_7aabe8453ffa2f0cde68fa42b339db39_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5a3cb73cd991c46da717e5c011becc2e = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_multi_items == NULL);
        var_multi_items = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_5a3cb73cd991c46da717e5c011becc2e)) {
        Py_XDECREF(cache_frame_5a3cb73cd991c46da717e5c011becc2e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5a3cb73cd991c46da717e5c011becc2e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5a3cb73cd991c46da717e5c011becc2e = MAKE_FUNCTION_FRAME(codeobj_5a3cb73cd991c46da717e5c011becc2e, module_httpx$_urls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5a3cb73cd991c46da717e5c011becc2e->m_type_description == NULL);
    frame_5a3cb73cd991c46da717e5c011becc2e = cache_frame_5a3cb73cd991c46da717e5c011becc2e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5a3cb73cd991c46da717e5c011becc2e);
    assert(Py_REFCNT(frame_5a3cb73cd991c46da717e5c011becc2e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[121]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[122]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_5a3cb73cd991c46da717e5c011becc2e->m_frame.f_lineno = 635;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 635;
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
                exception_lineno = 635;
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


            exception_lineno = 635;
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
            exception_lineno = 635;
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
            exception_lineno = 635;
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
                    exception_lineno = 635;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[70];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 635;
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (var_multi_items == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 636;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = var_multi_items;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[135]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(var_v);
            tmp_iter_arg_3 = var_v;
            tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;
                type_description_1 = "oooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp_1__$0;
                tmp_listcomp_1__$0 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = tmp_listcomp_1__contraction;
                tmp_listcomp_1__contraction = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        if (isFrameUnusable(cache_frame_7aabe8453ffa2f0cde68fa42b339db39_2)) {
            Py_XDECREF(cache_frame_7aabe8453ffa2f0cde68fa42b339db39_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_7aabe8453ffa2f0cde68fa42b339db39_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_7aabe8453ffa2f0cde68fa42b339db39_2 = MAKE_FUNCTION_FRAME(codeobj_7aabe8453ffa2f0cde68fa42b339db39, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_7aabe8453ffa2f0cde68fa42b339db39_2->m_type_description == NULL);
        frame_7aabe8453ffa2f0cde68fa42b339db39_2 = cache_frame_7aabe8453ffa2f0cde68fa42b339db39_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7aabe8453ffa2f0cde68fa42b339db39_2);
        assert(Py_REFCNT(frame_7aabe8453ffa2f0cde68fa42b339db39_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_11 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 636;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_12 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_12;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(var_k);
            tmp_tuple_element_1 = var_k;
            tmp_append_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_append_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(outline_0_var_i);
            tmp_tuple_element_1 = outline_0_var_i;
            PyTuple_SET_ITEM0(tmp_append_value_1, 1, tmp_tuple_element_1);
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 636;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;
            type_description_2 = "oo";
            goto try_except_handler_6;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
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
        try_except_handler_6:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
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
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7aabe8453ffa2f0cde68fa42b339db39_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7aabe8453ffa2f0cde68fa42b339db39_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7aabe8453ffa2f0cde68fa42b339db39_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7aabe8453ffa2f0cde68fa42b339db39_2,
            type_description_2,
            outline_0_var_i,
            var_k
        );


        // Release cached frame if used for exception.
        if (frame_7aabe8453ffa2f0cde68fa42b339db39_2 == cache_frame_7aabe8453ffa2f0cde68fa42b339db39_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_7aabe8453ffa2f0cde68fa42b339db39_2);
            cache_frame_7aabe8453ffa2f0cde68fa42b339db39_2 = NULL;
        }

        assertFrameObject(frame_7aabe8453ffa2f0cde68fa42b339db39_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooo";
        goto try_except_handler_5;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
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
        exception_lineno = 636;
        goto try_except_handler_2;
        outline_result_1:;
        frame_5a3cb73cd991c46da717e5c011becc2e->m_frame.f_lineno = 636;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 635;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_multi_items == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 637;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_multi_items;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5a3cb73cd991c46da717e5c011becc2e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5a3cb73cd991c46da717e5c011becc2e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5a3cb73cd991c46da717e5c011becc2e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5a3cb73cd991c46da717e5c011becc2e,
        type_description_1,
        par_self,
        var_multi_items,
        var_k,
        var_v
    );


    // Release cached frame if used for exception.
    if (frame_5a3cb73cd991c46da717e5c011becc2e == cache_frame_5a3cb73cd991c46da717e5c011becc2e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5a3cb73cd991c46da717e5c011becc2e);
        cache_frame_5a3cb73cd991c46da717e5c011becc2e = NULL;
    }

    assertFrameObject(frame_5a3cb73cd991c46da717e5c011becc2e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_multi_items);
    var_multi_items = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_multi_items);
    var_multi_items = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

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


static PyObject *impl_httpx$_urls$$$function__34_get(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *par_default = python_pars[2];
    struct Nuitka_FrameObject *frame_0cde59557e104455b872320dc652d4e6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0cde59557e104455b872320dc652d4e6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0cde59557e104455b872320dc652d4e6)) {
        Py_XDECREF(cache_frame_0cde59557e104455b872320dc652d4e6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0cde59557e104455b872320dc652d4e6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0cde59557e104455b872320dc652d4e6 = MAKE_FUNCTION_FRAME(codeobj_0cde59557e104455b872320dc652d4e6, module_httpx$_urls, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0cde59557e104455b872320dc652d4e6->m_type_description == NULL);
    frame_0cde59557e104455b872320dc652d4e6 = cache_frame_0cde59557e104455b872320dc652d4e6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0cde59557e104455b872320dc652d4e6);
    assert(Py_REFCNT(frame_0cde59557e104455b872320dc652d4e6) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_1 = par_key;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[121]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;
            type_description_1 = "ooo";
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
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[121]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_unicode_arg_1 = par_key;
        tmp_subscript_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_3);

            exception_lineno = 650;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_3);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[30];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 650;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
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
        exception_tb = MAKE_TRACEBACK(frame_0cde59557e104455b872320dc652d4e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0cde59557e104455b872320dc652d4e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0cde59557e104455b872320dc652d4e6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0cde59557e104455b872320dc652d4e6,
        type_description_1,
        par_self,
        par_key,
        par_default
    );


    // Release cached frame if used for exception.
    if (frame_0cde59557e104455b872320dc652d4e6 == cache_frame_0cde59557e104455b872320dc652d4e6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0cde59557e104455b872320dc652d4e6);
        cache_frame_0cde59557e104455b872320dc652d4e6 = NULL;
    }

    assertFrameObject(frame_0cde59557e104455b872320dc652d4e6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_default);
    tmp_return_value = par_default;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_default);
    Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_urls$$$function__35_get_list(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    struct Nuitka_FrameObject *frame_ee327020b8d044684d7f46c474aeefa2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ee327020b8d044684d7f46c474aeefa2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ee327020b8d044684d7f46c474aeefa2)) {
        Py_XDECREF(cache_frame_ee327020b8d044684d7f46c474aeefa2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee327020b8d044684d7f46c474aeefa2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee327020b8d044684d7f46c474aeefa2 = MAKE_FUNCTION_FRAME(codeobj_ee327020b8d044684d7f46c474aeefa2, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ee327020b8d044684d7f46c474aeefa2->m_type_description == NULL);
    frame_ee327020b8d044684d7f46c474aeefa2 = cache_frame_ee327020b8d044684d7f46c474aeefa2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ee327020b8d044684d7f46c474aeefa2);
    assert(Py_REFCNT(frame_ee327020b8d044684d7f46c474aeefa2) == 2);

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[121]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[89]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_unicode_arg_1 = par_key;
        tmp_args_element_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 662;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(0);
        frame_ee327020b8d044684d7f46c474aeefa2->m_frame.f_lineno = 662;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;
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
        exception_tb = MAKE_TRACEBACK(frame_ee327020b8d044684d7f46c474aeefa2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee327020b8d044684d7f46c474aeefa2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee327020b8d044684d7f46c474aeefa2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee327020b8d044684d7f46c474aeefa2,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame if used for exception.
    if (frame_ee327020b8d044684d7f46c474aeefa2 == cache_frame_ee327020b8d044684d7f46c474aeefa2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ee327020b8d044684d7f46c474aeefa2);
        cache_frame_ee327020b8d044684d7f46c474aeefa2 = NULL;
    }

    assertFrameObject(frame_ee327020b8d044684d7f46c474aeefa2);

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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_urls$$$function__36_set(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *var_q = NULL;
    struct Nuitka_FrameObject *frame_1b2ff2cc98cecdabda77a9c662e91a18;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1b2ff2cc98cecdabda77a9c662e91a18 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1b2ff2cc98cecdabda77a9c662e91a18)) {
        Py_XDECREF(cache_frame_1b2ff2cc98cecdabda77a9c662e91a18);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1b2ff2cc98cecdabda77a9c662e91a18 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1b2ff2cc98cecdabda77a9c662e91a18 = MAKE_FUNCTION_FRAME(codeobj_1b2ff2cc98cecdabda77a9c662e91a18, module_httpx$_urls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1b2ff2cc98cecdabda77a9c662e91a18->m_type_description == NULL);
    frame_1b2ff2cc98cecdabda77a9c662e91a18 = cache_frame_1b2ff2cc98cecdabda77a9c662e91a18;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1b2ff2cc98cecdabda77a9c662e91a18);
    assert(Py_REFCNT(frame_1b2ff2cc98cecdabda77a9c662e91a18) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_1b2ff2cc98cecdabda77a9c662e91a18->m_frame.f_lineno = 674;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_q == NULL);
        var_q = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_dict_seq_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_dict_seq_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[121]);
        if (tmp_dict_seq_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 675;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 675;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_q);
        tmp_assattr_target_1 = var_q;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[121], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 675;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_unicode_arg_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 676;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_1b2ff2cc98cecdabda77a9c662e91a18->m_frame.f_lineno = 676;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 676;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_ass_subvalue_1, 0, tmp_list_element_1);
        CHECK_OBJECT(var_q);
        tmp_expression_value_2 = var_q;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[121]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 676;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_unicode_arg_1 = par_key;
        tmp_ass_subscript_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 676;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 676;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1b2ff2cc98cecdabda77a9c662e91a18, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1b2ff2cc98cecdabda77a9c662e91a18->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b2ff2cc98cecdabda77a9c662e91a18, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1b2ff2cc98cecdabda77a9c662e91a18,
        type_description_1,
        par_self,
        par_key,
        par_value,
        var_q
    );


    // Release cached frame if used for exception.
    if (frame_1b2ff2cc98cecdabda77a9c662e91a18 == cache_frame_1b2ff2cc98cecdabda77a9c662e91a18) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1b2ff2cc98cecdabda77a9c662e91a18);
        cache_frame_1b2ff2cc98cecdabda77a9c662e91a18 = NULL;
    }

    assertFrameObject(frame_1b2ff2cc98cecdabda77a9c662e91a18);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_q);
    tmp_return_value = var_q;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_q);
    Py_DECREF(var_q);
    var_q = NULL;
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

    Py_XDECREF(var_q);
    var_q = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_urls$$$function__37_add(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *par_value = python_pars[2];
    PyObject *var_q = NULL;
    struct Nuitka_FrameObject *frame_b3d27fd5dbe5f90afea6d313b495abce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b3d27fd5dbe5f90afea6d313b495abce = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b3d27fd5dbe5f90afea6d313b495abce)) {
        Py_XDECREF(cache_frame_b3d27fd5dbe5f90afea6d313b495abce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b3d27fd5dbe5f90afea6d313b495abce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b3d27fd5dbe5f90afea6d313b495abce = MAKE_FUNCTION_FRAME(codeobj_b3d27fd5dbe5f90afea6d313b495abce, module_httpx$_urls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b3d27fd5dbe5f90afea6d313b495abce->m_type_description == NULL);
    frame_b3d27fd5dbe5f90afea6d313b495abce = cache_frame_b3d27fd5dbe5f90afea6d313b495abce;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b3d27fd5dbe5f90afea6d313b495abce);
    assert(Py_REFCNT(frame_b3d27fd5dbe5f90afea6d313b495abce) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 689;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_b3d27fd5dbe5f90afea6d313b495abce->m_frame.f_lineno = 689;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 689;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_q == NULL);
        var_q = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_dict_seq_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_dict_seq_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[121]);
        if (tmp_dict_seq_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_q);
        tmp_assattr_target_1 = var_q;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[121], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 690;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(var_q);
        tmp_called_instance_1 = var_q;
        CHECK_OBJECT(par_key);
        tmp_args_element_value_1 = par_key;
        frame_b3d27fd5dbe5f90afea6d313b495abce->m_frame.f_lineno = 691;
        tmp_add_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[140], tmp_args_element_value_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 691;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 691;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_b3d27fd5dbe5f90afea6d313b495abce->m_frame.f_lineno = 691;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 691;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_add_expr_right_1, 0, tmp_list_element_1);
        tmp_ass_subvalue_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LIST(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 691;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_q);
        tmp_expression_value_2 = var_q;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[121]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 691;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_unicode_arg_1 = par_key;
        tmp_ass_subscript_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 691;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 691;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b3d27fd5dbe5f90afea6d313b495abce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b3d27fd5dbe5f90afea6d313b495abce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b3d27fd5dbe5f90afea6d313b495abce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b3d27fd5dbe5f90afea6d313b495abce,
        type_description_1,
        par_self,
        par_key,
        par_value,
        var_q
    );


    // Release cached frame if used for exception.
    if (frame_b3d27fd5dbe5f90afea6d313b495abce == cache_frame_b3d27fd5dbe5f90afea6d313b495abce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b3d27fd5dbe5f90afea6d313b495abce);
        cache_frame_b3d27fd5dbe5f90afea6d313b495abce = NULL;
    }

    assertFrameObject(frame_b3d27fd5dbe5f90afea6d313b495abce);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_q);
    tmp_return_value = var_q;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_q);
    Py_DECREF(var_q);
    var_q = NULL;
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

    Py_XDECREF(var_q);
    var_q = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_urls$$$function__38_remove(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *var_q = NULL;
    struct Nuitka_FrameObject *frame_3685a74a139cad6a16058065df4241e9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3685a74a139cad6a16058065df4241e9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3685a74a139cad6a16058065df4241e9)) {
        Py_XDECREF(cache_frame_3685a74a139cad6a16058065df4241e9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3685a74a139cad6a16058065df4241e9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3685a74a139cad6a16058065df4241e9 = MAKE_FUNCTION_FRAME(codeobj_3685a74a139cad6a16058065df4241e9, module_httpx$_urls, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3685a74a139cad6a16058065df4241e9->m_type_description == NULL);
    frame_3685a74a139cad6a16058065df4241e9 = cache_frame_3685a74a139cad6a16058065df4241e9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3685a74a139cad6a16058065df4241e9);
    assert(Py_REFCNT(frame_3685a74a139cad6a16058065df4241e9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 704;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_3685a74a139cad6a16058065df4241e9->m_frame.f_lineno = 704;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 704;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_q == NULL);
        var_q = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_dict_seq_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_dict_seq_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[121]);
        if (tmp_dict_seq_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 705;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 705;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_q);
        tmp_assattr_target_1 = var_q;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[121], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 705;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_q);
        tmp_expression_value_3 = var_q;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[121]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 706;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[79]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 706;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_unicode_arg_1 = par_key;
        tmp_args_element_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 706;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = Py_None;
        frame_3685a74a139cad6a16058065df4241e9->m_frame.f_lineno = 706;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 706;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3685a74a139cad6a16058065df4241e9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3685a74a139cad6a16058065df4241e9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3685a74a139cad6a16058065df4241e9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3685a74a139cad6a16058065df4241e9,
        type_description_1,
        par_self,
        par_key,
        var_q
    );


    // Release cached frame if used for exception.
    if (frame_3685a74a139cad6a16058065df4241e9 == cache_frame_3685a74a139cad6a16058065df4241e9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3685a74a139cad6a16058065df4241e9);
        cache_frame_3685a74a139cad6a16058065df4241e9 = NULL;
    }

    assertFrameObject(frame_3685a74a139cad6a16058065df4241e9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_q);
    tmp_return_value = var_q;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_q);
    Py_DECREF(var_q);
    var_q = NULL;
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

    Py_XDECREF(var_q);
    var_q = NULL;
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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_urls$$$function__39_merge(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_params = python_pars[1];
    PyObject *var_q = NULL;
    struct Nuitka_FrameObject *frame_499c0dd172c06c4fdff4072e65467367;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_499c0dd172c06c4fdff4072e65467367 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_499c0dd172c06c4fdff4072e65467367)) {
        Py_XDECREF(cache_frame_499c0dd172c06c4fdff4072e65467367);

#if _DEBUG_REFCOUNTS
        if (cache_frame_499c0dd172c06c4fdff4072e65467367 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_499c0dd172c06c4fdff4072e65467367 = MAKE_FUNCTION_FRAME(codeobj_499c0dd172c06c4fdff4072e65467367, module_httpx$_urls, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_499c0dd172c06c4fdff4072e65467367->m_type_description == NULL);
    frame_499c0dd172c06c4fdff4072e65467367 = cache_frame_499c0dd172c06c4fdff4072e65467367;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_499c0dd172c06c4fdff4072e65467367);
    assert(Py_REFCNT(frame_499c0dd172c06c4fdff4072e65467367) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 723;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        frame_499c0dd172c06c4fdff4072e65467367->m_frame.f_lineno = 723;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 723;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_q == NULL);
        var_q = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[121]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM(tmp_dircall_arg1_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_q);
            tmp_expression_value_2 = var_q;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[121]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 724;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_dircall_arg1_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_dircall_arg1_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assattr_value_1 = impl___main__$$$function__4__unpack_dict(dir_call_args);
        }
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_q);
        tmp_assattr_target_1 = var_q;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[121], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_499c0dd172c06c4fdff4072e65467367, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_499c0dd172c06c4fdff4072e65467367->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_499c0dd172c06c4fdff4072e65467367, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_499c0dd172c06c4fdff4072e65467367,
        type_description_1,
        par_self,
        par_params,
        var_q
    );


    // Release cached frame if used for exception.
    if (frame_499c0dd172c06c4fdff4072e65467367 == cache_frame_499c0dd172c06c4fdff4072e65467367) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_499c0dd172c06c4fdff4072e65467367);
        cache_frame_499c0dd172c06c4fdff4072e65467367 = NULL;
    }

    assertFrameObject(frame_499c0dd172c06c4fdff4072e65467367);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_q);
    tmp_return_value = var_q;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_q);
    Py_DECREF(var_q);
    var_q = NULL;
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

    Py_XDECREF(var_q);
    var_q = NULL;
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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_urls$$$function__40___getitem__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    struct Nuitka_FrameObject *frame_7a8ed8fafd0aa78287d99a598c3507f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7a8ed8fafd0aa78287d99a598c3507f7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7a8ed8fafd0aa78287d99a598c3507f7)) {
        Py_XDECREF(cache_frame_7a8ed8fafd0aa78287d99a598c3507f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7a8ed8fafd0aa78287d99a598c3507f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7a8ed8fafd0aa78287d99a598c3507f7 = MAKE_FUNCTION_FRAME(codeobj_7a8ed8fafd0aa78287d99a598c3507f7, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7a8ed8fafd0aa78287d99a598c3507f7->m_type_description == NULL);
    frame_7a8ed8fafd0aa78287d99a598c3507f7 = cache_frame_7a8ed8fafd0aa78287d99a598c3507f7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7a8ed8fafd0aa78287d99a598c3507f7);
    assert(Py_REFCNT(frame_7a8ed8fafd0aa78287d99a598c3507f7) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[121]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 728;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_key);
        tmp_subscript_value_1 = par_key;
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 728;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[30];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 728;
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
        exception_tb = MAKE_TRACEBACK(frame_7a8ed8fafd0aa78287d99a598c3507f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7a8ed8fafd0aa78287d99a598c3507f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a8ed8fafd0aa78287d99a598c3507f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7a8ed8fafd0aa78287d99a598c3507f7,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame if used for exception.
    if (frame_7a8ed8fafd0aa78287d99a598c3507f7 == cache_frame_7a8ed8fafd0aa78287d99a598c3507f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7a8ed8fafd0aa78287d99a598c3507f7);
        cache_frame_7a8ed8fafd0aa78287d99a598c3507f7 = NULL;
    }

    assertFrameObject(frame_7a8ed8fafd0aa78287d99a598c3507f7);

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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_urls$$$function__41___contains__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    struct Nuitka_FrameObject *frame_a670165f59ea7e9dea1166171ff1ba52;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a670165f59ea7e9dea1166171ff1ba52 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a670165f59ea7e9dea1166171ff1ba52)) {
        Py_XDECREF(cache_frame_a670165f59ea7e9dea1166171ff1ba52);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a670165f59ea7e9dea1166171ff1ba52 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a670165f59ea7e9dea1166171ff1ba52 = MAKE_FUNCTION_FRAME(codeobj_a670165f59ea7e9dea1166171ff1ba52, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a670165f59ea7e9dea1166171ff1ba52->m_type_description == NULL);
    frame_a670165f59ea7e9dea1166171ff1ba52 = cache_frame_a670165f59ea7e9dea1166171ff1ba52;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a670165f59ea7e9dea1166171ff1ba52);
    assert(Py_REFCNT(frame_a670165f59ea7e9dea1166171ff1ba52) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_1 = par_key;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[121]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 731;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 731;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_a670165f59ea7e9dea1166171ff1ba52, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a670165f59ea7e9dea1166171ff1ba52->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a670165f59ea7e9dea1166171ff1ba52, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a670165f59ea7e9dea1166171ff1ba52,
        type_description_1,
        par_self,
        par_key
    );


    // Release cached frame if used for exception.
    if (frame_a670165f59ea7e9dea1166171ff1ba52 == cache_frame_a670165f59ea7e9dea1166171ff1ba52) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a670165f59ea7e9dea1166171ff1ba52);
        cache_frame_a670165f59ea7e9dea1166171ff1ba52 = NULL;
    }

    assertFrameObject(frame_a670165f59ea7e9dea1166171ff1ba52);

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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_urls$$$function__42___iter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4e915a3f3ff0816d130f5db7a463325f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4e915a3f3ff0816d130f5db7a463325f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4e915a3f3ff0816d130f5db7a463325f)) {
        Py_XDECREF(cache_frame_4e915a3f3ff0816d130f5db7a463325f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4e915a3f3ff0816d130f5db7a463325f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4e915a3f3ff0816d130f5db7a463325f = MAKE_FUNCTION_FRAME(codeobj_4e915a3f3ff0816d130f5db7a463325f, module_httpx$_urls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4e915a3f3ff0816d130f5db7a463325f->m_type_description == NULL);
    frame_4e915a3f3ff0816d130f5db7a463325f = cache_frame_4e915a3f3ff0816d130f5db7a463325f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4e915a3f3ff0816d130f5db7a463325f);
    assert(Py_REFCNT(frame_4e915a3f3ff0816d130f5db7a463325f) == 2);

    // Framed code:
    {
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[129]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 734;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4e915a3f3ff0816d130f5db7a463325f->m_frame.f_lineno = 734;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 734;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 734;
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
        exception_tb = MAKE_TRACEBACK(frame_4e915a3f3ff0816d130f5db7a463325f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4e915a3f3ff0816d130f5db7a463325f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4e915a3f3ff0816d130f5db7a463325f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4e915a3f3ff0816d130f5db7a463325f,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4e915a3f3ff0816d130f5db7a463325f == cache_frame_4e915a3f3ff0816d130f5db7a463325f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4e915a3f3ff0816d130f5db7a463325f);
        cache_frame_4e915a3f3ff0816d130f5db7a463325f = NULL;
    }

    assertFrameObject(frame_4e915a3f3ff0816d130f5db7a463325f);

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


static PyObject *impl_httpx$_urls$$$function__43___len__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7faa37a57869b9f1fb14503d5e239a05;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7faa37a57869b9f1fb14503d5e239a05 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7faa37a57869b9f1fb14503d5e239a05)) {
        Py_XDECREF(cache_frame_7faa37a57869b9f1fb14503d5e239a05);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7faa37a57869b9f1fb14503d5e239a05 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7faa37a57869b9f1fb14503d5e239a05 = MAKE_FUNCTION_FRAME(codeobj_7faa37a57869b9f1fb14503d5e239a05, module_httpx$_urls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7faa37a57869b9f1fb14503d5e239a05->m_type_description == NULL);
    frame_7faa37a57869b9f1fb14503d5e239a05 = cache_frame_7faa37a57869b9f1fb14503d5e239a05;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7faa37a57869b9f1fb14503d5e239a05);
    assert(Py_REFCNT(frame_7faa37a57869b9f1fb14503d5e239a05) == 2);

    // Framed code:
    {
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[121]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 737;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 737;
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
        exception_tb = MAKE_TRACEBACK(frame_7faa37a57869b9f1fb14503d5e239a05, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7faa37a57869b9f1fb14503d5e239a05->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7faa37a57869b9f1fb14503d5e239a05, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7faa37a57869b9f1fb14503d5e239a05,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7faa37a57869b9f1fb14503d5e239a05 == cache_frame_7faa37a57869b9f1fb14503d5e239a05) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7faa37a57869b9f1fb14503d5e239a05);
        cache_frame_7faa37a57869b9f1fb14503d5e239a05 = NULL;
    }

    assertFrameObject(frame_7faa37a57869b9f1fb14503d5e239a05);

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


static PyObject *impl_httpx$_urls$$$function__44___bool__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f3d97483c00d46aa73406d0263449655;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f3d97483c00d46aa73406d0263449655 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f3d97483c00d46aa73406d0263449655)) {
        Py_XDECREF(cache_frame_f3d97483c00d46aa73406d0263449655);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f3d97483c00d46aa73406d0263449655 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f3d97483c00d46aa73406d0263449655 = MAKE_FUNCTION_FRAME(codeobj_f3d97483c00d46aa73406d0263449655, module_httpx$_urls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f3d97483c00d46aa73406d0263449655->m_type_description == NULL);
    frame_f3d97483c00d46aa73406d0263449655 = cache_frame_f3d97483c00d46aa73406d0263449655;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f3d97483c00d46aa73406d0263449655);
    assert(Py_REFCNT(frame_f3d97483c00d46aa73406d0263449655) == 2);

    // Framed code:
    {
        PyObject *tmp_value_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_value_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[121]);
        if (tmp_value_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 740;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 740;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_f3d97483c00d46aa73406d0263449655, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f3d97483c00d46aa73406d0263449655->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f3d97483c00d46aa73406d0263449655, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f3d97483c00d46aa73406d0263449655,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f3d97483c00d46aa73406d0263449655 == cache_frame_f3d97483c00d46aa73406d0263449655) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f3d97483c00d46aa73406d0263449655);
        cache_frame_f3d97483c00d46aa73406d0263449655 = NULL;
    }

    assertFrameObject(frame_f3d97483c00d46aa73406d0263449655);

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


static PyObject *impl_httpx$_urls$$$function__45___hash__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ee2f8950d7c58cdf76db6d854b2b0eff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ee2f8950d7c58cdf76db6d854b2b0eff = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ee2f8950d7c58cdf76db6d854b2b0eff)) {
        Py_XDECREF(cache_frame_ee2f8950d7c58cdf76db6d854b2b0eff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee2f8950d7c58cdf76db6d854b2b0eff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee2f8950d7c58cdf76db6d854b2b0eff = MAKE_FUNCTION_FRAME(codeobj_ee2f8950d7c58cdf76db6d854b2b0eff, module_httpx$_urls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ee2f8950d7c58cdf76db6d854b2b0eff->m_type_description == NULL);
    frame_ee2f8950d7c58cdf76db6d854b2b0eff = cache_frame_ee2f8950d7c58cdf76db6d854b2b0eff;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ee2f8950d7c58cdf76db6d854b2b0eff);
    assert(Py_REFCNT(frame_ee2f8950d7c58cdf76db6d854b2b0eff) == 2);

    // Framed code:
    {
        PyObject *tmp_hash_arg_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_self);
        tmp_unicode_arg_1 = par_self;
        tmp_hash_arg_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_hash_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 743;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_HASH(tmp_hash_arg_1);
        Py_DECREF(tmp_hash_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 743;
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
        exception_tb = MAKE_TRACEBACK(frame_ee2f8950d7c58cdf76db6d854b2b0eff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee2f8950d7c58cdf76db6d854b2b0eff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee2f8950d7c58cdf76db6d854b2b0eff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee2f8950d7c58cdf76db6d854b2b0eff,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ee2f8950d7c58cdf76db6d854b2b0eff == cache_frame_ee2f8950d7c58cdf76db6d854b2b0eff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ee2f8950d7c58cdf76db6d854b2b0eff);
        cache_frame_ee2f8950d7c58cdf76db6d854b2b0eff = NULL;
    }

    assertFrameObject(frame_ee2f8950d7c58cdf76db6d854b2b0eff);

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


static PyObject *impl_httpx$_urls$$$function__46___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_341b8002ab3bace7c7b795d6110fda26;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_341b8002ab3bace7c7b795d6110fda26 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_341b8002ab3bace7c7b795d6110fda26)) {
        Py_XDECREF(cache_frame_341b8002ab3bace7c7b795d6110fda26);

#if _DEBUG_REFCOUNTS
        if (cache_frame_341b8002ab3bace7c7b795d6110fda26 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_341b8002ab3bace7c7b795d6110fda26 = MAKE_FUNCTION_FRAME(codeobj_341b8002ab3bace7c7b795d6110fda26, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_341b8002ab3bace7c7b795d6110fda26->m_type_description == NULL);
    frame_341b8002ab3bace7c7b795d6110fda26 = cache_frame_341b8002ab3bace7c7b795d6110fda26;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_341b8002ab3bace7c7b795d6110fda26);
    assert(Py_REFCNT(frame_341b8002ab3bace7c7b795d6110fda26) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_other);
        tmp_isinstance_inst_1 = par_other;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_1);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 746;
            type_description_1 = "oo";
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
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_2;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[144]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_341b8002ab3bace7c7b795d6110fda26->m_frame.f_lineno = 748;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[134]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 748;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_341b8002ab3bace7c7b795d6110fda26->m_frame.f_lineno = 748;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 748;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[144]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(par_other);
        tmp_called_instance_2 = par_other;
        frame_341b8002ab3bace7c7b795d6110fda26->m_frame.f_lineno = 748;
        tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[134]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 748;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_341b8002ab3bace7c7b795d6110fda26->m_frame.f_lineno = 748;
        tmp_cmp_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 748;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 748;
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
        exception_tb = MAKE_TRACEBACK(frame_341b8002ab3bace7c7b795d6110fda26, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_341b8002ab3bace7c7b795d6110fda26->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_341b8002ab3bace7c7b795d6110fda26, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_341b8002ab3bace7c7b795d6110fda26,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_341b8002ab3bace7c7b795d6110fda26 == cache_frame_341b8002ab3bace7c7b795d6110fda26) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_341b8002ab3bace7c7b795d6110fda26);
        cache_frame_341b8002ab3bace7c7b795d6110fda26 = NULL;
    }

    assertFrameObject(frame_341b8002ab3bace7c7b795d6110fda26);

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
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_urls$$$function__47___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_00709aa2cbfecaeefb1e9594c47c888a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_00709aa2cbfecaeefb1e9594c47c888a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_00709aa2cbfecaeefb1e9594c47c888a)) {
        Py_XDECREF(cache_frame_00709aa2cbfecaeefb1e9594c47c888a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_00709aa2cbfecaeefb1e9594c47c888a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_00709aa2cbfecaeefb1e9594c47c888a = MAKE_FUNCTION_FRAME(codeobj_00709aa2cbfecaeefb1e9594c47c888a, module_httpx$_urls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_00709aa2cbfecaeefb1e9594c47c888a->m_type_description == NULL);
    frame_00709aa2cbfecaeefb1e9594c47c888a = cache_frame_00709aa2cbfecaeefb1e9594c47c888a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_00709aa2cbfecaeefb1e9594c47c888a);
    assert(Py_REFCNT(frame_00709aa2cbfecaeefb1e9594c47c888a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 751;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_00709aa2cbfecaeefb1e9594c47c888a->m_frame.f_lineno = 751;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[134]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 751;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_00709aa2cbfecaeefb1e9594c47c888a->m_frame.f_lineno = 751;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 751;
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
        exception_tb = MAKE_TRACEBACK(frame_00709aa2cbfecaeefb1e9594c47c888a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_00709aa2cbfecaeefb1e9594c47c888a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_00709aa2cbfecaeefb1e9594c47c888a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_00709aa2cbfecaeefb1e9594c47c888a,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_00709aa2cbfecaeefb1e9594c47c888a == cache_frame_00709aa2cbfecaeefb1e9594c47c888a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_00709aa2cbfecaeefb1e9594c47c888a);
        cache_frame_00709aa2cbfecaeefb1e9594c47c888a = NULL;
    }

    assertFrameObject(frame_00709aa2cbfecaeefb1e9594c47c888a);

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


static PyObject *impl_httpx$_urls$$$function__48___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_class_name = NULL;
    PyObject *var_query_string = NULL;
    struct Nuitka_FrameObject *frame_c8faaf5a07456fa93d66fcd1ab9f5339;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c8faaf5a07456fa93d66fcd1ab9f5339 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c8faaf5a07456fa93d66fcd1ab9f5339)) {
        Py_XDECREF(cache_frame_c8faaf5a07456fa93d66fcd1ab9f5339);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c8faaf5a07456fa93d66fcd1ab9f5339 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c8faaf5a07456fa93d66fcd1ab9f5339 = MAKE_FUNCTION_FRAME(codeobj_c8faaf5a07456fa93d66fcd1ab9f5339, module_httpx$_urls, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c8faaf5a07456fa93d66fcd1ab9f5339->m_type_description == NULL);
    frame_c8faaf5a07456fa93d66fcd1ab9f5339 = cache_frame_c8faaf5a07456fa93d66fcd1ab9f5339;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c8faaf5a07456fa93d66fcd1ab9f5339);
    assert(Py_REFCNT(frame_c8faaf5a07456fa93d66fcd1ab9f5339) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 754;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[72]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 754;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_class_name == NULL);
        var_class_name = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_self);
        tmp_unicode_arg_1 = par_self;
        tmp_assign_source_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 755;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_query_string == NULL);
        var_query_string = tmp_assign_source_2;
    }
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(var_class_name);
        tmp_format_value_1 = var_class_name;
        tmp_format_spec_1 = mod_consts[12];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 756;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[114];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_query_string);
            tmp_operand_value_1 = var_query_string;
            tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 756;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[12];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 756;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[115];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[12], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 756;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_c8faaf5a07456fa93d66fcd1ab9f5339, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c8faaf5a07456fa93d66fcd1ab9f5339->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c8faaf5a07456fa93d66fcd1ab9f5339, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c8faaf5a07456fa93d66fcd1ab9f5339,
        type_description_1,
        par_self,
        var_class_name,
        var_query_string
    );


    // Release cached frame if used for exception.
    if (frame_c8faaf5a07456fa93d66fcd1ab9f5339 == cache_frame_c8faaf5a07456fa93d66fcd1ab9f5339) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c8faaf5a07456fa93d66fcd1ab9f5339);
        cache_frame_c8faaf5a07456fa93d66fcd1ab9f5339 = NULL;
    }

    assertFrameObject(frame_c8faaf5a07456fa93d66fcd1ab9f5339);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_class_name);
    Py_DECREF(var_class_name);
    var_class_name = NULL;
    CHECK_OBJECT(var_query_string);
    Py_DECREF(var_query_string);
    var_query_string = NULL;
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

    Py_XDECREF(var_class_name);
    var_class_name = NULL;
    Py_XDECREF(var_query_string);
    var_query_string = NULL;
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


static PyObject *impl_httpx$_urls$$$function__49_update(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_params = python_pars[1];
    struct Nuitka_FrameObject *frame_92b01a523ea1d974991c7e23553213f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_92b01a523ea1d974991c7e23553213f9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_92b01a523ea1d974991c7e23553213f9)) {
        Py_XDECREF(cache_frame_92b01a523ea1d974991c7e23553213f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_92b01a523ea1d974991c7e23553213f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_92b01a523ea1d974991c7e23553213f9 = MAKE_FUNCTION_FRAME(codeobj_92b01a523ea1d974991c7e23553213f9, module_httpx$_urls, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_92b01a523ea1d974991c7e23553213f9->m_type_description == NULL);
    frame_92b01a523ea1d974991c7e23553213f9 = cache_frame_92b01a523ea1d974991c7e23553213f9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_92b01a523ea1d974991c7e23553213f9);
    assert(Py_REFCNT(frame_92b01a523ea1d974991c7e23553213f9) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[146];
        frame_92b01a523ea1d974991c7e23553213f9->m_frame.f_lineno = 759;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 759;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_92b01a523ea1d974991c7e23553213f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_92b01a523ea1d974991c7e23553213f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_92b01a523ea1d974991c7e23553213f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_92b01a523ea1d974991c7e23553213f9,
        type_description_1,
        par_self,
        par_params
    );


    // Release cached frame if used for exception.
    if (frame_92b01a523ea1d974991c7e23553213f9 == cache_frame_92b01a523ea1d974991c7e23553213f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_92b01a523ea1d974991c7e23553213f9);
        cache_frame_92b01a523ea1d974991c7e23553213f9 = NULL;
    }

    assertFrameObject(frame_92b01a523ea1d974991c7e23553213f9);

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
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_httpx$_urls$$$function__50___setitem__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_key = python_pars[1];
    PyObject *par_value = python_pars[2];
    struct Nuitka_FrameObject *frame_77ae796b526a5862092b5646fde8a0e3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_77ae796b526a5862092b5646fde8a0e3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_77ae796b526a5862092b5646fde8a0e3)) {
        Py_XDECREF(cache_frame_77ae796b526a5862092b5646fde8a0e3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_77ae796b526a5862092b5646fde8a0e3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_77ae796b526a5862092b5646fde8a0e3 = MAKE_FUNCTION_FRAME(codeobj_77ae796b526a5862092b5646fde8a0e3, module_httpx$_urls, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_77ae796b526a5862092b5646fde8a0e3->m_type_description == NULL);
    frame_77ae796b526a5862092b5646fde8a0e3 = cache_frame_77ae796b526a5862092b5646fde8a0e3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_77ae796b526a5862092b5646fde8a0e3);
    assert(Py_REFCNT(frame_77ae796b526a5862092b5646fde8a0e3) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[147];
        frame_77ae796b526a5862092b5646fde8a0e3->m_frame.f_lineno = 765;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 765;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_77ae796b526a5862092b5646fde8a0e3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_77ae796b526a5862092b5646fde8a0e3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_77ae796b526a5862092b5646fde8a0e3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_77ae796b526a5862092b5646fde8a0e3,
        type_description_1,
        par_self,
        par_key,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_77ae796b526a5862092b5646fde8a0e3 == cache_frame_77ae796b526a5862092b5646fde8a0e3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_77ae796b526a5862092b5646fde8a0e3);
        cache_frame_77ae796b526a5862092b5646fde8a0e3 = NULL;
    }

    assertFrameObject(frame_77ae796b526a5862092b5646fde8a0e3);

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
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__10_netloc(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__10_netloc,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_3fb8460dac6e62f28b7713f74d56264c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[50],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__11_path(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__11_path,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_f416200e7cd32873864449bcfa48023c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__12_query(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__12_query,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[194],
#endif
        codeobj_16bc0a34b2879f438740d8ae428eeca9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[55],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__13_params(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__13_params,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[196],
#endif
        codeobj_08d106cd4cbd59fdbb2defe210da8c3e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[57],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__14_raw_path(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__14_raw_path,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        mod_consts[197],
#endif
        codeobj_7308b452e7c2a56d93ee602f5ed78f5a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[59],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__15_fragment(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__15_fragment,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[198],
#endif
        codeobj_9621ddce7070f8988b80636ccf65b94a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__16_raw(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__16_raw,
        mod_consts[199],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_88058cf9b3f36d10b96fafb9c1827122,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[66],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__17_is_absolute_url(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__17_is_absolute_url,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_1553d18976fd0670d5a80f964548c204,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[67],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__18_is_relative_url(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__18_is_relative_url,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[203],
#endif
        codeobj_a454a82524de1a1bdf3a050c206bfad9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[68],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__19_copy_with(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__19_copy_with,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[204],
#endif
        codeobj_aaadfe664205032516bf24aae3a87e2a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[95],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__1___init__,
        mod_consts[179],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_d66fa4d5f32cd715fe0adc7f3f2083ae,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__20_copy_set_param(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__20_copy_set_param,
        mod_consts[207],
#if PYTHON_VERSION >= 0x300
        mod_consts[208],
#endif
        codeobj_8ebf97abe2b15780f282021f2d4a85ba,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__21_copy_add_param(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__21_copy_add_param,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        mod_consts[210],
#endif
        codeobj_3c5a1931b6082966c5a325471cc58b0c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__22_copy_remove_param(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__22_copy_remove_param,
        mod_consts[212],
#if PYTHON_VERSION >= 0x300
        mod_consts[213],
#endif
        codeobj_549d0da44d99408e62e6d15b4ab41a78,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__23_copy_merge_params(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__23_copy_merge_params,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        mod_consts[215],
#endif
        codeobj_3047e2eb95846fa0cbfcb4b9b8666f9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__24_join(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__24_join,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[216],
#endif
        codeobj_450d208cc7aac68618af9f094bef9839,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[108],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__25___hash__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__25___hash__,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        mod_consts[219],
#endif
        codeobj_e8e0eb7cce52b9038b1958ac3628cc42,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__26___eq__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__26___eq__,
        mod_consts[221],
#if PYTHON_VERSION >= 0x300
        mod_consts[222],
#endif
        codeobj_af2a3da4cea7550eec87563eab477807,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__27___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__27___str__,
        mod_consts[223],
#if PYTHON_VERSION >= 0x300
        mod_consts[224],
#endif
        codeobj_100273f3e84733e51d5fba1d2f682c79,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__28___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__28___repr__,
        mod_consts[225],
#if PYTHON_VERSION >= 0x300
        mod_consts[226],
#endif
        codeobj_840da881ff0808bae0c7d342ce892e2a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__29___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__29___init__,
        mod_consts[179],
#if PYTHON_VERSION >= 0x300
        mod_consts[236],
#endif
        codeobj_bdd02c43820c23ccf184a35bae82e593,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__2_scheme(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__2_scheme,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_6e7afe79966cc1b07e48c48c9558aea4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__30_keys(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__30_keys,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        mod_consts[239],
#endif
        codeobj_7e50213cd05eccc774b3b00bced814af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[130],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__31_values(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__31_values,
        mod_consts[131],
#if PYTHON_VERSION >= 0x300
        mod_consts[241],
#endif
        codeobj_062505214ab10ff1aac01be11401a6ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[132],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__32_items(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__32_items,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        mod_consts[243],
#endif
        codeobj_4226362f140c7cb57216a5b65ad7a7b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[133],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__33_multi_items(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__33_multi_items,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        mod_consts[246],
#endif
        codeobj_5a3cb73cd991c46da717e5c011becc2e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[136],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__34_get(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__34_get,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        mod_consts[248],
#endif
        codeobj_0cde59557e104455b872320dc652d4e6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[137],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__35_get_list(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__35_get_list,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        mod_consts[249],
#endif
        codeobj_ee327020b8d044684d7f46c474aeefa2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[138],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__36_set(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__36_set,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        mod_consts[250],
#endif
        codeobj_1b2ff2cc98cecdabda77a9c662e91a18,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[139],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__37_add(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__37_add,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        mod_consts[251],
#endif
        codeobj_b3d27fd5dbe5f90afea6d313b495abce,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[141],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__38_remove(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__38_remove,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        mod_consts[252],
#endif
        codeobj_3685a74a139cad6a16058065df4241e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[142],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__39_merge(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__39_merge,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[253],
#endif
        codeobj_499c0dd172c06c4fdff4072e65467367,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[143],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__3_raw_scheme(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__3_raw_scheme,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_9cd96749de2a4d5f710004d4d030c680,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__40___getitem__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__40___getitem__,
        mod_consts[231],
#if PYTHON_VERSION >= 0x300
        mod_consts[254],
#endif
        codeobj_7a8ed8fafd0aa78287d99a598c3507f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__41___contains__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__41___contains__,
        mod_consts[256],
#if PYTHON_VERSION >= 0x300
        mod_consts[257],
#endif
        codeobj_a670165f59ea7e9dea1166171ff1ba52,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__42___iter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__42___iter__,
        mod_consts[259],
#if PYTHON_VERSION >= 0x300
        mod_consts[260],
#endif
        codeobj_4e915a3f3ff0816d130f5db7a463325f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__43___len__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__43___len__,
        mod_consts[262],
#if PYTHON_VERSION >= 0x300
        mod_consts[263],
#endif
        codeobj_7faa37a57869b9f1fb14503d5e239a05,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__44___bool__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__44___bool__,
        mod_consts[264],
#if PYTHON_VERSION >= 0x300
        mod_consts[265],
#endif
        codeobj_f3d97483c00d46aa73406d0263449655,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__45___hash__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__45___hash__,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        mod_consts[266],
#endif
        codeobj_ee2f8950d7c58cdf76db6d854b2b0eff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__46___eq__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__46___eq__,
        mod_consts[221],
#if PYTHON_VERSION >= 0x300
        mod_consts[267],
#endif
        codeobj_341b8002ab3bace7c7b795d6110fda26,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__47___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__47___str__,
        mod_consts[223],
#if PYTHON_VERSION >= 0x300
        mod_consts[268],
#endif
        codeobj_00709aa2cbfecaeefb1e9594c47c888a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__48___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__48___repr__,
        mod_consts[225],
#if PYTHON_VERSION >= 0x300
        mod_consts[269],
#endif
        codeobj_c8faaf5a07456fa93d66fcd1ab9f5339,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__49_update(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__49_update,
        mod_consts[270],
#if PYTHON_VERSION >= 0x300
        mod_consts[271],
#endif
        codeobj_92b01a523ea1d974991c7e23553213f9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__4_userinfo(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__4_userinfo,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_8ad6cef804c90357c635a45d3fc180c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__50___setitem__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__50___setitem__,
        mod_consts[272],
#if PYTHON_VERSION >= 0x300
        mod_consts[273],
#endif
        codeobj_77ae796b526a5862092b5646fde8a0e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__5_username(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__5_username,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_9eb5bbd599d7ffafa1e0e879a694f0b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[31],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__6_password(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__6_password,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_bbbc2b8ad03319e8a682d30dc158b538,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[33],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__7_host(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__7_host,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        mod_consts[188],
#endif
        codeobj_4a98f12515989d0736d849d00bbf32b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[45],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__8_raw_host(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__8_raw_host,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        mod_consts[189],
#endif
        codeobj_75663d7351c1fa1058af775afd8464e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[46],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_urls$$$function__9_port(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_urls$$$function__9_port,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[191],
#endif
        codeobj_a0d6a853cc886759377991ccc2651dc7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_urls,
        mod_consts[48],
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

function_impl_code functable_httpx$_urls[] = {
    impl_httpx$_urls$$$function__1___init__,
    impl_httpx$_urls$$$function__2_scheme,
    impl_httpx$_urls$$$function__3_raw_scheme,
    impl_httpx$_urls$$$function__4_userinfo,
    impl_httpx$_urls$$$function__5_username,
    impl_httpx$_urls$$$function__6_password,
    impl_httpx$_urls$$$function__7_host,
    impl_httpx$_urls$$$function__8_raw_host,
    impl_httpx$_urls$$$function__9_port,
    impl_httpx$_urls$$$function__10_netloc,
    impl_httpx$_urls$$$function__11_path,
    impl_httpx$_urls$$$function__12_query,
    impl_httpx$_urls$$$function__13_params,
    impl_httpx$_urls$$$function__14_raw_path,
    impl_httpx$_urls$$$function__15_fragment,
    impl_httpx$_urls$$$function__16_raw,
    impl_httpx$_urls$$$function__17_is_absolute_url,
    impl_httpx$_urls$$$function__18_is_relative_url,
    impl_httpx$_urls$$$function__19_copy_with,
    impl_httpx$_urls$$$function__20_copy_set_param,
    impl_httpx$_urls$$$function__21_copy_add_param,
    impl_httpx$_urls$$$function__22_copy_remove_param,
    impl_httpx$_urls$$$function__23_copy_merge_params,
    impl_httpx$_urls$$$function__24_join,
    impl_httpx$_urls$$$function__25___hash__,
    impl_httpx$_urls$$$function__26___eq__,
    impl_httpx$_urls$$$function__27___str__,
    impl_httpx$_urls$$$function__28___repr__,
    impl_httpx$_urls$$$function__29___init__,
    impl_httpx$_urls$$$function__30_keys,
    impl_httpx$_urls$$$function__31_values,
    impl_httpx$_urls$$$function__32_items,
    impl_httpx$_urls$$$function__33_multi_items,
    impl_httpx$_urls$$$function__34_get,
    impl_httpx$_urls$$$function__35_get_list,
    impl_httpx$_urls$$$function__36_set,
    impl_httpx$_urls$$$function__37_add,
    impl_httpx$_urls$$$function__38_remove,
    impl_httpx$_urls$$$function__39_merge,
    impl_httpx$_urls$$$function__40___getitem__,
    impl_httpx$_urls$$$function__41___contains__,
    impl_httpx$_urls$$$function__42___iter__,
    impl_httpx$_urls$$$function__43___len__,
    impl_httpx$_urls$$$function__44___bool__,
    impl_httpx$_urls$$$function__45___hash__,
    impl_httpx$_urls$$$function__46___eq__,
    impl_httpx$_urls$$$function__47___str__,
    impl_httpx$_urls$$$function__48___repr__,
    impl_httpx$_urls$$$function__49_update,
    impl_httpx$_urls$$$function__50___setitem__,
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

    function_impl_code *current = functable_httpx$_urls;
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

    if (offset > sizeof(functable_httpx$_urls) || offset < 0) {
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
        functable_httpx$_urls[offset],
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
        module_httpx$_urls,
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
PyObject *modulecode_httpx$_urls(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpx._urls");

    // Store the module for future use.
    module_httpx$_urls = module;

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
        PRINT_STRING("httpx._urls: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpx._urls: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpx._urls: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inithttpx$_urls\n");

    moduledict_httpx$_urls = MODULE_DICT(module_httpx$_urls);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpx$_urls,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpx$_urls,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[12]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpx$_urls,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_urls,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_urls,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpx$_urls);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpx$_urls, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_httpx$_urls, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpx$_urls, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_httpx$_urls);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_httpx$_urls, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_122b7e511cfc39f4840e42e864fe0aa9;
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
    PyObject *locals_httpx$_urls$$$class__1_URL_13 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_de0a18a2035a671b08cdb86ee24f1f29_2;
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
    PyObject *locals_httpx$_urls$$$class__2_QueryParams_544 = NULL;
    struct Nuitka_FrameObject *frame_bb34bcfb751cb3e72dcf6ced1e2a0d12_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[149];
        UPDATE_STRING_DICT0(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_2);
    }
    frame_122b7e511cfc39f4840e42e864fe0aa9 = MAKE_MODULE_FRAME(codeobj_122b7e511cfc39f4840e42e864fe0aa9, module_httpx$_urls);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_122b7e511cfc39f4840e42e864fe0aa9);
    assert(Py_REFCNT(frame_122b7e511cfc39f4840e42e864fe0aa9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[149];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[152], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[153], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[155];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_urls;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[156];
        tmp_level_value_1 = mod_consts[30];
        frame_122b7e511cfc39f4840e42e864fe0aa9->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
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
                (PyObject *)moduledict_httpx$_urls,
                mod_consts[119],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[119]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_httpx$_urls,
                mod_consts[78],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[78]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_httpx$_urls,
                mod_consts[27],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[27]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_httpx$_urls,
                mod_consts[145],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[145]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_9);
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
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[43];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_httpx$_urls;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[30];
        frame_122b7e511cfc39f4840e42e864fe0aa9->m_frame.f_lineno = 4;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[0];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_httpx$_urls;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[30];
        frame_122b7e511cfc39f4840e42e864fe0aa9->m_frame.f_lineno = 5;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[157];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_httpx$_urls;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[30];
        frame_122b7e511cfc39f4840e42e864fe0aa9->m_frame.f_lineno = 6;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[158];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_httpx$_urls;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[159];
        tmp_level_value_5 = mod_consts[127];
        frame_122b7e511cfc39f4840e42e864fe0aa9->m_frame.f_lineno = 8;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_httpx$_urls,
                mod_consts[6],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[160];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_httpx$_urls;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[161];
        tmp_level_value_6 = mod_consts[127];
        frame_122b7e511cfc39f4840e42e864fe0aa9->m_frame.f_lineno = 9;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
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
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_httpx$_urls,
                mod_consts[162],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[162]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_httpx$_urls,
                mod_consts[163],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[163]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_httpx$_urls,
                mod_consts[62],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[62]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_httpx$_urls,
                mod_consts[164],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[164]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_18);
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[165];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_httpx$_urls;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[166];
        tmp_level_value_7 = mod_consts[127];
        frame_122b7e511cfc39f4840e42e864fe0aa9->m_frame.f_lineno = 10;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_httpx$_urls,
                mod_consts[128],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[128]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_httpx$_urls$$$class__1_URL_13 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[167];
        tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[168], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[169];
        tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[148], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[10];
        tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[170], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[171], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_de0a18a2035a671b08cdb86ee24f1f29_2 = MAKE_CLASS_FRAME(codeobj_de0a18a2035a671b08cdb86ee24f1f29, module_httpx$_urls, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_de0a18a2035a671b08cdb86ee24f1f29_2);
        assert(Py_REFCNT(frame_de0a18a2035a671b08cdb86ee24f1f29_2) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[172]);
            if (tmp_ass_subvalue_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_1 = DICT_GET_ITEM0(locals_httpx$_urls$$$class__1_URL_13, mod_consts[171]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_1);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[171]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_1);

                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_1 = mod_consts[3];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_1;
            tmp_defaults_1 = mod_consts[173];
            tmp_dict_key_1 = mod_consts[174];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            assert(!(tmp_expression_value_3 == NULL));
            tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[175]);
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_1 = mod_consts[176];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_4;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[80];
                tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

                if (unlikely(tmp_expression_value_4 == NULL)) {
                    tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
                }

                assert(!(tmp_expression_value_4 == NULL));
                tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[177]);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[178];
                tmp_dict_value_1 = Py_None;
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


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[179], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_2;
            tmp_called_value_1 = (PyObject *)&PyProperty_Type;
            tmp_annotations_2 = DICT_COPY(mod_consts[181]);


            tmp_args_element_value_1 = MAKE_FUNCTION_httpx$_urls$$$function__2_scheme(tmp_annotations_2);

            frame_de0a18a2035a671b08cdb86ee24f1f29_2->m_frame.f_lineno = 116;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_3;
            tmp_called_value_2 = (PyObject *)&PyProperty_Type;
            tmp_annotations_3 = DICT_COPY(mod_consts[183]);


            tmp_args_element_value_2 = MAKE_FUNCTION_httpx$_urls$$$function__3_raw_scheme(tmp_annotations_3);

            frame_de0a18a2035a671b08cdb86ee24f1f29_2->m_frame.f_lineno = 124;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[63], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_4;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;
            tmp_annotations_4 = DICT_COPY(mod_consts[183]);


            tmp_args_element_value_3 = MAKE_FUNCTION_httpx$_urls$$$function__4_userinfo(tmp_annotations_4);

            frame_de0a18a2035a671b08cdb86ee24f1f29_2->m_frame.f_lineno = 132;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_5;
            tmp_called_value_4 = (PyObject *)&PyProperty_Type;
            tmp_annotations_5 = DICT_COPY(mod_consts[181]);


            tmp_args_element_value_4 = MAKE_FUNCTION_httpx$_urls$$$function__5_username(tmp_annotations_5);

            frame_de0a18a2035a671b08cdb86ee24f1f29_2->m_frame.f_lineno = 141;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[76], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_6;
            tmp_called_value_5 = (PyObject *)&PyProperty_Type;
            tmp_annotations_6 = DICT_COPY(mod_consts[181]);


            tmp_args_element_value_5 = MAKE_FUNCTION_httpx$_urls$$$function__6_password(tmp_annotations_6);

            frame_de0a18a2035a671b08cdb86ee24f1f29_2->m_frame.f_lineno = 150;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[77], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_7;
            tmp_called_value_6 = (PyObject *)&PyProperty_Type;
            tmp_annotations_7 = DICT_COPY(mod_consts[181]);


            tmp_args_element_value_6 = MAKE_FUNCTION_httpx$_urls$$$function__7_host(tmp_annotations_7);

            frame_de0a18a2035a671b08cdb86ee24f1f29_2->m_frame.f_lineno = 159;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[34], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_8;
            tmp_called_value_7 = (PyObject *)&PyProperty_Type;
            tmp_annotations_8 = DICT_COPY(mod_consts[183]);


            tmp_args_element_value_7 = MAKE_FUNCTION_httpx$_urls$$$function__8_raw_host(tmp_annotations_8);

            frame_de0a18a2035a671b08cdb86ee24f1f29_2->m_frame.f_lineno = 190;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[64], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            tmp_called_value_8 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_2 = mod_consts[178];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            assert(!(tmp_expression_value_6 == NULL));
            tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[190]);
            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_2 = (PyObject *)&PyLong_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));


            tmp_args_element_value_8 = MAKE_FUNCTION_httpx$_urls$$$function__9_port(tmp_annotations_9);

            frame_de0a18a2035a671b08cdb86ee24f1f29_2->m_frame.f_lineno = 218;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_annotations_10;
            tmp_called_value_9 = (PyObject *)&PyProperty_Type;
            tmp_annotations_10 = DICT_COPY(mod_consts[183]);


            tmp_args_element_value_9 = MAKE_FUNCTION_httpx$_urls$$$function__10_netloc(tmp_annotations_10);

            frame_de0a18a2035a671b08cdb86ee24f1f29_2->m_frame.f_lineno = 235;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[83], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_annotations_11;
            tmp_called_value_10 = (PyObject *)&PyProperty_Type;
            tmp_annotations_11 = DICT_COPY(mod_consts[181]);


            tmp_args_element_value_10 = MAKE_FUNCTION_httpx$_urls$$$function__11_path(tmp_annotations_11);

            frame_de0a18a2035a671b08cdb86ee24f1f29_2->m_frame.f_lineno = 251;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[51], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_annotations_12;
            tmp_called_value_11 = (PyObject *)&PyProperty_Type;
            tmp_annotations_12 = DICT_COPY(mod_consts[183]);


            tmp_args_element_value_11 = MAKE_FUNCTION_httpx$_urls$$$function__12_query(tmp_annotations_12);

            frame_de0a18a2035a671b08cdb86ee24f1f29_2->m_frame.f_lineno = 264;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[54], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_annotations_13;
            tmp_called_value_12 = (PyObject *)&PyProperty_Type;
            tmp_annotations_13 = DICT_COPY(mod_consts[195]);


            tmp_args_element_value_12 = MAKE_FUNCTION_httpx$_urls$$$function__13_params(tmp_annotations_13);

            frame_de0a18a2035a671b08cdb86ee24f1f29_2->m_frame.f_lineno = 281;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 281;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_annotations_14;
            tmp_called_value_13 = (PyObject *)&PyProperty_Type;
            tmp_annotations_14 = DICT_COPY(mod_consts[183]);


            tmp_args_element_value_13 = MAKE_FUNCTION_httpx$_urls$$$function__14_raw_path(tmp_annotations_14);

            frame_de0a18a2035a671b08cdb86ee24f1f29_2->m_frame.f_lineno = 289;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_annotations_15;
            tmp_called_value_14 = (PyObject *)&PyProperty_Type;
            tmp_annotations_15 = DICT_COPY(mod_consts[181]);


            tmp_args_element_value_14 = MAKE_FUNCTION_httpx$_urls$$$function__15_fragment(tmp_annotations_15);

            frame_de0a18a2035a671b08cdb86ee24f1f29_2->m_frame.f_lineno = 306;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_14);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_called_value_15 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_3 = mod_consts[178];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_16 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_args_element_value_15 = MAKE_FUNCTION_httpx$_urls$$$function__16_raw(tmp_annotations_16);

            frame_de0a18a2035a671b08cdb86ee24f1f29_2->m_frame.f_lineno = 314;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_15);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[199], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 315;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_annotations_17;
            tmp_called_value_16 = (PyObject *)&PyProperty_Type;
            tmp_annotations_17 = DICT_COPY(mod_consts[201]);


            tmp_args_element_value_16 = MAKE_FUNCTION_httpx$_urls$$$function__17_is_absolute_url(tmp_annotations_17);

            frame_de0a18a2035a671b08cdb86ee24f1f29_2->m_frame.f_lineno = 329;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_16);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_annotations_18;
            tmp_called_value_17 = (PyObject *)&PyProperty_Type;
            tmp_annotations_18 = DICT_COPY(mod_consts[201]);


            tmp_args_element_value_17 = MAKE_FUNCTION_httpx$_urls$$$function__18_is_relative_url(tmp_annotations_18);

            frame_de0a18a2035a671b08cdb86ee24f1f29_2->m_frame.f_lineno = 341;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[100], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_7;
            tmp_dict_key_4 = mod_consts[80];
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            assert(!(tmp_expression_value_7 == NULL));
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[177]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_19 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[178];
            tmp_dict_value_4 = mod_consts[10];
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__19_copy_with(tmp_annotations_19);

            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_defaults_2 = mod_consts[105];
            tmp_dict_key_5 = mod_consts[205];
            tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_20 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_8;
                tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[206];
                tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

                if (unlikely(tmp_expression_value_8 == NULL)) {
                    tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
                }

                assert(!(tmp_expression_value_8 == NULL));
                tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[177]);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 482;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[178];
                tmp_dict_value_5 = mod_consts[10];
                tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_20);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__20_copy_set_param(tmp_defaults_2, tmp_annotations_20);

            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[207], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 482;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_defaults_3 = mod_consts[105];
            tmp_dict_key_6 = mod_consts[205];
            tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_21 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_9;
                tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[206];
                tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

                if (unlikely(tmp_expression_value_9 == NULL)) {
                    tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
                }

                assert(!(tmp_expression_value_9 == NULL));
                tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[177]);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 485;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[178];
                tmp_dict_value_6 = mod_consts[10];
                tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_annotations_21);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__21_copy_add_param(tmp_defaults_3, tmp_annotations_21);

            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[209], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_22;
            tmp_annotations_22 = DICT_COPY(mod_consts[211]);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__22_copy_remove_param(tmp_annotations_22);

            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[212], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_23;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_dict_key_7 = mod_consts[92];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[163]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
            }

            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_23 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[178];
            tmp_dict_value_7 = mod_consts[10];
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__23_copy_merge_params(tmp_annotations_23);

            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[214], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 491;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_key_8 = mod_consts[174];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[164]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 494;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_24 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[178];
            tmp_dict_value_8 = mod_consts[10];
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__24_join(tmp_annotations_24);

            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[103], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 494;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_25;
            tmp_annotations_25 = DICT_COPY(mod_consts[217]);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__25___hash__(tmp_annotations_25);

            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[218], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_26;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_10;
            tmp_dict_key_9 = mod_consts[220];
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            assert(!(tmp_expression_value_10 == NULL));
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[177]);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 523;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_26 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[178];
            tmp_dict_value_9 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__26___eq__(tmp_annotations_26);

            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[221], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 523;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_de0a18a2035a671b08cdb86ee24f1f29_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_de0a18a2035a671b08cdb86ee24f1f29_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_de0a18a2035a671b08cdb86ee24f1f29_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_de0a18a2035a671b08cdb86ee24f1f29_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_de0a18a2035a671b08cdb86ee24f1f29_2);

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
            PyObject *tmp_annotations_27;
            tmp_annotations_27 = DICT_COPY(mod_consts[181]);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__27___str__(tmp_annotations_27);

            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[223], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_28;
            tmp_annotations_28 = DICT_COPY(mod_consts[181]);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__28___repr__(tmp_annotations_28);

            tmp_res = PyDict_SetItem(locals_httpx$_urls$$$class__1_URL_13, mod_consts[225], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_18 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[10];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[227];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_httpx$_urls$$$class__1_URL_13;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_122b7e511cfc39f4840e42e864fe0aa9->m_frame.f_lineno = 13;
            tmp_assign_source_23 = CALL_FUNCTION(tmp_called_value_18, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 13;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_23;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_22 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_22);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_httpx$_urls$$$class__1_URL_13);
        locals_httpx$_urls$$$class__1_URL_13 = NULL;
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

        Py_DECREF(locals_httpx$_urls$$$class__1_URL_13);
        locals_httpx$_urls$$$class__1_URL_13 = NULL;
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
        exception_lineno = 13;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_22);
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        assert(!(tmp_expression_value_12 == NULL));
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[228]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto try_except_handler_6;
        }
        tmp_subscript_value_3 = mod_consts[229];
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto try_except_handler_6;
        }
        tmp_assign_source_24 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_24, 0, tmp_tuple_element_2);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_25 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto try_except_handler_6;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_13 = tmp_class_creation_2__bases;
        tmp_subscript_value_4 = mod_consts[30];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_4, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto try_except_handler_6;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_1 = tmp_class_creation_2__bases;
        tmp_assign_source_27 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_27;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_14 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_14, mod_consts[230]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_15 = tmp_class_creation_2__metaclass;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[230]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto try_except_handler_6;
        }
        tmp_tuple_element_3 = mod_consts[56];
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_3 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
        frame_122b7e511cfc39f4840e42e864fe0aa9->m_frame.f_lineno = 544;
        tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_19, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_value_2);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_16 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_16, mod_consts[231]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto try_except_handler_6;
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
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[232];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_1 = mod_consts[72];
        tmp_getattr_default_1 = mod_consts[233];
        tmp_tuple_element_4 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_17;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_value_17 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_17 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[72]);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
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


            exception_lineno = 544;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 544;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_29;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_httpx$_urls$$$class__2_QueryParams_544 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[167];
        tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[168], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[234];
        tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[148], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[56];
        tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[170], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto try_except_handler_8;
        }
        frame_bb34bcfb751cb3e72dcf6ced1e2a0d12_3 = MAKE_CLASS_FRAME(codeobj_bb34bcfb751cb3e72dcf6ced1e2a0d12, module_httpx$_urls, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_bb34bcfb751cb3e72dcf6ced1e2a0d12_3);
        assert(Py_REFCNT(frame_bb34bcfb751cb3e72dcf6ced1e2a0d12_3) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_29;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_5;
            tmp_dict_key_10 = mod_consts[235];
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            assert(!(tmp_expression_value_19 == NULL));
            tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[190]);
            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_5 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[163]);

            if (tmp_subscript_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_5 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[163]);

                    if (unlikely(tmp_subscript_value_5 == NULL)) {
                        tmp_subscript_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
                    }

                    if (tmp_subscript_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_18);

                        exception_lineno = 550;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_5);
            Py_DECREF(tmp_expression_value_18);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_29 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_20;
                tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[80];
                tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

                if (unlikely(tmp_expression_value_20 == NULL)) {
                    tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
                }

                assert(!(tmp_expression_value_20 == NULL));
                tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[177]);
                if (tmp_dict_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 550;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[178];
                tmp_dict_value_10 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_10, tmp_dict_value_10);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_29);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__29___init__(tmp_annotations_29);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[179], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_30;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_6;
            tmp_dict_key_11 = mod_consts[178];
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            assert(!(tmp_expression_value_22 == NULL));
            tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[237]);
            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 590;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_6 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[238]);

            if (tmp_subscript_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_6 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_6);
            Py_DECREF(tmp_expression_value_21);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 590;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_30 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__30_keys(tmp_annotations_30);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[129], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 590;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_31;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_subscript_value_7;
            tmp_dict_key_12 = mod_consts[178];
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            assert(!(tmp_expression_value_24 == NULL));
            tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[240]);
            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 601;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_7 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[238]);

            if (tmp_subscript_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_7 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_7);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_7);
            Py_DECREF(tmp_expression_value_23);
            Py_DECREF(tmp_subscript_value_7);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 601;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_31 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__31_values(tmp_annotations_31);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[131], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 601;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_32;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_tuple_element_5;
            tmp_dict_key_13 = mod_consts[178];
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            assert(!(tmp_expression_value_26 == NULL));
            tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[242]);
            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 613;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_tuple_element_5 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[238]);

            if (tmp_tuple_element_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_5 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_tuple_element_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_8, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[238]);

            if (tmp_tuple_element_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_5 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_tuple_element_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_8, 1, tmp_tuple_element_5);
            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_8);
            Py_DECREF(tmp_expression_value_25);
            Py_DECREF(tmp_subscript_value_8);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 613;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_32 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__32_items(tmp_annotations_32);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[122], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 613;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_33;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_tuple_element_6;
            tmp_dict_key_14 = mod_consts[178];
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            assert(!(tmp_expression_value_28 == NULL));
            tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[244]);
            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 625;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            assert(!(tmp_expression_value_30 == NULL));
            tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[245]);
            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_27);

                exception_lineno = 625;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_tuple_element_6 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[238]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_tuple_element_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_10, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[238]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_tuple_element_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_10, 1, tmp_tuple_element_6);
            tmp_subscript_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_10);
            Py_DECREF(tmp_expression_value_29);
            Py_DECREF(tmp_subscript_value_10);
            if (tmp_subscript_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_27);

                exception_lineno = 625;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_9);
            Py_DECREF(tmp_expression_value_27);
            Py_DECREF(tmp_subscript_value_9);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 625;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_33 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__33_multi_items(tmp_annotations_33);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[134], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 625;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_4;
            PyObject *tmp_annotations_34;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_expression_value_31;
            tmp_defaults_4 = mod_consts[105];
            tmp_dict_key_15 = mod_consts[205];
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            assert(!(tmp_expression_value_31 == NULL));
            tmp_dict_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[177]);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_34 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_32;
                PyObject *tmp_expression_value_33;
                tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_15, tmp_dict_value_15);
                Py_DECREF(tmp_dict_value_15);
                assert(!(tmp_res != 0));
                tmp_dict_key_15 = mod_consts[247];
                tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

                if (unlikely(tmp_expression_value_32 == NULL)) {
                    tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
                }

                assert(!(tmp_expression_value_32 == NULL));
                tmp_dict_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[177]);
                if (tmp_dict_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 639;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_15, tmp_dict_value_15);
                Py_DECREF(tmp_dict_value_15);
                assert(!(tmp_res != 0));
                tmp_dict_key_15 = mod_consts[178];
                tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

                if (unlikely(tmp_expression_value_33 == NULL)) {
                    tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
                }

                assert(!(tmp_expression_value_33 == NULL));
                tmp_dict_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[177]);
                if (tmp_dict_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 639;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_15, tmp_dict_value_15);
                Py_DECREF(tmp_dict_value_15);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_annotations_34);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__34_get(tmp_defaults_4, tmp_annotations_34);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[89], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_35;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            tmp_dict_key_16 = mod_consts[205];
            tmp_dict_value_16 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[238]);

            if (tmp_dict_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_16 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_16);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_35 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_34;
                PyObject *tmp_expression_value_35;
                PyObject *tmp_subscript_value_11;
                tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[178];
                tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

                if (unlikely(tmp_expression_value_35 == NULL)) {
                    tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
                }

                assert(!(tmp_expression_value_35 == NULL));
                tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[244]);
                if (tmp_expression_value_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 653;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_11 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[238]);

                if (tmp_subscript_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_11 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_11);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_34);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_dict_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 653;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_35);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__35_get_list(tmp_annotations_35);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[140], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 653;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_5;
            PyObject *tmp_annotations_36;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            tmp_defaults_5 = mod_consts[105];
            tmp_dict_key_17 = mod_consts[205];
            tmp_dict_value_17 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[238]);

            if (tmp_dict_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_17 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_17);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_36 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_36;
                tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_17, tmp_dict_value_17);
                Py_DECREF(tmp_dict_value_17);
                assert(!(tmp_res != 0));
                tmp_dict_key_17 = mod_consts[206];
                tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

                if (unlikely(tmp_expression_value_36 == NULL)) {
                    tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
                }

                assert(!(tmp_expression_value_36 == NULL));
                tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[177]);
                if (tmp_dict_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 664;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_17, tmp_dict_value_17);
                Py_DECREF(tmp_dict_value_17);
                assert(!(tmp_res != 0));
                tmp_dict_key_17 = mod_consts[178];
                tmp_dict_value_17 = mod_consts[56];
                tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_17, tmp_dict_value_17);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_annotations_36);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__36_set(tmp_defaults_5, tmp_annotations_36);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[96], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 664;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_6;
            PyObject *tmp_annotations_37;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            tmp_defaults_6 = mod_consts[105];
            tmp_dict_key_18 = mod_consts[205];
            tmp_dict_value_18 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[238]);

            if (tmp_dict_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_18 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_18);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_37 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_37;
                tmp_res = PyDict_SetItem(tmp_annotations_37, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[206];
                tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

                if (unlikely(tmp_expression_value_37 == NULL)) {
                    tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
                }

                assert(!(tmp_expression_value_37 == NULL));
                tmp_dict_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[177]);
                if (tmp_dict_value_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 679;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_37, tmp_dict_key_18, tmp_dict_value_18);
                Py_DECREF(tmp_dict_value_18);
                assert(!(tmp_res != 0));
                tmp_dict_key_18 = mod_consts[178];
                tmp_dict_value_18 = mod_consts[56];
                tmp_res = PyDict_SetItem(tmp_annotations_37, tmp_dict_key_18, tmp_dict_value_18);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_annotations_37);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;
            Py_INCREF(tmp_defaults_6);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__37_add(tmp_defaults_6, tmp_annotations_37);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[97], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 679;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_38;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            tmp_dict_key_19 = mod_consts[205];
            tmp_dict_value_19 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[238]);

            if (tmp_dict_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_19 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_19);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_38 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_38, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[178];
            tmp_dict_value_19 = mod_consts[56];
            tmp_res = PyDict_SetItem(tmp_annotations_38, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__38_remove(tmp_annotations_38);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[98], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 694;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_7;
            PyObject *tmp_annotations_39;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_12;
            tmp_defaults_7 = mod_consts[105];
            tmp_dict_key_20 = mod_consts[92];
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            assert(!(tmp_expression_value_39 == NULL));
            tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[190]);
            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 709;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_12 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[163]);

            if (tmp_subscript_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_12 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[163]);

                    if (unlikely(tmp_subscript_value_12 == NULL)) {
                        tmp_subscript_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
                    }

                    if (tmp_subscript_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_38);

                        exception_lineno = 709;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_12);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_12);
            Py_DECREF(tmp_expression_value_38);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_dict_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 709;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_39 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_39, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));
            tmp_dict_key_20 = mod_consts[178];
            tmp_dict_value_20 = mod_consts[56];
            tmp_res = PyDict_SetItem(tmp_annotations_39, tmp_dict_key_20, tmp_dict_value_20);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_7);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__39_merge(tmp_defaults_7, tmp_annotations_39);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[99], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 709;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_40;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_expression_value_40;
            tmp_dict_key_21 = mod_consts[205];
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            assert(!(tmp_expression_value_40 == NULL));
            tmp_dict_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[177]);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 727;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_40 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_40, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[178];
            tmp_dict_value_21 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[238]);

            if (tmp_dict_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_21 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_21);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_40, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__40___getitem__(tmp_annotations_40);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[231], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 727;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_41;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_expression_value_41;
            tmp_dict_key_22 = mod_consts[205];
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            assert(!(tmp_expression_value_41 == NULL));
            tmp_dict_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[177]);
            if (tmp_dict_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 730;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_41 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_41, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));
            tmp_dict_key_22 = mod_consts[178];
            tmp_dict_value_22 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[255]);

            if (tmp_dict_value_22 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_22 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_22);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_41, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__41___contains__(tmp_annotations_41);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[256], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 730;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_42;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_expression_value_44;
            tmp_dict_key_23 = mod_consts[178];
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            assert(!(tmp_expression_value_43 == NULL));
            tmp_expression_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[258]);
            if (tmp_expression_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 733;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            assert(!(tmp_expression_value_44 == NULL));
            tmp_subscript_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[177]);
            if (tmp_subscript_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_42);

                exception_lineno = 733;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_13);
            Py_DECREF(tmp_expression_value_42);
            Py_DECREF(tmp_subscript_value_13);
            if (tmp_dict_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 733;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_42 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_42, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__42___iter__(tmp_annotations_42);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[259], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 733;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_43;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            tmp_dict_key_24 = mod_consts[178];
            tmp_dict_value_24 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[261]);

            if (tmp_dict_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_24 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_24);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_43 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_43, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__43___len__(tmp_annotations_43);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[262], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 736;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_44;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            tmp_dict_key_25 = mod_consts[178];
            tmp_dict_value_25 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[255]);

            if (tmp_dict_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_25 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_25);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_44 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_44, tmp_dict_key_25, tmp_dict_value_25);
            Py_DECREF(tmp_dict_value_25);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__44___bool__(tmp_annotations_44);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[264], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 739;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_45;
            PyObject *tmp_dict_key_26;
            PyObject *tmp_dict_value_26;
            tmp_dict_key_26 = mod_consts[178];
            tmp_dict_value_26 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[261]);

            if (tmp_dict_value_26 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_26 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_26);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_45 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_45, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__45___hash__(tmp_annotations_45);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[218], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 742;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_46;
            PyObject *tmp_dict_key_27;
            PyObject *tmp_dict_value_27;
            PyObject *tmp_expression_value_45;
            tmp_dict_key_27 = mod_consts[220];
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            assert(!(tmp_expression_value_45 == NULL));
            tmp_dict_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[177]);
            if (tmp_dict_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 745;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_46 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_46, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));
            tmp_dict_key_27 = mod_consts[178];
            tmp_dict_value_27 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[255]);

            if (tmp_dict_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_27 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_27);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_46, tmp_dict_key_27, tmp_dict_value_27);
            Py_DECREF(tmp_dict_value_27);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__46___eq__(tmp_annotations_46);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[221], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 745;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_47;
            PyObject *tmp_dict_key_28;
            PyObject *tmp_dict_value_28;
            tmp_dict_key_28 = mod_consts[178];
            tmp_dict_value_28 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[238]);

            if (tmp_dict_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_28 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_28);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_47 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_47, tmp_dict_key_28, tmp_dict_value_28);
            Py_DECREF(tmp_dict_value_28);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__47___str__(tmp_annotations_47);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[223], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 750;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_48;
            PyObject *tmp_dict_key_29;
            PyObject *tmp_dict_value_29;
            tmp_dict_key_29 = mod_consts[178];
            tmp_dict_value_29 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[238]);

            if (tmp_dict_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_29 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_29);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_48 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_48, tmp_dict_key_29, tmp_dict_value_29);
            Py_DECREF(tmp_dict_value_29);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__48___repr__(tmp_annotations_48);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[225], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 753;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_8;
            PyObject *tmp_annotations_49;
            PyObject *tmp_dict_key_30;
            PyObject *tmp_dict_value_30;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_subscript_value_14;
            tmp_defaults_8 = mod_consts[105];
            tmp_dict_key_30 = mod_consts[92];
            tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[109]);

            if (unlikely(tmp_expression_value_47 == NULL)) {
                tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
            }

            assert(!(tmp_expression_value_47 == NULL));
            tmp_expression_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[190]);
            if (tmp_expression_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 758;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_14 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[163]);

            if (tmp_subscript_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_14 = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[163]);

                    if (unlikely(tmp_subscript_value_14 == NULL)) {
                        tmp_subscript_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
                    }

                    if (tmp_subscript_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_46);

                        exception_lineno = 758;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_subscript_value_14);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_46);
            Py_DECREF(tmp_subscript_value_14);
            if (tmp_dict_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 758;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_49 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_49, tmp_dict_key_30, tmp_dict_value_30);
            Py_DECREF(tmp_dict_value_30);
            assert(!(tmp_res != 0));
            tmp_dict_key_30 = mod_consts[178];
            tmp_dict_value_30 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_49, tmp_dict_key_30, tmp_dict_value_30);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_8);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__49_update(tmp_defaults_8, tmp_annotations_49);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[270], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 758;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_50;
            PyObject *tmp_dict_key_31;
            PyObject *tmp_dict_value_31;
            tmp_dict_key_31 = mod_consts[205];
            tmp_dict_value_31 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[238]);

            if (tmp_dict_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_31 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_31);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_50 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_50, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));
            tmp_dict_key_31 = mod_consts[206];
            tmp_dict_value_31 = PyObject_GetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[238]);

            if (tmp_dict_value_31 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_31 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_31);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_50, tmp_dict_key_31, tmp_dict_value_31);
            Py_DECREF(tmp_dict_value_31);
            assert(!(tmp_res != 0));
            tmp_dict_key_31 = mod_consts[178];
            tmp_dict_value_31 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_50, tmp_dict_key_31, tmp_dict_value_31);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_urls$$$function__50___setitem__(tmp_annotations_50);

            tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[272], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 764;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_bb34bcfb751cb3e72dcf6ced1e2a0d12_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_bb34bcfb751cb3e72dcf6ced1e2a0d12_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_bb34bcfb751cb3e72dcf6ced1e2a0d12_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_bb34bcfb751cb3e72dcf6ced1e2a0d12_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_bb34bcfb751cb3e72dcf6ced1e2a0d12_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_urls$$$class__2_QueryParams_544, mod_consts[274], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;

            goto try_except_handler_8;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_3;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_20 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[56];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_httpx$_urls$$$class__2_QueryParams_544;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
            frame_122b7e511cfc39f4840e42e864fe0aa9->m_frame.f_lineno = 544;
            tmp_assign_source_31 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_30 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_30);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_httpx$_urls$$$class__2_QueryParams_544);
        locals_httpx$_urls$$$class__2_QueryParams_544 = NULL;
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

        Py_DECREF(locals_httpx$_urls$$$class__2_QueryParams_544);
        locals_httpx$_urls$$$class__2_QueryParams_544 = NULL;
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
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 544;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_httpx$_urls, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_30);
    }
    goto try_end_4;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_122b7e511cfc39f4840e42e864fe0aa9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_122b7e511cfc39f4840e42e864fe0aa9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_122b7e511cfc39f4840e42e864fe0aa9, exception_lineno);
    }



    assertFrameObject(frame_122b7e511cfc39f4840e42e864fe0aa9);

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
    PGO_onModuleExit("httpx._urls", false);

    Py_INCREF(module_httpx$_urls);
    return module_httpx$_urls;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_urls, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("httpx$_urls", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
