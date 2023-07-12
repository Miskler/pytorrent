/* Generated code for Python module 'httpx._utils'
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

/* The "module_httpx$_utils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpx$_utils;
PyDictObject *moduledict_httpx$_utils;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[354];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[354];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("httpx._utils"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 354; i++) {
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
void checkModuleConstants_httpx$_utils(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 354; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_e35210c5d61bcd008d9fba70c5932311;
static PyCodeObject *codeobj_42aaf2ad42b72f3b9fcf541e12725c80;
static PyCodeObject *codeobj_53a2cea2b7afe815f92aa23450920b54;
static PyCodeObject *codeobj_360f0b15c783d8c9693f05364e8cf07d;
static PyCodeObject *codeobj_08f4b4d80979553d14e4aff7bc823eb4;
static PyCodeObject *codeobj_a1afa578cdf596443951a3a030d4185c;
static PyCodeObject *codeobj_3c9c39b8a74ff48e15fcf52e8d1cf5a8;
static PyCodeObject *codeobj_237ab32f1cdcf96fabe107bf0f5d6262;
static PyCodeObject *codeobj_a13df479053134b273477c86cef3d606;
static PyCodeObject *codeobj_3e6c4b0b9eba537db9888e02c790ef63;
static PyCodeObject *codeobj_700b86c14ce335e1e0d77310702a027c;
static PyCodeObject *codeobj_bb21be701fbd30edce19bcda3868bf99;
static PyCodeObject *codeobj_ad4ab030aeaf0979f05fdd20a359b6b1;
static PyCodeObject *codeobj_cc5b41b70d84d0d4e56d9abebaa2202a;
static PyCodeObject *codeobj_ad14d0bd6a880aa722ace575e6db01d2;
static PyCodeObject *codeobj_fe6d80f51276f4fbeaa1ea283d79079a;
static PyCodeObject *codeobj_d94b3ecba2c6ca09ffb2bc34bfd57bc0;
static PyCodeObject *codeobj_7dd9a6aa99a2665f0e1f03dfbde05e7a;
static PyCodeObject *codeobj_4ff96e00e834cb894740dc0dac775618;
static PyCodeObject *codeobj_864dd576ed9e16f328ffb6afbe5e5f0c;
static PyCodeObject *codeobj_171b79c1b39a4c08b7768a25f7cc1f85;
static PyCodeObject *codeobj_f39c1f0271d5c1a3e66536de746a6aa4;
static PyCodeObject *codeobj_243095071e829c6f3ad8604be6e4f642;
static PyCodeObject *codeobj_bd9845bf73716f4bb7db932f9e678d28;
static PyCodeObject *codeobj_f8cef3afbea19b2ba0853979154f3045;
static PyCodeObject *codeobj_8085476bbcfec15a70d0f6244416fa60;
static PyCodeObject *codeobj_5d2ea595f5182f74fcc653f24a8c5ff4;
static PyCodeObject *codeobj_1b4cbc5d3a0753afc5104c2610d5800e;
static PyCodeObject *codeobj_8ea1f8b388f3ca9fdd51ceca7ba3f50b;
static PyCodeObject *codeobj_36ab043be9d8d3d97fa185412278d4dc;
static PyCodeObject *codeobj_9d1b1cb18226d80e8a128cbedff69213;
static PyCodeObject *codeobj_b81bb406afd716a92d4d42cbca7b992f;
static PyCodeObject *codeobj_9e25da25774be83587b819fa634b76cb;
static PyCodeObject *codeobj_5d7545c25181c3fefb604a56d5ba595a;
static PyCodeObject *codeobj_b785e79d9ff578940fb1d370fb10216b;
static PyCodeObject *codeobj_b44e2212f2dd8d8e84f150b659c8494c;
static PyCodeObject *codeobj_704bc0b9c1d87c61f7fd85358be14f37;
static PyCodeObject *codeobj_7fe3e2aca29ca1ec00a23fa5764ee411;
static PyCodeObject *codeobj_078da34bf5e99c51d41ecd45adb5a8ee;
static PyCodeObject *codeobj_9d9a8124dd38839f4d87ce7f4accacd4;
static PyCodeObject *codeobj_59a33c0b28797b4ac7c388252c545893;
static PyCodeObject *codeobj_f3147fb98cec80c17e17a08d6bff7f0f;
static PyCodeObject *codeobj_13f3d11f41d806bb6e3de16e4acc157d;
static PyCodeObject *codeobj_932ffd00a235f7752eacc4214f119b5e;
static PyCodeObject *codeobj_177bb1952b20ec9365fb6fa71bcf3d85;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[209]; CHECK_OBJECT(module_filename_obj);
    codeobj_e35210c5d61bcd008d9fba70c5932311 = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_NEWLOCALS | CO_NOFREE, mod_consts[317], mod_consts[317], mod_consts[318], NULL, 1, 0, 0);
    codeobj_42aaf2ad42b72f3b9fcf541e12725c80 = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_NEWLOCALS | CO_NOFREE, mod_consts[319], mod_consts[319], mod_consts[318], NULL, 1, 0, 0);
    codeobj_53a2cea2b7afe815f92aa23450920b54 = MAKE_CODE_OBJECT(module_filename_obj, 324, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[319], mod_consts[319], mod_consts[320], NULL, 1, 0, 0);
    codeobj_360f0b15c783d8c9693f05364e8cf07d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[321], mod_consts[321], NULL, NULL, 0, 0, 0);
    codeobj_08f4b4d80979553d14e4aff7bc823eb4 = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[322], NULL, 0, 0, 0);
    codeobj_a1afa578cdf596443951a3a030d4185c = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_NOFREE, mod_consts[248], mod_consts[248], mod_consts[322], NULL, 0, 0, 0);
    codeobj_3c9c39b8a74ff48e15fcf52e8d1cf5a8 = MAKE_CODE_OBJECT(module_filename_obj, 423, CO_NOFREE, mod_consts[207], mod_consts[207], mod_consts[322], NULL, 0, 0, 0);
    codeobj_237ab32f1cdcf96fabe107bf0f5d6262 = MAKE_CODE_OBJECT(module_filename_obj, 528, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[315], mod_consts[315], mod_consts[323], NULL, 2, 0, 0);
    codeobj_a13df479053134b273477c86cef3d606 = MAKE_CODE_OBJECT(module_filename_obj, 522, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[310], mod_consts[310], mod_consts[324], NULL, 1, 0, 0);
    codeobj_3e6c4b0b9eba537db9888e02c790ef63 = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[252], mod_consts[252], mod_consts[325], NULL, 2, 0, 0);
    codeobj_700b86c14ce335e1e0d77310702a027c = MAKE_CODE_OBJECT(module_filename_obj, 465, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[252], mod_consts[252], mod_consts[326], NULL, 2, 0, 0);
    codeobj_bb21be701fbd30edce19bcda3868bf99 = MAKE_CODE_OBJECT(module_filename_obj, 525, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[313], mod_consts[313], mod_consts[323], NULL, 2, 0, 0);
    codeobj_ad4ab030aeaf0979f05fdd20a359b6b1 = MAKE_CODE_OBJECT(module_filename_obj, 393, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[175], mod_consts[175], mod_consts[327], NULL, 1, 0, 0);
    codeobj_cc5b41b70d84d0d4e56d9abebaa2202a = MAKE_CODE_OBJECT(module_filename_obj, 418, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[181], mod_consts[181], mod_consts[328], NULL, 1, 0, 0);
    codeobj_ad14d0bd6a880aa722ace575e6db01d2 = MAKE_CODE_OBJECT(module_filename_obj, 411, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[179], mod_consts[179], mod_consts[324], NULL, 1, 0, 0);
    codeobj_fe6d80f51276f4fbeaa1ea283d79079a = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[242], mod_consts[242], mod_consts[329], NULL, 2, 0, 0);
    codeobj_d94b3ecba2c6ca09ffb2bc34bfd57bc0 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[260], mod_consts[260], mod_consts[330], NULL, 0, 0, 0);
    codeobj_7dd9a6aa99a2665f0e1f03dfbde05e7a = MAKE_CODE_OBJECT(module_filename_obj, 152, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[257], mod_consts[257], mod_consts[331], NULL, 2, 0, 0);
    codeobj_4ff96e00e834cb894740dc0dac775618 = MAKE_CODE_OBJECT(module_filename_obj, 307, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[284], mod_consts[284], mod_consts[332], NULL, 0, 0, 0);
    codeobj_864dd576ed9e16f328ffb6afbe5e5f0c = MAKE_CODE_OBJECT(module_filename_obj, 241, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[279], mod_consts[279], mod_consts[333], NULL, 1, 0, 0);
    codeobj_171b79c1b39a4c08b7768a25f7cc1f85 = MAKE_CODE_OBJECT(module_filename_obj, 361, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[291], mod_consts[291], mod_consts[334], NULL, 1, 0, 0);
    codeobj_f39c1f0271d5c1a3e66536de746a6aa4 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[245], mod_consts[245], mod_consts[335], NULL, 1, 0, 0);
    codeobj_243095071e829c6f3ad8604be6e4f642 = MAKE_CODE_OBJECT(module_filename_obj, 292, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[283], mod_consts[283], mod_consts[336], NULL, 2, 0, 0);
    codeobj_bd9845bf73716f4bb7db932f9e678d28 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[240], mod_consts[240], mod_consts[337], NULL, 1, 0, 0);
    codeobj_f8cef3afbea19b2ba0853979154f3045 = MAKE_CODE_OBJECT(module_filename_obj, 495, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[305], mod_consts[305], mod_consts[323], NULL, 2, 0, 0);
    codeobj_8085476bbcfec15a70d0f6244416fa60 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[338], NULL, 1, 0, 0);
    codeobj_5d2ea595f5182f74fcc653f24a8c5ff4 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[235], mod_consts[235], mod_consts[339], NULL, 3, 0, 0);
    codeobj_1b4cbc5d3a0753afc5104c2610d5800e = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[236], mod_consts[236], mod_consts[340], NULL, 2, 0, 0);
    codeobj_8ea1f8b388f3ca9fdd51ceca7ba3f50b = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[341], NULL, 1, 0, 0);
    codeobj_36ab043be9d8d3d97fa185412278d4dc = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[264], mod_consts[264], mod_consts[342], NULL, 1, 0, 0);
    codeobj_9d1b1cb18226d80e8a128cbedff69213 = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[262], mod_consts[262], mod_consts[343], NULL, 1, 0, 0);
    codeobj_b81bb406afd716a92d4d42cbca7b992f = MAKE_CODE_OBJECT(module_filename_obj, 367, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[293], mod_consts[293], mod_consts[344], NULL, 1, 0, 0);
    codeobj_9e25da25774be83587b819fa634b76cb = MAKE_CODE_OBJECT(module_filename_obj, 275, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[134], mod_consts[134], mod_consts[345], NULL, 1, 0, 0);
    codeobj_5d7545c25181c3fefb604a56d5ba595a = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[238], mod_consts[238], mod_consts[346], NULL, 1, 0, 0);
    codeobj_b785e79d9ff578940fb1d370fb10216b = MAKE_CODE_OBJECT(module_filename_obj, 509, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[206], mod_consts[206], mod_consts[347], NULL, 1, 0, 0);
    codeobj_b44e2212f2dd8d8e84f150b659c8494c = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[348], NULL, 1, 0, 0);
    codeobj_704bc0b9c1d87c61f7fd85358be14f37 = MAKE_CODE_OBJECT(module_filename_obj, 281, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[281], mod_consts[281], mod_consts[349], NULL, 2, 0, 0);
    codeobj_7fe3e2aca29ca1ec00a23fa5764ee411 = MAKE_CODE_OBJECT(module_filename_obj, 414, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[299], mod_consts[299], mod_consts[328], NULL, 1, 0, 0);
    codeobj_078da34bf5e99c51d41ecd45adb5a8ee = MAKE_CODE_OBJECT(module_filename_obj, 408, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[297], mod_consts[297], mod_consts[324], NULL, 1, 0, 0);
    codeobj_9d9a8124dd38839f4d87ce7f4accacd4 = MAKE_CODE_OBJECT(module_filename_obj, 345, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[286], mod_consts[286], mod_consts[340], NULL, 2, 0, 0);
    codeobj_59a33c0b28797b4ac7c388252c545893 = MAKE_CODE_OBJECT(module_filename_obj, 353, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[350], NULL, 2, 0, 0);
    codeobj_f3147fb98cec80c17e17a08d6bff7f0f = MAKE_CODE_OBJECT(module_filename_obj, 349, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[340], NULL, 2, 0, 0);
    codeobj_13f3d11f41d806bb6e3de16e4acc157d = MAKE_CODE_OBJECT(module_filename_obj, 267, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[123], mod_consts[123], mod_consts[351], mod_consts[352], 1, 0, 0);
    codeobj_932ffd00a235f7752eacc4214f119b5e = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[123], mod_consts[123], mod_consts[353], NULL, 2, 0, 0);
    codeobj_177bb1952b20ec9365fb6fa71bcf3d85 = MAKE_CODE_OBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[289], mod_consts[289], mod_consts[346], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_httpx$_utils$$$function__13_obfuscate_sensitive_headers$$$genobj__1_obfuscate_sensitive_headers(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpx$_utils$$$function__26__get_time$$$coroutine__1__get_time();


static PyObject *MAKE_COROUTINE_httpx$_utils$$$function__28_async_start$$$coroutine__1_async_start(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_httpx$_utils$$$function__30_async_elapsed$$$coroutine__1_async_elapsed(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_pos_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__10_get_ca_bundle_from_env(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__11_parse_header_links(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__12_parse_content_type_charset(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__13_obfuscate_sensitive_headers(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__14_trace(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__15_get_logger(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__15_get_logger$$$function__1_trace(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__16_port_or_default(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__17_same_origin(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__18_is_https_redirect(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__19_get_environment_proxies(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__1_normalize_header_key(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__20_to_bytes(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__21_to_str(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__22_to_bytes_or_str(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__23_unquote(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__24_guess_content_type(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__25_peek_filelike_length(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__26__get_time(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__27_sync_start(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__28_async_start(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__29_sync_elapsed(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__2_normalize_header_value(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__30_async_elapsed(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__31___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__32_matches(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__33_priority(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__34___hash__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__35___lt__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__36___eq__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__3_primitive_value_to_str(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__4_is_known_encoding(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__5_format_form_param(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__5_format_form_param$$$function__1_replacer(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__6_guess_json_utf(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__7___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__8_netrc_info(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__9_get_credentials(PyObject *annotations);


// The module function definitions.
static PyObject *impl_httpx$_utils$$$function__1_normalize_header_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_lower = python_pars[1];
    PyObject *par_encoding = python_pars[2];
    PyObject *var_bytes_value = NULL;
    struct Nuitka_FrameObject *frame_5d2ea595f5182f74fcc653f24a8c5ff4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5d2ea595f5182f74fcc653f24a8c5ff4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5d2ea595f5182f74fcc653f24a8c5ff4)) {
        Py_XDECREF(cache_frame_5d2ea595f5182f74fcc653f24a8c5ff4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5d2ea595f5182f74fcc653f24a8c5ff4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5d2ea595f5182f74fcc653f24a8c5ff4 = MAKE_FUNCTION_FRAME(codeobj_5d2ea595f5182f74fcc653f24a8c5ff4, module_httpx$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5d2ea595f5182f74fcc653f24a8c5ff4->m_type_description == NULL);
    frame_5d2ea595f5182f74fcc653f24a8c5ff4 = cache_frame_5d2ea595f5182f74fcc653f24a8c5ff4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5d2ea595f5182f74fcc653f24a8c5ff4);
    assert(Py_REFCNT(frame_5d2ea595f5182f74fcc653f24a8c5ff4) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
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
        CHECK_OBJECT(par_value);
        tmp_assign_source_1 = par_value;
        assert(var_bytes_value == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_bytes_value = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        CHECK_OBJECT(par_value);
        tmp_expression_value_1 = par_value;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_or_left_value_1 = par_encoding;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 42;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = mod_consts[1];
        tmp_args_element_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_value_1 = tmp_or_left_value_1;
        or_end_1:;
        frame_5d2ea595f5182f74fcc653f24a8c5ff4->m_frame.f_lineno = 42;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_bytes_value == NULL);
        var_bytes_value = tmp_assign_source_2;
    }
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_lower);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_lower);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_bytes_value);
        tmp_expression_value_2 = var_bytes_value;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_5d2ea595f5182f74fcc653f24a8c5ff4->m_frame.f_lineno = 44;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(var_bytes_value);
        tmp_return_value = var_bytes_value;
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
        exception_tb = MAKE_TRACEBACK(frame_5d2ea595f5182f74fcc653f24a8c5ff4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5d2ea595f5182f74fcc653f24a8c5ff4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d2ea595f5182f74fcc653f24a8c5ff4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5d2ea595f5182f74fcc653f24a8c5ff4,
        type_description_1,
        par_value,
        par_lower,
        par_encoding,
        var_bytes_value
    );


    // Release cached frame if used for exception.
    if (frame_5d2ea595f5182f74fcc653f24a8c5ff4 == cache_frame_5d2ea595f5182f74fcc653f24a8c5ff4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5d2ea595f5182f74fcc653f24a8c5ff4);
        cache_frame_5d2ea595f5182f74fcc653f24a8c5ff4 = NULL;
    }

    assertFrameObject(frame_5d2ea595f5182f74fcc653f24a8c5ff4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_bytes_value);
    Py_DECREF(var_bytes_value);
    var_bytes_value = NULL;
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

    Py_XDECREF(var_bytes_value);
    var_bytes_value = NULL;
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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_lower);
    Py_DECREF(par_lower);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_lower);
    Py_DECREF(par_lower);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__2_normalize_header_value(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    struct Nuitka_FrameObject *frame_1b4cbc5d3a0753afc5104c2610d5800e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1b4cbc5d3a0753afc5104c2610d5800e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1b4cbc5d3a0753afc5104c2610d5800e)) {
        Py_XDECREF(cache_frame_1b4cbc5d3a0753afc5104c2610d5800e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1b4cbc5d3a0753afc5104c2610d5800e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1b4cbc5d3a0753afc5104c2610d5800e = MAKE_FUNCTION_FRAME(codeobj_1b4cbc5d3a0753afc5104c2610d5800e, module_httpx$_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1b4cbc5d3a0753afc5104c2610d5800e->m_type_description == NULL);
    frame_1b4cbc5d3a0753afc5104c2610d5800e = cache_frame_1b4cbc5d3a0753afc5104c2610d5800e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1b4cbc5d3a0753afc5104c2610d5800e);
    assert(Py_REFCNT(frame_1b4cbc5d3a0753afc5104c2610d5800e) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyBytes_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
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
    CHECK_OBJECT(par_value);
    tmp_return_value = par_value;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        CHECK_OBJECT(par_value);
        tmp_expression_value_1 = par_value;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_or_left_value_1 = par_encoding;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = mod_consts[1];
        tmp_args_element_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_value_1 = tmp_or_left_value_1;
        or_end_1:;
        frame_1b4cbc5d3a0753afc5104c2610d5800e->m_frame.f_lineno = 55;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
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
        exception_tb = MAKE_TRACEBACK(frame_1b4cbc5d3a0753afc5104c2610d5800e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1b4cbc5d3a0753afc5104c2610d5800e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b4cbc5d3a0753afc5104c2610d5800e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1b4cbc5d3a0753afc5104c2610d5800e,
        type_description_1,
        par_value,
        par_encoding
    );


    // Release cached frame if used for exception.
    if (frame_1b4cbc5d3a0753afc5104c2610d5800e == cache_frame_1b4cbc5d3a0753afc5104c2610d5800e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1b4cbc5d3a0753afc5104c2610d5800e);
        cache_frame_1b4cbc5d3a0753afc5104c2610d5800e = NULL;
    }

    assertFrameObject(frame_1b4cbc5d3a0753afc5104c2610d5800e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__3_primitive_value_to_str(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_5d7545c25181c3fefb604a56d5ba595a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5d7545c25181c3fefb604a56d5ba595a = NULL;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_True;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[5];
    Py_INCREF(tmp_return_value);
    goto function_return_exit;
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_2 = par_value;
        tmp_cmp_expr_right_2 = Py_False;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = mod_consts[6];
    Py_INCREF(tmp_return_value);
    goto function_return_exit;
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_3 = par_value;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = mod_consts[7];
    Py_INCREF(tmp_return_value);
    goto function_return_exit;
    branch_no_3:;
    branch_end_2:;
    branch_end_1:;
    if (isFrameUnusable(cache_frame_5d7545c25181c3fefb604a56d5ba595a)) {
        Py_XDECREF(cache_frame_5d7545c25181c3fefb604a56d5ba595a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5d7545c25181c3fefb604a56d5ba595a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5d7545c25181c3fefb604a56d5ba595a = MAKE_FUNCTION_FRAME(codeobj_5d7545c25181c3fefb604a56d5ba595a, module_httpx$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5d7545c25181c3fefb604a56d5ba595a->m_type_description == NULL);
    frame_5d7545c25181c3fefb604a56d5ba595a = cache_frame_5d7545c25181c3fefb604a56d5ba595a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5d7545c25181c3fefb604a56d5ba595a);
    assert(Py_REFCNT(frame_5d7545c25181c3fefb604a56d5ba595a) == 2);

    // Framed code:
    {
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_value);
        tmp_unicode_arg_1 = par_value;
        tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
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
        exception_tb = MAKE_TRACEBACK(frame_5d7545c25181c3fefb604a56d5ba595a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5d7545c25181c3fefb604a56d5ba595a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d7545c25181c3fefb604a56d5ba595a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5d7545c25181c3fefb604a56d5ba595a,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_5d7545c25181c3fefb604a56d5ba595a == cache_frame_5d7545c25181c3fefb604a56d5ba595a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5d7545c25181c3fefb604a56d5ba595a);
        cache_frame_5d7545c25181c3fefb604a56d5ba595a = NULL;
    }

    assertFrameObject(frame_5d7545c25181c3fefb604a56d5ba595a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__4_is_known_encoding(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_encoding = python_pars[0];
    struct Nuitka_FrameObject *frame_bd9845bf73716f4bb7db932f9e678d28;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_bd9845bf73716f4bb7db932f9e678d28 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bd9845bf73716f4bb7db932f9e678d28)) {
        Py_XDECREF(cache_frame_bd9845bf73716f4bb7db932f9e678d28);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bd9845bf73716f4bb7db932f9e678d28 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bd9845bf73716f4bb7db932f9e678d28 = MAKE_FUNCTION_FRAME(codeobj_bd9845bf73716f4bb7db932f9e678d28, module_httpx$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bd9845bf73716f4bb7db932f9e678d28->m_type_description == NULL);
    frame_bd9845bf73716f4bb7db932f9e678d28 = cache_frame_bd9845bf73716f4bb7db932f9e678d28;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bd9845bf73716f4bb7db932f9e678d28);
    assert(Py_REFCNT(frame_bd9845bf73716f4bb7db932f9e678d28) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_1 = par_encoding;
        frame_bd9845bf73716f4bb7db932f9e678d28->m_frame.f_lineno = 78;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[10], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_bd9845bf73716f4bb7db932f9e678d28, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_bd9845bf73716f4bb7db932f9e678d28, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_LookupError;
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
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 77;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_bd9845bf73716f4bb7db932f9e678d28->m_frame) frame_bd9845bf73716f4bb7db932f9e678d28->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bd9845bf73716f4bb7db932f9e678d28, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bd9845bf73716f4bb7db932f9e678d28->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bd9845bf73716f4bb7db932f9e678d28, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bd9845bf73716f4bb7db932f9e678d28,
        type_description_1,
        par_encoding
    );


    // Release cached frame if used for exception.
    if (frame_bd9845bf73716f4bb7db932f9e678d28 == cache_frame_bd9845bf73716f4bb7db932f9e678d28) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bd9845bf73716f4bb7db932f9e678d28);
        cache_frame_bd9845bf73716f4bb7db932f9e678d28 = NULL;
    }

    assertFrameObject(frame_bd9845bf73716f4bb7db932f9e678d28);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__5_format_form_param(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *var_replacer = NULL;
    struct Nuitka_FrameObject *frame_fe6d80f51276f4fbeaa1ea283d79079a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fe6d80f51276f4fbeaa1ea283d79079a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fe6d80f51276f4fbeaa1ea283d79079a)) {
        Py_XDECREF(cache_frame_fe6d80f51276f4fbeaa1ea283d79079a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fe6d80f51276f4fbeaa1ea283d79079a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fe6d80f51276f4fbeaa1ea283d79079a = MAKE_FUNCTION_FRAME(codeobj_fe6d80f51276f4fbeaa1ea283d79079a, module_httpx$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fe6d80f51276f4fbeaa1ea283d79079a->m_type_description == NULL);
    frame_fe6d80f51276f4fbeaa1ea283d79079a = cache_frame_fe6d80f51276f4fbeaa1ea283d79079a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fe6d80f51276f4fbeaa1ea283d79079a);
    assert(Py_REFCNT(frame_fe6d80f51276f4fbeaa1ea283d79079a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        tmp_dict_key_1 = mod_consts[12];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[15];
        tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_1 = MAKE_FUNCTION_httpx$_utils$$$function__5_format_form_param$$$function__1_replacer(tmp_annotations_1);

        assert(var_replacer == NULL);
        var_replacer = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_replacer);
        tmp_args_element_value_1 = var_replacer;
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_fe6d80f51276f4fbeaa1ea283d79079a->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[19],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_name);
        tmp_format_value_1 = par_name;
        tmp_format_spec_1 = mod_consts[7];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[20];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_value);
            tmp_format_value_2 = par_value;
            tmp_format_spec_2 = mod_consts[7];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[21];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_str_arg_value_1 = PyUnicode_Join(mod_consts[7], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_str_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = UNICODE_ENCODE1(tmp_str_arg_value_1);
        Py_DECREF(tmp_str_arg_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
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
        exception_tb = MAKE_TRACEBACK(frame_fe6d80f51276f4fbeaa1ea283d79079a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fe6d80f51276f4fbeaa1ea283d79079a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fe6d80f51276f4fbeaa1ea283d79079a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fe6d80f51276f4fbeaa1ea283d79079a,
        type_description_1,
        par_name,
        par_value,
        var_replacer
    );


    // Release cached frame if used for exception.
    if (frame_fe6d80f51276f4fbeaa1ea283d79079a == cache_frame_fe6d80f51276f4fbeaa1ea283d79079a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fe6d80f51276f4fbeaa1ea283d79079a);
        cache_frame_fe6d80f51276f4fbeaa1ea283d79079a = NULL;
    }

    assertFrameObject(frame_fe6d80f51276f4fbeaa1ea283d79079a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
    CHECK_OBJECT(var_replacer);
    Py_DECREF(var_replacer);
    var_replacer = NULL;
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
    Py_XDECREF(var_replacer);
    var_replacer = NULL;
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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__5_format_form_param$$$function__1_replacer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_match = python_pars[0];
    struct Nuitka_FrameObject *frame_b44e2212f2dd8d8e84f150b659c8494c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b44e2212f2dd8d8e84f150b659c8494c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b44e2212f2dd8d8e84f150b659c8494c)) {
        Py_XDECREF(cache_frame_b44e2212f2dd8d8e84f150b659c8494c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b44e2212f2dd8d8e84f150b659c8494c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b44e2212f2dd8d8e84f150b659c8494c = MAKE_FUNCTION_FRAME(codeobj_b44e2212f2dd8d8e84f150b659c8494c, module_httpx$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b44e2212f2dd8d8e84f150b659c8494c->m_type_description == NULL);
    frame_b44e2212f2dd8d8e84f150b659c8494c = cache_frame_b44e2212f2dd8d8e84f150b659c8494c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b44e2212f2dd8d8e84f150b659c8494c);
    assert(Py_REFCNT(frame_b44e2212f2dd8d8e84f150b659c8494c) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_called_instance_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_match);
        tmp_called_instance_1 = par_match;
        frame_b44e2212f2dd8d8e84f150b659c8494c->m_frame.f_lineno = 90;
        tmp_subscript_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[24],
            PyTuple_GET_ITEM(mod_consts[25], 0)
        );

        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
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
        exception_tb = MAKE_TRACEBACK(frame_b44e2212f2dd8d8e84f150b659c8494c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b44e2212f2dd8d8e84f150b659c8494c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b44e2212f2dd8d8e84f150b659c8494c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b44e2212f2dd8d8e84f150b659c8494c,
        type_description_1,
        par_match
    );


    // Release cached frame if used for exception.
    if (frame_b44e2212f2dd8d8e84f150b659c8494c == cache_frame_b44e2212f2dd8d8e84f150b659c8494c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b44e2212f2dd8d8e84f150b659c8494c);
        cache_frame_b44e2212f2dd8d8e84f150b659c8494c = NULL;
    }

    assertFrameObject(frame_b44e2212f2dd8d8e84f150b659c8494c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_match);
    Py_DECREF(par_match);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_match);
    Py_DECREF(par_match);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__6_guess_json_utf(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *var_sample = NULL;
    PyObject *var_nullcount = NULL;
    struct Nuitka_FrameObject *frame_f39c1f0271d5c1a3e66536de746a6aa4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f39c1f0271d5c1a3e66536de746a6aa4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f39c1f0271d5c1a3e66536de746a6aa4)) {
        Py_XDECREF(cache_frame_f39c1f0271d5c1a3e66536de746a6aa4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f39c1f0271d5c1a3e66536de746a6aa4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f39c1f0271d5c1a3e66536de746a6aa4 = MAKE_FUNCTION_FRAME(codeobj_f39c1f0271d5c1a3e66536de746a6aa4, module_httpx$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f39c1f0271d5c1a3e66536de746a6aa4->m_type_description == NULL);
    frame_f39c1f0271d5c1a3e66536de746a6aa4 = cache_frame_f39c1f0271d5c1a3e66536de746a6aa4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f39c1f0271d5c1a3e66536de746a6aa4);
    assert(Py_REFCNT(frame_f39c1f0271d5c1a3e66536de746a6aa4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_data);
        tmp_expression_value_1 = par_data;
        tmp_subscript_value_1 = mod_consts[26];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_sample == NULL);
        var_sample = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_sample);
        tmp_cmp_expr_left_1 = var_sample;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[28]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
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
    tmp_return_value = mod_consts[29];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_sample);
        tmp_expression_value_4 = var_sample;
        tmp_subscript_value_2 = mod_consts[30];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 109;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[31]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 109;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = mod_consts[32];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_sample);
        tmp_expression_value_6 = var_sample;
        tmp_subscript_value_3 = mod_consts[33];
        tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_3);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[34]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_8;
            PyTuple_SET_ITEM(tmp_cmp_expr_right_3, 0, tmp_tuple_element_2);
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "ooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[35]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_1 = "ooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_right_3, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = mod_consts[36];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_sample);
        tmp_expression_value_9 = var_sample;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[37]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 113;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f39c1f0271d5c1a3e66536de746a6aa4->m_frame.f_lineno = 113;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_nullcount == NULL);
        var_nullcount = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_nullcount);
        tmp_cmp_expr_left_4 = var_nullcount;
        tmp_cmp_expr_right_4 = mod_consts[39];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_return_value = mod_consts[40];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_nullcount);
        tmp_cmp_expr_left_5 = var_nullcount;
        tmp_cmp_expr_right_5 = mod_consts[41];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_sample);
        tmp_expression_value_10 = var_sample;
        tmp_subscript_value_4 = mod_consts[42];
        tmp_cmp_expr_left_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_4);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_cmp_expr_right_6 == NULL)) {
            tmp_cmp_expr_right_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_cmp_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_6);

            exception_lineno = 117;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    tmp_return_value = mod_consts[44];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_sample);
        tmp_expression_value_11 = var_sample;
        tmp_subscript_value_5 = mod_consts[45];
        tmp_cmp_expr_left_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_5);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_cmp_expr_right_7 == NULL)) {
            tmp_cmp_expr_right_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        if (tmp_cmp_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_7);

            exception_lineno = 119;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    tmp_return_value = mod_consts[46];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_7:;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_nullcount);
        tmp_cmp_expr_left_8 = var_nullcount;
        tmp_cmp_expr_right_8 = mod_consts[47];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_sample);
        tmp_expression_value_12 = var_sample;
        tmp_subscript_value_6 = mod_consts[30];
        tmp_cmp_expr_left_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_6);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_9 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_cmp_expr_right_9 == NULL)) {
            tmp_cmp_expr_right_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_cmp_expr_right_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_9);

            exception_lineno = 123;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_left_9);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    tmp_return_value = mod_consts[49];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(var_sample);
        tmp_expression_value_13 = var_sample;
        tmp_subscript_value_7 = mod_consts[50];
        tmp_cmp_expr_left_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_7);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_10 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_cmp_expr_right_10 == NULL)) {
            tmp_cmp_expr_right_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_cmp_expr_right_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_10);

            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    tmp_return_value = mod_consts[51];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_10:;
    branch_no_8:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f39c1f0271d5c1a3e66536de746a6aa4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f39c1f0271d5c1a3e66536de746a6aa4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f39c1f0271d5c1a3e66536de746a6aa4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f39c1f0271d5c1a3e66536de746a6aa4,
        type_description_1,
        par_data,
        var_sample,
        var_nullcount
    );


    // Release cached frame if used for exception.
    if (frame_f39c1f0271d5c1a3e66536de746a6aa4 == cache_frame_f39c1f0271d5c1a3e66536de746a6aa4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f39c1f0271d5c1a3e66536de746a6aa4);
        cache_frame_f39c1f0271d5c1a3e66536de746a6aa4 = NULL;
    }

    assertFrameObject(frame_f39c1f0271d5c1a3e66536de746a6aa4);

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
    CHECK_OBJECT(var_sample);
    Py_DECREF(var_sample);
    var_sample = NULL;
    Py_XDECREF(var_nullcount);
    var_nullcount = NULL;
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

    Py_XDECREF(var_sample);
    var_sample = NULL;
    Py_XDECREF(var_nullcount);
    var_nullcount = NULL;
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
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__7___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_files = python_pars[1];
    struct Nuitka_FrameObject *frame_3e6c4b0b9eba537db9888e02c790ef63;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_3e6c4b0b9eba537db9888e02c790ef63 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3e6c4b0b9eba537db9888e02c790ef63)) {
        Py_XDECREF(cache_frame_3e6c4b0b9eba537db9888e02c790ef63);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e6c4b0b9eba537db9888e02c790ef63 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e6c4b0b9eba537db9888e02c790ef63 = MAKE_FUNCTION_FRAME(codeobj_3e6c4b0b9eba537db9888e02c790ef63, module_httpx$_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3e6c4b0b9eba537db9888e02c790ef63->m_type_description == NULL);
    frame_3e6c4b0b9eba537db9888e02c790ef63 = cache_frame_3e6c4b0b9eba537db9888e02c790ef63;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3e6c4b0b9eba537db9888e02c790ef63);
    assert(Py_REFCNT(frame_3e6c4b0b9eba537db9888e02c790ef63) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_files);
        tmp_cmp_expr_left_1 = par_files;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_3e6c4b0b9eba537db9888e02c790ef63->m_frame.f_lineno = 134;
        tmp_list_element_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[53],
            &PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM(tmp_assign_source_1, 0, tmp_list_element_1);
        tmp_list_element_1 = mod_consts[55];
        PyList_SET_ITEM0(tmp_assign_source_1, 1, tmp_list_element_1);
        tmp_list_element_1 = mod_consts[56];
        PyList_SET_ITEM0(tmp_assign_source_1, 2, tmp_list_element_1);
        {
            PyObject *old = par_files;
            assert(old != NULL);
            par_files = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_files);
        tmp_assattr_value_1 = par_files;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[57], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3e6c4b0b9eba537db9888e02c790ef63, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e6c4b0b9eba537db9888e02c790ef63->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e6c4b0b9eba537db9888e02c790ef63, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e6c4b0b9eba537db9888e02c790ef63,
        type_description_1,
        par_self,
        par_files
    );


    // Release cached frame if used for exception.
    if (frame_3e6c4b0b9eba537db9888e02c790ef63 == cache_frame_3e6c4b0b9eba537db9888e02c790ef63) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3e6c4b0b9eba537db9888e02c790ef63);
        cache_frame_3e6c4b0b9eba537db9888e02c790ef63 = NULL;
    }

    assertFrameObject(frame_3e6c4b0b9eba537db9888e02c790ef63);

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
    CHECK_OBJECT(par_files);
    Py_DECREF(par_files);
    par_files = NULL;
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

    Py_XDECREF(par_files);
    par_files = NULL;
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


static PyObject *impl_httpx$_utils$$$function__8_netrc_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_file_path = NULL;
    PyObject *var_expanded_path = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_8085476bbcfec15a70d0f6244416fa60;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8085476bbcfec15a70d0f6244416fa60 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8085476bbcfec15a70d0f6244416fa60)) {
        Py_XDECREF(cache_frame_8085476bbcfec15a70d0f6244416fa60);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8085476bbcfec15a70d0f6244416fa60 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8085476bbcfec15a70d0f6244416fa60 = MAKE_FUNCTION_FRAME(codeobj_8085476bbcfec15a70d0f6244416fa60, module_httpx$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8085476bbcfec15a70d0f6244416fa60->m_type_description == NULL);
    frame_8085476bbcfec15a70d0f6244416fa60 = cache_frame_8085476bbcfec15a70d0f6244416fa60;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8085476bbcfec15a70d0f6244416fa60);
    assert(Py_REFCNT(frame_8085476bbcfec15a70d0f6244416fa60) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = mod_consts[58];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooo";
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[58], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[57]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 141;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_file_path;
            var_file_path = tmp_assign_source_3;
            Py_INCREF(var_file_path);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_file_path);
        tmp_args_element_value_1 = var_file_path;
        frame_8085476bbcfec15a70d0f6244416fa60->m_frame.f_lineno = 142;
        tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_8085476bbcfec15a70d0f6244416fa60->m_frame.f_lineno = 142;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[60]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_expanded_path;
            var_expanded_path = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_expanded_path);
        tmp_called_instance_2 = var_expanded_path;
        frame_8085476bbcfec15a70d0f6244416fa60->m_frame.f_lineno = 144;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[61]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 144;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[62]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_expanded_path);
        tmp_unicode_arg_1 = var_expanded_path;
        tmp_args_element_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 145;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        frame_8085476bbcfec15a70d0f6244416fa60->m_frame.f_lineno = 145;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 145;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }

        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[58], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
    }
    goto loop_end_1;
    branch_no_2:;
    goto try_end_1;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_8085476bbcfec15a70d0f6244416fa60, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_8085476bbcfec15a70d0f6244416fa60, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_4;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[64]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = PyExc_IOError;
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 143;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8085476bbcfec15a70d0f6244416fa60->m_frame) frame_8085476bbcfec15a70d0f6244416fa60->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_4;
    branch_no_3:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 141;
        type_description_1 = "ooo";
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
    branch_no_1:;
    {
        PyObject *tmp_expression_value_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 150;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[58]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
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
        exception_tb = MAKE_TRACEBACK(frame_8085476bbcfec15a70d0f6244416fa60, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8085476bbcfec15a70d0f6244416fa60->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8085476bbcfec15a70d0f6244416fa60, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8085476bbcfec15a70d0f6244416fa60,
        type_description_1,
        par_self,
        var_file_path,
        var_expanded_path
    );


    // Release cached frame if used for exception.
    if (frame_8085476bbcfec15a70d0f6244416fa60 == cache_frame_8085476bbcfec15a70d0f6244416fa60) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8085476bbcfec15a70d0f6244416fa60);
        cache_frame_8085476bbcfec15a70d0f6244416fa60 = NULL;
    }

    assertFrameObject(frame_8085476bbcfec15a70d0f6244416fa60);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_file_path);
    var_file_path = NULL;
    Py_XDECREF(var_expanded_path);
    var_expanded_path = NULL;
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

    Py_XDECREF(var_file_path);
    var_file_path = NULL;
    Py_XDECREF(var_expanded_path);
    var_expanded_path = NULL;
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


static PyObject *impl_httpx$_utils$$$function__9_get_credentials(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_host = python_pars[1];
    PyObject *var_auth_info = NULL;
    struct Nuitka_FrameObject *frame_7dd9a6aa99a2665f0e1f03dfbde05e7a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7dd9a6aa99a2665f0e1f03dfbde05e7a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7dd9a6aa99a2665f0e1f03dfbde05e7a)) {
        Py_XDECREF(cache_frame_7dd9a6aa99a2665f0e1f03dfbde05e7a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7dd9a6aa99a2665f0e1f03dfbde05e7a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7dd9a6aa99a2665f0e1f03dfbde05e7a = MAKE_FUNCTION_FRAME(codeobj_7dd9a6aa99a2665f0e1f03dfbde05e7a, module_httpx$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7dd9a6aa99a2665f0e1f03dfbde05e7a->m_type_description == NULL);
    frame_7dd9a6aa99a2665f0e1f03dfbde05e7a = cache_frame_7dd9a6aa99a2665f0e1f03dfbde05e7a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7dd9a6aa99a2665f0e1f03dfbde05e7a);
    assert(Py_REFCNT(frame_7dd9a6aa99a2665f0e1f03dfbde05e7a) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[65]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooo";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[65]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_host);
        tmp_args_element_value_1 = par_host;
        frame_7dd9a6aa99a2665f0e1f03dfbde05e7a->m_frame.f_lineno = 156;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[66], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_auth_info == NULL);
        var_auth_info = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_auth_info);
        tmp_cmp_expr_left_2 = var_auth_info;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_auth_info);
        tmp_expression_value_3 = var_auth_info;
        tmp_subscript_value_1 = mod_consts[41];
        tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 2);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_or_right_value_1 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_3);
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 != false) {
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
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_auth_info);
        tmp_expression_value_4 = var_auth_info;
        tmp_subscript_value_2 = mod_consts[39];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 0);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_3;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_auth_info);
            tmp_expression_value_5 = var_auth_info;
            tmp_subscript_value_3 = mod_consts[41];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_3, 2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_7dd9a6aa99a2665f0e1f03dfbde05e7a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7dd9a6aa99a2665f0e1f03dfbde05e7a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7dd9a6aa99a2665f0e1f03dfbde05e7a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7dd9a6aa99a2665f0e1f03dfbde05e7a,
        type_description_1,
        par_self,
        par_host,
        var_auth_info
    );


    // Release cached frame if used for exception.
    if (frame_7dd9a6aa99a2665f0e1f03dfbde05e7a == cache_frame_7dd9a6aa99a2665f0e1f03dfbde05e7a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7dd9a6aa99a2665f0e1f03dfbde05e7a);
        cache_frame_7dd9a6aa99a2665f0e1f03dfbde05e7a = NULL;
    }

    assertFrameObject(frame_7dd9a6aa99a2665f0e1f03dfbde05e7a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_auth_info);
    var_auth_info = NULL;
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

    Py_XDECREF(var_auth_info);
    var_auth_info = NULL;
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
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__10_get_ca_bundle_from_env(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_ssl_file = NULL;
    PyObject *var_ssl_path = NULL;
    struct Nuitka_FrameObject *frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0)) {
        Py_XDECREF(cache_frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0 = MAKE_FUNCTION_FRAME(codeobj_d94b3ecba2c6ca09ffb2bc34bfd57bc0, module_httpx$_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0->m_type_description == NULL);
    frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0 = cache_frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0);
    assert(Py_REFCNT(frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_cmp_expr_left_1 = mod_consts[67];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[68]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[68]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[67];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0->m_frame.f_lineno = 164;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_ssl_file == NULL);
        var_ssl_file = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_ssl_file);
        tmp_called_instance_1 = var_ssl_file;
        frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0->m_frame.f_lineno = 165;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[61]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 165;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(var_ssl_file);
        tmp_unicode_arg_1 = var_ssl_file;
        tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        tmp_cmp_expr_left_2 = mod_consts[69];
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[68]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[68]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[69];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0->m_frame.f_lineno = 168;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_ssl_path == NULL);
        var_ssl_path = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_ssl_path);
        tmp_called_instance_2 = var_ssl_path;
        frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0->m_frame.f_lineno = 169;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[70]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_unicode_arg_2;
        CHECK_OBJECT(var_ssl_path);
        tmp_unicode_arg_2 = var_ssl_path;
        tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_4:;
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
        exception_tb = MAKE_TRACEBACK(frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0,
        type_description_1,
        var_ssl_file,
        var_ssl_path
    );


    // Release cached frame if used for exception.
    if (frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0 == cache_frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0);
        cache_frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0 = NULL;
    }

    assertFrameObject(frame_d94b3ecba2c6ca09ffb2bc34bfd57bc0);

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
    Py_XDECREF(var_ssl_file);
    var_ssl_file = NULL;
    Py_XDECREF(var_ssl_path);
    var_ssl_path = NULL;
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

    Py_XDECREF(var_ssl_file);
    var_ssl_file = NULL;
    Py_XDECREF(var_ssl_path);
    var_ssl_path = NULL;
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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__11_parse_header_links(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *var_links = NULL;
    PyObject *var_replace_chars = NULL;
    PyObject *var_val = NULL;
    PyObject *var_url = NULL;
    PyObject *var_params = NULL;
    PyObject *var_link = NULL;
    PyObject *var_param = NULL;
    PyObject *var_key = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9d1b1cb18226d80e8a128cbedff69213;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    bool tmp_result;
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
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    static struct Nuitka_FrameObject *cache_frame_9d1b1cb18226d80e8a128cbedff69213 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_links == NULL);
        var_links = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[71];
        assert(var_replace_chars == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_replace_chars = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_9d1b1cb18226d80e8a128cbedff69213)) {
        Py_XDECREF(cache_frame_9d1b1cb18226d80e8a128cbedff69213);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9d1b1cb18226d80e8a128cbedff69213 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9d1b1cb18226d80e8a128cbedff69213 = MAKE_FUNCTION_FRAME(codeobj_9d1b1cb18226d80e8a128cbedff69213, module_httpx$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9d1b1cb18226d80e8a128cbedff69213->m_type_description == NULL);
    frame_9d1b1cb18226d80e8a128cbedff69213 = cache_frame_9d1b1cb18226d80e8a128cbedff69213;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9d1b1cb18226d80e8a128cbedff69213);
    assert(Py_REFCNT(frame_9d1b1cb18226d80e8a128cbedff69213) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_value);
        tmp_expression_value_1 = par_value;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[72]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_replace_chars);
        tmp_args_element_value_1 = var_replace_chars;
        frame_9d1b1cb18226d80e8a128cbedff69213->m_frame.f_lineno = 192;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            assert(old != NULL);
            par_value = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_value);
        tmp_operand_value_1 = par_value;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooo";
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
    CHECK_OBJECT(var_links);
    tmp_return_value = var_links;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[74]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[75];
        CHECK_OBJECT(par_value);
        tmp_args_element_value_3 = par_value;
        frame_9d1b1cb18226d80e8a128cbedff69213->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
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
                exception_lineno = 195;
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
            PyObject *old = var_val;
            var_val = tmp_assign_source_6;
            Py_INCREF(var_val);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_val);
        tmp_expression_value_3 = var_val;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[74]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        frame_9d1b1cb18226d80e8a128cbedff69213->m_frame.f_lineno = 197;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[76]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 197;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 197;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 197;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[77];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 197;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_url;
            var_url = tmp_assign_source_10;
            Py_INCREF(var_url);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_params;
            var_params = tmp_assign_source_11;
            Py_INCREF(var_params);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

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
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_9d1b1cb18226d80e8a128cbedff69213, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_9d1b1cb18226d80e8a128cbedff69213, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_val);
        tmp_tuple_element_1 = var_val;
        tmp_iter_arg_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_iter_arg_3, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[7];
        PyTuple_SET_ITEM0(tmp_iter_arg_3, 1, tmp_tuple_element_1);
        tmp_assign_source_12 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        assert(!(tmp_assign_source_12 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 199;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 199;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_14;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 199;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[77];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 199;
            goto try_except_handler_8;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
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

    goto try_except_handler_7;
    // End of try:
    try_end_4:;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_url;
            var_url = tmp_assign_source_15;
            Py_INCREF(var_url);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_params;
            var_params = tmp_assign_source_16;
            Py_INCREF(var_params);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 196;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9d1b1cb18226d80e8a128cbedff69213->m_frame) frame_9d1b1cb18226d80e8a128cbedff69213->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_6;
    branch_end_2:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_6:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        tmp_dict_key_1 = mod_consts[78];
        CHECK_OBJECT(var_url);
        tmp_expression_value_4 = var_url;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[72]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_9d1b1cb18226d80e8a128cbedff69213->m_frame.f_lineno = 200;
        tmp_dict_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[79]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_17 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_17, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        {
            PyObject *old = var_link;
            var_link = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_params);
        tmp_expression_value_5 = var_params;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[74]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_9d1b1cb18226d80e8a128cbedff69213->m_frame.f_lineno = 201;
        tmp_iter_arg_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[80]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_18 = MAKE_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_19 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_19 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooo";
                exception_lineno = 201;
                goto try_except_handler_9;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_20 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_param;
            var_param = tmp_assign_source_20;
            Py_INCREF(var_param);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_param);
        tmp_expression_value_6 = var_param;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[74]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooo";
            goto try_except_handler_11;
        }
        frame_9d1b1cb18226d80e8a128cbedff69213->m_frame.f_lineno = 203;
        tmp_iter_arg_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[81]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_21 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_22 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 203;
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_23 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 203;
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 203;
                    goto try_except_handler_12;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[77];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 203;
            goto try_except_handler_12;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_11;
    // End of try:
    try_end_7:;
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

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_10;
    // End of try:
    try_end_8:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_9 == NULL) {
        exception_keeper_tb_9 = MAKE_TRACEBACK(frame_9d1b1cb18226d80e8a128cbedff69213, exception_keeper_lineno_9);
    } else if (exception_keeper_lineno_9 != 0) {
        exception_keeper_tb_9 = ADD_TRACEBACK(exception_keeper_tb_9, frame_9d1b1cb18226d80e8a128cbedff69213, exception_keeper_lineno_9);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto try_break_handler_13;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 202;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9d1b1cb18226d80e8a128cbedff69213->m_frame) frame_9d1b1cb18226d80e8a128cbedff69213->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_13;
    branch_end_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_9;
    // try break handler code:
    try_break_handler_13:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto loop_end_2;
    // End of try:
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_24 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_24;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_25 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = par_value;
            par_value = tmp_assign_source_25;
            Py_INCREF(par_value);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_value);
        tmp_expression_value_7 = par_value;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[72]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
        if (var_replace_chars == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }

        tmp_args_element_value_4 = var_replace_chars;
        frame_9d1b1cb18226d80e8a128cbedff69213->m_frame.f_lineno = 206;
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
        if (var_link == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }

        tmp_ass_subscribed_1 = var_link;
        CHECK_OBJECT(var_key);
        tmp_expression_value_8 = var_key;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[72]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 206;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
        if (var_replace_chars == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }

        tmp_args_element_value_5 = var_replace_chars;
        frame_9d1b1cb18226d80e8a128cbedff69213->m_frame.f_lineno = 206;
        tmp_ass_subscript_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_8);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 206;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 201;
        type_description_1 = "ooooooooo";
        goto try_except_handler_9;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_10;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_2;
    // End of try:
    try_end_10:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_6;
        if (var_links == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_9 = var_links;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[85]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        if (var_link == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 207;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_6 = var_link;
        frame_9d1b1cb18226d80e8a128cbedff69213->m_frame.f_lineno = 207;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 195;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_links == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 208;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_links;
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
        exception_tb = MAKE_TRACEBACK(frame_9d1b1cb18226d80e8a128cbedff69213, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9d1b1cb18226d80e8a128cbedff69213->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d1b1cb18226d80e8a128cbedff69213, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9d1b1cb18226d80e8a128cbedff69213,
        type_description_1,
        par_value,
        var_links,
        var_replace_chars,
        var_val,
        var_url,
        var_params,
        var_link,
        var_param,
        var_key
    );


    // Release cached frame if used for exception.
    if (frame_9d1b1cb18226d80e8a128cbedff69213 == cache_frame_9d1b1cb18226d80e8a128cbedff69213) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9d1b1cb18226d80e8a128cbedff69213);
        cache_frame_9d1b1cb18226d80e8a128cbedff69213 = NULL;
    }

    assertFrameObject(frame_9d1b1cb18226d80e8a128cbedff69213);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_value);
    par_value = NULL;
    Py_XDECREF(var_links);
    var_links = NULL;
    Py_XDECREF(var_replace_chars);
    var_replace_chars = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
    Py_XDECREF(var_url);
    var_url = NULL;
    Py_XDECREF(var_params);
    var_params = NULL;
    Py_XDECREF(var_link);
    var_link = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_value);
    par_value = NULL;
    Py_XDECREF(var_links);
    var_links = NULL;
    Py_XDECREF(var_replace_chars);
    var_replace_chars = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
    Py_XDECREF(var_url);
    var_url = NULL;
    Py_XDECREF(var_params);
    var_params = NULL;
    Py_XDECREF(var_link);
    var_link = NULL;
    Py_XDECREF(var_param);
    var_param = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__12_parse_content_type_charset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_content_type = python_pars[0];
    PyObject *var_msg = NULL;
    struct Nuitka_FrameObject *frame_36ab043be9d8d3d97fa185412278d4dc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_36ab043be9d8d3d97fa185412278d4dc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_36ab043be9d8d3d97fa185412278d4dc)) {
        Py_XDECREF(cache_frame_36ab043be9d8d3d97fa185412278d4dc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_36ab043be9d8d3d97fa185412278d4dc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_36ab043be9d8d3d97fa185412278d4dc = MAKE_FUNCTION_FRAME(codeobj_36ab043be9d8d3d97fa185412278d4dc, module_httpx$_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_36ab043be9d8d3d97fa185412278d4dc->m_type_description == NULL);
    frame_36ab043be9d8d3d97fa185412278d4dc = cache_frame_36ab043be9d8d3d97fa185412278d4dc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_36ab043be9d8d3d97fa185412278d4dc);
    assert(Py_REFCNT(frame_36ab043be9d8d3d97fa185412278d4dc) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[88]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_36ab043be9d8d3d97fa185412278d4dc->m_frame.f_lineno = 214;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[89]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_content_type);
        tmp_ass_subvalue_1 = par_content_type;
        CHECK_OBJECT(var_msg);
        tmp_ass_subscribed_1 = var_msg;
        tmp_ass_subscript_1 = mod_consts[90];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_msg);
        tmp_expression_value_2 = var_msg;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[91]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_36ab043be9d8d3d97fa185412278d4dc->m_frame.f_lineno = 216;
        tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[92], 0), mod_consts[93]);
        Py_DECREF(tmp_called_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_36ab043be9d8d3d97fa185412278d4dc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_36ab043be9d8d3d97fa185412278d4dc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_36ab043be9d8d3d97fa185412278d4dc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_36ab043be9d8d3d97fa185412278d4dc,
        type_description_1,
        par_content_type,
        var_msg
    );


    // Release cached frame if used for exception.
    if (frame_36ab043be9d8d3d97fa185412278d4dc == cache_frame_36ab043be9d8d3d97fa185412278d4dc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_36ab043be9d8d3d97fa185412278d4dc);
        cache_frame_36ab043be9d8d3d97fa185412278d4dc = NULL;
    }

    assertFrameObject(frame_36ab043be9d8d3d97fa185412278d4dc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_msg);
    Py_DECREF(var_msg);
    var_msg = NULL;
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

    Py_XDECREF(var_msg);
    var_msg = NULL;
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
    CHECK_OBJECT(par_content_type);
    Py_DECREF(par_content_type);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_content_type);
    Py_DECREF(par_content_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__13_obfuscate_sensitive_headers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_items = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_items;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_GENERATOR_httpx$_utils$$$function__13_obfuscate_sensitive_headers$$$genobj__1_obfuscate_sensitive_headers(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_items);
    Py_DECREF(par_items);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct httpx$_utils$$$function__13_obfuscate_sensitive_headers$$$genobj__1_obfuscate_sensitive_headers_locals {
    PyObject *var_k;
    PyObject *var_v;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};
#endif

static PyObject *httpx$_utils$$$function__13_obfuscate_sensitive_headers$$$genobj__1_obfuscate_sensitive_headers_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpx$_utils$$$function__13_obfuscate_sensitive_headers$$$genobj__1_obfuscate_sensitive_headers_locals *generator_heap = (struct httpx$_utils$$$function__13_obfuscate_sensitive_headers$$$genobj__1_obfuscate_sensitive_headers_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_k = NULL;
    generator_heap->var_v = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_8ea1f8b388f3ca9fdd51ceca7ba3f50b, module_httpx$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[94]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 225;
            generator_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 225;
            generator_heap->type_description_1 = "coo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "coo";
                generator_heap->exception_lineno = 225;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = generator_heap->tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 225;
            generator_heap->type_description_1 = "coo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "coo";
            generator_heap->exception_lineno = 225;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "coo";
            generator_heap->exception_lineno = 225;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "coo";
                    generator_heap->exception_lineno = 225;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[77];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "coo";
            generator_heap->exception_lineno = 225;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_k;
            generator_heap->var_k = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_k);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_v;
            generator_heap->var_v = tmp_assign_source_7;
            Py_INCREF(generator_heap->var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 226;
            generator_heap->type_description_1 = "coo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_k);
        tmp_expression_value_1 = generator_heap->var_k;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 226;
            generator_heap->type_description_1 = "coo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 226;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 226;
            generator_heap->type_description_1 = "coo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 226;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 226;
            generator_heap->type_description_1 = "coo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            generator_heap->exception_lineno = 226;
            generator_heap->type_description_1 = "coo";
            goto try_except_handler_2;
        }
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 226;
            generator_heap->type_description_1 = "coo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 227;
            generator_heap->type_description_1 = "coo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_v);
        tmp_kw_call_value_0_1 = generator_heap->var_v;
        generator->m_frame->m_frame.f_lineno = 227;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_3, mod_consts[98], kw_values, mod_consts[99]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 227;
            generator_heap->type_description_1 = "coo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_v;
            assert(old != NULL);
            generator_heap->var_v = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_k);
        tmp_tuple_element_1 = generator_heap->var_k;
        tmp_expression_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_expression_value_2, 0, tmp_tuple_element_1);
        CHECK_OBJECT(generator_heap->var_v);
        tmp_tuple_element_1 = generator_heap->var_v;
        PyTuple_SET_ITEM0(tmp_expression_value_2, 1, tmp_tuple_element_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_2;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 228;
            generator_heap->type_description_1 = "coo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 225;
        generator_heap->type_description_1 = "coo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

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
            generator->m_closure[0],
            generator_heap->var_k,
            generator_heap->var_v
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
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_k);
    generator_heap->var_k = NULL;
    Py_XDECREF(generator_heap->var_v);
    generator_heap->var_v = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    Py_XDECREF(generator_heap->var_k);
    generator_heap->var_k = NULL;
    Py_XDECREF(generator_heap->var_v);
    generator_heap->var_v = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpx$_utils$$$function__13_obfuscate_sensitive_headers$$$genobj__1_obfuscate_sensitive_headers(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpx$_utils$$$function__13_obfuscate_sensitive_headers$$$genobj__1_obfuscate_sensitive_headers_context,
        module_httpx$_utils,
        mod_consts[100],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_8ea1f8b388f3ca9fdd51ceca7ba3f50b,
        closure,
        1,
#if 1
        sizeof(struct httpx$_utils$$$function__13_obfuscate_sensitive_headers$$$genobj__1_obfuscate_sensitive_headers_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_utils$$$function__15_get_logger(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *var_log_level = NULL;
    struct Nuitka_CellObject *var_logger = Nuitka_Cell_Empty();
    PyObject *var_handler = NULL;
    PyObject *var_trace = NULL;
    struct Nuitka_FrameObject *frame_864dd576ed9e16f328ffb6afbe5e5f0c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_864dd576ed9e16f328ffb6afbe5e5f0c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_864dd576ed9e16f328ffb6afbe5e5f0c)) {
        Py_XDECREF(cache_frame_864dd576ed9e16f328ffb6afbe5e5f0c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_864dd576ed9e16f328ffb6afbe5e5f0c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_864dd576ed9e16f328ffb6afbe5e5f0c = MAKE_FUNCTION_FRAME(codeobj_864dd576ed9e16f328ffb6afbe5e5f0c, module_httpx$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_864dd576ed9e16f328ffb6afbe5e5f0c->m_type_description == NULL);
    frame_864dd576ed9e16f328ffb6afbe5e5f0c = cache_frame_864dd576ed9e16f328ffb6afbe5e5f0c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_864dd576ed9e16f328ffb6afbe5e5f0c);
    assert(Py_REFCNT(frame_864dd576ed9e16f328ffb6afbe5e5f0c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oocoo";
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
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_True;
        UPDATE_STRING_DICT0(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[103]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 250;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[105];
        frame_864dd576ed9e16f328ffb6afbe5e5f0c->m_frame.f_lineno = 250;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        assert(!(tmp_expression_value_4 == NULL));
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[68]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[106]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        frame_864dd576ed9e16f328ffb6afbe5e5f0c->m_frame.f_lineno = 252;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[107]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[108]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        frame_864dd576ed9e16f328ffb6afbe5e5f0c->m_frame.f_lineno = 252;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        assert(var_log_level == NULL);
        var_log_level = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_log_level);
        tmp_cmp_expr_left_1 = var_log_level;
        tmp_cmp_expr_right_1 = mod_consts[109];
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        frame_864dd576ed9e16f328ffb6afbe5e5f0c->m_frame.f_lineno = 254;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[110],
            PyTuple_GET_ITEM(mod_consts[111], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_logger) == NULL);
        PyCell_SET(var_logger, tmp_assign_source_3);

    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(Nuitka_Cell_GET(var_logger));
        tmp_expression_value_5 = Nuitka_Cell_GET(var_logger);
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[112]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_log_level);
        tmp_cmp_expr_left_2 = var_log_level;
        tmp_cmp_expr_right_2 = mod_consts[113];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 255;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 255;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[113]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 255;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 255;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_args_element_value_3);
        condexpr_end_1:;
        frame_864dd576ed9e16f328ffb6afbe5e5f0c->m_frame.f_lineno = 255;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = Nuitka_SysGetObject("stderr");
        assert(!(tmp_args_element_value_4 == NULL));
        frame_864dd576ed9e16f328ffb6afbe5e5f0c->m_frame.f_lineno = 256;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[114], tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        assert(var_handler == NULL);
        var_handler = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_handler);
        tmp_expression_value_7 = var_handler;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[115]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 258;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[116]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 258;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        frame_864dd576ed9e16f328ffb6afbe5e5f0c->m_frame.f_lineno = 258;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[117], 0), mod_consts[118]);
        Py_DECREF(tmp_called_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 258;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        frame_864dd576ed9e16f328ffb6afbe5e5f0c->m_frame.f_lineno = 257;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(Nuitka_Cell_GET(var_logger));
        tmp_called_instance_3 = Nuitka_Cell_GET(var_logger);
        CHECK_OBJECT(var_handler);
        tmp_args_element_value_6 = var_handler;
        frame_864dd576ed9e16f328ffb6afbe5e5f0c->m_frame.f_lineno = 263;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[119], tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_2:;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_7;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_value_7 = par_name;
        frame_864dd576ed9e16f328ffb6afbe5e5f0c->m_frame.f_lineno = 265;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[110], tmp_args_element_value_7);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(var_logger);
            PyCell_SET(var_logger, tmp_assign_source_5);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_dict_key_1 = mod_consts[88];
        tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_1 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[120];
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_9 == NULL));
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[121]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "oocoo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[122];
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_10 == NULL));
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[121]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "oocoo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[15];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;

        tmp_closure_1[0] = var_logger;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_6 = MAKE_FUNCTION_httpx$_utils$$$function__15_get_logger$$$function__1_trace(tmp_annotations_1, tmp_closure_1);

        assert(var_trace == NULL);
        var_trace = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_trace);
        tmp_assattr_value_1 = var_trace;
        CHECK_OBJECT(Nuitka_Cell_GET(var_logger));
        tmp_assattr_target_1 = Nuitka_Cell_GET(var_logger);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[123], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[125]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 272;
            type_description_1 = "oocoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_logger));
        tmp_args_element_value_9 = Nuitka_Cell_GET(var_logger);
        frame_864dd576ed9e16f328ffb6afbe5e5f0c->m_frame.f_lineno = 272;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oocoo";
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
        exception_tb = MAKE_TRACEBACK(frame_864dd576ed9e16f328ffb6afbe5e5f0c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_864dd576ed9e16f328ffb6afbe5e5f0c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_864dd576ed9e16f328ffb6afbe5e5f0c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_864dd576ed9e16f328ffb6afbe5e5f0c,
        type_description_1,
        par_name,
        var_log_level,
        var_logger,
        var_handler,
        var_trace
    );


    // Release cached frame if used for exception.
    if (frame_864dd576ed9e16f328ffb6afbe5e5f0c == cache_frame_864dd576ed9e16f328ffb6afbe5e5f0c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_864dd576ed9e16f328ffb6afbe5e5f0c);
        cache_frame_864dd576ed9e16f328ffb6afbe5e5f0c = NULL;
    }

    assertFrameObject(frame_864dd576ed9e16f328ffb6afbe5e5f0c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_log_level);
    var_log_level = NULL;
    CHECK_OBJECT(var_logger);
    Py_DECREF(var_logger);
    var_logger = NULL;
    Py_XDECREF(var_handler);
    var_handler = NULL;
    CHECK_OBJECT(var_trace);
    Py_DECREF(var_trace);
    var_trace = NULL;
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

    Py_XDECREF(var_log_level);
    var_log_level = NULL;
    CHECK_OBJECT(var_logger);
    Py_DECREF(var_logger);
    var_logger = NULL;
    Py_XDECREF(var_handler);
    var_handler = NULL;
    Py_XDECREF(var_trace);
    var_trace = NULL;
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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__15_get_logger$$$function__1_trace(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_message = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_13f3d11f41d806bb6e3de16e4acc157d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_13f3d11f41d806bb6e3de16e4acc157d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_13f3d11f41d806bb6e3de16e4acc157d)) {
        Py_XDECREF(cache_frame_13f3d11f41d806bb6e3de16e4acc157d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_13f3d11f41d806bb6e3de16e4acc157d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_13f3d11f41d806bb6e3de16e4acc157d = MAKE_FUNCTION_FRAME(codeobj_13f3d11f41d806bb6e3de16e4acc157d, module_httpx$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_13f3d11f41d806bb6e3de16e4acc157d->m_type_description == NULL);
    frame_13f3d11f41d806bb6e3de16e4acc157d = cache_frame_13f3d11f41d806bb6e3de16e4acc157d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_13f3d11f41d806bb6e3de16e4acc157d);
    assert(Py_REFCNT(frame_13f3d11f41d806bb6e3de16e4acc157d) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[128]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 268;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[129]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 268;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_message);
        tmp_tuple_element_1 = par_message;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_call_result_1 = impl___main__$$$function__7_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_13f3d11f41d806bb6e3de16e4acc157d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_13f3d11f41d806bb6e3de16e4acc157d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_13f3d11f41d806bb6e3de16e4acc157d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_13f3d11f41d806bb6e3de16e4acc157d,
        type_description_1,
        par_message,
        par_args,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_13f3d11f41d806bb6e3de16e4acc157d == cache_frame_13f3d11f41d806bb6e3de16e4acc157d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_13f3d11f41d806bb6e3de16e4acc157d);
        cache_frame_13f3d11f41d806bb6e3de16e4acc157d = NULL;
    }

    assertFrameObject(frame_13f3d11f41d806bb6e3de16e4acc157d);

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
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_message);
    Py_DECREF(par_message);
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


static PyObject *impl_httpx$_utils$$$function__16_port_or_default(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[0];
    struct Nuitka_FrameObject *frame_9e25da25774be83587b819fa634b76cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9e25da25774be83587b819fa634b76cb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9e25da25774be83587b819fa634b76cb)) {
        Py_XDECREF(cache_frame_9e25da25774be83587b819fa634b76cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9e25da25774be83587b819fa634b76cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9e25da25774be83587b819fa634b76cb = MAKE_FUNCTION_FRAME(codeobj_9e25da25774be83587b819fa634b76cb, module_httpx$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9e25da25774be83587b819fa634b76cb->m_type_description == NULL);
    frame_9e25da25774be83587b819fa634b76cb = cache_frame_9e25da25774be83587b819fa634b76cb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9e25da25774be83587b819fa634b76cb);
    assert(Py_REFCNT(frame_9e25da25774be83587b819fa634b76cb) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_url);
        tmp_expression_value_1 = par_url;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[130]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "o";
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
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_url);
        tmp_expression_value_2 = par_url;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[130]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_expression_value_3;
        tmp_dict_arg_value_1 = DICT_COPY(mod_consts[131]);
        CHECK_OBJECT(par_url);
        tmp_expression_value_3 = par_url;
        tmp_key_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[132]);
        if (tmp_key_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_arg_value_1);

            exception_lineno = 278;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = DICT_GET_ITEM_WITH_HASH_ERROR0(tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_return_value == NULL && !ERROR_OCCURRED()) {
            tmp_return_value = Py_None;
        }
        Py_DECREF(tmp_dict_arg_value_1);
        Py_DECREF(tmp_key_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_9e25da25774be83587b819fa634b76cb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9e25da25774be83587b819fa634b76cb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9e25da25774be83587b819fa634b76cb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9e25da25774be83587b819fa634b76cb,
        type_description_1,
        par_url
    );


    // Release cached frame if used for exception.
    if (frame_9e25da25774be83587b819fa634b76cb == cache_frame_9e25da25774be83587b819fa634b76cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9e25da25774be83587b819fa634b76cb);
        cache_frame_9e25da25774be83587b819fa634b76cb = NULL;
    }

    assertFrameObject(frame_9e25da25774be83587b819fa634b76cb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__17_same_origin(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_704bc0b9c1d87c61f7fd85358be14f37;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_704bc0b9c1d87c61f7fd85358be14f37 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_704bc0b9c1d87c61f7fd85358be14f37)) {
        Py_XDECREF(cache_frame_704bc0b9c1d87c61f7fd85358be14f37);

#if _DEBUG_REFCOUNTS
        if (cache_frame_704bc0b9c1d87c61f7fd85358be14f37 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_704bc0b9c1d87c61f7fd85358be14f37 = MAKE_FUNCTION_FRAME(codeobj_704bc0b9c1d87c61f7fd85358be14f37, module_httpx$_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_704bc0b9c1d87c61f7fd85358be14f37->m_type_description == NULL);
    frame_704bc0b9c1d87c61f7fd85358be14f37 = cache_frame_704bc0b9c1d87c61f7fd85358be14f37;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_704bc0b9c1d87c61f7fd85358be14f37);
    assert(Py_REFCNT(frame_704bc0b9c1d87c61f7fd85358be14f37) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_url);
        tmp_expression_value_1 = par_url;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[132]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_expression_value_2 = par_other;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[132]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 286;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 286;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        CHECK_OBJECT(par_url);
        tmp_expression_value_3 = par_url;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[133]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_expression_value_4 = par_other;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[133]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 287;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_and_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_2);

            exception_lineno = 287;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF(tmp_and_left_value_2);
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_url);
        tmp_args_element_value_1 = par_url;
        frame_704bc0b9c1d87c61f7fd85358be14f37->m_frame.f_lineno = 288;
        tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 288;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_args_element_value_2 = par_other;
        frame_704bc0b9c1d87c61f7fd85358be14f37->m_frame.f_lineno = 288;
        tmp_cmp_expr_right_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 288;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_and_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_704bc0b9c1d87c61f7fd85358be14f37, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_704bc0b9c1d87c61f7fd85358be14f37->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_704bc0b9c1d87c61f7fd85358be14f37, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_704bc0b9c1d87c61f7fd85358be14f37,
        type_description_1,
        par_url,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_704bc0b9c1d87c61f7fd85358be14f37 == cache_frame_704bc0b9c1d87c61f7fd85358be14f37) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_704bc0b9c1d87c61f7fd85358be14f37);
        cache_frame_704bc0b9c1d87c61f7fd85358be14f37 = NULL;
    }

    assertFrameObject(frame_704bc0b9c1d87c61f7fd85358be14f37);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__18_is_https_redirect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[0];
    PyObject *par_location = python_pars[1];
    struct Nuitka_FrameObject *frame_243095071e829c6f3ad8604be6e4f642;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_243095071e829c6f3ad8604be6e4f642 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_243095071e829c6f3ad8604be6e4f642)) {
        Py_XDECREF(cache_frame_243095071e829c6f3ad8604be6e4f642);

#if _DEBUG_REFCOUNTS
        if (cache_frame_243095071e829c6f3ad8604be6e4f642 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_243095071e829c6f3ad8604be6e4f642 = MAKE_FUNCTION_FRAME(codeobj_243095071e829c6f3ad8604be6e4f642, module_httpx$_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_243095071e829c6f3ad8604be6e4f642->m_type_description == NULL);
    frame_243095071e829c6f3ad8604be6e4f642 = cache_frame_243095071e829c6f3ad8604be6e4f642;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_243095071e829c6f3ad8604be6e4f642);
    assert(Py_REFCNT(frame_243095071e829c6f3ad8604be6e4f642) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_url);
        tmp_expression_value_1 = par_url;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[133]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_location);
        tmp_expression_value_2 = par_location;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[133]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
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
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        int tmp_and_left_truth_3;
        PyObject *tmp_and_left_value_3;
        PyObject *tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_url);
        tmp_expression_value_3 = par_url;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[132]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[136];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_url);
        tmp_args_element_value_1 = par_url;
        frame_243095071e829c6f3ad8604be6e4f642->m_frame.f_lineno = 301;
        tmp_cmp_expr_left_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[137];
        tmp_and_left_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_and_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_2);

            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF(tmp_and_left_value_2);
        CHECK_OBJECT(par_location);
        tmp_expression_value_4 = par_location;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[132]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[138];
        tmp_and_left_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_and_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_3 = CHECK_IF_TRUE(tmp_and_left_value_3);
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_3);

            exception_lineno = 302;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        Py_DECREF(tmp_and_left_value_3);
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_location);
        tmp_args_element_value_2 = par_location;
        frame_243095071e829c6f3ad8604be6e4f642->m_frame.f_lineno = 303;
        tmp_cmp_expr_left_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = mod_consts[139];
        tmp_and_right_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_and_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_243095071e829c6f3ad8604be6e4f642, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_243095071e829c6f3ad8604be6e4f642->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_243095071e829c6f3ad8604be6e4f642, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_243095071e829c6f3ad8604be6e4f642,
        type_description_1,
        par_url,
        par_location
    );


    // Release cached frame if used for exception.
    if (frame_243095071e829c6f3ad8604be6e4f642 == cache_frame_243095071e829c6f3ad8604be6e4f642) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_243095071e829c6f3ad8604be6e4f642);
        cache_frame_243095071e829c6f3ad8604be6e4f642 = NULL;
    }

    assertFrameObject(frame_243095071e829c6f3ad8604be6e4f642);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_location);
    Py_DECREF(par_location);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_location);
    Py_DECREF(par_location);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__19_get_environment_proxies(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_mounts = NULL;
    PyObject *var_proxy_info = NULL;
    PyObject *var_scheme = NULL;
    PyObject *var_hostname = NULL;
    PyObject *var_no_proxy_hosts = NULL;
    PyObject *outline_0_var_host = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_4ff96e00e834cb894740dc0dac775618;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    struct Nuitka_FrameObject *frame_53a2cea2b7afe815f92aa23450920b54_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_53a2cea2b7afe815f92aa23450920b54_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_4ff96e00e834cb894740dc0dac775618 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4ff96e00e834cb894740dc0dac775618)) {
        Py_XDECREF(cache_frame_4ff96e00e834cb894740dc0dac775618);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4ff96e00e834cb894740dc0dac775618 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4ff96e00e834cb894740dc0dac775618 = MAKE_FUNCTION_FRAME(codeobj_4ff96e00e834cb894740dc0dac775618, module_httpx$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4ff96e00e834cb894740dc0dac775618->m_type_description == NULL);
    frame_4ff96e00e834cb894740dc0dac775618 = cache_frame_4ff96e00e834cb894740dc0dac775618;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4ff96e00e834cb894740dc0dac775618);
    assert(Py_REFCNT(frame_4ff96e00e834cb894740dc0dac775618) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_4ff96e00e834cb894740dc0dac775618->m_frame.f_lineno = 314;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_proxy_info == NULL);
        var_proxy_info = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_DICT_EMPTY();
        assert(var_mounts == NULL);
        var_mounts = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[142];
        tmp_assign_source_3 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_assign_source_3 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 317;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_scheme;
            var_scheme = tmp_assign_source_5;
            Py_INCREF(var_scheme);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        if (var_proxy_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 318;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = var_proxy_info;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[106]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_scheme);
        tmp_args_element_value_1 = var_scheme;
        frame_4ff96e00e834cb894740dc0dac775618->m_frame.f_lineno = 318;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 318;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        if (var_proxy_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 319;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = var_proxy_info;
        CHECK_OBJECT(var_scheme);
        tmp_subscript_value_1 = var_scheme;
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_hostname;
            var_hostname = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_format_value_2;
        PyObject *tmp_format_spec_2;
        tmp_cmp_expr_left_1 = mod_consts[144];
        CHECK_OBJECT(var_hostname);
        tmp_cmp_expr_right_1 = var_hostname;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_hostname);
        tmp_ass_subvalue_1 = var_hostname;
        Py_INCREF(tmp_ass_subvalue_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_tuple_element_1 = mod_consts[145];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_hostname);
            tmp_format_value_1 = var_hostname;
            tmp_format_spec_1 = mod_consts[7];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_ass_subvalue_1 = PyUnicode_Join(mod_consts[7], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        condexpr_end_1:;
        if (var_mounts == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[146]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 320;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_mounts;
        CHECK_OBJECT(var_scheme);
        tmp_format_value_2 = var_scheme;
        tmp_format_spec_2 = mod_consts[7];
        tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 320;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[144];
        PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        tmp_ass_subscript_1 = PyUnicode_Join(mod_consts[7], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 320;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 317;
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
        PyObject *tmp_assign_source_7;
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_4;
            if (var_proxy_info == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[143]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 324;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }

            tmp_expression_value_4 = var_proxy_info;
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[106]);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            frame_4ff96e00e834cb894740dc0dac775618->m_frame.f_lineno = 324;
            tmp_expression_value_3 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[147]);

            Py_DECREF(tmp_called_value_4);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[74]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            frame_4ff96e00e834cb894740dc0dac775618->m_frame.f_lineno = 324;
            tmp_iter_arg_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[148]);

            Py_DECREF(tmp_called_value_3);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_9;
        }
        if (isFrameUnusable(cache_frame_53a2cea2b7afe815f92aa23450920b54_2)) {
            Py_XDECREF(cache_frame_53a2cea2b7afe815f92aa23450920b54_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_53a2cea2b7afe815f92aa23450920b54_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_53a2cea2b7afe815f92aa23450920b54_2 = MAKE_FUNCTION_FRAME(codeobj_53a2cea2b7afe815f92aa23450920b54, module_httpx$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_53a2cea2b7afe815f92aa23450920b54_2->m_type_description == NULL);
        frame_53a2cea2b7afe815f92aa23450920b54_2 = cache_frame_53a2cea2b7afe815f92aa23450920b54_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_53a2cea2b7afe815f92aa23450920b54_2);
        assert(Py_REFCNT(frame_53a2cea2b7afe815f92aa23450920b54_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_10 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 324;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_11 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_host;
                outline_0_var_host = tmp_assign_source_11;
                Py_INCREF(outline_0_var_host);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_5;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_host);
            tmp_expression_value_5 = outline_0_var_host;
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[72]);
            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            frame_53a2cea2b7afe815f92aa23450920b54_2->m_frame.f_lineno = 324;
            tmp_append_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
            Py_DECREF(tmp_called_value_5);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_7 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_7);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
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
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
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
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_3;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_53a2cea2b7afe815f92aa23450920b54_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_53a2cea2b7afe815f92aa23450920b54_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_53a2cea2b7afe815f92aa23450920b54_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_53a2cea2b7afe815f92aa23450920b54_2,
            type_description_2,
            outline_0_var_host
        );


        // Release cached frame if used for exception.
        if (frame_53a2cea2b7afe815f92aa23450920b54_2 == cache_frame_53a2cea2b7afe815f92aa23450920b54_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_53a2cea2b7afe815f92aa23450920b54_2);
            cache_frame_53a2cea2b7afe815f92aa23450920b54_2 = NULL;
        }

        assertFrameObject(frame_53a2cea2b7afe815f92aa23450920b54_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(outline_0_var_host);
        outline_0_var_host = NULL;
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

        Py_XDECREF(outline_0_var_host);
        outline_0_var_host = NULL;
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
        exception_lineno = 324;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_no_proxy_hosts == NULL);
        var_no_proxy_hosts = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(var_no_proxy_hosts);
        tmp_iter_arg_3 = var_no_proxy_hosts;
        tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_12;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_3 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_13 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 325;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_14 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_hostname;
            var_hostname = tmp_assign_source_14;
            Py_INCREF(var_hostname);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_hostname);
        tmp_cmp_expr_left_2 = var_hostname;
        tmp_cmp_expr_right_2 = mod_consts[149];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = MAKE_DICT_EMPTY();
    goto try_return_handler_5;
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_hostname);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_hostname);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        tmp_ass_subvalue_2 = Py_None;
        if (var_mounts == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[146]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 340;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }

        tmp_ass_subscribed_2 = var_mounts;
        tmp_tuple_element_3 = mod_consts[150];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_hostname);
            tmp_format_value_3 = var_hostname;
            tmp_format_spec_3 = mod_consts[7];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_3);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_ass_subscript_2 = PyUnicode_Join(mod_consts[7], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_ass_subscript_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }
    }
    branch_no_3:;
    branch_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 325;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_5:;
    CHECK_OBJECT(tmp_for_loop_2__iter_value);
    Py_DECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    goto frame_return_exit_1;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (var_mounts == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[146]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 342;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_mounts;
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
        exception_tb = MAKE_TRACEBACK(frame_4ff96e00e834cb894740dc0dac775618, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ff96e00e834cb894740dc0dac775618->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ff96e00e834cb894740dc0dac775618, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4ff96e00e834cb894740dc0dac775618,
        type_description_1,
        var_mounts,
        var_proxy_info,
        var_scheme,
        var_hostname,
        var_no_proxy_hosts
    );


    // Release cached frame if used for exception.
    if (frame_4ff96e00e834cb894740dc0dac775618 == cache_frame_4ff96e00e834cb894740dc0dac775618) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4ff96e00e834cb894740dc0dac775618);
        cache_frame_4ff96e00e834cb894740dc0dac775618 = NULL;
    }

    assertFrameObject(frame_4ff96e00e834cb894740dc0dac775618);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_mounts);
    var_mounts = NULL;
    Py_XDECREF(var_proxy_info);
    var_proxy_info = NULL;
    Py_XDECREF(var_scheme);
    var_scheme = NULL;
    Py_XDECREF(var_hostname);
    var_hostname = NULL;
    CHECK_OBJECT(var_no_proxy_hosts);
    Py_DECREF(var_no_proxy_hosts);
    var_no_proxy_hosts = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_mounts);
    var_mounts = NULL;
    Py_XDECREF(var_proxy_info);
    var_proxy_info = NULL;
    Py_XDECREF(var_scheme);
    var_scheme = NULL;
    Py_XDECREF(var_hostname);
    var_hostname = NULL;
    Py_XDECREF(var_no_proxy_hosts);
    var_no_proxy_hosts = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__20_to_bytes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    struct Nuitka_FrameObject *frame_9d9a8124dd38839f4d87ce7f4accacd4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9d9a8124dd38839f4d87ce7f4accacd4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9d9a8124dd38839f4d87ce7f4accacd4)) {
        Py_XDECREF(cache_frame_9d9a8124dd38839f4d87ce7f4accacd4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9d9a8124dd38839f4d87ce7f4accacd4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9d9a8124dd38839f4d87ce7f4accacd4 = MAKE_FUNCTION_FRAME(codeobj_9d9a8124dd38839f4d87ce7f4accacd4, module_httpx$_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9d9a8124dd38839f4d87ce7f4accacd4->m_type_description == NULL);
    frame_9d9a8124dd38839f4d87ce7f4accacd4 = cache_frame_9d9a8124dd38839f4d87ce7f4accacd4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9d9a8124dd38839f4d87ce7f4accacd4);
    assert(Py_REFCNT(frame_9d9a8124dd38839f4d87ce7f4accacd4) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_value);
        tmp_expression_value_1 = par_value;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_1 = par_encoding;
        frame_9d9a8124dd38839f4d87ce7f4accacd4->m_frame.f_lineno = 346;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_value);
        tmp_return_value = par_value;
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
        exception_tb = MAKE_TRACEBACK(frame_9d9a8124dd38839f4d87ce7f4accacd4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9d9a8124dd38839f4d87ce7f4accacd4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d9a8124dd38839f4d87ce7f4accacd4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9d9a8124dd38839f4d87ce7f4accacd4,
        type_description_1,
        par_value,
        par_encoding
    );


    // Release cached frame if used for exception.
    if (frame_9d9a8124dd38839f4d87ce7f4accacd4 == cache_frame_9d9a8124dd38839f4d87ce7f4accacd4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9d9a8124dd38839f4d87ce7f4accacd4);
        cache_frame_9d9a8124dd38839f4d87ce7f4accacd4 = NULL;
    }

    assertFrameObject(frame_9d9a8124dd38839f4d87ce7f4accacd4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__21_to_str(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_encoding = python_pars[1];
    struct Nuitka_FrameObject *frame_f3147fb98cec80c17e17a08d6bff7f0f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f3147fb98cec80c17e17a08d6bff7f0f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f3147fb98cec80c17e17a08d6bff7f0f)) {
        Py_XDECREF(cache_frame_f3147fb98cec80c17e17a08d6bff7f0f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f3147fb98cec80c17e17a08d6bff7f0f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f3147fb98cec80c17e17a08d6bff7f0f = MAKE_FUNCTION_FRAME(codeobj_f3147fb98cec80c17e17a08d6bff7f0f, module_httpx$_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f3147fb98cec80c17e17a08d6bff7f0f->m_type_description == NULL);
    frame_f3147fb98cec80c17e17a08d6bff7f0f = cache_frame_f3147fb98cec80c17e17a08d6bff7f0f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f3147fb98cec80c17e17a08d6bff7f0f);
    assert(Py_REFCNT(frame_f3147fb98cec80c17e17a08d6bff7f0f) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_value);
        tmp_return_value = par_value;
        Py_INCREF(tmp_return_value);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_value);
        tmp_expression_value_1 = par_value;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[152]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_1 = par_encoding;
        frame_f3147fb98cec80c17e17a08d6bff7f0f->m_frame.f_lineno = 350;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_f3147fb98cec80c17e17a08d6bff7f0f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f3147fb98cec80c17e17a08d6bff7f0f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f3147fb98cec80c17e17a08d6bff7f0f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f3147fb98cec80c17e17a08d6bff7f0f,
        type_description_1,
        par_value,
        par_encoding
    );


    // Release cached frame if used for exception.
    if (frame_f3147fb98cec80c17e17a08d6bff7f0f == cache_frame_f3147fb98cec80c17e17a08d6bff7f0f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f3147fb98cec80c17e17a08d6bff7f0f);
        cache_frame_f3147fb98cec80c17e17a08d6bff7f0f = NULL;
    }

    assertFrameObject(frame_f3147fb98cec80c17e17a08d6bff7f0f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__22_to_bytes_or_str(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_match_type_of = python_pars[1];
    struct Nuitka_FrameObject *frame_59a33c0b28797b4ac7c388252c545893;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_59a33c0b28797b4ac7c388252c545893 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_59a33c0b28797b4ac7c388252c545893)) {
        Py_XDECREF(cache_frame_59a33c0b28797b4ac7c388252c545893);

#if _DEBUG_REFCOUNTS
        if (cache_frame_59a33c0b28797b4ac7c388252c545893 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_59a33c0b28797b4ac7c388252c545893 = MAKE_FUNCTION_FRAME(codeobj_59a33c0b28797b4ac7c388252c545893, module_httpx$_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_59a33c0b28797b4ac7c388252c545893->m_type_description == NULL);
    frame_59a33c0b28797b4ac7c388252c545893 = cache_frame_59a33c0b28797b4ac7c388252c545893;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_59a33c0b28797b4ac7c388252c545893);
    assert(Py_REFCNT(frame_59a33c0b28797b4ac7c388252c545893) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_match_type_of);
        tmp_isinstance_inst_1 = par_match_type_of;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_value);
        tmp_return_value = par_value;
        Py_INCREF(tmp_return_value);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_value);
        tmp_expression_value_1 = par_value;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_59a33c0b28797b4ac7c388252c545893->m_frame.f_lineno = 354;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_59a33c0b28797b4ac7c388252c545893, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_59a33c0b28797b4ac7c388252c545893->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_59a33c0b28797b4ac7c388252c545893, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_59a33c0b28797b4ac7c388252c545893,
        type_description_1,
        par_value,
        par_match_type_of
    );


    // Release cached frame if used for exception.
    if (frame_59a33c0b28797b4ac7c388252c545893 == cache_frame_59a33c0b28797b4ac7c388252c545893) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_59a33c0b28797b4ac7c388252c545893);
        cache_frame_59a33c0b28797b4ac7c388252c545893 = NULL;
    }

    assertFrameObject(frame_59a33c0b28797b4ac7c388252c545893);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_match_type_of);
    Py_DECREF(par_match_type_of);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_match_type_of);
    Py_DECREF(par_match_type_of);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__23_unquote(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_177bb1952b20ec9365fb6fa71bcf3d85;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_177bb1952b20ec9365fb6fa71bcf3d85 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_177bb1952b20ec9365fb6fa71bcf3d85)) {
        Py_XDECREF(cache_frame_177bb1952b20ec9365fb6fa71bcf3d85);

#if _DEBUG_REFCOUNTS
        if (cache_frame_177bb1952b20ec9365fb6fa71bcf3d85 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_177bb1952b20ec9365fb6fa71bcf3d85 = MAKE_FUNCTION_FRAME(codeobj_177bb1952b20ec9365fb6fa71bcf3d85, module_httpx$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_177bb1952b20ec9365fb6fa71bcf3d85->m_type_description == NULL);
    frame_177bb1952b20ec9365fb6fa71bcf3d85 = cache_frame_177bb1952b20ec9365fb6fa71bcf3d85;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_177bb1952b20ec9365fb6fa71bcf3d85);
    assert(Py_REFCNT(frame_177bb1952b20ec9365fb6fa71bcf3d85) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_outline_return_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_subscript_value_1;
            CHECK_OBJECT(par_value);
            tmp_expression_value_1 = par_value;
            tmp_subscript_value_1 = mod_consts[153];
            tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, -1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            assert(tmp_comparison_chain_1__operand_2 == NULL);
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            CHECK_OBJECT(par_value);
            tmp_expression_value_2 = par_value;
            tmp_subscript_value_2 = mod_consts[39];
            tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
            if (tmp_cmp_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_right_1 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            Py_DECREF(tmp_cmp_expr_left_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            assert(tmp_comparison_chain_1__comparison_result == NULL);
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
        }
        {
            bool tmp_condition_result_2;
            PyObject *tmp_operand_value_1;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_value_1 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_condition_result_2 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_2 != false) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
        }
        branch_yes_1:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_outline_return_value_1);
        goto try_return_handler_1;
        branch_no_1:;
        {
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_left_2 = tmp_comparison_chain_1__operand_2;
            tmp_cmp_expr_right_2 = mod_consts[21];
            tmp_outline_return_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_outline_return_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 358;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_1;
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

        Py_XDECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_outline_return_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_outline_return_value_1);

            exception_lineno = 358;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_outline_return_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_value);
        tmp_expression_value_3 = par_value;
        tmp_subscript_value_3 = mod_consts[154];
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_value);
        tmp_return_value = par_value;
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
        exception_tb = MAKE_TRACEBACK(frame_177bb1952b20ec9365fb6fa71bcf3d85, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_177bb1952b20ec9365fb6fa71bcf3d85->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_177bb1952b20ec9365fb6fa71bcf3d85, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_177bb1952b20ec9365fb6fa71bcf3d85,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_177bb1952b20ec9365fb6fa71bcf3d85 == cache_frame_177bb1952b20ec9365fb6fa71bcf3d85) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_177bb1952b20ec9365fb6fa71bcf3d85);
        cache_frame_177bb1952b20ec9365fb6fa71bcf3d85 = NULL;
    }

    assertFrameObject(frame_177bb1952b20ec9365fb6fa71bcf3d85);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__24_guess_content_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_filename = python_pars[0];
    struct Nuitka_FrameObject *frame_171b79c1b39a4c08b7768a25f7cc1f85;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_171b79c1b39a4c08b7768a25f7cc1f85 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_171b79c1b39a4c08b7768a25f7cc1f85)) {
        Py_XDECREF(cache_frame_171b79c1b39a4c08b7768a25f7cc1f85);

#if _DEBUG_REFCOUNTS
        if (cache_frame_171b79c1b39a4c08b7768a25f7cc1f85 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_171b79c1b39a4c08b7768a25f7cc1f85 = MAKE_FUNCTION_FRAME(codeobj_171b79c1b39a4c08b7768a25f7cc1f85, module_httpx$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_171b79c1b39a4c08b7768a25f7cc1f85->m_type_description == NULL);
    frame_171b79c1b39a4c08b7768a25f7cc1f85 = cache_frame_171b79c1b39a4c08b7768a25f7cc1f85;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_171b79c1b39a4c08b7768a25f7cc1f85);
    assert(Py_REFCNT(frame_171b79c1b39a4c08b7768a25f7cc1f85) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_filename);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_filename);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "o";
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
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_filename);
        tmp_args_element_value_1 = par_filename;
        frame_171b79c1b39a4c08b7768a25f7cc1f85->m_frame.f_lineno = 363;
        tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[156], tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[39];
        tmp_or_left_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 363;
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
        tmp_or_right_value_1 = mod_consts[157];
        Py_INCREF(tmp_or_right_value_1);
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_171b79c1b39a4c08b7768a25f7cc1f85, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_171b79c1b39a4c08b7768a25f7cc1f85->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_171b79c1b39a4c08b7768a25f7cc1f85, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_171b79c1b39a4c08b7768a25f7cc1f85,
        type_description_1,
        par_filename
    );


    // Release cached frame if used for exception.
    if (frame_171b79c1b39a4c08b7768a25f7cc1f85 == cache_frame_171b79c1b39a4c08b7768a25f7cc1f85) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_171b79c1b39a4c08b7768a25f7cc1f85);
        cache_frame_171b79c1b39a4c08b7768a25f7cc1f85 = NULL;
    }

    assertFrameObject(frame_171b79c1b39a4c08b7768a25f7cc1f85);

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
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_filename);
    Py_DECREF(par_filename);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__25_peek_filelike_length(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stream = python_pars[0];
    PyObject *var_fd = NULL;
    PyObject *var_length = NULL;
    PyObject *var_offset = NULL;
    struct Nuitka_FrameObject *frame_b81bb406afd716a92d4d42cbca7b992f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_b81bb406afd716a92d4d42cbca7b992f = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b81bb406afd716a92d4d42cbca7b992f)) {
        Py_XDECREF(cache_frame_b81bb406afd716a92d4d42cbca7b992f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b81bb406afd716a92d4d42cbca7b992f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b81bb406afd716a92d4d42cbca7b992f = MAKE_FUNCTION_FRAME(codeobj_b81bb406afd716a92d4d42cbca7b992f, module_httpx$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b81bb406afd716a92d4d42cbca7b992f->m_type_description == NULL);
    frame_b81bb406afd716a92d4d42cbca7b992f = cache_frame_b81bb406afd716a92d4d42cbca7b992f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b81bb406afd716a92d4d42cbca7b992f);
    assert(Py_REFCNT(frame_b81bb406afd716a92d4d42cbca7b992f) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_stream);
        tmp_called_instance_1 = par_stream;
        frame_b81bb406afd716a92d4d42cbca7b992f->m_frame.f_lineno = 374;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[158]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(var_fd == NULL);
        var_fd = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        assert(!(tmp_called_instance_2 == NULL));
        CHECK_OBJECT(var_fd);
        tmp_args_element_value_1 = var_fd;
        frame_b81bb406afd716a92d4d42cbca7b992f->m_frame.f_lineno = 376;
        tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[159], tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[160]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(var_length == NULL);
        var_length = tmp_assign_source_2;
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_b81bb406afd716a92d4d42cbca7b992f, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_b81bb406afd716a92d4d42cbca7b992f, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = mod_consts[161];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_stream);
        tmp_called_instance_3 = par_stream;
        frame_b81bb406afd716a92d4d42cbca7b992f->m_frame.f_lineno = 382;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[162]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        assert(var_offset == NULL);
        var_offset = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_stream);
        tmp_expression_value_2 = par_stream;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[163]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_2 = mod_consts[39];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 383;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[164]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 383;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        frame_b81bb406afd716a92d4d42cbca7b992f->m_frame.f_lineno = 383;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        assert(var_length == NULL);
        var_length = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_stream);
        tmp_called_instance_4 = par_stream;
        CHECK_OBJECT(var_offset);
        tmp_args_element_value_4 = var_offset;
        frame_b81bb406afd716a92d4d42cbca7b992f->m_frame.f_lineno = 384;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[163], tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_2 == NULL) {
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_b81bb406afd716a92d4d42cbca7b992f, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_b81bb406afd716a92d4d42cbca7b992f, exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = mod_consts[161];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_5;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 379;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b81bb406afd716a92d4d42cbca7b992f->m_frame) frame_b81bb406afd716a92d4d42cbca7b992f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_5;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_return_handler_3;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    // End of try:
    try_end_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 372;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b81bb406afd716a92d4d42cbca7b992f->m_frame) frame_b81bb406afd716a92d4d42cbca7b992f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_end_1:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b81bb406afd716a92d4d42cbca7b992f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b81bb406afd716a92d4d42cbca7b992f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b81bb406afd716a92d4d42cbca7b992f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b81bb406afd716a92d4d42cbca7b992f,
        type_description_1,
        par_stream,
        var_fd,
        var_length,
        var_offset
    );


    // Release cached frame if used for exception.
    if (frame_b81bb406afd716a92d4d42cbca7b992f == cache_frame_b81bb406afd716a92d4d42cbca7b992f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b81bb406afd716a92d4d42cbca7b992f);
        cache_frame_b81bb406afd716a92d4d42cbca7b992f = NULL;
    }

    assertFrameObject(frame_b81bb406afd716a92d4d42cbca7b992f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_length);
    tmp_return_value = var_length;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_fd);
    var_fd = NULL;
    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_fd);
    var_fd = NULL;
    Py_XDECREF(var_length);
    var_length = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__26__get_time(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_httpx$_utils$$$function__26__get_time$$$coroutine__1__get_time();

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
struct httpx$_utils$$$function__26__get_time$$$coroutine__1__get_time_locals {
    PyObject *var_library;
    PyObject *var_trio;
    PyObject *var_curio;
    PyObject *var_asyncio;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_return_value;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
};
#endif

static PyObject *httpx$_utils$$$function__26__get_time$$$coroutine__1__get_time_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct httpx$_utils$$$function__26__get_time$$$coroutine__1__get_time_locals *coroutine_heap = (struct httpx$_utils$$$function__26__get_time$$$coroutine__1__get_time_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_library = NULL;
    coroutine_heap->var_trio = NULL;
    coroutine_heap->var_curio = NULL;
    coroutine_heap->var_asyncio = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_ad4ab030aeaf0979f05fdd20a359b6b1, module_httpx$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 394;
            coroutine_heap->type_description_1 = "Noooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 394;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[167]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 394;
            coroutine_heap->type_description_1 = "Noooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_library == NULL);
        coroutine_heap->var_library = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(coroutine_heap->var_library);
        tmp_cmp_expr_left_1 = coroutine_heap->var_library;
        tmp_cmp_expr_right_1 = mod_consts[168];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 395;
            coroutine_heap->type_description_1 = "Noooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[168];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_utils;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[39];
        coroutine->m_frame->m_frame.f_lineno = 396;
        tmp_assign_source_2 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 396;
            coroutine_heap->type_description_1 = "Noooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_trio == NULL);
        coroutine_heap->var_trio = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(coroutine_heap->var_trio);
        tmp_called_instance_2 = coroutine_heap->var_trio;
        coroutine->m_frame->m_frame.f_lineno = 398;
        coroutine_heap->tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[169]);
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 398;
            coroutine_heap->type_description_1 = "Noooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(coroutine_heap->var_library);
        tmp_cmp_expr_left_2 = coroutine_heap->var_library;
        tmp_cmp_expr_right_2 = mod_consts[170];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 399;
            coroutine_heap->type_description_1 = "Noooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[170];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_httpx$_utils;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[39];
        coroutine->m_frame->m_frame.f_lineno = 400;
        tmp_assign_source_3 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 400;
            coroutine_heap->type_description_1 = "Noooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_curio == NULL);
        coroutine_heap->var_curio = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[125]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 402;
            coroutine_heap->type_description_1 = "Noooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = (PyObject *)&PyFloat_Type;
        coroutine->m_frame->m_frame.f_lineno = 402;
        CHECK_OBJECT(coroutine_heap->var_curio);
        tmp_called_instance_3 = coroutine_heap->var_curio;
        coroutine->m_frame->m_frame.f_lineno = 402;
        tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[171]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 402;
            coroutine_heap->type_description_1 = "Noooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = ASYNC_AWAIT(tmp_expression_value_3, await_normal);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 402;
            coroutine_heap->type_description_1 = "Noooo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_3, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_2;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_3, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 402;
            coroutine_heap->type_description_1 = "Noooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = yield_return_value;
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 402;
            coroutine_heap->type_description_1 = "Noooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 402;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 402;
            coroutine_heap->type_description_1 = "Noooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[172];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_httpx$_utils;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[39];
        coroutine->m_frame->m_frame.f_lineno = 404;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 404;
            coroutine_heap->type_description_1 = "Noooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_asyncio == NULL);
        coroutine_heap->var_asyncio = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(coroutine_heap->var_asyncio);
        tmp_called_instance_5 = coroutine_heap->var_asyncio;
        coroutine->m_frame->m_frame.f_lineno = 406;
        tmp_called_instance_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[173]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 406;
            coroutine_heap->type_description_1 = "Noooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 406;
        coroutine_heap->tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[174]);
        Py_DECREF(tmp_called_instance_4);
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 406;
            coroutine_heap->type_description_1 = "Noooo";
            goto frame_exception_exit_1;
        }
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
            NULL,
            coroutine_heap->var_library,
            coroutine_heap->var_trio,
            coroutine_heap->var_curio,
            coroutine_heap->var_asyncio
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
    CHECK_OBJECT(coroutine_heap->var_library);
    Py_DECREF(coroutine_heap->var_library);
    coroutine_heap->var_library = NULL;
    Py_XDECREF(coroutine_heap->var_trio);
    coroutine_heap->var_trio = NULL;
    Py_XDECREF(coroutine_heap->var_curio);
    coroutine_heap->var_curio = NULL;
    Py_XDECREF(coroutine_heap->var_asyncio);
    coroutine_heap->var_asyncio = NULL;
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

    Py_XDECREF(coroutine_heap->var_library);
    coroutine_heap->var_library = NULL;
    Py_XDECREF(coroutine_heap->var_trio);
    coroutine_heap->var_trio = NULL;
    Py_XDECREF(coroutine_heap->var_curio);
    coroutine_heap->var_curio = NULL;
    Py_XDECREF(coroutine_heap->var_asyncio);
    coroutine_heap->var_asyncio = NULL;
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

static PyObject *MAKE_COROUTINE_httpx$_utils$$$function__26__get_time$$$coroutine__1__get_time() {
    return Nuitka_Coroutine_New(
        httpx$_utils$$$function__26__get_time$$$coroutine__1__get_time_context,
        module_httpx$_utils,
        mod_consts[175],
        mod_consts[176],
        codeobj_ad4ab030aeaf0979f05fdd20a359b6b1,
        NULL,
        0,
#if 1
        sizeof(struct httpx$_utils$$$function__26__get_time$$$coroutine__1__get_time_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_utils$$$function__27_sync_start(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_078da34bf5e99c51d41ecd45adb5a8ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_078da34bf5e99c51d41ecd45adb5a8ee = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_078da34bf5e99c51d41ecd45adb5a8ee)) {
        Py_XDECREF(cache_frame_078da34bf5e99c51d41ecd45adb5a8ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_078da34bf5e99c51d41ecd45adb5a8ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_078da34bf5e99c51d41ecd45adb5a8ee = MAKE_FUNCTION_FRAME(codeobj_078da34bf5e99c51d41ecd45adb5a8ee, module_httpx$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_078da34bf5e99c51d41ecd45adb5a8ee->m_type_description == NULL);
    frame_078da34bf5e99c51d41ecd45adb5a8ee = cache_frame_078da34bf5e99c51d41ecd45adb5a8ee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_078da34bf5e99c51d41ecd45adb5a8ee);
    assert(Py_REFCNT(frame_078da34bf5e99c51d41ecd45adb5a8ee) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[174]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_078da34bf5e99c51d41ecd45adb5a8ee->m_frame.f_lineno = 409;
        tmp_assattr_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[177]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[178], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_078da34bf5e99c51d41ecd45adb5a8ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_078da34bf5e99c51d41ecd45adb5a8ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_078da34bf5e99c51d41ecd45adb5a8ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_078da34bf5e99c51d41ecd45adb5a8ee,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_078da34bf5e99c51d41ecd45adb5a8ee == cache_frame_078da34bf5e99c51d41ecd45adb5a8ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_078da34bf5e99c51d41ecd45adb5a8ee);
        cache_frame_078da34bf5e99c51d41ecd45adb5a8ee = NULL;
    }

    assertFrameObject(frame_078da34bf5e99c51d41ecd45adb5a8ee);

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


static PyObject *impl_httpx$_utils$$$function__28_async_start(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_httpx$_utils$$$function__28_async_start$$$coroutine__1_async_start(tmp_closure_1);

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
struct httpx$_utils$$$function__28_async_start$$$coroutine__1_async_start_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    bool tmp_result;
    PyObject *tmp_return_value;
};
#endif

static PyObject *httpx$_utils$$$function__28_async_start$$$coroutine__1_async_start_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct httpx$_utils$$$function__28_async_start$$$coroutine__1_async_start_locals *coroutine_heap = (struct httpx$_utils$$$function__28_async_start$$$coroutine__1_async_start_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_ad14d0bd6a880aa722ace575e6db01d2, module_httpx$_utils, sizeof(void *));
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_1;
        coroutine->m_frame->m_frame.f_lineno = 412;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[63]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 412;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 412;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[175]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 412;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 412;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 412;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = yield_return_value;
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 412;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[63]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 412;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[178], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 412;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
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

static PyObject *MAKE_COROUTINE_httpx$_utils$$$function__28_async_start$$$coroutine__1_async_start(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        httpx$_utils$$$function__28_async_start$$$coroutine__1_async_start_context,
        module_httpx$_utils,
        mod_consts[179],
        mod_consts[180],
        codeobj_ad14d0bd6a880aa722ace575e6db01d2,
        closure,
        1,
#if 1
        sizeof(struct httpx$_utils$$$function__28_async_start$$$coroutine__1_async_start_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_utils$$$function__29_sync_elapsed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_now = NULL;
    struct Nuitka_FrameObject *frame_7fe3e2aca29ca1ec00a23fa5764ee411;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7fe3e2aca29ca1ec00a23fa5764ee411 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7fe3e2aca29ca1ec00a23fa5764ee411)) {
        Py_XDECREF(cache_frame_7fe3e2aca29ca1ec00a23fa5764ee411);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7fe3e2aca29ca1ec00a23fa5764ee411 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7fe3e2aca29ca1ec00a23fa5764ee411 = MAKE_FUNCTION_FRAME(codeobj_7fe3e2aca29ca1ec00a23fa5764ee411, module_httpx$_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7fe3e2aca29ca1ec00a23fa5764ee411->m_type_description == NULL);
    frame_7fe3e2aca29ca1ec00a23fa5764ee411 = cache_frame_7fe3e2aca29ca1ec00a23fa5764ee411;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7fe3e2aca29ca1ec00a23fa5764ee411);
    assert(Py_REFCNT(frame_7fe3e2aca29ca1ec00a23fa5764ee411) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[174]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_7fe3e2aca29ca1ec00a23fa5764ee411->m_frame.f_lineno = 415;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[177]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_now == NULL);
        var_now = tmp_assign_source_1;
    }
    {
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_now);
        tmp_sub_expr_left_1 = var_now;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[178]);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
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
        exception_tb = MAKE_TRACEBACK(frame_7fe3e2aca29ca1ec00a23fa5764ee411, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7fe3e2aca29ca1ec00a23fa5764ee411->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7fe3e2aca29ca1ec00a23fa5764ee411, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7fe3e2aca29ca1ec00a23fa5764ee411,
        type_description_1,
        par_self,
        var_now
    );


    // Release cached frame if used for exception.
    if (frame_7fe3e2aca29ca1ec00a23fa5764ee411 == cache_frame_7fe3e2aca29ca1ec00a23fa5764ee411) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7fe3e2aca29ca1ec00a23fa5764ee411);
        cache_frame_7fe3e2aca29ca1ec00a23fa5764ee411 = NULL;
    }

    assertFrameObject(frame_7fe3e2aca29ca1ec00a23fa5764ee411);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_now);
    Py_DECREF(var_now);
    var_now = NULL;
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

    Py_XDECREF(var_now);
    var_now = NULL;
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


static PyObject *impl_httpx$_utils$$$function__30_async_elapsed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_httpx$_utils$$$function__30_async_elapsed$$$coroutine__1_async_elapsed(tmp_closure_1);

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
struct httpx$_utils$$$function__30_async_elapsed$$$coroutine__1_async_elapsed_locals {
    PyObject *var_now;
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

static PyObject *httpx$_utils$$$function__30_async_elapsed$$$coroutine__1_async_elapsed_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct httpx$_utils$$$function__30_async_elapsed$$$coroutine__1_async_elapsed_locals *coroutine_heap = (struct httpx$_utils$$$function__30_async_elapsed$$$coroutine__1_async_elapsed_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_now = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_cc5b41b70d84d0d4e56d9abebaa2202a, module_httpx$_utils, sizeof(void *)+sizeof(void *));
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
        coroutine->m_frame->m_frame.f_lineno = 419;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[63]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 419;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 419;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[175]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 419;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 419;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 419;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = yield_return_value;
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 419;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_now == NULL);
        coroutine_heap->var_now = tmp_assign_source_1;
    }
    {
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(coroutine_heap->var_now);
        tmp_sub_expr_left_1 = coroutine_heap->var_now;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[63]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 420;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[178]);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 420;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 420;
            coroutine_heap->type_description_1 = "co";
            goto frame_exception_exit_1;
        }
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
            coroutine_heap->var_now
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
    CHECK_OBJECT(coroutine_heap->var_now);
    Py_DECREF(coroutine_heap->var_now);
    coroutine_heap->var_now = NULL;
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

    Py_XDECREF(coroutine_heap->var_now);
    coroutine_heap->var_now = NULL;
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

static PyObject *MAKE_COROUTINE_httpx$_utils$$$function__30_async_elapsed$$$coroutine__1_async_elapsed(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        httpx$_utils$$$function__30_async_elapsed$$$coroutine__1_async_elapsed_context,
        module_httpx$_utils,
        mod_consts[181],
        mod_consts[182],
        codeobj_cc5b41b70d84d0d4e56d9abebaa2202a,
        closure,
        1,
#if 1
        sizeof(struct httpx$_utils$$$function__30_async_elapsed$$$coroutine__1_async_elapsed_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpx$_utils$$$function__31___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_pattern = python_pars[1];
    PyObject *var_URL = NULL;
    PyObject *var_url = NULL;
    PyObject *var_domain = NULL;
    struct Nuitka_FrameObject *frame_700b86c14ce335e1e0d77310702a027c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_700b86c14ce335e1e0d77310702a027c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_700b86c14ce335e1e0d77310702a027c)) {
        Py_XDECREF(cache_frame_700b86c14ce335e1e0d77310702a027c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_700b86c14ce335e1e0d77310702a027c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_700b86c14ce335e1e0d77310702a027c = MAKE_FUNCTION_FRAME(codeobj_700b86c14ce335e1e0d77310702a027c, module_httpx$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_700b86c14ce335e1e0d77310702a027c->m_type_description == NULL);
    frame_700b86c14ce335e1e0d77310702a027c = cache_frame_700b86c14ce335e1e0d77310702a027c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_700b86c14ce335e1e0d77310702a027c);
    assert(Py_REFCNT(frame_700b86c14ce335e1e0d77310702a027c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[183];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_utils;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[184];
        tmp_level_value_1 = mod_consts[185];
        frame_700b86c14ce335e1e0d77310702a027c->m_frame.f_lineno = 466;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_httpx$_utils,
                mod_consts[186],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[186]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_URL == NULL);
        var_URL = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_pattern);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_pattern);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_cmp_expr_left_1 = mod_consts[187];
        CHECK_OBJECT(par_pattern);
        tmp_cmp_expr_right_1 = par_pattern;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ooooo";
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[188];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_pattern);
            tmp_format_value_1 = par_pattern;
            tmp_format_spec_1 = mod_consts[7];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[189];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_pattern);
            tmp_format_value_2 = par_pattern;
            tmp_format_spec_2 = mod_consts[7];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[190];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[7], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_700b86c14ce335e1e0d77310702a027c->m_frame.f_lineno = 469;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 469;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_URL);
        tmp_called_value_1 = var_URL;
        CHECK_OBJECT(par_pattern);
        tmp_args_element_value_1 = par_pattern;
        frame_700b86c14ce335e1e0d77310702a027c->m_frame.f_lineno = 475;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_url == NULL);
        var_url = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_pattern);
        tmp_assattr_value_1 = par_pattern;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[191], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_url);
        tmp_expression_value_1 = var_url;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[132]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[192];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assattr_value_2 = mod_consts[7];
        Py_INCREF(tmp_assattr_value_2);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(var_url);
        tmp_expression_value_2 = var_url;
        tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[132]);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[132], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_url);
        tmp_expression_value_3 = var_url;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[133]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[149];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_assattr_value_3 = mod_consts[7];
        Py_INCREF(tmp_assattr_value_3);
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT(var_url);
        tmp_expression_value_4 = var_url;
        tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[133]);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_2:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[133], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(var_url);
        tmp_expression_value_5 = var_url;
        tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[130]);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[130], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_url);
        tmp_expression_value_6 = var_url;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[133]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_url);
        tmp_expression_value_7 = var_url;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[133]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[149];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_4 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[193], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_url);
        tmp_expression_value_9 = var_url;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[133]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[194]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_700b86c14ce335e1e0d77310702a027c->m_frame.f_lineno = 482;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[195]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 482;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[196]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_url);
        tmp_expression_value_12 = var_url;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[133]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 484;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[197];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 484;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_700b86c14ce335e1e0d77310702a027c->m_frame.f_lineno = 484;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_domain == NULL);
        var_domain = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_assattr_target_6;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[198]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[199];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_domain);
            tmp_format_value_3 = var_domain;
            tmp_format_spec_3 = mod_consts[7];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 485;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[200];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_3 = PyUnicode_Join(mod_consts[7], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 485;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_700b86c14ce335e1e0d77310702a027c->m_frame.f_lineno = 485;
        tmp_assattr_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assattr_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[193], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_url);
        tmp_expression_value_15 = var_url;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[133]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[194]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_700b86c14ce335e1e0d77310702a027c->m_frame.f_lineno = 486;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[201]);

        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 486;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[196]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_url);
        tmp_expression_value_18 = var_url;
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[133]);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 488;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[50];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 488;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_700b86c14ce335e1e0d77310702a027c->m_frame.f_lineno = 488;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_domain == NULL);
        var_domain = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_assattr_target_7;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[198]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = mod_consts[202];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_domain);
            tmp_format_value_4 = var_domain;
            tmp_format_spec_4 = mod_consts[7];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 489;
                type_description_1 = "ooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[200];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_string_concat_values_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_args_element_value_5 = PyUnicode_Join(mod_consts[7], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 489;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_700b86c14ce335e1e0d77310702a027c->m_frame.f_lineno = 489;
        tmp_assattr_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assattr_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[193], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_21;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[196]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_url);
        tmp_expression_value_21 = var_url;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[133]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 492;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_700b86c14ce335e1e0d77310702a027c->m_frame.f_lineno = 492;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_domain == NULL);
        var_domain = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_assattr_target_8;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[198]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = mod_consts[203];
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_5;
            PyObject *tmp_format_spec_5;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_domain);
            tmp_format_value_5 = var_domain;
            tmp_format_spec_5 = mod_consts[7];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 493;
                type_description_1 = "ooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[200];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_string_concat_values_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_args_element_value_7 = PyUnicode_Join(mod_consts[7], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 493;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_700b86c14ce335e1e0d77310702a027c->m_frame.f_lineno = 493;
        tmp_assattr_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[193], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_700b86c14ce335e1e0d77310702a027c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_700b86c14ce335e1e0d77310702a027c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_700b86c14ce335e1e0d77310702a027c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_700b86c14ce335e1e0d77310702a027c,
        type_description_1,
        par_self,
        par_pattern,
        var_URL,
        var_url,
        var_domain
    );


    // Release cached frame if used for exception.
    if (frame_700b86c14ce335e1e0d77310702a027c == cache_frame_700b86c14ce335e1e0d77310702a027c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_700b86c14ce335e1e0d77310702a027c);
        cache_frame_700b86c14ce335e1e0d77310702a027c = NULL;
    }

    assertFrameObject(frame_700b86c14ce335e1e0d77310702a027c);

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
    CHECK_OBJECT(var_URL);
    Py_DECREF(var_URL);
    var_URL = NULL;
    CHECK_OBJECT(var_url);
    Py_DECREF(var_url);
    var_url = NULL;
    Py_XDECREF(var_domain);
    var_domain = NULL;
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

    Py_XDECREF(var_URL);
    var_URL = NULL;
    Py_XDECREF(var_url);
    var_url = NULL;
    Py_XDECREF(var_domain);
    var_domain = NULL;
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
    CHECK_OBJECT(par_pattern);
    Py_DECREF(par_pattern);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_pattern);
    Py_DECREF(par_pattern);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpx$_utils$$$function__32_matches(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_f8cef3afbea19b2ba0853979154f3045;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f8cef3afbea19b2ba0853979154f3045 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f8cef3afbea19b2ba0853979154f3045)) {
        Py_XDECREF(cache_frame_f8cef3afbea19b2ba0853979154f3045);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f8cef3afbea19b2ba0853979154f3045 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f8cef3afbea19b2ba0853979154f3045 = MAKE_FUNCTION_FRAME(codeobj_f8cef3afbea19b2ba0853979154f3045, module_httpx$_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f8cef3afbea19b2ba0853979154f3045->m_type_description == NULL);
    frame_f8cef3afbea19b2ba0853979154f3045 = cache_frame_f8cef3afbea19b2ba0853979154f3045;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f8cef3afbea19b2ba0853979154f3045);
    assert(Py_REFCNT(frame_f8cef3afbea19b2ba0853979154f3045) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[132]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 496;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
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
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[132]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_expression_value_3 = par_other;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[132]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 496;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[133]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 499;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[193]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_left_value_3 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_left_2);
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[193]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[12]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_other == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[204]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 501;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_other;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[133]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 501;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f8cef3afbea19b2ba0853979154f3045->m_frame.f_lineno = 501;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_2 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_and_right_value_2 = tmp_and_left_value_3;
        and_end_3:;
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[130]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_and_left_value_4 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_left_3);
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[130]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_other == NULL) {
            Py_DECREF(tmp_cmp_expr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[204]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 504;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = par_other;
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[130]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 504;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_and_right_value_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_3 = tmp_and_left_value_4;
        and_end_4:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f8cef3afbea19b2ba0853979154f3045, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f8cef3afbea19b2ba0853979154f3045->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f8cef3afbea19b2ba0853979154f3045, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f8cef3afbea19b2ba0853979154f3045,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_f8cef3afbea19b2ba0853979154f3045 == cache_frame_f8cef3afbea19b2ba0853979154f3045) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f8cef3afbea19b2ba0853979154f3045);
        cache_frame_f8cef3afbea19b2ba0853979154f3045 = NULL;
    }

    assertFrameObject(frame_f8cef3afbea19b2ba0853979154f3045);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

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


static PyObject *impl_httpx$_utils$$$function__33_priority(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_port_priority = NULL;
    PyObject *var_host_priority = NULL;
    PyObject *var_scheme_priority = NULL;
    struct Nuitka_FrameObject *frame_b785e79d9ff578940fb1d370fb10216b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b785e79d9ff578940fb1d370fb10216b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b785e79d9ff578940fb1d370fb10216b)) {
        Py_XDECREF(cache_frame_b785e79d9ff578940fb1d370fb10216b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b785e79d9ff578940fb1d370fb10216b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b785e79d9ff578940fb1d370fb10216b = MAKE_FUNCTION_FRAME(codeobj_b785e79d9ff578940fb1d370fb10216b, module_httpx$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b785e79d9ff578940fb1d370fb10216b->m_type_description == NULL);
    frame_b785e79d9ff578940fb1d370fb10216b = cache_frame_b785e79d9ff578940fb1d370fb10216b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b785e79d9ff578940fb1d370fb10216b);
    assert(Py_REFCNT(frame_b785e79d9ff578940fb1d370fb10216b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[130]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_1 = mod_consts[39];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_1 = mod_consts[185];
        condexpr_end_1:;
        assert(var_port_priority == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_port_priority = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[133]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_host_priority == NULL);
        var_host_priority = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[132]);
        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_scheme_priority == NULL);
        var_scheme_priority = tmp_assign_source_3;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b785e79d9ff578940fb1d370fb10216b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b785e79d9ff578940fb1d370fb10216b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b785e79d9ff578940fb1d370fb10216b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b785e79d9ff578940fb1d370fb10216b,
        type_description_1,
        par_self,
        var_port_priority,
        var_host_priority,
        var_scheme_priority
    );


    // Release cached frame if used for exception.
    if (frame_b785e79d9ff578940fb1d370fb10216b == cache_frame_b785e79d9ff578940fb1d370fb10216b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b785e79d9ff578940fb1d370fb10216b);
        cache_frame_b785e79d9ff578940fb1d370fb10216b = NULL;
    }

    assertFrameObject(frame_b785e79d9ff578940fb1d370fb10216b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_port_priority);
        tmp_tuple_element_1 = var_port_priority;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_host_priority);
        tmp_tuple_element_1 = var_host_priority;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_scheme_priority);
        tmp_tuple_element_1 = var_scheme_priority;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_port_priority);
    Py_DECREF(var_port_priority);
    var_port_priority = NULL;
    CHECK_OBJECT(var_host_priority);
    Py_DECREF(var_host_priority);
    var_host_priority = NULL;
    CHECK_OBJECT(var_scheme_priority);
    Py_DECREF(var_scheme_priority);
    var_scheme_priority = NULL;
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

    Py_XDECREF(var_port_priority);
    var_port_priority = NULL;
    Py_XDECREF(var_host_priority);
    var_host_priority = NULL;
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


static PyObject *impl_httpx$_utils$$$function__34___hash__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a13df479053134b273477c86cef3d606;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a13df479053134b273477c86cef3d606 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a13df479053134b273477c86cef3d606)) {
        Py_XDECREF(cache_frame_a13df479053134b273477c86cef3d606);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a13df479053134b273477c86cef3d606 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a13df479053134b273477c86cef3d606 = MAKE_FUNCTION_FRAME(codeobj_a13df479053134b273477c86cef3d606, module_httpx$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a13df479053134b273477c86cef3d606->m_type_description == NULL);
    frame_a13df479053134b273477c86cef3d606 = cache_frame_a13df479053134b273477c86cef3d606;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a13df479053134b273477c86cef3d606);
    assert(Py_REFCNT(frame_a13df479053134b273477c86cef3d606) == 2);

    // Framed code:
    {
        PyObject *tmp_hash_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_hash_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[191]);
        if (tmp_hash_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_HASH(tmp_hash_arg_1);
        Py_DECREF(tmp_hash_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
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
        exception_tb = MAKE_TRACEBACK(frame_a13df479053134b273477c86cef3d606, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a13df479053134b273477c86cef3d606->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a13df479053134b273477c86cef3d606, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a13df479053134b273477c86cef3d606,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a13df479053134b273477c86cef3d606 == cache_frame_a13df479053134b273477c86cef3d606) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a13df479053134b273477c86cef3d606);
        cache_frame_a13df479053134b273477c86cef3d606 = NULL;
    }

    assertFrameObject(frame_a13df479053134b273477c86cef3d606);

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


static PyObject *impl_httpx$_utils$$$function__35___lt__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_bb21be701fbd30edce19bcda3868bf99;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bb21be701fbd30edce19bcda3868bf99 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bb21be701fbd30edce19bcda3868bf99)) {
        Py_XDECREF(cache_frame_bb21be701fbd30edce19bcda3868bf99);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bb21be701fbd30edce19bcda3868bf99 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bb21be701fbd30edce19bcda3868bf99 = MAKE_FUNCTION_FRAME(codeobj_bb21be701fbd30edce19bcda3868bf99, module_httpx$_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bb21be701fbd30edce19bcda3868bf99->m_type_description == NULL);
    frame_bb21be701fbd30edce19bcda3868bf99 = cache_frame_bb21be701fbd30edce19bcda3868bf99;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bb21be701fbd30edce19bcda3868bf99);
    assert(Py_REFCNT(frame_bb21be701fbd30edce19bcda3868bf99) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[206]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_expression_value_2 = par_other;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[206]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 526;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
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
        exception_tb = MAKE_TRACEBACK(frame_bb21be701fbd30edce19bcda3868bf99, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bb21be701fbd30edce19bcda3868bf99->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb21be701fbd30edce19bcda3868bf99, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bb21be701fbd30edce19bcda3868bf99,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_bb21be701fbd30edce19bcda3868bf99 == cache_frame_bb21be701fbd30edce19bcda3868bf99) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bb21be701fbd30edce19bcda3868bf99);
        cache_frame_bb21be701fbd30edce19bcda3868bf99 = NULL;
    }

    assertFrameObject(frame_bb21be701fbd30edce19bcda3868bf99);

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


static PyObject *impl_httpx$_utils$$$function__36___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_237ab32f1cdcf96fabe107bf0f5d6262;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_237ab32f1cdcf96fabe107bf0f5d6262 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_237ab32f1cdcf96fabe107bf0f5d6262)) {
        Py_XDECREF(cache_frame_237ab32f1cdcf96fabe107bf0f5d6262);

#if _DEBUG_REFCOUNTS
        if (cache_frame_237ab32f1cdcf96fabe107bf0f5d6262 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_237ab32f1cdcf96fabe107bf0f5d6262 = MAKE_FUNCTION_FRAME(codeobj_237ab32f1cdcf96fabe107bf0f5d6262, module_httpx$_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_237ab32f1cdcf96fabe107bf0f5d6262->m_type_description == NULL);
    frame_237ab32f1cdcf96fabe107bf0f5d6262 = cache_frame_237ab32f1cdcf96fabe107bf0f5d6262;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_237ab32f1cdcf96fabe107bf0f5d6262);
    assert(Py_REFCNT(frame_237ab32f1cdcf96fabe107bf0f5d6262) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_other);
        tmp_isinstance_inst_1 = par_other;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[207]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[207]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
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
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[191]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_expression_value_2 = par_other;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[191]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 529;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
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
        exception_tb = MAKE_TRACEBACK(frame_237ab32f1cdcf96fabe107bf0f5d6262, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_237ab32f1cdcf96fabe107bf0f5d6262->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_237ab32f1cdcf96fabe107bf0f5d6262, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_237ab32f1cdcf96fabe107bf0f5d6262,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_237ab32f1cdcf96fabe107bf0f5d6262 == cache_frame_237ab32f1cdcf96fabe107bf0f5d6262) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_237ab32f1cdcf96fabe107bf0f5d6262);
        cache_frame_237ab32f1cdcf96fabe107bf0f5d6262 = NULL;
    }

    assertFrameObject(frame_237ab32f1cdcf96fabe107bf0f5d6262);

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



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__10_get_ca_bundle_from_env(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__10_get_ca_bundle_from_env,
        mod_consts[260],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d94b3ecba2c6ca09ffb2bc34bfd57bc0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__11_parse_header_links(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__11_parse_header_links,
        mod_consts[262],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9d1b1cb18226d80e8a128cbedff69213,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        mod_consts[86],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__12_parse_content_type_charset(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__12_parse_content_type_charset,
        mod_consts[264],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_36ab043be9d8d3d97fa185412278d4dc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__13_obfuscate_sensitive_headers(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__13_obfuscate_sensitive_headers,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8ea1f8b388f3ca9fdd51ceca7ba3f50b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__14_trace(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        mod_consts[276],
#endif
        codeobj_932ffd00a235f7752eacc4214f119b5e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__15_get_logger(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__15_get_logger,
        mod_consts[279],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_864dd576ed9e16f328ffb6afbe5e5f0c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        mod_consts[127],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__15_get_logger$$$function__1_trace(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__15_get_logger$$$function__1_trace,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_13f3d11f41d806bb6e3de16e4acc157d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__16_port_or_default(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__16_port_or_default,
        mod_consts[134],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9e25da25774be83587b819fa634b76cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__17_same_origin(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__17_same_origin,
        mod_consts[281],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_704bc0b9c1d87c61f7fd85358be14f37,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        mod_consts[135],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__18_is_https_redirect(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__18_is_https_redirect,
        mod_consts[283],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_243095071e829c6f3ad8604be6e4f642,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        mod_consts[140],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__19_get_environment_proxies(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__19_get_environment_proxies,
        mod_consts[284],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4ff96e00e834cb894740dc0dac775618,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        mod_consts[151],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__1_normalize_header_key(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__1_normalize_header_key,
        mod_consts[235],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5d2ea595f5182f74fcc653f24a8c5ff4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__20_to_bytes(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__20_to_bytes,
        mod_consts[286],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9d9a8124dd38839f4d87ce7f4accacd4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__21_to_str(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__21_to_str,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f3147fb98cec80c17e17a08d6bff7f0f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__22_to_bytes_or_str(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__22_to_bytes_or_str,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_59a33c0b28797b4ac7c388252c545893,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__23_unquote(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__23_unquote,
        mod_consts[289],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_177bb1952b20ec9365fb6fa71bcf3d85,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__24_guess_content_type(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__24_guess_content_type,
        mod_consts[291],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_171b79c1b39a4c08b7768a25f7cc1f85,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__25_peek_filelike_length(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__25_peek_filelike_length,
        mod_consts[293],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b81bb406afd716a92d4d42cbca7b992f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        mod_consts[165],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__26__get_time(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__26__get_time,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_ad4ab030aeaf0979f05fdd20a359b6b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__27_sync_start(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__27_sync_start,
        mod_consts[297],
#if PYTHON_VERSION >= 0x300
        mod_consts[298],
#endif
        codeobj_078da34bf5e99c51d41ecd45adb5a8ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__28_async_start(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__28_async_start,
        mod_consts[179],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_ad14d0bd6a880aa722ace575e6db01d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__29_sync_elapsed(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__29_sync_elapsed,
        mod_consts[299],
#if PYTHON_VERSION >= 0x300
        mod_consts[300],
#endif
        codeobj_7fe3e2aca29ca1ec00a23fa5764ee411,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__2_normalize_header_value(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__2_normalize_header_value,
        mod_consts[236],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1b4cbc5d3a0753afc5104c2610d5800e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__30_async_elapsed(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__30_async_elapsed,
        mod_consts[181],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_cc5b41b70d84d0d4e56d9abebaa2202a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__31___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__31___init__,
        mod_consts[252],
#if PYTHON_VERSION >= 0x300
        mod_consts[303],
#endif
        codeobj_700b86c14ce335e1e0d77310702a027c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__32_matches(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__32_matches,
        mod_consts[305],
#if PYTHON_VERSION >= 0x300
        mod_consts[306],
#endif
        codeobj_f8cef3afbea19b2ba0853979154f3045,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__33_priority(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__33_priority,
        mod_consts[206],
#if PYTHON_VERSION >= 0x300
        mod_consts[308],
#endif
        codeobj_b785e79d9ff578940fb1d370fb10216b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        mod_consts[205],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__34___hash__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__34___hash__,
        mod_consts[310],
#if PYTHON_VERSION >= 0x300
        mod_consts[311],
#endif
        codeobj_a13df479053134b273477c86cef3d606,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__35___lt__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__35___lt__,
        mod_consts[313],
#if PYTHON_VERSION >= 0x300
        mod_consts[314],
#endif
        codeobj_bb21be701fbd30edce19bcda3868bf99,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__36___eq__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__36___eq__,
        mod_consts[315],
#if PYTHON_VERSION >= 0x300
        mod_consts[316],
#endif
        codeobj_237ab32f1cdcf96fabe107bf0f5d6262,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__3_primitive_value_to_str(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__3_primitive_value_to_str,
        mod_consts[238],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5d7545c25181c3fefb604a56d5ba595a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__4_is_known_encoding(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__4_is_known_encoding,
        mod_consts[240],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bd9845bf73716f4bb7db932f9e678d28,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        mod_consts[11],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__5_format_form_param(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__5_format_form_param,
        mod_consts[242],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fe6d80f51276f4fbeaa1ea283d79079a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__5_format_form_param$$$function__1_replacer(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__5_format_form_param$$$function__1_replacer,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[17],
#endif
        codeobj_b44e2212f2dd8d8e84f150b659c8494c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__6_guess_json_utf(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__6_guess_json_utf,
        mod_consts[245],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f39c1f0271d5c1a3e66536de746a6aa4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__7___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__7___init__,
        mod_consts[252],
#if PYTHON_VERSION >= 0x300
        mod_consts[253],
#endif
        codeobj_3e6c4b0b9eba537db9888e02c790ef63,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__8_netrc_info(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__8_netrc_info,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        mod_consts[254],
#endif
        codeobj_8085476bbcfec15a70d0f6244416fa60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpx$_utils$$$function__9_get_credentials(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpx$_utils$$$function__9_get_credentials,
        mod_consts[257],
#if PYTHON_VERSION >= 0x300
        mod_consts[258],
#endif
        codeobj_7dd9a6aa99a2665f0e1f03dfbde05e7a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpx$_utils,
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

function_impl_code functable_httpx$_utils[] = {
    impl_httpx$_utils$$$function__5_format_form_param$$$function__1_replacer,
    impl_httpx$_utils$$$function__15_get_logger$$$function__1_trace,
    impl_httpx$_utils$$$function__1_normalize_header_key,
    impl_httpx$_utils$$$function__2_normalize_header_value,
    impl_httpx$_utils$$$function__3_primitive_value_to_str,
    impl_httpx$_utils$$$function__4_is_known_encoding,
    impl_httpx$_utils$$$function__5_format_form_param,
    impl_httpx$_utils$$$function__6_guess_json_utf,
    impl_httpx$_utils$$$function__7___init__,
    impl_httpx$_utils$$$function__8_netrc_info,
    impl_httpx$_utils$$$function__9_get_credentials,
    impl_httpx$_utils$$$function__10_get_ca_bundle_from_env,
    impl_httpx$_utils$$$function__11_parse_header_links,
    impl_httpx$_utils$$$function__12_parse_content_type_charset,
    impl_httpx$_utils$$$function__13_obfuscate_sensitive_headers,
    NULL,
    impl_httpx$_utils$$$function__15_get_logger,
    impl_httpx$_utils$$$function__16_port_or_default,
    impl_httpx$_utils$$$function__17_same_origin,
    impl_httpx$_utils$$$function__18_is_https_redirect,
    impl_httpx$_utils$$$function__19_get_environment_proxies,
    impl_httpx$_utils$$$function__20_to_bytes,
    impl_httpx$_utils$$$function__21_to_str,
    impl_httpx$_utils$$$function__22_to_bytes_or_str,
    impl_httpx$_utils$$$function__23_unquote,
    impl_httpx$_utils$$$function__24_guess_content_type,
    impl_httpx$_utils$$$function__25_peek_filelike_length,
    impl_httpx$_utils$$$function__26__get_time,
    impl_httpx$_utils$$$function__27_sync_start,
    impl_httpx$_utils$$$function__28_async_start,
    impl_httpx$_utils$$$function__29_sync_elapsed,
    impl_httpx$_utils$$$function__30_async_elapsed,
    impl_httpx$_utils$$$function__31___init__,
    impl_httpx$_utils$$$function__32_matches,
    impl_httpx$_utils$$$function__33_priority,
    impl_httpx$_utils$$$function__34___hash__,
    impl_httpx$_utils$$$function__35___lt__,
    impl_httpx$_utils$$$function__36___eq__,
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

    function_impl_code *current = functable_httpx$_utils;
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

    if (offset > sizeof(functable_httpx$_utils) || offset < 0) {
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
        functable_httpx$_utils[offset],
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
        module_httpx$_utils,
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
PyObject *modulecode_httpx$_utils(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpx._utils");

    // Store the module for future use.
    module_httpx$_utils = module;

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
        PRINT_STRING("httpx._utils: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpx._utils: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpx._utils: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inithttpx$_utils\n");

    moduledict_httpx$_utils = MODULE_DICT(module_httpx$_utils);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpx$_utils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpx$_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[7]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpx$_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpx$_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpx$_utils);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpx$_utils, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_httpx$_utils, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpx$_utils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_httpx$_utils);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_c = NULL;
    PyObject *outline_1_var_c = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_360f0b15c783d8c9693f05364e8cf07d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_FrameObject *frame_e35210c5d61bcd008d9fba70c5932311_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_e35210c5d61bcd008d9fba70c5932311_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_42aaf2ad42b72f3b9fcf541e12725c80_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_42aaf2ad42b72f3b9fcf541e12725c80_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_httpx$_utils$$$class__1_NetRCInfo_131 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_a1afa578cdf596443951a3a030d4185c_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    PyObject *locals_httpx$_utils$$$class__2_Logger_235 = NULL;
    struct Nuitka_FrameObject *frame_08f4b4d80979553d14e4aff7bc823eb4_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    PyObject *locals_httpx$_utils$$$class__3_Timer_392 = NULL;
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
    PyObject *locals_httpx$_utils$$$class__4_URLPattern_423 = NULL;
    struct Nuitka_FrameObject *frame_3c9c39b8a74ff48e15fcf52e8d1cf5a8_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[209];
        UPDATE_STRING_DICT0(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_2);
    }
    frame_360f0b15c783d8c9693f05364e8cf07d = MAKE_MODULE_FRAME(codeobj_360f0b15c783d8c9693f05364e8cf07d, module_httpx$_utils);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_360f0b15c783d8c9693f05364e8cf07d);
    assert(Py_REFCNT(frame_360f0b15c783d8c9693f05364e8cf07d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[209];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[211]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[212], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[211]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[213], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[9];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_httpx$_utils;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[39];
        frame_360f0b15c783d8c9693f05364e8cf07d->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[215];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_httpx$_utils;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[39];
        frame_360f0b15c783d8c9693f05364e8cf07d->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[102];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_httpx$_utils;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[39];
        frame_360f0b15c783d8c9693f05364e8cf07d->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[155];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_httpx$_utils;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[39];
        frame_360f0b15c783d8c9693f05364e8cf07d->m_frame.f_lineno = 4;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[62];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_httpx$_utils;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[39];
        frame_360f0b15c783d8c9693f05364e8cf07d->m_frame.f_lineno = 5;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT0(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[73];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_httpx$_utils;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[39];
        frame_360f0b15c783d8c9693f05364e8cf07d->m_frame.f_lineno = 7;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_11 == NULL));
        UPDATE_STRING_DICT0(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[174];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_httpx$_utils;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = Py_None;
        tmp_level_value_7 = mod_consts[39];
        frame_360f0b15c783d8c9693f05364e8cf07d->m_frame.f_lineno = 9;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        assert(!(tmp_assign_source_12 == NULL));
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_13 == NULL));
        UPDATE_STRING_DICT0(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[217];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_httpx$_utils;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[218];
        tmp_level_value_8 = mod_consts[39];
        frame_360f0b15c783d8c9693f05364e8cf07d->m_frame.f_lineno = 11;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_httpx$_utils,
                mod_consts[59],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[59]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[219];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_httpx$_utils;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[220];
        tmp_level_value_9 = mod_consts[39];
        frame_360f0b15c783d8c9693f05364e8cf07d->m_frame.f_lineno = 12;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_httpx$_utils,
                mod_consts[141],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[141]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[166];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_httpx$_utils;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = Py_None;
        tmp_level_value_10 = mod_consts[39];
        frame_360f0b15c783d8c9693f05364e8cf07d->m_frame.f_lineno = 14;
        tmp_assign_source_16 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[221];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_httpx$_utils;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[222];
        tmp_level_value_11 = mod_consts[185];
        frame_360f0b15c783d8c9693f05364e8cf07d->m_frame.f_lineno = 16;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_httpx$_utils,
                mod_consts[223],
                mod_consts[39]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[223]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = DICT_COPY(mod_consts[224]);
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_18);
    }
    {
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_dict_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_dict_arg_value_1 == NULL)) {
            tmp_dict_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        assert(!(tmp_dict_arg_value_1 == NULL));
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = mod_consts[225];
            tmp_assign_source_19 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
            assert(!(tmp_assign_source_19 == NULL));
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_19;
        }
        {
            PyObject *tmp_assign_source_20;
            tmp_assign_source_20 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_20;
        }
        // Tried code:
        if (isFrameUnusable(cache_frame_e35210c5d61bcd008d9fba70c5932311_2)) {
            Py_XDECREF(cache_frame_e35210c5d61bcd008d9fba70c5932311_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_e35210c5d61bcd008d9fba70c5932311_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_e35210c5d61bcd008d9fba70c5932311_2 = MAKE_FUNCTION_FRAME(codeobj_e35210c5d61bcd008d9fba70c5932311, module_httpx$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_e35210c5d61bcd008d9fba70c5932311_2->m_type_description == NULL);
        frame_e35210c5d61bcd008d9fba70c5932311_2 = cache_frame_e35210c5d61bcd008d9fba70c5932311_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_e35210c5d61bcd008d9fba70c5932311_2);
        assert(Py_REFCNT(frame_e35210c5d61bcd008d9fba70c5932311_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
            tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_21 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 24;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_21;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_assign_source_22 = tmp_dictcontraction_1__iter_value_0;
            {
                PyObject *old = outline_0_var_c;
                outline_0_var_c = tmp_assign_source_22;
                Py_INCREF(outline_0_var_c);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(outline_0_var_c);
            tmp_cmp_expr_left_1 = outline_0_var_c;
            tmp_cmp_expr_right_1 = mod_consts[226];
            tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
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
            PyObject *tmp_dictset38_key_1;
            PyObject *tmp_chr_arg_1;
            PyObject *tmp_dictset38_value_1;
            PyObject *tmp_kw_call_arg_value_0_1;
            PyObject *tmp_kw_call_arg_value_1_1;
            PyObject *tmp_dictset38_dict_1;
            CHECK_OBJECT(outline_0_var_c);
            tmp_chr_arg_1 = outline_0_var_c;
            tmp_dictset38_key_1 = BUILTIN_CHR(tmp_chr_arg_1);
            if (tmp_dictset38_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            tmp_kw_call_arg_value_0_1 = mod_consts[227];
            CHECK_OBJECT(outline_0_var_c);
            tmp_kw_call_arg_value_1_1 = outline_0_var_c;
            frame_e35210c5d61bcd008d9fba70c5932311_2->m_frame.f_lineno = 24;
            {
                PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
                tmp_dictset38_value_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
            }

            if (tmp_dictset38_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dictset38_key_1);

                exception_lineno = 24;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_1));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

            Py_DECREF(tmp_dictset38_value_1);
            Py_DECREF(tmp_dictset38_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_iterable_value_1 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_iterable_value_1);
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
        goto frame_return_exit_1;
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

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
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

        goto try_return_handler_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e35210c5d61bcd008d9fba70c5932311_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e35210c5d61bcd008d9fba70c5932311_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e35210c5d61bcd008d9fba70c5932311_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e35210c5d61bcd008d9fba70c5932311_2,
            type_description_2,
            outline_0_var_c
        );


        // Release cached frame if used for exception.
        if (frame_e35210c5d61bcd008d9fba70c5932311_2 == cache_frame_e35210c5d61bcd008d9fba70c5932311_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_e35210c5d61bcd008d9fba70c5932311_2);
            cache_frame_e35210c5d61bcd008d9fba70c5932311_2 = NULL;
        }

        assertFrameObject(frame_e35210c5d61bcd008d9fba70c5932311_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_1;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_c);
        outline_0_var_c = NULL;
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
        exception_lineno = 24;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(PyDict_Check(tmp_dict_arg_value_1));
        if (HAS_ATTR_BOOL(tmp_iterable_value_1, const_str_plain_keys)){
            tmp_res = PyDict_Merge(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);
        } else {
            tmp_res = PyDict_MergeFromSeq2(tmp_dict_arg_value_1, tmp_iterable_value_1, 1);
        }

        Py_DECREF(tmp_iterable_value_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[198]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_str_arg_value_1 = mod_consts[228];
        // Tried code:
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[23]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto try_except_handler_3;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[229]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto try_except_handler_3;
            }
            frame_360f0b15c783d8c9693f05364e8cf07d->m_frame.f_lineno = 27;
            tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
            Py_DECREF(tmp_called_value_2);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto try_except_handler_3;
            }
            tmp_assign_source_24 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;

                goto try_except_handler_3;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_24;
        }
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_25;
        }
        if (isFrameUnusable(cache_frame_42aaf2ad42b72f3b9fcf541e12725c80_3)) {
            Py_XDECREF(cache_frame_42aaf2ad42b72f3b9fcf541e12725c80_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_42aaf2ad42b72f3b9fcf541e12725c80_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_42aaf2ad42b72f3b9fcf541e12725c80_3 = MAKE_FUNCTION_FRAME(codeobj_42aaf2ad42b72f3b9fcf541e12725c80, module_httpx$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_42aaf2ad42b72f3b9fcf541e12725c80_3->m_type_description == NULL);
        frame_42aaf2ad42b72f3b9fcf541e12725c80_3 = cache_frame_42aaf2ad42b72f3b9fcf541e12725c80_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_42aaf2ad42b72f3b9fcf541e12725c80_3);
        assert(Py_REFCNT(frame_42aaf2ad42b72f3b9fcf541e12725c80_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_26 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 27;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_26;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_27;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_27 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_1_var_c;
                outline_1_var_c = tmp_assign_source_27;
                Py_INCREF(outline_1_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            CHECK_OBJECT(outline_1_var_c);
            tmp_args_element_value_2 = outline_1_var_c;
            frame_42aaf2ad42b72f3b9fcf541e12725c80_3->m_frame.f_lineno = 27;
            tmp_append_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[196], tmp_args_element_value_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_iterable_value_2 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_iterable_value_2);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
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
        try_except_handler_4:;
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

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_3;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_42aaf2ad42b72f3b9fcf541e12725c80_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_42aaf2ad42b72f3b9fcf541e12725c80_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_42aaf2ad42b72f3b9fcf541e12725c80_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_42aaf2ad42b72f3b9fcf541e12725c80_3,
            type_description_2,
            outline_1_var_c
        );


        // Release cached frame if used for exception.
        if (frame_42aaf2ad42b72f3b9fcf541e12725c80_3 == cache_frame_42aaf2ad42b72f3b9fcf541e12725c80_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_42aaf2ad42b72f3b9fcf541e12725c80_3);
            cache_frame_42aaf2ad42b72f3b9fcf541e12725c80_3 = NULL;
        }

        assertFrameObject(frame_42aaf2ad42b72f3b9fcf541e12725c80_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_3;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(outline_1_var_c);
        outline_1_var_c = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_c);
        outline_1_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 27;
        goto frame_exception_exit_1;
        outline_result_2:;
        tmp_args_element_value_1 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_2);
        Py_DECREF(tmp_iterable_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        frame_360f0b15c783d8c9693f05364e8cf07d->m_frame.f_lineno = 26;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        tmp_defaults_1 = mod_consts[92];
        tmp_dict_key_1 = mod_consts[230];
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_expression_value_4 == NULL));
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[231]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[232];
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[2];
            tmp_dict_value_1 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[233];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_6 == NULL));
            tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[234]);
            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[15];
            tmp_dict_value_1 = (PyObject *)&PyBytes_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_28 = MAKE_FUNCTION_httpx$_utils$$$function__1_normalize_header_key(tmp_defaults_1, tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        tmp_defaults_2 = mod_consts[92];
        tmp_dict_key_2 = mod_consts[230];
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_expression_value_8 == NULL));
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[231]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[232];
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_4;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[233];
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_10 == NULL));
            tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[234]);
            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_4 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_4);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[15];
            tmp_dict_value_2 = (PyObject *)&PyBytes_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_29 = MAKE_FUNCTION_httpx$_utils$$$function__2_normalize_header_value(tmp_defaults_2, tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_annotations_3;
        tmp_annotations_3 = DICT_COPY(mod_consts[237]);


        tmp_assign_source_30 = MAKE_FUNCTION_httpx$_utils$$$function__3_primitive_value_to_str(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_annotations_4;
        tmp_annotations_4 = DICT_COPY(mod_consts[239]);


        tmp_assign_source_31 = MAKE_FUNCTION_httpx$_utils$$$function__4_is_known_encoding(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_annotations_5;
        tmp_annotations_5 = DICT_COPY(mod_consts[241]);


        tmp_assign_source_32 = MAKE_FUNCTION_httpx$_utils$$$function__5_format_form_param(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[243];
        UPDATE_STRING_DICT0(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mult_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_mult_expr_left_1 == NULL)) {
            tmp_mult_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_mult_expr_left_1 == NULL));
        tmp_mult_expr_right_1 = mod_consts[41];
        tmp_assign_source_34 = BINARY_OPERATION_MULT_OBJECT_BYTES_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        assert(!(tmp_assign_source_34 == NULL));
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        tmp_mult_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_mult_expr_left_2 == NULL)) {
            tmp_mult_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_mult_expr_left_2 == NULL));
        tmp_mult_expr_right_2 = mod_consts[47];
        tmp_assign_source_35 = BINARY_OPERATION_MULT_OBJECT_BYTES_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        assert(!(tmp_assign_source_35 == NULL));
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[244];
        tmp_dict_value_3 = (PyObject *)&PyBytes_Type;
        tmp_annotations_6 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_5;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[15];
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_12 == NULL));
            tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[234]);
            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_5 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_5);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_36 = MAKE_FUNCTION_httpx$_utils$$$function__6_guess_json_utf(tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_38;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_httpx$_utils$$$class__1_NetRCInfo_131 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[246];
        tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__1_NetRCInfo_131, mod_consts[247], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[248];
        tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__1_NetRCInfo_131, mod_consts[249], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_a1afa578cdf596443951a3a030d4185c_4 = MAKE_CLASS_FRAME(codeobj_a1afa578cdf596443951a3a030d4185c, module_httpx$_utils, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a1afa578cdf596443951a3a030d4185c_4);
        assert(Py_REFCNT(frame_a1afa578cdf596443951a3a030d4185c_4) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_7;
            tmp_defaults_3 = mod_consts[92];
            tmp_dict_key_4 = mod_consts[250];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_14 == NULL));
            tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[234]);
            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_16 == NULL));
            tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[251]);
            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_13);

                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_subscript_value_7 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_7);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_subscript_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_13);

                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_6);
            Py_DECREF(tmp_expression_value_13);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[15];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_utils$$$function__7___init__(tmp_defaults_3, tmp_annotations_7);

            tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__1_NetRCInfo_131, mod_consts[252], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_expression_value_19;
            tmp_called_value_3 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_5 = mod_consts[15];
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_18 == NULL));
            tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[234]);
            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_17);

                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_subscript_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[62]);
            if (tmp_subscript_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_17);

                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_8);
            Py_DECREF(tmp_expression_value_17);
            Py_DECREF(tmp_subscript_value_8);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_args_element_value_3 = MAKE_FUNCTION_httpx$_utils$$$function__8_netrc_info(tmp_annotations_8);

            frame_a1afa578cdf596443951a3a030d4185c_4->m_frame.f_lineno = 137;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__1_NetRCInfo_131, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_dict_key_6 = mod_consts[133];
            tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
            tmp_annotations_9 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_20;
                PyObject *tmp_expression_value_21;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_subscript_value_10;
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[15];
                tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_expression_value_21 == NULL)) {
                    tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                }

                assert(!(tmp_expression_value_21 == NULL));
                tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[234]);
                if (tmp_expression_value_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 152;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_expression_value_23 == NULL)) {
                    tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                }

                assert(!(tmp_expression_value_23 == NULL));
                tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[255]);
                if (tmp_expression_value_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_20);

                    exception_lineno = 152;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_subscript_value_10 = mod_consts[256];
                tmp_subscript_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_22);
                if (tmp_subscript_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_20);

                    exception_lineno = 152;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_20);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 152;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_9);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;


            tmp_dictset_value = MAKE_FUNCTION_httpx$_utils$$$function__9_get_credentials(tmp_annotations_9);

            tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__1_NetRCInfo_131, mod_consts[257], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a1afa578cdf596443951a3a030d4185c_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a1afa578cdf596443951a3a030d4185c_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a1afa578cdf596443951a3a030d4185c_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a1afa578cdf596443951a3a030d4185c_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_a1afa578cdf596443951a3a030d4185c_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_7;
        skip_nested_handling_3:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_4 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[248];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[259];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_httpx$_utils$$$class__1_NetRCInfo_131;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_360f0b15c783d8c9693f05364e8cf07d->m_frame.f_lineno = 131;
            tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 131;

                goto try_except_handler_7;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_40;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_39 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_39);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_httpx$_utils$$$class__1_NetRCInfo_131);
        locals_httpx$_utils$$$class__1_NetRCInfo_131 = NULL;
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

        Py_DECREF(locals_httpx$_utils$$$class__1_NetRCInfo_131);
        locals_httpx$_utils$$$class__1_NetRCInfo_131 = NULL;
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
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
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

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 131;
        goto try_except_handler_5;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_39);
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_11;
        tmp_dict_key_7 = mod_consts[15];
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_expression_value_25 == NULL));
        tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[234]);
        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_11);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));


        tmp_assign_source_41 = MAKE_FUNCTION_httpx$_utils$$$function__10_get_ca_bundle_from_env(tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[260], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_dict_key_8 = mod_consts[230];
        tmp_dict_value_8 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_11 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_26;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_13;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[15];
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_27 == NULL));
            tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[251]);
            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_5;
            }
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_29 == NULL));
            tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[261]);
            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_26);

                exception_lineno = 174;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_13 = mod_consts[256];
            tmp_subscript_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_13);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_subscript_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_26);

                exception_lineno = 174;

                goto dict_build_exception_5;
            }
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_12);
            Py_DECREF(tmp_expression_value_26);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_annotations_11);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;


        tmp_assign_source_42 = MAKE_FUNCTION_httpx$_utils$$$function__11_parse_header_links(tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_annotations_12;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        tmp_dict_key_9 = mod_consts[263];
        tmp_dict_value_9 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_12 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_30;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_14;
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[15];
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_31 == NULL));
            tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[234]);
            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_14 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_30);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_annotations_12);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;


        tmp_assign_source_43 = MAKE_FUNCTION_httpx$_utils$$$function__12_parse_content_type_charset(tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = PySet_New(mod_consts[265]);
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_annotations_13;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_36;
        tmp_dict_key_10 = mod_consts[94];
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_expression_value_33 == NULL));
        tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[266]);
        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_expression_value_35 == NULL));
        tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[255]);
        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_32);

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_expression_value_36 == NULL));
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[267]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_32);
            Py_DECREF(tmp_expression_value_34);

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_37;
            PyTuple_SET_ITEM(tmp_subscript_value_16, 0, tmp_tuple_element_2);
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_37 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[267]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_16, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_expression_value_32);
        Py_DECREF(tmp_expression_value_34);
        Py_DECREF(tmp_subscript_value_16);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_subscript_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_16);
        Py_DECREF(tmp_expression_value_34);
        Py_DECREF(tmp_subscript_value_16);
        if (tmp_subscript_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_32);

            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_15);
        Py_DECREF(tmp_expression_value_32);
        Py_DECREF(tmp_subscript_value_15);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto frame_exception_exit_1;
        }
        tmp_annotations_13 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_38;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_expression_value_42;
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[15];
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_39 == NULL));
            tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[268]);
            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_7;
            }
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_41 == NULL));
            tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[255]);
            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_38);

                exception_lineno = 224;

                goto dict_build_exception_7;
            }
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_42 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[267]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_expression_value_40);

                exception_lineno = 224;

                goto dict_build_exception_7;
            }
            tmp_subscript_value_18 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_43;
                PyTuple_SET_ITEM(tmp_subscript_value_18, 0, tmp_tuple_element_3);
                tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_expression_value_43 == NULL)) {
                    tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                }

                assert(!(tmp_expression_value_43 == NULL));
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[267]);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 224;

                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_18, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_expression_value_38);
            Py_DECREF(tmp_expression_value_40);
            Py_DECREF(tmp_subscript_value_18);
            goto dict_build_exception_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_subscript_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_18);
            Py_DECREF(tmp_expression_value_40);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_subscript_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_38);

                exception_lineno = 224;

                goto dict_build_exception_7;
            }
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_17);
            Py_DECREF(tmp_expression_value_38);
            Py_DECREF(tmp_subscript_value_17);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_annotations_13);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;


        tmp_assign_source_45 = MAKE_FUNCTION_httpx$_utils$$$function__13_obfuscate_sensitive_headers(tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = Py_False;
        UPDATE_STRING_DICT0(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[269];
        UPDATE_STRING_DICT0(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_47);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_44;
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_8;
        }
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[126]);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_8;
        }
        tmp_assign_source_48 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_48, 0, tmp_tuple_element_4);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_49 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_8;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_45 = tmp_class_creation_2__bases;
        tmp_subscript_value_19 = mod_consts[39];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_45, tmp_subscript_value_19, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_8;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_1 = tmp_class_creation_2__bases;
        tmp_assign_source_51 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_51;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_46 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_46, mod_consts[270]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_47 = tmp_class_creation_2__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[270]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_8;
        }
        tmp_tuple_element_5 = mod_consts[126];
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_5 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
        frame_360f0b15c783d8c9693f05364e8cf07d->m_frame.f_lineno = 235;
        tmp_assign_source_52 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_2);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_52;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_48;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_48 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_48, mod_consts[271]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_8;
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
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[272];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_1 = mod_consts[273];
        tmp_getattr_default_1 = mod_consts[274];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_49;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_value_49 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_49 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[273]);
            Py_DECREF(tmp_expression_value_49);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 235;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_53;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_54;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_httpx$_utils$$$class__2_Logger_235 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[246];
        tmp_res = PyObject_SetItem(locals_httpx$_utils$$$class__2_Logger_235, mod_consts[247], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[126];
        tmp_res = PyObject_SetItem(locals_httpx$_utils$$$class__2_Logger_235, mod_consts[249], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_10;
        }
        frame_08f4b4d80979553d14e4aff7bc823eb4_5 = MAKE_CLASS_FRAME(codeobj_08f4b4d80979553d14e4aff7bc823eb4, module_httpx$_utils, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_08f4b4d80979553d14e4aff7bc823eb4_5);
        assert(Py_REFCNT(frame_08f4b4d80979553d14e4aff7bc823eb4_5) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            tmp_dict_key_11 = mod_consts[88];
            tmp_dict_value_11 = PyObject_GetItem(locals_httpx$_utils$$$class__2_Logger_235, mod_consts[275]);

            if (tmp_dict_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_11 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_11);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_annotations_14 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_50;
                PyObject *tmp_expression_value_51;
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[120];
                tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_expression_value_50 == NULL)) {
                    tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                }

                assert(!(tmp_expression_value_50 == NULL));
                tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[121]);
                if (tmp_dict_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 237;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[122];
                tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

                if (unlikely(tmp_expression_value_51 == NULL)) {
                    tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
                }

                assert(!(tmp_expression_value_51 == NULL));
                tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[121]);
                if (tmp_dict_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 237;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[15];
                tmp_dict_value_11 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_annotations_14);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;


            tmp_dictset_value = MAKE_FUNCTION_httpx$_utils$$$function__14_trace(tmp_annotations_14);

            tmp_res = PyObject_SetItem(locals_httpx$_utils$$$class__2_Logger_235, mod_consts[123], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_08f4b4d80979553d14e4aff7bc823eb4_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_08f4b4d80979553d14e4aff7bc823eb4_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_08f4b4d80979553d14e4aff7bc823eb4_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_08f4b4d80979553d14e4aff7bc823eb4_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_08f4b4d80979553d14e4aff7bc823eb4_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_10;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_httpx$_utils$$$class__2_Logger_235, mod_consts[277], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_10;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_3;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[126];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_httpx$_utils$$$class__2_Logger_235;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
            frame_360f0b15c783d8c9693f05364e8cf07d->m_frame.f_lineno = 235;
            tmp_assign_source_55 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;

                goto try_except_handler_10;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_55;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_54 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_54);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_httpx$_utils$$$class__2_Logger_235);
        locals_httpx$_utils$$$class__2_Logger_235 = NULL;
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

        Py_DECREF(locals_httpx$_utils$$$class__2_Logger_235);
        locals_httpx$_utils$$$class__2_Logger_235 = NULL;
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
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
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

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 235;
        goto try_except_handler_8;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_54);
    }
    goto try_end_2;
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
    try_end_2:;
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
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_annotations_15;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        tmp_dict_key_12 = mod_consts[278];
        tmp_dict_value_12 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_15 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[15];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[126]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto dict_build_exception_9;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_9;
        // Exception handling pass through code for dict_build:
        dict_build_exception_9:;
        Py_DECREF(tmp_annotations_15);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_9:;


        tmp_assign_source_56 = MAKE_FUNCTION_httpx$_utils$$$function__15_get_logger(tmp_annotations_15);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_annotations_16;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        tmp_dict_key_13 = mod_consts[78];
        tmp_dict_value_13 = mod_consts[186];
        tmp_annotations_16 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_52;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_subscript_value_20;
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[15];
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_53 == NULL));
            tmp_expression_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[234]);
            if (tmp_expression_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_20 = (PyObject *)&PyLong_Type;
            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_20);
            Py_DECREF(tmp_expression_value_52);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 275;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_10;
        // Exception handling pass through code for dict_build:
        dict_build_exception_10:;
        Py_DECREF(tmp_annotations_16);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_10:;


        tmp_assign_source_57 = MAKE_FUNCTION_httpx$_utils$$$function__16_port_or_default(tmp_annotations_16);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_annotations_17;
        tmp_annotations_17 = DICT_COPY(mod_consts[280]);


        tmp_assign_source_58 = MAKE_FUNCTION_httpx$_utils$$$function__17_same_origin(tmp_annotations_17);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_annotations_18;
        tmp_annotations_18 = DICT_COPY(mod_consts[282]);


        tmp_assign_source_59 = MAKE_FUNCTION_httpx$_utils$$$function__18_is_https_redirect(tmp_annotations_18);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_annotations_19;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_tuple_element_8;
        tmp_dict_key_14 = mod_consts[15];
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_expression_value_55 == NULL));
        tmp_expression_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[261]);
        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_21 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_56;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_subscript_value_22;
            PyTuple_SET_ITEM0(tmp_subscript_value_21, 0, tmp_tuple_element_8);
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_57 == NULL));
            tmp_expression_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[234]);
            if (tmp_expression_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;

                goto tuple_build_exception_4;
            }
            tmp_subscript_value_22 = (PyObject *)&PyUnicode_Type;
            tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_56, tmp_subscript_value_22);
            Py_DECREF(tmp_expression_value_56);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 307;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_21, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_expression_value_54);
        Py_DECREF(tmp_subscript_value_21);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_21);
        Py_DECREF(tmp_expression_value_54);
        Py_DECREF(tmp_subscript_value_21);
        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_annotations_19 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_14, tmp_dict_value_14);
        Py_DECREF(tmp_dict_value_14);
        assert(!(tmp_res != 0));


        tmp_assign_source_60 = MAKE_FUNCTION_httpx$_utils$$$function__19_get_environment_proxies(tmp_annotations_19);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_defaults_4;
        PyObject *tmp_annotations_20;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_23;
        tmp_defaults_4 = mod_consts[285];
        tmp_dict_key_15 = mod_consts[230];
        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_59 == NULL)) {
            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_expression_value_59 == NULL));
        tmp_expression_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[231]);
        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_23 = mod_consts[232];
        tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_23);
        Py_DECREF(tmp_expression_value_58);
        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_annotations_20 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_15, tmp_dict_value_15);
        Py_DECREF(tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[233];
        tmp_dict_value_15 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[15];
        tmp_dict_value_15 = (PyObject *)&PyBytes_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_61 = MAKE_FUNCTION_httpx$_utils$$$function__20_to_bytes(tmp_defaults_4, tmp_annotations_20);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_defaults_5;
        PyObject *tmp_annotations_21;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_subscript_value_24;
        tmp_defaults_5 = mod_consts[285];
        tmp_dict_key_16 = mod_consts[230];
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_expression_value_61 == NULL));
        tmp_expression_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[231]);
        if (tmp_expression_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_24 = mod_consts[232];
        tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_60, tmp_subscript_value_24);
        Py_DECREF(tmp_expression_value_60);
        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_annotations_21 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_16, tmp_dict_value_16);
        Py_DECREF(tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = mod_consts[233];
        tmp_dict_value_16 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = mod_consts[15];
        tmp_dict_value_16 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_62 = MAKE_FUNCTION_httpx$_utils$$$function__21_to_str(tmp_defaults_5, tmp_annotations_21);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_annotations_22;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        tmp_dict_key_17 = mod_consts[230];
        tmp_dict_value_17 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_22 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_62;
            PyObject *tmp_expression_value_63;
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[287];
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_62 == NULL));
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[267]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[15];
            tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_63 == NULL)) {
                tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_63 == NULL));
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[267]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;

                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_11;
        // Exception handling pass through code for dict_build:
        dict_build_exception_11:;
        Py_DECREF(tmp_annotations_22);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_11:;


        tmp_assign_source_63 = MAKE_FUNCTION_httpx$_utils$$$function__22_to_bytes_or_str(tmp_annotations_22);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_annotations_23;
        tmp_annotations_23 = DICT_COPY(mod_consts[288]);


        tmp_assign_source_64 = MAKE_FUNCTION_httpx$_utils$$$function__23_unquote(tmp_annotations_23);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[289], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_annotations_24;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_subscript_value_25;
        tmp_dict_key_18 = mod_consts[290];
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_expression_value_65 == NULL));
        tmp_expression_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[234]);
        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_25 = (PyObject *)&PyUnicode_Type;
        tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_64, tmp_subscript_value_25);
        Py_DECREF(tmp_expression_value_64);
        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_annotations_24 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_66;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_subscript_value_26;
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[15];
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_67 == NULL));
            tmp_expression_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[234]);
            if (tmp_expression_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_26 = (PyObject *)&PyUnicode_Type;
            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_66, tmp_subscript_value_26);
            Py_DECREF(tmp_expression_value_66);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 361;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_12;
        // Exception handling pass through code for dict_build:
        dict_build_exception_12:;
        Py_DECREF(tmp_annotations_24);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_12:;


        tmp_assign_source_65 = MAKE_FUNCTION_httpx$_utils$$$function__24_guess_content_type(tmp_annotations_24);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[291], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_annotations_25;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        PyObject *tmp_expression_value_68;
        tmp_dict_key_19 = mod_consts[292];
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_expression_value_68 == NULL));
        tmp_dict_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[121]);
        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto frame_exception_exit_1;
        }
        tmp_annotations_25 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_69;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_subscript_value_27;
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[15];
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_70 == NULL));
            tmp_expression_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[234]);
            if (tmp_expression_value_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;

                goto dict_build_exception_13;
            }
            tmp_subscript_value_27 = (PyObject *)&PyLong_Type;
            tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_69, tmp_subscript_value_27);
            Py_DECREF(tmp_expression_value_69);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;

                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_13;
        // Exception handling pass through code for dict_build:
        dict_build_exception_13:;
        Py_DECREF(tmp_annotations_25);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_13:;


        tmp_assign_source_66 = MAKE_FUNCTION_httpx$_utils$$$function__25_peek_filelike_length(tmp_annotations_25);

        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_67;
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_68;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_69;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_httpx$_utils$$$class__3_Timer_392 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[246];
        tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__3_Timer_392, mod_consts[247], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[294];
        tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__3_Timer_392, mod_consts[249], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_26;
            tmp_annotations_26 = DICT_COPY(mod_consts[295]);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_utils$$$function__26__get_time(tmp_annotations_26);

            tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__3_Timer_392, mod_consts[175], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_27;
            tmp_annotations_27 = DICT_COPY(mod_consts[296]);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_utils$$$function__27_sync_start(tmp_annotations_27);

            tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__3_Timer_392, mod_consts[297], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_28;
            tmp_annotations_28 = DICT_COPY(mod_consts[296]);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_utils$$$function__28_async_start(tmp_annotations_28);

            tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__3_Timer_392, mod_consts[179], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_29;
            tmp_annotations_29 = DICT_COPY(mod_consts[295]);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_utils$$$function__29_sync_elapsed(tmp_annotations_29);

            tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__3_Timer_392, mod_consts[299], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_30;
            tmp_annotations_30 = DICT_COPY(mod_consts[295]);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_utils$$$function__30_async_elapsed(tmp_annotations_30);

            tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__3_Timer_392, mod_consts[181], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_70;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_4;
            tmp_called_value_7 = (PyObject *)&PyType_Type;
            tmp_tuple_element_9 = mod_consts[294];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[259];
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_httpx$_utils$$$class__3_Timer_392;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
            frame_360f0b15c783d8c9693f05364e8cf07d->m_frame.f_lineno = 392;
            tmp_assign_source_70 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 392;

                goto try_except_handler_13;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_70;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_69 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_69);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_httpx$_utils$$$class__3_Timer_392);
        locals_httpx$_utils$$$class__3_Timer_392 = NULL;
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

        Py_DECREF(locals_httpx$_utils$$$class__3_Timer_392);
        locals_httpx$_utils$$$class__3_Timer_392 = NULL;
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
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
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

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 392;
        goto try_except_handler_11;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_69);
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_71;
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_72;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_73;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_httpx$_utils$$$class__4_URLPattern_423 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        tmp_dictset_value = mod_consts[246];
        tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__4_URLPattern_423, mod_consts[247], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[301];
        tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__4_URLPattern_423, mod_consts[208], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[207];
        tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__4_URLPattern_423, mod_consts[249], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_31;
            tmp_annotations_31 = DICT_COPY(mod_consts[302]);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_utils$$$function__31___init__(tmp_annotations_31);

            tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__4_URLPattern_423, mod_consts[252], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_32;
            tmp_annotations_32 = DICT_COPY(mod_consts[304]);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_utils$$$function__32_matches(tmp_annotations_32);

            tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__4_URLPattern_423, mod_consts[305], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        frame_3c9c39b8a74ff48e15fcf52e8d1cf5a8_6 = MAKE_CLASS_FRAME(codeobj_3c9c39b8a74ff48e15fcf52e8d1cf5a8, module_httpx$_utils, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3c9c39b8a74ff48e15fcf52e8d1cf5a8_6);
        assert(Py_REFCNT(frame_3c9c39b8a74ff48e15fcf52e8d1cf5a8_6) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_33;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_subscript_value_28;
            tmp_called_value_8 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_20 = mod_consts[15];
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_72 == NULL));
            tmp_expression_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[255]);
            if (tmp_expression_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_subscript_value_28 = mod_consts[307];
            tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_71, tmp_subscript_value_28);
            Py_DECREF(tmp_expression_value_71);
            if (tmp_dict_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_annotations_33 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));


            tmp_args_element_value_4 = MAKE_FUNCTION_httpx$_utils$$$function__33_priority(tmp_annotations_33);

            frame_3c9c39b8a74ff48e15fcf52e8d1cf5a8_6->m_frame.f_lineno = 508;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 508;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__4_URLPattern_423, mod_consts[206], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 509;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_34;
            tmp_annotations_34 = DICT_COPY(mod_consts[309]);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_utils$$$function__34___hash__(tmp_annotations_34);

            tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__4_URLPattern_423, mod_consts[310], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_35;
            tmp_annotations_35 = DICT_COPY(mod_consts[312]);


            tmp_dictset_value = MAKE_FUNCTION_httpx$_utils$$$function__35___lt__(tmp_annotations_35);

            tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__4_URLPattern_423, mod_consts[313], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_36;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_expression_value_73;
            tmp_dict_key_21 = mod_consts[204];
            tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[13]);

            if (unlikely(tmp_expression_value_73 == NULL)) {
                tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
            }

            assert(!(tmp_expression_value_73 == NULL));
            tmp_dict_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[121]);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 528;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_annotations_36 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[15];
            tmp_dict_value_21 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_21, tmp_dict_value_21);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpx$_utils$$$function__36___eq__(tmp_annotations_36);

            tmp_res = PyDict_SetItem(locals_httpx$_utils$$$class__4_URLPattern_423, mod_consts[315], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 528;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3c9c39b8a74ff48e15fcf52e8d1cf5a8_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3c9c39b8a74ff48e15fcf52e8d1cf5a8_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3c9c39b8a74ff48e15fcf52e8d1cf5a8_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3c9c39b8a74ff48e15fcf52e8d1cf5a8_6,
            type_description_2,
            outline_5_var___class__
        );



        assertFrameObject(frame_3c9c39b8a74ff48e15fcf52e8d1cf5a8_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_16;
        skip_nested_handling_5:;
        {
            PyObject *tmp_assign_source_74;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_5;
            tmp_called_value_9 = (PyObject *)&PyType_Type;
            tmp_tuple_element_10 = mod_consts[207];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[259];
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_httpx$_utils$$$class__4_URLPattern_423;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_4__class_decl_dict;
            frame_360f0b15c783d8c9693f05364e8cf07d->m_frame.f_lineno = 423;
            tmp_assign_source_74 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;

                goto try_except_handler_16;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_74;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_assign_source_73 = outline_5_var___class__;
        Py_INCREF(tmp_assign_source_73);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        Py_DECREF(locals_httpx$_utils$$$class__4_URLPattern_423);
        locals_httpx$_utils$$$class__4_URLPattern_423 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_httpx$_utils$$$class__4_URLPattern_423);
        locals_httpx$_utils$$$class__4_URLPattern_423 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 423;
        goto try_except_handler_14;
        outline_result_6:;
        UPDATE_STRING_DICT1(moduledict_httpx$_utils, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_73);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_360f0b15c783d8c9693f05364e8cf07d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_360f0b15c783d8c9693f05364e8cf07d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_360f0b15c783d8c9693f05364e8cf07d, exception_lineno);
    }



    assertFrameObject(frame_360f0b15c783d8c9693f05364e8cf07d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpx._utils", false);

    Py_INCREF(module_httpx$_utils);
    return module_httpx$_utils;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpx$_utils, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("httpx$_utils", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
