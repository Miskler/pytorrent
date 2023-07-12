/* Generated code for Python module 'flet.utils'
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

/* The "module_flet$utils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_flet$utils;
PyDictObject *moduledict_flet$utils;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[198];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[198];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("flet.utils"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 198; i++) {
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
void checkModuleConstants_flet$utils(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 198; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_75fa065611665d07ec59e4d8fa4d8220;
static PyCodeObject *codeobj_15547d827a7a0b9523e3a7eb88142663;
static PyCodeObject *codeobj_b9406bbd9a57fbe03f0ddaa8a4b4697c;
static PyCodeObject *codeobj_fb6c1af40530b52f839d9c92046722a7;
static PyCodeObject *codeobj_65c27e1c4a5b04a637738542cedf6817;
static PyCodeObject *codeobj_64534da71f28c06b19aee5d351187fab;
static PyCodeObject *codeobj_9ed91713c5b196434b0a00f8f9ffc175;
static PyCodeObject *codeobj_364490723e7d33db873d7586fddeeed2;
static PyCodeObject *codeobj_1d8ae5437de4c8d7d1e35f100b4b7dec;
static PyCodeObject *codeobj_8da470c32aa5905e629c9c23982d1197;
static PyCodeObject *codeobj_bbeb6a7dd8968615116b1bebfcf34937;
static PyCodeObject *codeobj_dc85c06204427a969d1e5f3620747fd1;
static PyCodeObject *codeobj_ded5ca71b6338243e14792f136953dec;
static PyCodeObject *codeobj_d9325d2ed8cd89ab76277cafa9416b7b;
static PyCodeObject *codeobj_7ec6ef7b6c3b4cb9439fb13eb83954fc;
static PyCodeObject *codeobj_ce00a7ad79c899dd3f2c035b75e77ec6;
static PyCodeObject *codeobj_38837b004ff0066ec1412ef2cc16b45a;
static PyCodeObject *codeobj_3e9fafce238d3f3896af5c570f24b7c1;
static PyCodeObject *codeobj_ca9e30c2237d4d0cd52d1046a1bc4d50;
static PyCodeObject *codeobj_322fd605a4d3a6a533c69c643a20448c;
static PyCodeObject *codeobj_727c4698e3df956752773fac06d858af;
static PyCodeObject *codeobj_aa783e7992516925552ecfe81149935f;
static PyCodeObject *codeobj_ff56ba812f1ca807dc37e98907b43830;
static PyCodeObject *codeobj_9f828ffeb3eabe7c789451fde55db5be;
static PyCodeObject *codeobj_847eb372fa865de07757abc46dfc331d;
static PyCodeObject *codeobj_d4c084ec69e7c5b07fc8144bb8e7ae76;
static PyCodeObject *codeobj_8dee43b4493f5c43f2cee9f0b97c0fe7;
static PyCodeObject *codeobj_3b2e2a407f532314ab8c5408315d6d59;
static PyCodeObject *codeobj_61a7063d9c6a6f34b56a176aed04c0c9;
static PyCodeObject *codeobj_fe9855e1094ca25a5fa491570fe690fc;
static PyCodeObject *codeobj_85c7b306f7e1e2ef4a305d86f61bf39d;
static PyCodeObject *codeobj_d758e581af86da56e00d91c72c47145f;
static PyCodeObject *codeobj_bf4e88f57908da376f447bbd1c652d77;
static PyCodeObject *codeobj_01171a4e2d08dc6f7e7e1fed20a8bb58;
static PyCodeObject *codeobj_e4711b772435e74d3f67c2c7c4d63280;
static PyCodeObject *codeobj_b1e35b63012f913b0f6352afd8ca6b7f;
static PyCodeObject *codeobj_4eee296e7982530d44a517b53e0b7863;
static PyCodeObject *codeobj_cc84b91fe7f50337ca18aa7d152b6174;
static PyCodeObject *codeobj_e566556624cc2781b3e6d82b4d86495b;
static PyCodeObject *codeobj_96cd3f95e3035a10037a8212a9481a85;
static PyCodeObject *codeobj_3d37a63d4e6d20a051eabde725f3e01d;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[104]; CHECK_OBJECT(module_filename_obj);
    codeobj_75fa065611665d07ec59e4d8fa4d8220 = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[175], NULL, 1, 0, 0);
    codeobj_15547d827a7a0b9523e3a7eb88142663 = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[176], NULL, 1, 0, 0);
    codeobj_b9406bbd9a57fbe03f0ddaa8a4b4697c = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[177], NULL, 2, 0, 0);
    codeobj_fb6c1af40530b52f839d9c92046722a7 = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[178], NULL, 2, 0, 0);
    codeobj_65c27e1c4a5b04a637738542cedf6817 = MAKE_CODE_OBJECT(module_filename_obj, 221, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[178], NULL, 2, 0, 0);
    codeobj_64534da71f28c06b19aee5d351187fab = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[178], NULL, 2, 0, 0);
    codeobj_9ed91713c5b196434b0a00f8f9ffc175 = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[178], NULL, 2, 0, 0);
    codeobj_364490723e7d33db873d7586fddeeed2 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[179], mod_consts[179], NULL, NULL, 0, 0, 0);
    codeobj_1d8ae5437de4c8d7d1e35f100b4b7dec = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_NOFREE, mod_consts[131], mod_consts[131], mod_consts[180], NULL, 0, 0, 0);
    codeobj_8da470c32aa5905e629c9c23982d1197 = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[94], mod_consts[94], mod_consts[178], NULL, 2, 0, 0);
    codeobj_bbeb6a7dd8968615116b1bebfcf34937 = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[151], mod_consts[151], mod_consts[176], NULL, 1, 0, 0);
    codeobj_dc85c06204427a969d1e5f3620747fd1 = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[149], mod_consts[149], mod_consts[178], NULL, 2, 0, 0);
    codeobj_ded5ca71b6338243e14792f136953dec = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[155], mod_consts[155], mod_consts[176], NULL, 1, 0, 0);
    codeobj_d9325d2ed8cd89ab76277cafa9416b7b = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[153], mod_consts[153], mod_consts[176], NULL, 1, 0, 0);
    codeobj_7ec6ef7b6c3b4cb9439fb13eb83954fc = MAKE_CODE_OBJECT(module_filename_obj, 258, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[176], NULL, 1, 0, 0);
    codeobj_ce00a7ad79c899dd3f2c035b75e77ec6 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[115], mod_consts[115], mod_consts[181], NULL, 0, 0, 0);
    codeobj_38837b004ff0066ec1412ef2cc16b45a = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[182], NULL, 0, 0, 0);
    codeobj_3e9fafce238d3f3896af5c570f24b7c1 = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], mod_consts[125], mod_consts[183], NULL, 0, 0, 0);
    codeobj_ca9e30c2237d4d0cd52d1046a1bc4d50 = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[123], mod_consts[123], NULL, NULL, 0, 0, 0);
    codeobj_322fd605a4d3a6a533c69c643a20448c = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[61], NULL, NULL, 0, 0, 0);
    codeobj_727c4698e3df956752773fac06d858af = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[124], mod_consts[124], mod_consts[184], NULL, 0, 0, 0);
    codeobj_aa783e7992516925552ecfe81149935f = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[114], mod_consts[114], mod_consts[185], NULL, 0, 0, 0);
    codeobj_ff56ba812f1ca807dc37e98907b43830 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[34], mod_consts[34], mod_consts[186], mod_consts[187], 1, 0, 0);
    codeobj_9f828ffeb3eabe7c789451fde55db5be = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[111], mod_consts[111], NULL, NULL, 0, 0, 0);
    codeobj_847eb372fa865de07757abc46dfc331d = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[188], NULL, 0, 0, 0);
    codeobj_d4c084ec69e7c5b07fc8144bb8e7ae76 = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[122], mod_consts[122], mod_consts[189], NULL, 1, 0, 0);
    codeobj_8dee43b4493f5c43f2cee9f0b97c0fe7 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], NULL, NULL, 0, 0, 0);
    codeobj_3b2e2a407f532314ab8c5408315d6d59 = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], NULL, NULL, 0, 0, 0);
    codeobj_61a7063d9c6a6f34b56a176aed04c0c9 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[190], NULL, 2, 0, 0);
    codeobj_fe9855e1094ca25a5fa491570fe690fc = MAKE_CODE_OBJECT(module_filename_obj, 254, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[160], mod_consts[160], mod_consts[176], NULL, 1, 0, 0);
    codeobj_85c7b306f7e1e2ef4a305d86f61bf39d = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[189], NULL, 1, 0, 0);
    codeobj_d758e581af86da56e00d91c72c47145f = MAKE_CODE_OBJECT(module_filename_obj, 247, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[102], mod_consts[102], mod_consts[191], NULL, 3, 0, 0);
    codeobj_bf4e88f57908da376f447bbd1c652d77 = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[176], NULL, 1, 0, 0);
    codeobj_01171a4e2d08dc6f7e7e1fed20a8bb58 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[192], NULL, 3, 1, 0);
    codeobj_e4711b772435e74d3f67c2c7c4d63280 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[128], mod_consts[128], mod_consts[193], NULL, 1, 0, 0);
    codeobj_b1e35b63012f913b0f6352afd8ca6b7f = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[118], mod_consts[118], mod_consts[194], NULL, 2, 0, 0);
    codeobj_4eee296e7982530d44a517b53e0b7863 = MAKE_CODE_OBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[195], NULL, 2, 0, 0);
    codeobj_cc84b91fe7f50337ca18aa7d152b6174 = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[168], mod_consts[168], mod_consts[196], NULL, 2, 0, 0);
    codeobj_e566556624cc2781b3e6d82b4d86495b = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[170], mod_consts[170], mod_consts[197], NULL, 2, 0, 0);
    codeobj_96cd3f95e3035a10037a8212a9481a85 = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[164], mod_consts[164], mod_consts[196], NULL, 2, 0, 0);
    codeobj_3d37a63d4e6d20a051eabde725f3e01d = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[166], mod_consts[166], mod_consts[196], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_flet$utils$$$function__17_slugify$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_flet$utils$$$function__10_safe_tar_extractall(PyObject *defaults, PyObject *kw_defaults);


static PyObject *MAKE_FUNCTION_flet$utils$$$function__11_is_localhost_url();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__12_get_package_root_dir();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__13_get_package_bin_dir();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__14_get_package_web_dir();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__15_get_free_tcp_port();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__16_get_current_script_dir();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__17_slugify(PyObject *annotations);


static PyObject *MAKE_FUNCTION_flet$utils$$$function__18_lambda();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__19_lambda();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__1_is_windows();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__20_lambda();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__21_lambda();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__22_lambda();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__23_lambda(PyObject *defaults);


static PyObject *MAKE_FUNCTION_flet$utils$$$function__24___eq__();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__25___ne__();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__26___iter__();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__27___str__();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__28___repr__();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__29_polar();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__2_is_linux();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__30_magnitude();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__31_degrees();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__32_radians();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__33_with_x();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__34_with_y();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__35_with_magnitude();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__36_with_radians();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__37_with_degrees();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__3_is_linux_server();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__4_is_macos();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__5_get_platform();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__6_get_arch();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__7_open_in_browser();


static PyObject *MAKE_FUNCTION_flet$utils$$$function__8_which(PyObject *defaults);


static PyObject *MAKE_FUNCTION_flet$utils$$$function__8_which$$$function__1_is_exe(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_flet$utils$$$function__9_is_within_directory();


// The module function definitions.
static PyObject *impl_flet$utils$$$function__1_is_windows(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_3b2e2a407f532314ab8c5408315d6d59;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3b2e2a407f532314ab8c5408315d6d59 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3b2e2a407f532314ab8c5408315d6d59)) {
        Py_XDECREF(cache_frame_3b2e2a407f532314ab8c5408315d6d59);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3b2e2a407f532314ab8c5408315d6d59 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3b2e2a407f532314ab8c5408315d6d59 = MAKE_FUNCTION_FRAME(codeobj_3b2e2a407f532314ab8c5408315d6d59, module_flet$utils, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3b2e2a407f532314ab8c5408315d6d59->m_type_description == NULL);
    frame_3b2e2a407f532314ab8c5408315d6d59 = cache_frame_3b2e2a407f532314ab8c5408315d6d59;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3b2e2a407f532314ab8c5408315d6d59);
    assert(Py_REFCNT(frame_3b2e2a407f532314ab8c5408315d6d59) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        frame_3b2e2a407f532314ab8c5408315d6d59->m_frame.f_lineno = 12;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

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
        exception_tb = MAKE_TRACEBACK(frame_3b2e2a407f532314ab8c5408315d6d59, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3b2e2a407f532314ab8c5408315d6d59->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3b2e2a407f532314ab8c5408315d6d59, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3b2e2a407f532314ab8c5408315d6d59,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_3b2e2a407f532314ab8c5408315d6d59 == cache_frame_3b2e2a407f532314ab8c5408315d6d59) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3b2e2a407f532314ab8c5408315d6d59);
        cache_frame_3b2e2a407f532314ab8c5408315d6d59 = NULL;
    }

    assertFrameObject(frame_3b2e2a407f532314ab8c5408315d6d59);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_flet$utils$$$function__2_is_linux(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_9f828ffeb3eabe7c789451fde55db5be;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9f828ffeb3eabe7c789451fde55db5be = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9f828ffeb3eabe7c789451fde55db5be)) {
        Py_XDECREF(cache_frame_9f828ffeb3eabe7c789451fde55db5be);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9f828ffeb3eabe7c789451fde55db5be == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9f828ffeb3eabe7c789451fde55db5be = MAKE_FUNCTION_FRAME(codeobj_9f828ffeb3eabe7c789451fde55db5be, module_flet$utils, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9f828ffeb3eabe7c789451fde55db5be->m_type_description == NULL);
    frame_9f828ffeb3eabe7c789451fde55db5be = cache_frame_9f828ffeb3eabe7c789451fde55db5be;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9f828ffeb3eabe7c789451fde55db5be);
    assert(Py_REFCNT(frame_9f828ffeb3eabe7c789451fde55db5be) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        frame_9f828ffeb3eabe7c789451fde55db5be->m_frame.f_lineno = 16;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

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
        exception_tb = MAKE_TRACEBACK(frame_9f828ffeb3eabe7c789451fde55db5be, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9f828ffeb3eabe7c789451fde55db5be->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9f828ffeb3eabe7c789451fde55db5be, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9f828ffeb3eabe7c789451fde55db5be,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_9f828ffeb3eabe7c789451fde55db5be == cache_frame_9f828ffeb3eabe7c789451fde55db5be) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9f828ffeb3eabe7c789451fde55db5be);
        cache_frame_9f828ffeb3eabe7c789451fde55db5be = NULL;
    }

    assertFrameObject(frame_9f828ffeb3eabe7c789451fde55db5be);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_flet$utils$$$function__3_is_linux_server(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_file = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_847eb372fa865de07757abc46dfc331d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_847eb372fa865de07757abc46dfc331d = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_847eb372fa865de07757abc46dfc331d)) {
        Py_XDECREF(cache_frame_847eb372fa865de07757abc46dfc331d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_847eb372fa865de07757abc46dfc331d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_847eb372fa865de07757abc46dfc331d = MAKE_FUNCTION_FRAME(codeobj_847eb372fa865de07757abc46dfc331d, module_flet$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_847eb372fa865de07757abc46dfc331d->m_type_description == NULL);
    frame_847eb372fa865de07757abc46dfc331d = cache_frame_847eb372fa865de07757abc46dfc331d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_847eb372fa865de07757abc46dfc331d);
    assert(Py_REFCNT(frame_847eb372fa865de07757abc46dfc331d) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "No";
            goto frame_exception_exit_1;
        }
        frame_847eb372fa865de07757abc46dfc331d->m_frame.f_lineno = 20;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "No";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "No";
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_exists_arg_1;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_1;
        tmp_exists_arg_1 = mod_consts[4];
        tmp_capi_result_1 = OS_PATH_FILE_EXISTS(tmp_exists_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "No";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_capi_result_1);

            exception_lineno = 23;
            type_description_1 = "No";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_capi_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        tmp_open_filename_1 = mod_consts[4];
        tmp_open_mode_1 = mod_consts[5];
        tmp_assign_source_1 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "No";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_1 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "No";
            goto try_except_handler_2;
        }
        frame_847eb372fa865de07757abc46dfc331d->m_frame.f_lineno = 24;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "No";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[7]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "No";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_5 = tmp_with_1__enter;
        assert(var_file == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_file = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_2;
        tmp_cmp_expr_left_2 = mod_consts[8];
        CHECK_OBJECT(var_file);
        tmp_called_instance_2 = var_file;
        frame_847eb372fa865de07757abc46dfc331d->m_frame.f_lineno = 25;
        tmp_cmp_expr_right_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[9]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "No";
            goto try_except_handler_4;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "No";
            goto try_except_handler_4;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    branch_no_3:;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_847eb372fa865de07757abc46dfc331d, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_847eb372fa865de07757abc46dfc331d, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_2 = tmp_with_1__exit;
        tmp_args_element_value_1 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_2 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_3 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_847eb372fa865de07757abc46dfc331d->m_frame.f_lineno = 24;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "No";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "No";
            goto try_except_handler_5;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 24;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_847eb372fa865de07757abc46dfc331d->m_frame) frame_847eb372fa865de07757abc46dfc331d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "No";
    goto try_except_handler_5;
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 24;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_847eb372fa865de07757abc46dfc331d->m_frame) frame_847eb372fa865de07757abc46dfc331d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "No";
    goto try_except_handler_5;
    branch_end_4:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    {
        bool tmp_condition_result_6;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = tmp_with_1__indicator;
        tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_3 = tmp_with_1__exit;
        frame_847eb372fa865de07757abc46dfc331d->m_frame.f_lineno = 24;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_3, mod_consts[10]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "No";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_6:;
    goto try_return_handler_2;
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

    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = tmp_with_1__indicator;
        tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        frame_847eb372fa865de07757abc46dfc331d->m_frame.f_lineno = 24;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[10]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 24;
            type_description_1 = "No";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_7:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_8;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_with_1__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        frame_847eb372fa865de07757abc46dfc331d->m_frame.f_lineno = 24;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[10]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "No";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_8:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    goto frame_return_exit_1;
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

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    branch_no_2:;
    {
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        assert(!(tmp_expression_value_4 == NULL));
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[12]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "No";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[13]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "No";
            goto frame_exception_exit_1;
        }
        frame_847eb372fa865de07757abc46dfc331d->m_frame.f_lineno = 27;
        tmp_cmp_expr_left_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[14]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "No";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = Py_None;
        tmp_return_value = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_7);
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_847eb372fa865de07757abc46dfc331d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_847eb372fa865de07757abc46dfc331d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_847eb372fa865de07757abc46dfc331d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_847eb372fa865de07757abc46dfc331d,
        type_description_1,
        NULL,
        var_file
    );


    // Release cached frame if used for exception.
    if (frame_847eb372fa865de07757abc46dfc331d == cache_frame_847eb372fa865de07757abc46dfc331d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_847eb372fa865de07757abc46dfc331d);
        cache_frame_847eb372fa865de07757abc46dfc331d = NULL;
    }

    assertFrameObject(frame_847eb372fa865de07757abc46dfc331d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_file);
    var_file = NULL;
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

    Py_XDECREF(var_file);
    var_file = NULL;
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


static PyObject *impl_flet$utils$$$function__4_is_macos(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_8dee43b4493f5c43f2cee9f0b97c0fe7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8dee43b4493f5c43f2cee9f0b97c0fe7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8dee43b4493f5c43f2cee9f0b97c0fe7)) {
        Py_XDECREF(cache_frame_8dee43b4493f5c43f2cee9f0b97c0fe7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8dee43b4493f5c43f2cee9f0b97c0fe7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8dee43b4493f5c43f2cee9f0b97c0fe7 = MAKE_FUNCTION_FRAME(codeobj_8dee43b4493f5c43f2cee9f0b97c0fe7, module_flet$utils, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8dee43b4493f5c43f2cee9f0b97c0fe7->m_type_description == NULL);
    frame_8dee43b4493f5c43f2cee9f0b97c0fe7 = cache_frame_8dee43b4493f5c43f2cee9f0b97c0fe7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8dee43b4493f5c43f2cee9f0b97c0fe7);
    assert(Py_REFCNT(frame_8dee43b4493f5c43f2cee9f0b97c0fe7) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        frame_8dee43b4493f5c43f2cee9f0b97c0fe7->m_frame.f_lineno = 32;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[15];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

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
        exception_tb = MAKE_TRACEBACK(frame_8dee43b4493f5c43f2cee9f0b97c0fe7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8dee43b4493f5c43f2cee9f0b97c0fe7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8dee43b4493f5c43f2cee9f0b97c0fe7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8dee43b4493f5c43f2cee9f0b97c0fe7,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_8dee43b4493f5c43f2cee9f0b97c0fe7 == cache_frame_8dee43b4493f5c43f2cee9f0b97c0fe7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8dee43b4493f5c43f2cee9f0b97c0fe7);
        cache_frame_8dee43b4493f5c43f2cee9f0b97c0fe7 = NULL;
    }

    assertFrameObject(frame_8dee43b4493f5c43f2cee9f0b97c0fe7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_flet$utils$$$function__5_get_platform(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_p = NULL;
    struct Nuitka_FrameObject *frame_aa783e7992516925552ecfe81149935f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_aa783e7992516925552ecfe81149935f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_aa783e7992516925552ecfe81149935f)) {
        Py_XDECREF(cache_frame_aa783e7992516925552ecfe81149935f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aa783e7992516925552ecfe81149935f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aa783e7992516925552ecfe81149935f = MAKE_FUNCTION_FRAME(codeobj_aa783e7992516925552ecfe81149935f, module_flet$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aa783e7992516925552ecfe81149935f->m_type_description == NULL);
    frame_aa783e7992516925552ecfe81149935f = cache_frame_aa783e7992516925552ecfe81149935f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_aa783e7992516925552ecfe81149935f);
    assert(Py_REFCNT(frame_aa783e7992516925552ecfe81149935f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_aa783e7992516925552ecfe81149935f->m_frame.f_lineno = 36;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[1]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_p == NULL);
        var_p = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_aa783e7992516925552ecfe81149935f->m_frame.f_lineno = 37;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 37;
            type_description_1 = "o";
            goto frame_exception_exit_1;
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
    tmp_return_value = mod_consts[17];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_p);
        tmp_cmp_expr_left_1 = var_p;
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = mod_consts[18];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_p);
        tmp_cmp_expr_left_2 = var_p;
        tmp_cmp_expr_right_2 = mod_consts[15];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = mod_consts[19];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[20];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_p);
            tmp_format_value_1 = var_p;
            tmp_format_spec_1 = mod_consts[21];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[21], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_aa783e7992516925552ecfe81149935f->m_frame.f_lineno = 44;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_Exception, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 44;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aa783e7992516925552ecfe81149935f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa783e7992516925552ecfe81149935f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa783e7992516925552ecfe81149935f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aa783e7992516925552ecfe81149935f,
        type_description_1,
        var_p
    );


    // Release cached frame if used for exception.
    if (frame_aa783e7992516925552ecfe81149935f == cache_frame_aa783e7992516925552ecfe81149935f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aa783e7992516925552ecfe81149935f);
        cache_frame_aa783e7992516925552ecfe81149935f = NULL;
    }

    assertFrameObject(frame_aa783e7992516925552ecfe81149935f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_p);
    Py_DECREF(var_p);
    var_p = NULL;
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

    Py_XDECREF(var_p);
    var_p = NULL;
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


static PyObject *impl_flet$utils$$$function__6_get_arch(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_a = NULL;
    struct Nuitka_FrameObject *frame_ce00a7ad79c899dd3f2c035b75e77ec6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ce00a7ad79c899dd3f2c035b75e77ec6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ce00a7ad79c899dd3f2c035b75e77ec6)) {
        Py_XDECREF(cache_frame_ce00a7ad79c899dd3f2c035b75e77ec6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ce00a7ad79c899dd3f2c035b75e77ec6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ce00a7ad79c899dd3f2c035b75e77ec6 = MAKE_FUNCTION_FRAME(codeobj_ce00a7ad79c899dd3f2c035b75e77ec6, module_flet$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ce00a7ad79c899dd3f2c035b75e77ec6->m_type_description == NULL);
    frame_ce00a7ad79c899dd3f2c035b75e77ec6 = cache_frame_ce00a7ad79c899dd3f2c035b75e77ec6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ce00a7ad79c899dd3f2c035b75e77ec6);
    assert(Py_REFCNT(frame_ce00a7ad79c899dd3f2c035b75e77ec6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ce00a7ad79c899dd3f2c035b75e77ec6->m_frame.f_lineno = 48;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[22]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ce00a7ad79c899dd3f2c035b75e77ec6->m_frame.f_lineno = 48;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_a == NULL);
        var_a = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_a);
        tmp_cmp_expr_left_1 = var_a;
        tmp_cmp_expr_right_1 = mod_consts[24];
        tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_a);
        tmp_cmp_expr_left_2 = var_a;
        tmp_cmp_expr_right_2 = mod_consts[25];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
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
    tmp_return_value = mod_consts[25];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_a);
        tmp_cmp_expr_left_3 = var_a;
        tmp_cmp_expr_right_3 = mod_consts[26];
        tmp_or_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(var_a);
        tmp_cmp_expr_left_4 = var_a;
        tmp_cmp_expr_right_4 = mod_consts[27];
        tmp_or_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_2 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = mod_consts[26];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_a);
        tmp_expression_value_2 = var_a;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[28]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ce00a7ad79c899dd3f2c035b75e77ec6->m_frame.f_lineno = 53;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[29]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = mod_consts[30];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[31];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_a);
            tmp_format_value_1 = var_a;
            tmp_format_spec_1 = mod_consts[21];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[21], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ce00a7ad79c899dd3f2c035b75e77ec6->m_frame.f_lineno = 56;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_Exception, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 56;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ce00a7ad79c899dd3f2c035b75e77ec6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ce00a7ad79c899dd3f2c035b75e77ec6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ce00a7ad79c899dd3f2c035b75e77ec6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ce00a7ad79c899dd3f2c035b75e77ec6,
        type_description_1,
        var_a
    );


    // Release cached frame if used for exception.
    if (frame_ce00a7ad79c899dd3f2c035b75e77ec6 == cache_frame_ce00a7ad79c899dd3f2c035b75e77ec6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ce00a7ad79c899dd3f2c035b75e77ec6);
        cache_frame_ce00a7ad79c899dd3f2c035b75e77ec6 = NULL;
    }

    assertFrameObject(frame_ce00a7ad79c899dd3f2c035b75e77ec6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_a);
    Py_DECREF(var_a);
    var_a = NULL;
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

    Py_XDECREF(var_a);
    var_a = NULL;
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


static PyObject *impl_flet$utils$$$function__7_open_in_browser(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[0];
    struct Nuitka_FrameObject *frame_85c7b306f7e1e2ef4a305d86f61bf39d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_85c7b306f7e1e2ef4a305d86f61bf39d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_85c7b306f7e1e2ef4a305d86f61bf39d)) {
        Py_XDECREF(cache_frame_85c7b306f7e1e2ef4a305d86f61bf39d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_85c7b306f7e1e2ef4a305d86f61bf39d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_85c7b306f7e1e2ef4a305d86f61bf39d = MAKE_FUNCTION_FRAME(codeobj_85c7b306f7e1e2ef4a305d86f61bf39d, module_flet$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_85c7b306f7e1e2ef4a305d86f61bf39d->m_type_description == NULL);
    frame_85c7b306f7e1e2ef4a305d86f61bf39d = cache_frame_85c7b306f7e1e2ef4a305d86f61bf39d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_85c7b306f7e1e2ef4a305d86f61bf39d);
    assert(Py_REFCNT(frame_85c7b306f7e1e2ef4a305d86f61bf39d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_url);
        tmp_args_element_value_1 = par_url;
        frame_85c7b306f7e1e2ef4a305d86f61bf39d->m_frame.f_lineno = 60;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[33], tmp_args_element_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_85c7b306f7e1e2ef4a305d86f61bf39d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_85c7b306f7e1e2ef4a305d86f61bf39d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_85c7b306f7e1e2ef4a305d86f61bf39d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_85c7b306f7e1e2ef4a305d86f61bf39d,
        type_description_1,
        par_url
    );


    // Release cached frame if used for exception.
    if (frame_85c7b306f7e1e2ef4a305d86f61bf39d == cache_frame_85c7b306f7e1e2ef4a305d86f61bf39d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_85c7b306f7e1e2ef4a305d86f61bf39d);
        cache_frame_85c7b306f7e1e2ef4a305d86f61bf39d = NULL;
    }

    assertFrameObject(frame_85c7b306f7e1e2ef4a305d86f61bf39d);

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


static PyObject *impl_flet$utils$$$function__8_which(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_program = python_pars[0];
    PyObject *par_exclude_exe = python_pars[1];
    struct Nuitka_CellObject *var_os = Nuitka_Cell_Empty();
    PyObject *var_is_exe = NULL;
    PyObject *var_path = NULL;
    PyObject *var_exe_file = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_b1e35b63012f913b0f6352afd8ca6b7f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_b1e35b63012f913b0f6352afd8ca6b7f = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_1 == NULL));
        assert(Nuitka_Cell_GET(var_os) == NULL);
        Py_INCREF(tmp_assign_source_1);
        PyCell_SET(var_os, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_os;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_flet$utils$$$function__8_which$$$function__1_is_exe(tmp_closure_1);

        assert(var_is_exe == NULL);
        var_is_exe = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_b1e35b63012f913b0f6352afd8ca6b7f)) {
        Py_XDECREF(cache_frame_b1e35b63012f913b0f6352afd8ca6b7f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b1e35b63012f913b0f6352afd8ca6b7f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b1e35b63012f913b0f6352afd8ca6b7f = MAKE_FUNCTION_FRAME(codeobj_b1e35b63012f913b0f6352afd8ca6b7f, module_flet$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b1e35b63012f913b0f6352afd8ca6b7f->m_type_description == NULL);
    frame_b1e35b63012f913b0f6352afd8ca6b7f = cache_frame_b1e35b63012f913b0f6352afd8ca6b7f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b1e35b63012f913b0f6352afd8ca6b7f);
    assert(Py_REFCNT(frame_b1e35b63012f913b0f6352afd8ca6b7f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_os));
        tmp_expression_value_3 = Nuitka_Cell_GET(var_os);
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[12]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oocooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[36];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oocooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[37]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oocooo";
            goto frame_exception_exit_1;
        }
        frame_b1e35b63012f913b0f6352afd8ca6b7f->m_frame.f_lineno = 70;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[38]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oocooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oocooo";
            goto frame_exception_exit_1;
        }
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
                type_description_1 = "oocooo";
                exception_lineno = 70;
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
            PyObject *old = var_path;
            var_path = tmp_assign_source_5;
            Py_INCREF(var_path);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(var_os) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "oocooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(var_os);
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[39]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oocooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[40]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oocooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_path);
        tmp_args_element_value_1 = var_path;
        if (par_program == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "oocooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = par_program;
        frame_b1e35b63012f913b0f6352afd8ca6b7f->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oocooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_exe_file;
            var_exe_file = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        int tmp_truth_name_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        if (var_is_exe == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 72;
            type_description_1 = "oocooo";
            goto try_except_handler_2;
        }

        tmp_called_value_3 = var_is_exe;
        CHECK_OBJECT(var_exe_file);
        tmp_args_element_value_3 = var_exe_file;
        frame_b1e35b63012f913b0f6352afd8ca6b7f->m_frame.f_lineno = 72;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oocooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 72;
            type_description_1 = "oocooo";
            goto try_except_handler_2;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oocooo";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (par_exclude_exe == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 73;
            type_description_1 = "oocooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_1 = par_exclude_exe;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (par_exclude_exe == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "oocooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_2 = par_exclude_exe;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_left_value_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        if (par_exclude_exe == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[42]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 74;
            type_description_1 = "oocooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = par_exclude_exe;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[23]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oocooo";
            goto try_except_handler_2;
        }
        frame_b1e35b63012f913b0f6352afd8ca6b7f->m_frame.f_lineno = 74;
        tmp_cmp_expr_left_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oocooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_exe_file);
        tmp_expression_value_7 = var_exe_file;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[23]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 74;
            type_description_1 = "oocooo";
            goto try_except_handler_2;
        }
        frame_b1e35b63012f913b0f6352afd8ca6b7f->m_frame.f_lineno = 74;
        tmp_cmp_expr_right_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 74;
            type_description_1 = "oocooo";
            goto try_except_handler_2;
        }
        tmp_and_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oocooo";
            goto try_except_handler_2;
        }
        tmp_or_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_or_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_and_right_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_right_value_1 = tmp_or_left_value_1;
        or_end_1:;
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
    CHECK_OBJECT(var_exe_file);
    tmp_return_value = var_exe_file;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 70;
        type_description_1 = "oocooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b1e35b63012f913b0f6352afd8ca6b7f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b1e35b63012f913b0f6352afd8ca6b7f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b1e35b63012f913b0f6352afd8ca6b7f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b1e35b63012f913b0f6352afd8ca6b7f,
        type_description_1,
        par_program,
        par_exclude_exe,
        var_os,
        var_is_exe,
        var_path,
        var_exe_file
    );


    // Release cached frame if used for exception.
    if (frame_b1e35b63012f913b0f6352afd8ca6b7f == cache_frame_b1e35b63012f913b0f6352afd8ca6b7f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b1e35b63012f913b0f6352afd8ca6b7f);
        cache_frame_b1e35b63012f913b0f6352afd8ca6b7f = NULL;
    }

    assertFrameObject(frame_b1e35b63012f913b0f6352afd8ca6b7f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_os);
    Py_DECREF(var_os);
    var_os = NULL;
    Py_XDECREF(var_is_exe);
    var_is_exe = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_exe_file);
    var_exe_file = NULL;
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

    CHECK_OBJECT(var_os);
    Py_DECREF(var_os);
    var_os = NULL;
    Py_XDECREF(var_is_exe);
    var_is_exe = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_exe_file);
    var_exe_file = NULL;
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
    CHECK_OBJECT(par_program);
    Py_DECREF(par_program);
    CHECK_OBJECT(par_exclude_exe);
    Py_DECREF(par_exclude_exe);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_program);
    Py_DECREF(par_program);
    CHECK_OBJECT(par_exclude_exe);
    Py_DECREF(par_exclude_exe);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet$utils$$$function__8_which$$$function__1_is_exe(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fpath = python_pars[0];
    struct Nuitka_FrameObject *frame_ff56ba812f1ca807dc37e98907b43830;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ff56ba812f1ca807dc37e98907b43830 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ff56ba812f1ca807dc37e98907b43830)) {
        Py_XDECREF(cache_frame_ff56ba812f1ca807dc37e98907b43830);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff56ba812f1ca807dc37e98907b43830 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff56ba812f1ca807dc37e98907b43830 = MAKE_FUNCTION_FRAME(codeobj_ff56ba812f1ca807dc37e98907b43830, module_flet$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ff56ba812f1ca807dc37e98907b43830->m_type_description == NULL);
    frame_ff56ba812f1ca807dc37e98907b43830 = cache_frame_ff56ba812f1ca807dc37e98907b43830;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ff56ba812f1ca807dc37e98907b43830);
    assert(Py_REFCNT(frame_ff56ba812f1ca807dc37e98907b43830) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[39]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fpath);
        tmp_args_element_value_1 = par_fpath;
        frame_ff56ba812f1ca807dc37e98907b43830->m_frame.f_lineno = 68;
        tmp_and_left_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[43], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 68;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fpath);
        tmp_args_element_value_2 = par_fpath;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[45]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 68;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
        frame_ff56ba812f1ca807dc37e98907b43830->m_frame.f_lineno = 68;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_and_right_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oc";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_ff56ba812f1ca807dc37e98907b43830, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff56ba812f1ca807dc37e98907b43830->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff56ba812f1ca807dc37e98907b43830, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff56ba812f1ca807dc37e98907b43830,
        type_description_1,
        par_fpath,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_ff56ba812f1ca807dc37e98907b43830 == cache_frame_ff56ba812f1ca807dc37e98907b43830) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ff56ba812f1ca807dc37e98907b43830);
        cache_frame_ff56ba812f1ca807dc37e98907b43830 = NULL;
    }

    assertFrameObject(frame_ff56ba812f1ca807dc37e98907b43830);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fpath);
    Py_DECREF(par_fpath);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fpath);
    Py_DECREF(par_fpath);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet$utils$$$function__9_is_within_directory(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_directory = python_pars[0];
    PyObject *par_target = python_pars[1];
    PyObject *var_abs_directory = NULL;
    PyObject *var_abs_target = NULL;
    PyObject *var_prefix = NULL;
    struct Nuitka_FrameObject *frame_61a7063d9c6a6f34b56a176aed04c0c9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_61a7063d9c6a6f34b56a176aed04c0c9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_61a7063d9c6a6f34b56a176aed04c0c9)) {
        Py_XDECREF(cache_frame_61a7063d9c6a6f34b56a176aed04c0c9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_61a7063d9c6a6f34b56a176aed04c0c9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_61a7063d9c6a6f34b56a176aed04c0c9 = MAKE_FUNCTION_FRAME(codeobj_61a7063d9c6a6f34b56a176aed04c0c9, module_flet$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_61a7063d9c6a6f34b56a176aed04c0c9->m_type_description == NULL);
    frame_61a7063d9c6a6f34b56a176aed04c0c9 = cache_frame_61a7063d9c6a6f34b56a176aed04c0c9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_61a7063d9c6a6f34b56a176aed04c0c9);
    assert(Py_REFCNT(frame_61a7063d9c6a6f34b56a176aed04c0c9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = IMPORT_HARD_NTPATH();
        assert(!(tmp_called_instance_1 == NULL));
        CHECK_OBJECT(par_directory);
        tmp_args_element_value_1 = par_directory;
        frame_61a7063d9c6a6f34b56a176aed04c0c9->m_frame.f_lineno = 83;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[46], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_abs_directory == NULL);
        var_abs_directory = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = IMPORT_HARD_NTPATH();
        assert(!(tmp_called_instance_2 == NULL));
        CHECK_OBJECT(par_target);
        tmp_args_element_value_2 = par_target;
        frame_61a7063d9c6a6f34b56a176aed04c0c9->m_frame.f_lineno = 84;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[46], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_abs_target == NULL);
        var_abs_target = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_list_element_1;
        tmp_called_instance_3 = IMPORT_HARD_NTPATH();
        assert(!(tmp_called_instance_3 == NULL));
        CHECK_OBJECT(var_abs_directory);
        tmp_list_element_1 = var_abs_directory;
        tmp_args_element_value_3 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_args_element_value_3, 0, tmp_list_element_1);
        CHECK_OBJECT(var_abs_target);
        tmp_list_element_1 = var_abs_target;
        PyList_SET_ITEM0(tmp_args_element_value_3, 1, tmp_list_element_1);
        frame_61a7063d9c6a6f34b56a176aed04c0c9->m_frame.f_lineno = 86;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[47], tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prefix == NULL);
        var_prefix = tmp_assign_source_3;
    }
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_prefix);
        tmp_cmp_expr_left_1 = var_prefix;
        CHECK_OBJECT(var_abs_directory);
        tmp_cmp_expr_right_1 = var_abs_directory;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_61a7063d9c6a6f34b56a176aed04c0c9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_61a7063d9c6a6f34b56a176aed04c0c9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_61a7063d9c6a6f34b56a176aed04c0c9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_61a7063d9c6a6f34b56a176aed04c0c9,
        type_description_1,
        par_directory,
        par_target,
        var_abs_directory,
        var_abs_target,
        var_prefix
    );


    // Release cached frame if used for exception.
    if (frame_61a7063d9c6a6f34b56a176aed04c0c9 == cache_frame_61a7063d9c6a6f34b56a176aed04c0c9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_61a7063d9c6a6f34b56a176aed04c0c9);
        cache_frame_61a7063d9c6a6f34b56a176aed04c0c9 = NULL;
    }

    assertFrameObject(frame_61a7063d9c6a6f34b56a176aed04c0c9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_abs_directory);
    Py_DECREF(var_abs_directory);
    var_abs_directory = NULL;
    CHECK_OBJECT(var_abs_target);
    Py_DECREF(var_abs_target);
    var_abs_target = NULL;
    CHECK_OBJECT(var_prefix);
    Py_DECREF(var_prefix);
    var_prefix = NULL;
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

    Py_XDECREF(var_abs_directory);
    var_abs_directory = NULL;
    Py_XDECREF(var_abs_target);
    var_abs_target = NULL;
    Py_XDECREF(var_prefix);
    var_prefix = NULL;
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
    CHECK_OBJECT(par_directory);
    Py_DECREF(par_directory);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_directory);
    Py_DECREF(par_directory);
    CHECK_OBJECT(par_target);
    Py_DECREF(par_target);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet$utils$$$function__10_safe_tar_extractall(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tar = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_members = python_pars[2];
    PyObject *par_numeric_owner = python_pars[3];
    PyObject *var_member = NULL;
    PyObject *var_member_path = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_01171a4e2d08dc6f7e7e1fed20a8bb58;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_01171a4e2d08dc6f7e7e1fed20a8bb58 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_01171a4e2d08dc6f7e7e1fed20a8bb58)) {
        Py_XDECREF(cache_frame_01171a4e2d08dc6f7e7e1fed20a8bb58);

#if _DEBUG_REFCOUNTS
        if (cache_frame_01171a4e2d08dc6f7e7e1fed20a8bb58 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_01171a4e2d08dc6f7e7e1fed20a8bb58 = MAKE_FUNCTION_FRAME(codeobj_01171a4e2d08dc6f7e7e1fed20a8bb58, module_flet$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_01171a4e2d08dc6f7e7e1fed20a8bb58->m_type_description == NULL);
    frame_01171a4e2d08dc6f7e7e1fed20a8bb58 = cache_frame_01171a4e2d08dc6f7e7e1fed20a8bb58;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_01171a4e2d08dc6f7e7e1fed20a8bb58);
    assert(Py_REFCNT(frame_01171a4e2d08dc6f7e7e1fed20a8bb58) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_tar);
        tmp_called_instance_1 = par_tar;
        frame_01171a4e2d08dc6f7e7e1fed20a8bb58->m_frame.f_lineno = 93;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[48]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
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
                type_description_1 = "oooooo";
                exception_lineno = 93;
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
            PyObject *old = var_member;
            var_member = tmp_assign_source_3;
            Py_INCREF(var_member);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[39]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[40]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (par_path == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = par_path;
        CHECK_OBJECT(var_member);
        tmp_expression_value_3 = var_member;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[49]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_01171a4e2d08dc6f7e7e1fed20a8bb58->m_frame.f_lineno = 94;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_member_path;
            var_member_path = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (par_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = par_path;
        CHECK_OBJECT(var_member_path);
        tmp_args_element_value_4 = var_member_path;
        frame_01171a4e2d08dc6f7e7e1fed20a8bb58->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[51];
        frame_01171a4e2d08dc6f7e7e1fed20a8bb58->m_frame.f_lineno = 96;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_Exception, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 96;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 93;
        type_description_1 = "oooooo";
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
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(par_tar);
        tmp_expression_value_4 = par_tar;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[52]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_path == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = par_path;
        CHECK_OBJECT(par_members);
        tmp_kw_call_arg_value_1_1 = par_members;
        CHECK_OBJECT(par_numeric_owner);
        tmp_kw_call_dict_value_0_1 = par_numeric_owner;
        frame_01171a4e2d08dc6f7e7e1fed20a8bb58->m_frame.f_lineno = 98;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[53]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_01171a4e2d08dc6f7e7e1fed20a8bb58, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_01171a4e2d08dc6f7e7e1fed20a8bb58->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_01171a4e2d08dc6f7e7e1fed20a8bb58, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_01171a4e2d08dc6f7e7e1fed20a8bb58,
        type_description_1,
        par_tar,
        par_path,
        par_members,
        par_numeric_owner,
        var_member,
        var_member_path
    );


    // Release cached frame if used for exception.
    if (frame_01171a4e2d08dc6f7e7e1fed20a8bb58 == cache_frame_01171a4e2d08dc6f7e7e1fed20a8bb58) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_01171a4e2d08dc6f7e7e1fed20a8bb58);
        cache_frame_01171a4e2d08dc6f7e7e1fed20a8bb58 = NULL;
    }

    assertFrameObject(frame_01171a4e2d08dc6f7e7e1fed20a8bb58);

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
    Py_XDECREF(var_member);
    var_member = NULL;
    Py_XDECREF(var_member_path);
    var_member_path = NULL;
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

    Py_XDECREF(var_member);
    var_member = NULL;
    Py_XDECREF(var_member_path);
    var_member_path = NULL;
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
    CHECK_OBJECT(par_tar);
    Py_DECREF(par_tar);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_members);
    Py_DECREF(par_members);
    CHECK_OBJECT(par_numeric_owner);
    Py_DECREF(par_numeric_owner);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_tar);
    Py_DECREF(par_tar);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_members);
    Py_DECREF(par_members);
    CHECK_OBJECT(par_numeric_owner);
    Py_DECREF(par_numeric_owner);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet$utils$$$function__11_is_localhost_url(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_url = python_pars[0];
    struct Nuitka_FrameObject *frame_d4c084ec69e7c5b07fc8144bb8e7ae76;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d4c084ec69e7c5b07fc8144bb8e7ae76 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d4c084ec69e7c5b07fc8144bb8e7ae76)) {
        Py_XDECREF(cache_frame_d4c084ec69e7c5b07fc8144bb8e7ae76);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d4c084ec69e7c5b07fc8144bb8e7ae76 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d4c084ec69e7c5b07fc8144bb8e7ae76 = MAKE_FUNCTION_FRAME(codeobj_d4c084ec69e7c5b07fc8144bb8e7ae76, module_flet$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d4c084ec69e7c5b07fc8144bb8e7ae76->m_type_description == NULL);
    frame_d4c084ec69e7c5b07fc8144bb8e7ae76 = cache_frame_d4c084ec69e7c5b07fc8144bb8e7ae76;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d4c084ec69e7c5b07fc8144bb8e7ae76);
    assert(Py_REFCNT(frame_d4c084ec69e7c5b07fc8144bb8e7ae76) == 2);

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_1 = mod_consts[54];
        CHECK_OBJECT(par_url);
        tmp_cmp_expr_right_1 = par_url;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_cmp_expr_left_2 = mod_consts[55];
        CHECK_OBJECT(par_url);
        tmp_cmp_expr_right_2 = par_url;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_cmp_expr_left_3 = mod_consts[56];
        CHECK_OBJECT(par_url);
        tmp_cmp_expr_right_3 = par_url;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_3 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        tmp_cmp_expr_left_4 = mod_consts[57];
        CHECK_OBJECT(par_url);
        tmp_cmp_expr_right_4 = par_url;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_3 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_or_right_value_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_or_right_value_2 = tmp_or_left_value_3;
        or_end_3:;
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_d4c084ec69e7c5b07fc8144bb8e7ae76, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d4c084ec69e7c5b07fc8144bb8e7ae76->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d4c084ec69e7c5b07fc8144bb8e7ae76, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d4c084ec69e7c5b07fc8144bb8e7ae76,
        type_description_1,
        par_url
    );


    // Release cached frame if used for exception.
    if (frame_d4c084ec69e7c5b07fc8144bb8e7ae76 == cache_frame_d4c084ec69e7c5b07fc8144bb8e7ae76) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d4c084ec69e7c5b07fc8144bb8e7ae76);
        cache_frame_d4c084ec69e7c5b07fc8144bb8e7ae76 = NULL;
    }

    assertFrameObject(frame_d4c084ec69e7c5b07fc8144bb8e7ae76);

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


static PyObject *impl_flet$utils$$$function__12_get_package_root_dir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_322fd605a4d3a6a533c69c643a20448c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_322fd605a4d3a6a533c69c643a20448c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_322fd605a4d3a6a533c69c643a20448c)) {
        Py_XDECREF(cache_frame_322fd605a4d3a6a533c69c643a20448c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_322fd605a4d3a6a533c69c643a20448c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_322fd605a4d3a6a533c69c643a20448c = MAKE_FUNCTION_FRAME(codeobj_322fd605a4d3a6a533c69c643a20448c, module_flet$utils, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_322fd605a4d3a6a533c69c643a20448c->m_type_description == NULL);
    frame_322fd605a4d3a6a533c69c643a20448c = cache_frame_322fd605a4d3a6a533c69c643a20448c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_322fd605a4d3a6a533c69c643a20448c);
    assert(Py_REFCNT(frame_322fd605a4d3a6a533c69c643a20448c) == 2);

    // Framed code:
    {
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        frame_322fd605a4d3a6a533c69c643a20448c->m_frame.f_lineno = 111;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[60]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

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
        exception_tb = MAKE_TRACEBACK(frame_322fd605a4d3a6a533c69c643a20448c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_322fd605a4d3a6a533c69c643a20448c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_322fd605a4d3a6a533c69c643a20448c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_322fd605a4d3a6a533c69c643a20448c,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_322fd605a4d3a6a533c69c643a20448c == cache_frame_322fd605a4d3a6a533c69c643a20448c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_322fd605a4d3a6a533c69c643a20448c);
        cache_frame_322fd605a4d3a6a533c69c643a20448c = NULL;
    }

    assertFrameObject(frame_322fd605a4d3a6a533c69c643a20448c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_flet$utils$$$function__13_get_package_bin_dir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_ca9e30c2237d4d0cd52d1046a1bc4d50;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ca9e30c2237d4d0cd52d1046a1bc4d50 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ca9e30c2237d4d0cd52d1046a1bc4d50)) {
        Py_XDECREF(cache_frame_ca9e30c2237d4d0cd52d1046a1bc4d50);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ca9e30c2237d4d0cd52d1046a1bc4d50 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ca9e30c2237d4d0cd52d1046a1bc4d50 = MAKE_FUNCTION_FRAME(codeobj_ca9e30c2237d4d0cd52d1046a1bc4d50, module_flet$utils, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ca9e30c2237d4d0cd52d1046a1bc4d50->m_type_description == NULL);
    frame_ca9e30c2237d4d0cd52d1046a1bc4d50 = cache_frame_ca9e30c2237d4d0cd52d1046a1bc4d50;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ca9e30c2237d4d0cd52d1046a1bc4d50);
    assert(Py_REFCNT(frame_ca9e30c2237d4d0cd52d1046a1bc4d50) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[40]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        frame_ca9e30c2237d4d0cd52d1046a1bc4d50->m_frame.f_lineno = 115;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[62];
        frame_ca9e30c2237d4d0cd52d1046a1bc4d50->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

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
        exception_tb = MAKE_TRACEBACK(frame_ca9e30c2237d4d0cd52d1046a1bc4d50, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ca9e30c2237d4d0cd52d1046a1bc4d50->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ca9e30c2237d4d0cd52d1046a1bc4d50, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ca9e30c2237d4d0cd52d1046a1bc4d50,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_ca9e30c2237d4d0cd52d1046a1bc4d50 == cache_frame_ca9e30c2237d4d0cd52d1046a1bc4d50) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ca9e30c2237d4d0cd52d1046a1bc4d50);
        cache_frame_ca9e30c2237d4d0cd52d1046a1bc4d50 = NULL;
    }

    assertFrameObject(frame_ca9e30c2237d4d0cd52d1046a1bc4d50);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_flet$utils$$$function__14_get_package_web_dir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_web_root_dir = NULL;
    struct Nuitka_FrameObject *frame_727c4698e3df956752773fac06d858af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_727c4698e3df956752773fac06d858af = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_727c4698e3df956752773fac06d858af)) {
        Py_XDECREF(cache_frame_727c4698e3df956752773fac06d858af);

#if _DEBUG_REFCOUNTS
        if (cache_frame_727c4698e3df956752773fac06d858af == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_727c4698e3df956752773fac06d858af = MAKE_FUNCTION_FRAME(codeobj_727c4698e3df956752773fac06d858af, module_flet$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_727c4698e3df956752773fac06d858af->m_type_description == NULL);
    frame_727c4698e3df956752773fac06d858af = cache_frame_727c4698e3df956752773fac06d858af;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_727c4698e3df956752773fac06d858af);
    assert(Py_REFCNT(frame_727c4698e3df956752773fac06d858af) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_727c4698e3df956752773fac06d858af->m_frame.f_lineno = 119;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[63]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_web_root_dir == NULL);
        var_web_root_dir = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_web_root_dir);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_web_root_dir);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_web_root_dir);
        tmp_return_value = var_web_root_dir;
        Py_INCREF(tmp_return_value);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_3 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_3 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[40]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_727c4698e3df956752773fac06d858af->m_frame.f_lineno = 120;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[64];
        frame_727c4698e3df956752773fac06d858af->m_frame.f_lineno = 120;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "o";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_727c4698e3df956752773fac06d858af, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_727c4698e3df956752773fac06d858af->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_727c4698e3df956752773fac06d858af, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_727c4698e3df956752773fac06d858af,
        type_description_1,
        var_web_root_dir
    );


    // Release cached frame if used for exception.
    if (frame_727c4698e3df956752773fac06d858af == cache_frame_727c4698e3df956752773fac06d858af) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_727c4698e3df956752773fac06d858af);
        cache_frame_727c4698e3df956752773fac06d858af = NULL;
    }

    assertFrameObject(frame_727c4698e3df956752773fac06d858af);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_web_root_dir);
    Py_DECREF(var_web_root_dir);
    var_web_root_dir = NULL;
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

    Py_XDECREF(var_web_root_dir);
    var_web_root_dir = NULL;
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


static PyObject *impl_flet$utils$$$function__15_get_free_tcp_port(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_sock = NULL;
    struct Nuitka_FrameObject *frame_3e9fafce238d3f3896af5c570f24b7c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3e9fafce238d3f3896af5c570f24b7c1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3e9fafce238d3f3896af5c570f24b7c1)) {
        Py_XDECREF(cache_frame_3e9fafce238d3f3896af5c570f24b7c1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e9fafce238d3f3896af5c570f24b7c1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e9fafce238d3f3896af5c570f24b7c1 = MAKE_FUNCTION_FRAME(codeobj_3e9fafce238d3f3896af5c570f24b7c1, module_flet$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3e9fafce238d3f3896af5c570f24b7c1->m_type_description == NULL);
    frame_3e9fafce238d3f3896af5c570f24b7c1 = cache_frame_3e9fafce238d3f3896af5c570f24b7c1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3e9fafce238d3f3896af5c570f24b7c1);
    assert(Py_REFCNT(frame_3e9fafce238d3f3896af5c570f24b7c1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3e9fafce238d3f3896af5c570f24b7c1->m_frame.f_lineno = 124;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[65]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_sock == NULL);
        var_sock = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_sock);
        tmp_called_instance_2 = var_sock;
        frame_3e9fafce238d3f3896af5c570f24b7c1->m_frame.f_lineno = 125;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[66],
            PyTuple_GET_ITEM(mod_consts[67], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_sock);
        tmp_called_instance_3 = var_sock;
        frame_3e9fafce238d3f3896af5c570f24b7c1->m_frame.f_lineno = 126;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[68]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[69];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3e9fafce238d3f3896af5c570f24b7c1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e9fafce238d3f3896af5c570f24b7c1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e9fafce238d3f3896af5c570f24b7c1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e9fafce238d3f3896af5c570f24b7c1,
        type_description_1,
        var_sock
    );


    // Release cached frame if used for exception.
    if (frame_3e9fafce238d3f3896af5c570f24b7c1 == cache_frame_3e9fafce238d3f3896af5c570f24b7c1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3e9fafce238d3f3896af5c570f24b7c1);
        cache_frame_3e9fafce238d3f3896af5c570f24b7c1 = NULL;
    }

    assertFrameObject(frame_3e9fafce238d3f3896af5c570f24b7c1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_sock);
    Py_DECREF(var_sock);
    var_sock = NULL;
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

    Py_XDECREF(var_sock);
    var_sock = NULL;
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


static PyObject *impl_flet$utils$$$function__16_get_current_script_dir(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_pathname = NULL;
    struct Nuitka_FrameObject *frame_38837b004ff0066ec1412ef2cc16b45a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_38837b004ff0066ec1412ef2cc16b45a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_38837b004ff0066ec1412ef2cc16b45a)) {
        Py_XDECREF(cache_frame_38837b004ff0066ec1412ef2cc16b45a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_38837b004ff0066ec1412ef2cc16b45a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_38837b004ff0066ec1412ef2cc16b45a = MAKE_FUNCTION_FRAME(codeobj_38837b004ff0066ec1412ef2cc16b45a, module_flet$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_38837b004ff0066ec1412ef2cc16b45a->m_type_description == NULL);
    frame_38837b004ff0066ec1412ef2cc16b45a = cache_frame_38837b004ff0066ec1412ef2cc16b45a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_38837b004ff0066ec1412ef2cc16b45a);
    assert(Py_REFCNT(frame_38837b004ff0066ec1412ef2cc16b45a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_1 = IMPORT_HARD_NTPATH();
        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[70]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[72]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[73];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_38837b004ff0066ec1412ef2cc16b45a->m_frame.f_lineno = 130;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_pathname == NULL);
        var_pathname = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = IMPORT_HARD_NTPATH();
        assert(!(tmp_called_instance_1 == NULL));
        CHECK_OBJECT(var_pathname);
        tmp_args_element_value_2 = var_pathname;
        frame_38837b004ff0066ec1412ef2cc16b45a->m_frame.f_lineno = 131;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[46], tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_38837b004ff0066ec1412ef2cc16b45a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_38837b004ff0066ec1412ef2cc16b45a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_38837b004ff0066ec1412ef2cc16b45a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_38837b004ff0066ec1412ef2cc16b45a,
        type_description_1,
        var_pathname
    );


    // Release cached frame if used for exception.
    if (frame_38837b004ff0066ec1412ef2cc16b45a == cache_frame_38837b004ff0066ec1412ef2cc16b45a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_38837b004ff0066ec1412ef2cc16b45a);
        cache_frame_38837b004ff0066ec1412ef2cc16b45a = NULL;
    }

    assertFrameObject(frame_38837b004ff0066ec1412ef2cc16b45a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_pathname);
    Py_DECREF(var_pathname);
    var_pathname = NULL;
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

    Py_XDECREF(var_pathname);
    var_pathname = NULL;
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


static PyObject *impl_flet$utils$$$function__17_slugify(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_original = python_pars[0];
    PyObject *var_slugified = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_e4711b772435e74d3f67c2c7c4d63280;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e4711b772435e74d3f67c2c7c4d63280 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e4711b772435e74d3f67c2c7c4d63280)) {
        Py_XDECREF(cache_frame_e4711b772435e74d3f67c2c7c4d63280);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e4711b772435e74d3f67c2c7c4d63280 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e4711b772435e74d3f67c2c7c4d63280 = MAKE_FUNCTION_FRAME(codeobj_e4711b772435e74d3f67c2c7c4d63280, module_flet$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e4711b772435e74d3f67c2c7c4d63280->m_type_description == NULL);
    frame_e4711b772435e74d3f67c2c7c4d63280 = cache_frame_e4711b772435e74d3f67c2c7c4d63280;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e4711b772435e74d3f67c2c7c4d63280);
    assert(Py_REFCNT(frame_e4711b772435e74d3f67c2c7c4d63280) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_original);
        tmp_expression_value_1 = par_original;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[74]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e4711b772435e74d3f67c2c7c4d63280->m_frame.f_lineno = 144;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_slugified == NULL);
        var_slugified = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        tmp_str_arg_value_1 = mod_consts[75];
        CHECK_OBJECT(var_slugified);
        tmp_expression_value_2 = var_slugified;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[37]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e4711b772435e74d3f67c2c7c4d63280->m_frame.f_lineno = 145;
        tmp_iterable_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_iterable_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_slugified;
            assert(old != NULL);
            var_slugified = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_str_arg_value_2;
        CHECK_OBJECT(var_slugified);
        tmp_str_arg_value_2 = var_slugified;
        tmp_assign_source_3 = UNICODE_LOWER(tmp_str_arg_value_2);
        assert(!(tmp_assign_source_3 == NULL));
        {
            PyObject *old = var_slugified;
            assert(old != NULL);
            var_slugified = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_str_arg_value_3;
        PyObject *tmp_iterable_value_2;
        tmp_str_arg_value_3 = mod_consts[21];
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_slugified);
            tmp_iter_arg_1 = var_slugified;
            tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_5;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_iterable_value_2 = MAKE_GENERATOR_flet$utils$$$function__17_slugify$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_assign_source_4 = UNICODE_JOIN(tmp_str_arg_value_3, tmp_iterable_value_2);
        Py_DECREF(tmp_iterable_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_slugified;
            assert(old != NULL);
            var_slugified = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_str_arg_value_4;
        PyObject *tmp_old_value_1;
        PyObject *tmp_new_value_1;
        CHECK_OBJECT(var_slugified);
        tmp_str_arg_value_4 = var_slugified;
        tmp_old_value_1 = mod_consts[75];
        tmp_new_value_1 = mod_consts[76];
        tmp_assign_source_6 = UNICODE_REPLACE3(tmp_str_arg_value_4, tmp_old_value_1, tmp_new_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_slugified;
            assert(old != NULL);
            var_slugified = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e4711b772435e74d3f67c2c7c4d63280, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e4711b772435e74d3f67c2c7c4d63280->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e4711b772435e74d3f67c2c7c4d63280, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e4711b772435e74d3f67c2c7c4d63280,
        type_description_1,
        par_original,
        var_slugified
    );


    // Release cached frame if used for exception.
    if (frame_e4711b772435e74d3f67c2c7c4d63280 == cache_frame_e4711b772435e74d3f67c2c7c4d63280) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e4711b772435e74d3f67c2c7c4d63280);
        cache_frame_e4711b772435e74d3f67c2c7c4d63280 = NULL;
    }

    assertFrameObject(frame_e4711b772435e74d3f67c2c7c4d63280);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_slugified);
    tmp_return_value = var_slugified;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_slugified);
    Py_DECREF(var_slugified);
    var_slugified = NULL;
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

    Py_XDECREF(var_slugified);
    var_slugified = NULL;
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
    CHECK_OBJECT(par_original);
    Py_DECREF(par_original);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_original);
    Py_DECREF(par_original);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct flet$utils$$$function__17_slugify$$$genexpr__1_genexpr_locals {
    PyObject *var_character;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
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

static PyObject *flet$utils$$$function__17_slugify$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct flet$utils$$$function__17_slugify$$$genexpr__1_genexpr_locals *generator_heap = (struct flet$utils$$$function__17_slugify$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_character = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_75fa065611665d07ec59e4d8fa4d8220, module_flet$utils, sizeof(void *)+sizeof(void *));
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
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 148;
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
            PyObject *old = generator_heap->var_character;
            generator_heap->var_character = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_character);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 151;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_character);
        tmp_args_element_value_1 = generator_heap->var_character;
        generator->m_frame->m_frame.f_lineno = 151;
        tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[79], tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 151;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 151;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 151;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[80]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 151;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 151;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_character);
        tmp_expression_value_2 = generator_heap->var_character;
        Py_INCREF(tmp_expression_value_2);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_2;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 149;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 148;
        generator_heap->type_description_1 = "No";
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
            generator_heap->var_character
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

    Py_XDECREF(generator_heap->var_character);
    generator_heap->var_character = NULL;
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
    Py_XDECREF(generator_heap->var_character);
    generator_heap->var_character = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_flet$utils$$$function__17_slugify$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        flet$utils$$$function__17_slugify$$$genexpr__1_genexpr_context,
        module_flet$utils,
        mod_consts[81],
#if PYTHON_VERSION >= 0x350
        mod_consts[82],
#endif
        codeobj_75fa065611665d07ec59e4d8fa4d8220,
        closure,
        1,
#if 1
        sizeof(struct flet$utils$$$function__17_slugify$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_flet$utils$$$function__18_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_fb6c1af40530b52f839d9c92046722a7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fb6c1af40530b52f839d9c92046722a7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fb6c1af40530b52f839d9c92046722a7)) {
        Py_XDECREF(cache_frame_fb6c1af40530b52f839d9c92046722a7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fb6c1af40530b52f839d9c92046722a7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fb6c1af40530b52f839d9c92046722a7 = MAKE_FUNCTION_FRAME(codeobj_fb6c1af40530b52f839d9c92046722a7, module_flet$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fb6c1af40530b52f839d9c92046722a7->m_type_description == NULL);
    frame_fb6c1af40530b52f839d9c92046722a7 = cache_frame_fb6c1af40530b52f839d9c92046722a7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fb6c1af40530b52f839d9c92046722a7);
    assert(Py_REFCNT(frame_fb6c1af40530b52f839d9c92046722a7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_called_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_called_value_1 == NULL));
        tmp_called_instance_1 = (PyObject *)&PyComplex_Type;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        CHECK_OBJECT(par_other);
        tmp_args_element_value_3 = par_other;
        frame_fb6c1af40530b52f839d9c92046722a7->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[83],
                call_args
            );
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 220;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_fb6c1af40530b52f839d9c92046722a7->m_frame.f_lineno = 220;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
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
        exception_tb = MAKE_TRACEBACK(frame_fb6c1af40530b52f839d9c92046722a7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fb6c1af40530b52f839d9c92046722a7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fb6c1af40530b52f839d9c92046722a7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fb6c1af40530b52f839d9c92046722a7,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_fb6c1af40530b52f839d9c92046722a7 == cache_frame_fb6c1af40530b52f839d9c92046722a7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fb6c1af40530b52f839d9c92046722a7);
        cache_frame_fb6c1af40530b52f839d9c92046722a7 = NULL;
    }

    assertFrameObject(frame_fb6c1af40530b52f839d9c92046722a7);

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


static PyObject *impl_flet$utils$$$function__19_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_65c27e1c4a5b04a637738542cedf6817;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_65c27e1c4a5b04a637738542cedf6817 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_65c27e1c4a5b04a637738542cedf6817)) {
        Py_XDECREF(cache_frame_65c27e1c4a5b04a637738542cedf6817);

#if _DEBUG_REFCOUNTS
        if (cache_frame_65c27e1c4a5b04a637738542cedf6817 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_65c27e1c4a5b04a637738542cedf6817 = MAKE_FUNCTION_FRAME(codeobj_65c27e1c4a5b04a637738542cedf6817, module_flet$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_65c27e1c4a5b04a637738542cedf6817->m_type_description == NULL);
    frame_65c27e1c4a5b04a637738542cedf6817 = cache_frame_65c27e1c4a5b04a637738542cedf6817;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_65c27e1c4a5b04a637738542cedf6817);
    assert(Py_REFCNT(frame_65c27e1c4a5b04a637738542cedf6817) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_called_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_called_value_1 == NULL));
        tmp_called_instance_1 = (PyObject *)&PyComplex_Type;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        CHECK_OBJECT(par_other);
        tmp_args_element_value_3 = par_other;
        frame_65c27e1c4a5b04a637738542cedf6817->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[84],
                call_args
            );
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 221;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_65c27e1c4a5b04a637738542cedf6817->m_frame.f_lineno = 221;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
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
        exception_tb = MAKE_TRACEBACK(frame_65c27e1c4a5b04a637738542cedf6817, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_65c27e1c4a5b04a637738542cedf6817->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_65c27e1c4a5b04a637738542cedf6817, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_65c27e1c4a5b04a637738542cedf6817,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_65c27e1c4a5b04a637738542cedf6817 == cache_frame_65c27e1c4a5b04a637738542cedf6817) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_65c27e1c4a5b04a637738542cedf6817);
        cache_frame_65c27e1c4a5b04a637738542cedf6817 = NULL;
    }

    assertFrameObject(frame_65c27e1c4a5b04a637738542cedf6817);

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


static PyObject *impl_flet$utils$$$function__20_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_64534da71f28c06b19aee5d351187fab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_64534da71f28c06b19aee5d351187fab = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_64534da71f28c06b19aee5d351187fab)) {
        Py_XDECREF(cache_frame_64534da71f28c06b19aee5d351187fab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_64534da71f28c06b19aee5d351187fab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_64534da71f28c06b19aee5d351187fab = MAKE_FUNCTION_FRAME(codeobj_64534da71f28c06b19aee5d351187fab, module_flet$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_64534da71f28c06b19aee5d351187fab->m_type_description == NULL);
    frame_64534da71f28c06b19aee5d351187fab = cache_frame_64534da71f28c06b19aee5d351187fab;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_64534da71f28c06b19aee5d351187fab);
    assert(Py_REFCNT(frame_64534da71f28c06b19aee5d351187fab) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_called_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_called_value_1 == NULL));
        tmp_called_instance_1 = (PyObject *)&PyComplex_Type;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        CHECK_OBJECT(par_other);
        tmp_args_element_value_3 = par_other;
        frame_64534da71f28c06b19aee5d351187fab->m_frame.f_lineno = 222;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[85],
                call_args
            );
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 222;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_64534da71f28c06b19aee5d351187fab->m_frame.f_lineno = 222;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
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
        exception_tb = MAKE_TRACEBACK(frame_64534da71f28c06b19aee5d351187fab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_64534da71f28c06b19aee5d351187fab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_64534da71f28c06b19aee5d351187fab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_64534da71f28c06b19aee5d351187fab,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_64534da71f28c06b19aee5d351187fab == cache_frame_64534da71f28c06b19aee5d351187fab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_64534da71f28c06b19aee5d351187fab);
        cache_frame_64534da71f28c06b19aee5d351187fab = NULL;
    }

    assertFrameObject(frame_64534da71f28c06b19aee5d351187fab);

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


static PyObject *impl_flet$utils$$$function__21_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_9ed91713c5b196434b0a00f8f9ffc175;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9ed91713c5b196434b0a00f8f9ffc175 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9ed91713c5b196434b0a00f8f9ffc175)) {
        Py_XDECREF(cache_frame_9ed91713c5b196434b0a00f8f9ffc175);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ed91713c5b196434b0a00f8f9ffc175 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ed91713c5b196434b0a00f8f9ffc175 = MAKE_FUNCTION_FRAME(codeobj_9ed91713c5b196434b0a00f8f9ffc175, module_flet$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9ed91713c5b196434b0a00f8f9ffc175->m_type_description == NULL);
    frame_9ed91713c5b196434b0a00f8f9ffc175 = cache_frame_9ed91713c5b196434b0a00f8f9ffc175;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9ed91713c5b196434b0a00f8f9ffc175);
    assert(Py_REFCNT(frame_9ed91713c5b196434b0a00f8f9ffc175) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_called_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_called_value_1 == NULL));
        tmp_called_instance_1 = (PyObject *)&PyComplex_Type;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        CHECK_OBJECT(par_other);
        tmp_args_element_value_3 = par_other;
        frame_9ed91713c5b196434b0a00f8f9ffc175->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[86],
                call_args
            );
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 223;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_9ed91713c5b196434b0a00f8f9ffc175->m_frame.f_lineno = 223;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
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
        exception_tb = MAKE_TRACEBACK(frame_9ed91713c5b196434b0a00f8f9ffc175, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ed91713c5b196434b0a00f8f9ffc175->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ed91713c5b196434b0a00f8f9ffc175, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ed91713c5b196434b0a00f8f9ffc175,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_9ed91713c5b196434b0a00f8f9ffc175 == cache_frame_9ed91713c5b196434b0a00f8f9ffc175) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9ed91713c5b196434b0a00f8f9ffc175);
        cache_frame_9ed91713c5b196434b0a00f8f9ffc175 = NULL;
    }

    assertFrameObject(frame_9ed91713c5b196434b0a00f8f9ffc175);

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


static PyObject *impl_flet$utils$$$function__23_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ndigits = python_pars[1];
    struct Nuitka_FrameObject *frame_b9406bbd9a57fbe03f0ddaa8a4b4697c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b9406bbd9a57fbe03f0ddaa8a4b4697c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b9406bbd9a57fbe03f0ddaa8a4b4697c)) {
        Py_XDECREF(cache_frame_b9406bbd9a57fbe03f0ddaa8a4b4697c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b9406bbd9a57fbe03f0ddaa8a4b4697c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b9406bbd9a57fbe03f0ddaa8a4b4697c = MAKE_FUNCTION_FRAME(codeobj_b9406bbd9a57fbe03f0ddaa8a4b4697c, module_flet$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b9406bbd9a57fbe03f0ddaa8a4b4697c->m_type_description == NULL);
    frame_b9406bbd9a57fbe03f0ddaa8a4b4697c = cache_frame_b9406bbd9a57fbe03f0ddaa8a4b4697c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b9406bbd9a57fbe03f0ddaa8a4b4697c);
    assert(Py_REFCNT(frame_b9406bbd9a57fbe03f0ddaa8a4b4697c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_called_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_called_value_1 == NULL));
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[87]);
        assert(tmp_called_value_2 != NULL);
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[88]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 226;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ndigits);
        tmp_args_element_value_3 = par_ndigits;
        frame_b9406bbd9a57fbe03f0ddaa8a4b4697c->m_frame.f_lineno = 226;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 226;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[87]);
        assert(tmp_called_value_3 != NULL);
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[89]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 226;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ndigits);
        tmp_args_element_value_6 = par_ndigits;
        frame_b9406bbd9a57fbe03f0ddaa8a4b4697c->m_frame.f_lineno = 226;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 226;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b9406bbd9a57fbe03f0ddaa8a4b4697c->m_frame.f_lineno = 225;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
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
        exception_tb = MAKE_TRACEBACK(frame_b9406bbd9a57fbe03f0ddaa8a4b4697c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b9406bbd9a57fbe03f0ddaa8a4b4697c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b9406bbd9a57fbe03f0ddaa8a4b4697c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b9406bbd9a57fbe03f0ddaa8a4b4697c,
        type_description_1,
        par_self,
        par_ndigits
    );


    // Release cached frame if used for exception.
    if (frame_b9406bbd9a57fbe03f0ddaa8a4b4697c == cache_frame_b9406bbd9a57fbe03f0ddaa8a4b4697c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b9406bbd9a57fbe03f0ddaa8a4b4697c);
        cache_frame_b9406bbd9a57fbe03f0ddaa8a4b4697c = NULL;
    }

    assertFrameObject(frame_b9406bbd9a57fbe03f0ddaa8a4b4697c);

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
    CHECK_OBJECT(par_ndigits);
    Py_DECREF(par_ndigits);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ndigits);
    Py_DECREF(par_ndigits);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet$utils$$$function__24___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_8da470c32aa5905e629c9c23982d1197;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8da470c32aa5905e629c9c23982d1197 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8da470c32aa5905e629c9c23982d1197)) {
        Py_XDECREF(cache_frame_8da470c32aa5905e629c9c23982d1197);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8da470c32aa5905e629c9c23982d1197 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8da470c32aa5905e629c9c23982d1197 = MAKE_FUNCTION_FRAME(codeobj_8da470c32aa5905e629c9c23982d1197, module_flet$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8da470c32aa5905e629c9c23982d1197->m_type_description == NULL);
    frame_8da470c32aa5905e629c9c23982d1197 = cache_frame_8da470c32aa5905e629c9c23982d1197;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8da470c32aa5905e629c9c23982d1197);
    assert(Py_REFCNT(frame_8da470c32aa5905e629c9c23982d1197) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[91]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[88]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_expression_value_3 = par_other;
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[88]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[92]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8da470c32aa5905e629c9c23982d1197->m_frame.f_lineno = 230;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_and_left_value_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[93]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 230;
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
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[91]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_kw_call_arg_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[89]);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 231;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_expression_value_7 = par_other;
        tmp_kw_call_arg_value_1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[89]);
        if (tmp_kw_call_arg_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 231;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[92]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 231;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_8da470c32aa5905e629c9c23982d1197->m_frame.f_lineno = 230;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_and_right_value_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[93]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_arg_value_1_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
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
        exception_tb = MAKE_TRACEBACK(frame_8da470c32aa5905e629c9c23982d1197, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8da470c32aa5905e629c9c23982d1197->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8da470c32aa5905e629c9c23982d1197, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8da470c32aa5905e629c9c23982d1197,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_8da470c32aa5905e629c9c23982d1197 == cache_frame_8da470c32aa5905e629c9c23982d1197) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8da470c32aa5905e629c9c23982d1197);
        cache_frame_8da470c32aa5905e629c9c23982d1197 = NULL;
    }

    assertFrameObject(frame_8da470c32aa5905e629c9c23982d1197);

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


static PyObject *impl_flet$utils$$$function__25___ne__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_dc85c06204427a969d1e5f3620747fd1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_dc85c06204427a969d1e5f3620747fd1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dc85c06204427a969d1e5f3620747fd1)) {
        Py_XDECREF(cache_frame_dc85c06204427a969d1e5f3620747fd1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dc85c06204427a969d1e5f3620747fd1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dc85c06204427a969d1e5f3620747fd1 = MAKE_FUNCTION_FRAME(codeobj_dc85c06204427a969d1e5f3620747fd1, module_flet$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dc85c06204427a969d1e5f3620747fd1->m_type_description == NULL);
    frame_dc85c06204427a969d1e5f3620747fd1 = cache_frame_dc85c06204427a969d1e5f3620747fd1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dc85c06204427a969d1e5f3620747fd1);
    assert(Py_REFCNT(frame_dc85c06204427a969d1e5f3620747fd1) == 2);

    // Framed code:
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_other);
        tmp_args_element_value_1 = par_other;
        frame_dc85c06204427a969d1e5f3620747fd1->m_frame.f_lineno = 235;
        tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[94], tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_dc85c06204427a969d1e5f3620747fd1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dc85c06204427a969d1e5f3620747fd1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dc85c06204427a969d1e5f3620747fd1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dc85c06204427a969d1e5f3620747fd1,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_dc85c06204427a969d1e5f3620747fd1 == cache_frame_dc85c06204427a969d1e5f3620747fd1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dc85c06204427a969d1e5f3620747fd1);
        cache_frame_dc85c06204427a969d1e5f3620747fd1 = NULL;
    }

    assertFrameObject(frame_dc85c06204427a969d1e5f3620747fd1);

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


static PyObject *impl_flet$utils$$$function__26___iter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_bbeb6a7dd8968615116b1bebfcf34937;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bbeb6a7dd8968615116b1bebfcf34937 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bbeb6a7dd8968615116b1bebfcf34937)) {
        Py_XDECREF(cache_frame_bbeb6a7dd8968615116b1bebfcf34937);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bbeb6a7dd8968615116b1bebfcf34937 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bbeb6a7dd8968615116b1bebfcf34937 = MAKE_FUNCTION_FRAME(codeobj_bbeb6a7dd8968615116b1bebfcf34937, module_flet$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bbeb6a7dd8968615116b1bebfcf34937->m_type_description == NULL);
    frame_bbeb6a7dd8968615116b1bebfcf34937 = cache_frame_bbeb6a7dd8968615116b1bebfcf34937;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bbeb6a7dd8968615116b1bebfcf34937);
    assert(Py_REFCNT(frame_bbeb6a7dd8968615116b1bebfcf34937) == 2);

    // Framed code:
    {
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[88]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[89]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_return_value == NULL));
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
        exception_tb = MAKE_TRACEBACK(frame_bbeb6a7dd8968615116b1bebfcf34937, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bbeb6a7dd8968615116b1bebfcf34937->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bbeb6a7dd8968615116b1bebfcf34937, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bbeb6a7dd8968615116b1bebfcf34937,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_bbeb6a7dd8968615116b1bebfcf34937 == cache_frame_bbeb6a7dd8968615116b1bebfcf34937) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bbeb6a7dd8968615116b1bebfcf34937);
        cache_frame_bbeb6a7dd8968615116b1bebfcf34937 = NULL;
    }

    assertFrameObject(frame_bbeb6a7dd8968615116b1bebfcf34937);

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


static PyObject *impl_flet$utils$$$function__27___str__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_d9325d2ed8cd89ab76277cafa9416b7b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d9325d2ed8cd89ab76277cafa9416b7b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d9325d2ed8cd89ab76277cafa9416b7b)) {
        Py_XDECREF(cache_frame_d9325d2ed8cd89ab76277cafa9416b7b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d9325d2ed8cd89ab76277cafa9416b7b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d9325d2ed8cd89ab76277cafa9416b7b = MAKE_FUNCTION_FRAME(codeobj_d9325d2ed8cd89ab76277cafa9416b7b, module_flet$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d9325d2ed8cd89ab76277cafa9416b7b->m_type_description == NULL);
    frame_d9325d2ed8cd89ab76277cafa9416b7b = cache_frame_d9325d2ed8cd89ab76277cafa9416b7b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d9325d2ed8cd89ab76277cafa9416b7b);
    assert(Py_REFCNT(frame_d9325d2ed8cd89ab76277cafa9416b7b) == 2);

    // Framed code:
    {
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_tuple_arg_1;
        CHECK_OBJECT(par_self);
        tmp_tuple_arg_1 = par_self;
        tmp_unicode_arg_1 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
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
        exception_tb = MAKE_TRACEBACK(frame_d9325d2ed8cd89ab76277cafa9416b7b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d9325d2ed8cd89ab76277cafa9416b7b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d9325d2ed8cd89ab76277cafa9416b7b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d9325d2ed8cd89ab76277cafa9416b7b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_d9325d2ed8cd89ab76277cafa9416b7b == cache_frame_d9325d2ed8cd89ab76277cafa9416b7b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d9325d2ed8cd89ab76277cafa9416b7b);
        cache_frame_d9325d2ed8cd89ab76277cafa9416b7b = NULL;
    }

    assertFrameObject(frame_d9325d2ed8cd89ab76277cafa9416b7b);

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


static PyObject *impl_flet$utils$$$function__28___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ded5ca71b6338243e14792f136953dec;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ded5ca71b6338243e14792f136953dec = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ded5ca71b6338243e14792f136953dec)) {
        Py_XDECREF(cache_frame_ded5ca71b6338243e14792f136953dec);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ded5ca71b6338243e14792f136953dec == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ded5ca71b6338243e14792f136953dec = MAKE_FUNCTION_FRAME(codeobj_ded5ca71b6338243e14792f136953dec, module_flet$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ded5ca71b6338243e14792f136953dec->m_type_description == NULL);
    frame_ded5ca71b6338243e14792f136953dec = cache_frame_ded5ca71b6338243e14792f136953dec;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ded5ca71b6338243e14792f136953dec);
    assert(Py_REFCNT(frame_ded5ca71b6338243e14792f136953dec) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_expression_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_expression_value_1 == NULL));
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[95]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[21];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_unicode_arg_1;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_unicode_arg_1 = par_self;
            tmp_format_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[21];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[21], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
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
        exception_tb = MAKE_TRACEBACK(frame_ded5ca71b6338243e14792f136953dec, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ded5ca71b6338243e14792f136953dec->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ded5ca71b6338243e14792f136953dec, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ded5ca71b6338243e14792f136953dec,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ded5ca71b6338243e14792f136953dec == cache_frame_ded5ca71b6338243e14792f136953dec) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ded5ca71b6338243e14792f136953dec);
        cache_frame_ded5ca71b6338243e14792f136953dec = NULL;
    }

    assertFrameObject(frame_ded5ca71b6338243e14792f136953dec);

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


static PyObject *impl_flet$utils$$$function__29_polar(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_radians = python_pars[1];
    PyObject *par_magnitude = python_pars[2];
    struct Nuitka_FrameObject *frame_d758e581af86da56e00d91c72c47145f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d758e581af86da56e00d91c72c47145f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d758e581af86da56e00d91c72c47145f)) {
        Py_XDECREF(cache_frame_d758e581af86da56e00d91c72c47145f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d758e581af86da56e00d91c72c47145f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d758e581af86da56e00d91c72c47145f = MAKE_FUNCTION_FRAME(codeobj_d758e581af86da56e00d91c72c47145f, module_flet$utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d758e581af86da56e00d91c72c47145f->m_type_description == NULL);
    frame_d758e581af86da56e00d91c72c47145f = cache_frame_d758e581af86da56e00d91c72c47145f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d758e581af86da56e00d91c72c47145f);
    assert(Py_REFCNT(frame_d758e581af86da56e00d91c72c47145f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(par_cls);
        tmp_called_value_1 = par_cls;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[87]);
        assert(tmp_called_value_2 != NULL);
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_radians);
        tmp_args_element_value_3 = par_radians;
        frame_d758e581af86da56e00d91c72c47145f->m_frame.f_lineno = 249;
        tmp_mult_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[96], tmp_args_element_value_3);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_magnitude);
        tmp_mult_expr_right_1 = par_magnitude;
        tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[97];
        frame_d758e581af86da56e00d91c72c47145f->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_4};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[87]);
        assert(tmp_called_value_3 != NULL);
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 250;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_radians);
        tmp_args_element_value_7 = par_radians;
        frame_d758e581af86da56e00d91c72c47145f->m_frame.f_lineno = 250;
        tmp_mult_expr_left_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[98], tmp_args_element_value_7);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 250;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_magnitude);
        tmp_mult_expr_right_2 = par_magnitude;
        tmp_args_element_value_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 250;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = mod_consts[97];
        frame_d758e581af86da56e00d91c72c47145f->m_frame.f_lineno = 250;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_8};
            tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 250;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_d758e581af86da56e00d91c72c47145f->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
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
        exception_tb = MAKE_TRACEBACK(frame_d758e581af86da56e00d91c72c47145f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d758e581af86da56e00d91c72c47145f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d758e581af86da56e00d91c72c47145f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d758e581af86da56e00d91c72c47145f,
        type_description_1,
        par_cls,
        par_radians,
        par_magnitude
    );


    // Release cached frame if used for exception.
    if (frame_d758e581af86da56e00d91c72c47145f == cache_frame_d758e581af86da56e00d91c72c47145f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d758e581af86da56e00d91c72c47145f);
        cache_frame_d758e581af86da56e00d91c72c47145f = NULL;
    }

    assertFrameObject(frame_d758e581af86da56e00d91c72c47145f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_radians);
    Py_DECREF(par_radians);
    CHECK_OBJECT(par_magnitude);
    Py_DECREF(par_magnitude);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_radians);
    Py_DECREF(par_radians);
    CHECK_OBJECT(par_magnitude);
    Py_DECREF(par_magnitude);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_flet$utils$$$function__30_magnitude(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_fe9855e1094ca25a5fa491570fe690fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fe9855e1094ca25a5fa491570fe690fc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fe9855e1094ca25a5fa491570fe690fc)) {
        Py_XDECREF(cache_frame_fe9855e1094ca25a5fa491570fe690fc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fe9855e1094ca25a5fa491570fe690fc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fe9855e1094ca25a5fa491570fe690fc = MAKE_FUNCTION_FRAME(codeobj_fe9855e1094ca25a5fa491570fe690fc, module_flet$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fe9855e1094ca25a5fa491570fe690fc->m_type_description == NULL);
    frame_fe9855e1094ca25a5fa491570fe690fc = cache_frame_fe9855e1094ca25a5fa491570fe690fc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fe9855e1094ca25a5fa491570fe690fc);
    assert(Py_REFCNT(frame_fe9855e1094ca25a5fa491570fe690fc) == 2);

    // Framed code:
    {
        PyObject *tmp_abs_arg_1;
        CHECK_OBJECT(par_self);
        tmp_abs_arg_1 = par_self;
        tmp_return_value = BUILTIN_ABS(tmp_abs_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
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
        exception_tb = MAKE_TRACEBACK(frame_fe9855e1094ca25a5fa491570fe690fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fe9855e1094ca25a5fa491570fe690fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fe9855e1094ca25a5fa491570fe690fc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fe9855e1094ca25a5fa491570fe690fc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_fe9855e1094ca25a5fa491570fe690fc == cache_frame_fe9855e1094ca25a5fa491570fe690fc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fe9855e1094ca25a5fa491570fe690fc);
        cache_frame_fe9855e1094ca25a5fa491570fe690fc = NULL;
    }

    assertFrameObject(frame_fe9855e1094ca25a5fa491570fe690fc);

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


static PyObject *impl_flet$utils$$$function__31_degrees(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_7ec6ef7b6c3b4cb9439fb13eb83954fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7ec6ef7b6c3b4cb9439fb13eb83954fc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7ec6ef7b6c3b4cb9439fb13eb83954fc)) {
        Py_XDECREF(cache_frame_7ec6ef7b6c3b4cb9439fb13eb83954fc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ec6ef7b6c3b4cb9439fb13eb83954fc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ec6ef7b6c3b4cb9439fb13eb83954fc = MAKE_FUNCTION_FRAME(codeobj_7ec6ef7b6c3b4cb9439fb13eb83954fc, module_flet$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7ec6ef7b6c3b4cb9439fb13eb83954fc->m_type_description == NULL);
    frame_7ec6ef7b6c3b4cb9439fb13eb83954fc = cache_frame_7ec6ef7b6c3b4cb9439fb13eb83954fc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7ec6ef7b6c3b4cb9439fb13eb83954fc);
    assert(Py_REFCNT(frame_7ec6ef7b6c3b4cb9439fb13eb83954fc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[99]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[100]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 259;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7ec6ef7b6c3b4cb9439fb13eb83954fc->m_frame.f_lineno = 259;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
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
        exception_tb = MAKE_TRACEBACK(frame_7ec6ef7b6c3b4cb9439fb13eb83954fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ec6ef7b6c3b4cb9439fb13eb83954fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ec6ef7b6c3b4cb9439fb13eb83954fc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ec6ef7b6c3b4cb9439fb13eb83954fc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7ec6ef7b6c3b4cb9439fb13eb83954fc == cache_frame_7ec6ef7b6c3b4cb9439fb13eb83954fc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7ec6ef7b6c3b4cb9439fb13eb83954fc);
        cache_frame_7ec6ef7b6c3b4cb9439fb13eb83954fc = NULL;
    }

    assertFrameObject(frame_7ec6ef7b6c3b4cb9439fb13eb83954fc);

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


static PyObject *impl_flet$utils$$$function__32_radians(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_bf4e88f57908da376f447bbd1c652d77;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bf4e88f57908da376f447bbd1c652d77 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bf4e88f57908da376f447bbd1c652d77)) {
        Py_XDECREF(cache_frame_bf4e88f57908da376f447bbd1c652d77);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf4e88f57908da376f447bbd1c652d77 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf4e88f57908da376f447bbd1c652d77 = MAKE_FUNCTION_FRAME(codeobj_bf4e88f57908da376f447bbd1c652d77, module_flet$utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bf4e88f57908da376f447bbd1c652d77->m_type_description == NULL);
    frame_bf4e88f57908da376f447bbd1c652d77 = cache_frame_bf4e88f57908da376f447bbd1c652d77;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bf4e88f57908da376f447bbd1c652d77);
    assert(Py_REFCNT(frame_bf4e88f57908da376f447bbd1c652d77) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[101]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[89]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[88]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_bf4e88f57908da376f447bbd1c652d77->m_frame.f_lineno = 263;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
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
        exception_tb = MAKE_TRACEBACK(frame_bf4e88f57908da376f447bbd1c652d77, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf4e88f57908da376f447bbd1c652d77->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf4e88f57908da376f447bbd1c652d77, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf4e88f57908da376f447bbd1c652d77,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_bf4e88f57908da376f447bbd1c652d77 == cache_frame_bf4e88f57908da376f447bbd1c652d77) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bf4e88f57908da376f447bbd1c652d77);
        cache_frame_bf4e88f57908da376f447bbd1c652d77 = NULL;
    }

    assertFrameObject(frame_bf4e88f57908da376f447bbd1c652d77);

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


static PyObject *impl_flet$utils$$$function__33_with_x(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_96cd3f95e3035a10037a8212a9481a85;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_96cd3f95e3035a10037a8212a9481a85 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_96cd3f95e3035a10037a8212a9481a85)) {
        Py_XDECREF(cache_frame_96cd3f95e3035a10037a8212a9481a85);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96cd3f95e3035a10037a8212a9481a85 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96cd3f95e3035a10037a8212a9481a85 = MAKE_FUNCTION_FRAME(codeobj_96cd3f95e3035a10037a8212a9481a85, module_flet$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_96cd3f95e3035a10037a8212a9481a85->m_type_description == NULL);
    frame_96cd3f95e3035a10037a8212a9481a85 = cache_frame_96cd3f95e3035a10037a8212a9481a85;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_96cd3f95e3035a10037a8212a9481a85);
    assert(Py_REFCNT(frame_96cd3f95e3035a10037a8212a9481a85) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_called_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_called_value_1 == NULL));
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[89]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_96cd3f95e3035a10037a8212a9481a85->m_frame.f_lineno = 266;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
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
        exception_tb = MAKE_TRACEBACK(frame_96cd3f95e3035a10037a8212a9481a85, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96cd3f95e3035a10037a8212a9481a85->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96cd3f95e3035a10037a8212a9481a85, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96cd3f95e3035a10037a8212a9481a85,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_96cd3f95e3035a10037a8212a9481a85 == cache_frame_96cd3f95e3035a10037a8212a9481a85) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_96cd3f95e3035a10037a8212a9481a85);
        cache_frame_96cd3f95e3035a10037a8212a9481a85 = NULL;
    }

    assertFrameObject(frame_96cd3f95e3035a10037a8212a9481a85);

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


static PyObject *impl_flet$utils$$$function__34_with_y(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_3d37a63d4e6d20a051eabde725f3e01d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3d37a63d4e6d20a051eabde725f3e01d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3d37a63d4e6d20a051eabde725f3e01d)) {
        Py_XDECREF(cache_frame_3d37a63d4e6d20a051eabde725f3e01d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3d37a63d4e6d20a051eabde725f3e01d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3d37a63d4e6d20a051eabde725f3e01d = MAKE_FUNCTION_FRAME(codeobj_3d37a63d4e6d20a051eabde725f3e01d, module_flet$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3d37a63d4e6d20a051eabde725f3e01d->m_type_description == NULL);
    frame_3d37a63d4e6d20a051eabde725f3e01d = cache_frame_3d37a63d4e6d20a051eabde725f3e01d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3d37a63d4e6d20a051eabde725f3e01d);
    assert(Py_REFCNT(frame_3d37a63d4e6d20a051eabde725f3e01d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_called_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_called_value_1 == NULL));
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[88]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_2 = par_value;
        frame_3d37a63d4e6d20a051eabde725f3e01d->m_frame.f_lineno = 269;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
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
        exception_tb = MAKE_TRACEBACK(frame_3d37a63d4e6d20a051eabde725f3e01d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3d37a63d4e6d20a051eabde725f3e01d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3d37a63d4e6d20a051eabde725f3e01d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3d37a63d4e6d20a051eabde725f3e01d,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_3d37a63d4e6d20a051eabde725f3e01d == cache_frame_3d37a63d4e6d20a051eabde725f3e01d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3d37a63d4e6d20a051eabde725f3e01d);
        cache_frame_3d37a63d4e6d20a051eabde725f3e01d = NULL;
    }

    assertFrameObject(frame_3d37a63d4e6d20a051eabde725f3e01d);

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


static PyObject *impl_flet$utils$$$function__35_with_magnitude(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_cc84b91fe7f50337ca18aa7d152b6174;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cc84b91fe7f50337ca18aa7d152b6174 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cc84b91fe7f50337ca18aa7d152b6174)) {
        Py_XDECREF(cache_frame_cc84b91fe7f50337ca18aa7d152b6174);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cc84b91fe7f50337ca18aa7d152b6174 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cc84b91fe7f50337ca18aa7d152b6174 = MAKE_FUNCTION_FRAME(codeobj_cc84b91fe7f50337ca18aa7d152b6174, module_flet$utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cc84b91fe7f50337ca18aa7d152b6174->m_type_description == NULL);
    frame_cc84b91fe7f50337ca18aa7d152b6174 = cache_frame_cc84b91fe7f50337ca18aa7d152b6174;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cc84b91fe7f50337ca18aa7d152b6174);
    assert(Py_REFCNT(frame_cc84b91fe7f50337ca18aa7d152b6174) == 2);

    // Framed code:
    {
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_abs_arg_1;
        CHECK_OBJECT(par_self);
        tmp_mult_expr_left_1 = par_self;
        CHECK_OBJECT(par_value);
        tmp_mult_expr_right_1 = par_value;
        tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_abs_arg_1 = par_self;
        tmp_truediv_expr_right_1 = BUILTIN_ABS(tmp_abs_arg_1);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 272;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
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
        exception_tb = MAKE_TRACEBACK(frame_cc84b91fe7f50337ca18aa7d152b6174, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cc84b91fe7f50337ca18aa7d152b6174->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cc84b91fe7f50337ca18aa7d152b6174, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cc84b91fe7f50337ca18aa7d152b6174,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_cc84b91fe7f50337ca18aa7d152b6174 == cache_frame_cc84b91fe7f50337ca18aa7d152b6174) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cc84b91fe7f50337ca18aa7d152b6174);
        cache_frame_cc84b91fe7f50337ca18aa7d152b6174 = NULL;
    }

    assertFrameObject(frame_cc84b91fe7f50337ca18aa7d152b6174);

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


static PyObject *impl_flet$utils$$$function__36_with_radians(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *var_magnitude = NULL;
    struct Nuitka_FrameObject *frame_e566556624cc2781b3e6d82b4d86495b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e566556624cc2781b3e6d82b4d86495b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e566556624cc2781b3e6d82b4d86495b)) {
        Py_XDECREF(cache_frame_e566556624cc2781b3e6d82b4d86495b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e566556624cc2781b3e6d82b4d86495b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e566556624cc2781b3e6d82b4d86495b = MAKE_FUNCTION_FRAME(codeobj_e566556624cc2781b3e6d82b4d86495b, module_flet$utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e566556624cc2781b3e6d82b4d86495b->m_type_description == NULL);
    frame_e566556624cc2781b3e6d82b4d86495b = cache_frame_e566556624cc2781b3e6d82b4d86495b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e566556624cc2781b3e6d82b4d86495b);
    assert(Py_REFCNT(frame_e566556624cc2781b3e6d82b4d86495b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_abs_arg_1;
        CHECK_OBJECT(par_self);
        tmp_abs_arg_1 = par_self;
        tmp_assign_source_1 = BUILTIN_ABS(tmp_abs_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_magnitude == NULL);
        var_magnitude = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_called_instance_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_called_instance_1 == NULL));
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        CHECK_OBJECT(var_magnitude);
        tmp_args_element_value_2 = var_magnitude;
        frame_e566556624cc2781b3e6d82b4d86495b->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[102],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
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
        exception_tb = MAKE_TRACEBACK(frame_e566556624cc2781b3e6d82b4d86495b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e566556624cc2781b3e6d82b4d86495b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e566556624cc2781b3e6d82b4d86495b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e566556624cc2781b3e6d82b4d86495b,
        type_description_1,
        par_self,
        par_value,
        var_magnitude
    );


    // Release cached frame if used for exception.
    if (frame_e566556624cc2781b3e6d82b4d86495b == cache_frame_e566556624cc2781b3e6d82b4d86495b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e566556624cc2781b3e6d82b4d86495b);
        cache_frame_e566556624cc2781b3e6d82b4d86495b = NULL;
    }

    assertFrameObject(frame_e566556624cc2781b3e6d82b4d86495b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_magnitude);
    Py_DECREF(var_magnitude);
    var_magnitude = NULL;
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

    Py_XDECREF(var_magnitude);
    var_magnitude = NULL;
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


static PyObject *impl_flet$utils$$$function__37_with_degrees(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    PyObject *var_radians = NULL;
    PyObject *var_magnitude = NULL;
    struct Nuitka_FrameObject *frame_4eee296e7982530d44a517b53e0b7863;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4eee296e7982530d44a517b53e0b7863 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4eee296e7982530d44a517b53e0b7863)) {
        Py_XDECREF(cache_frame_4eee296e7982530d44a517b53e0b7863);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4eee296e7982530d44a517b53e0b7863 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4eee296e7982530d44a517b53e0b7863 = MAKE_FUNCTION_FRAME(codeobj_4eee296e7982530d44a517b53e0b7863, module_flet$utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4eee296e7982530d44a517b53e0b7863->m_type_description == NULL);
    frame_4eee296e7982530d44a517b53e0b7863 = cache_frame_4eee296e7982530d44a517b53e0b7863;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4eee296e7982530d44a517b53e0b7863);
    assert(Py_REFCNT(frame_4eee296e7982530d44a517b53e0b7863) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_4eee296e7982530d44a517b53e0b7863->m_frame.f_lineno = 279;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[100], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_radians == NULL);
        var_radians = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_abs_arg_1;
        CHECK_OBJECT(par_self);
        tmp_abs_arg_1 = par_self;
        tmp_assign_source_2 = BUILTIN_ABS(tmp_abs_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_magnitude == NULL);
        var_magnitude = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_type_arg_1 = par_self;
        tmp_called_instance_2 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_called_instance_2 == NULL));
        CHECK_OBJECT(var_radians);
        tmp_args_element_value_2 = var_radians;
        CHECK_OBJECT(var_magnitude);
        tmp_args_element_value_3 = var_magnitude;
        frame_4eee296e7982530d44a517b53e0b7863->m_frame.f_lineno = 281;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[102],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
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
        exception_tb = MAKE_TRACEBACK(frame_4eee296e7982530d44a517b53e0b7863, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4eee296e7982530d44a517b53e0b7863->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4eee296e7982530d44a517b53e0b7863, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4eee296e7982530d44a517b53e0b7863,
        type_description_1,
        par_self,
        par_value,
        var_radians,
        var_magnitude
    );


    // Release cached frame if used for exception.
    if (frame_4eee296e7982530d44a517b53e0b7863 == cache_frame_4eee296e7982530d44a517b53e0b7863) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4eee296e7982530d44a517b53e0b7863);
        cache_frame_4eee296e7982530d44a517b53e0b7863 = NULL;
    }

    assertFrameObject(frame_4eee296e7982530d44a517b53e0b7863);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_radians);
    Py_DECREF(var_radians);
    var_radians = NULL;
    CHECK_OBJECT(var_magnitude);
    Py_DECREF(var_magnitude);
    var_magnitude = NULL;
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

    Py_XDECREF(var_radians);
    var_radians = NULL;
    Py_XDECREF(var_magnitude);
    var_magnitude = NULL;
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



static PyObject *MAKE_FUNCTION_flet$utils$$$function__10_safe_tar_extractall(PyObject *defaults, PyObject *kw_defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__10_safe_tar_extractall,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_01171a4e2d08dc6f7e7e1fed20a8bb58,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__11_is_localhost_url() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__11_is_localhost_url,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d4c084ec69e7c5b07fc8144bb8e7ae76,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__12_get_package_root_dir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__12_get_package_root_dir,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_322fd605a4d3a6a533c69c643a20448c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__13_get_package_bin_dir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__13_get_package_bin_dir,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ca9e30c2237d4d0cd52d1046a1bc4d50,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__14_get_package_web_dir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__14_get_package_web_dir,
        mod_consts[124],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_727c4698e3df956752773fac06d858af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__15_get_free_tcp_port() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__15_get_free_tcp_port,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3e9fafce238d3f3896af5c570f24b7c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__16_get_current_script_dir() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__16_get_current_script_dir,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_38837b004ff0066ec1412ef2cc16b45a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__17_slugify(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__17_slugify,
        mod_consts[128],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e4711b772435e74d3f67c2c7c4d63280,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_flet$utils,
        mod_consts[77],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__18_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__18_lambda,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_fb6c1af40530b52f839d9c92046722a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__19_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__19_lambda,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_65c27e1c4a5b04a637738542cedf6817,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__1_is_windows() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__1_is_windows,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3b2e2a407f532314ab8c5408315d6d59,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__20_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__20_lambda,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_64534da71f28c06b19aee5d351187fab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__21_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__21_lambda,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_9ed91713c5b196434b0a00f8f9ffc175,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__22_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_15547d827a7a0b9523e3a7eb88142663,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[145]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__23_lambda(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__23_lambda,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_b9406bbd9a57fbe03f0ddaa8a4b4697c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__24___eq__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__24___eq__,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_8da470c32aa5905e629c9c23982d1197,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__25___ne__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__25___ne__,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        mod_consts[150],
#endif
        codeobj_dc85c06204427a969d1e5f3620747fd1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__26___iter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__26___iter__,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_bbeb6a7dd8968615116b1bebfcf34937,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__27___str__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__27___str__,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_d9325d2ed8cd89ab76277cafa9416b7b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__28___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__28___repr__,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_ded5ca71b6338243e14792f136953dec,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__29_polar() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__29_polar,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_d758e581af86da56e00d91c72c47145f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__2_is_linux() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__2_is_linux,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9f828ffeb3eabe7c789451fde55db5be,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__30_magnitude() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__30_magnitude,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_fe9855e1094ca25a5fa491570fe690fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__31_degrees() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__31_degrees,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_7ec6ef7b6c3b4cb9439fb13eb83954fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__32_radians() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__32_radians,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_bf4e88f57908da376f447bbd1c652d77,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__33_with_x() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__33_with_x,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_96cd3f95e3035a10037a8212a9481a85,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__34_with_y() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__34_with_y,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_3d37a63d4e6d20a051eabde725f3e01d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__35_with_magnitude() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__35_with_magnitude,
        mod_consts[168],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_cc84b91fe7f50337ca18aa7d152b6174,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__36_with_radians() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__36_with_radians,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_e566556624cc2781b3e6d82b4d86495b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__37_with_degrees() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__37_with_degrees,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_4eee296e7982530d44a517b53e0b7863,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__3_is_linux_server() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__3_is_linux_server,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_847eb372fa865de07757abc46dfc331d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__4_is_macos() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__4_is_macos,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8dee43b4493f5c43f2cee9f0b97c0fe7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__5_get_platform() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__5_get_platform,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aa783e7992516925552ecfe81149935f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__6_get_arch() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__6_get_arch,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ce00a7ad79c899dd3f2c035b75e77ec6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__7_open_in_browser() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__7_open_in_browser,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_85c7b306f7e1e2ef4a305d86f61bf39d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__8_which(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__8_which,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b1e35b63012f913b0f6352afd8ca6b7f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__8_which$$$function__1_is_exe(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__8_which$$$function__1_is_exe,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        mod_consts[35],
#endif
        codeobj_ff56ba812f1ca807dc37e98907b43830,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_flet$utils$$$function__9_is_within_directory() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_flet$utils$$$function__9_is_within_directory,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_61a7063d9c6a6f34b56a176aed04c0c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_flet$utils,
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

function_impl_code functable_flet$utils[] = {
    impl_flet$utils$$$function__8_which$$$function__1_is_exe,
    impl_flet$utils$$$function__1_is_windows,
    impl_flet$utils$$$function__2_is_linux,
    impl_flet$utils$$$function__3_is_linux_server,
    impl_flet$utils$$$function__4_is_macos,
    impl_flet$utils$$$function__5_get_platform,
    impl_flet$utils$$$function__6_get_arch,
    impl_flet$utils$$$function__7_open_in_browser,
    impl_flet$utils$$$function__8_which,
    impl_flet$utils$$$function__9_is_within_directory,
    impl_flet$utils$$$function__10_safe_tar_extractall,
    impl_flet$utils$$$function__11_is_localhost_url,
    impl_flet$utils$$$function__12_get_package_root_dir,
    impl_flet$utils$$$function__13_get_package_bin_dir,
    impl_flet$utils$$$function__14_get_package_web_dir,
    impl_flet$utils$$$function__15_get_free_tcp_port,
    impl_flet$utils$$$function__16_get_current_script_dir,
    impl_flet$utils$$$function__17_slugify,
    impl_flet$utils$$$function__18_lambda,
    impl_flet$utils$$$function__19_lambda,
    impl_flet$utils$$$function__20_lambda,
    impl_flet$utils$$$function__21_lambda,
    NULL,
    impl_flet$utils$$$function__23_lambda,
    impl_flet$utils$$$function__24___eq__,
    impl_flet$utils$$$function__25___ne__,
    impl_flet$utils$$$function__26___iter__,
    impl_flet$utils$$$function__27___str__,
    impl_flet$utils$$$function__28___repr__,
    impl_flet$utils$$$function__29_polar,
    impl_flet$utils$$$function__30_magnitude,
    impl_flet$utils$$$function__31_degrees,
    impl_flet$utils$$$function__32_radians,
    impl_flet$utils$$$function__33_with_x,
    impl_flet$utils$$$function__34_with_y,
    impl_flet$utils$$$function__35_with_magnitude,
    impl_flet$utils$$$function__36_with_radians,
    impl_flet$utils$$$function__37_with_degrees,
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

    function_impl_code *current = functable_flet$utils;
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

    if (offset > sizeof(functable_flet$utils) || offset < 0) {
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
        functable_flet$utils[offset],
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
        module_flet$utils,
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
PyObject *modulecode_flet$utils(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("flet.utils");

    // Store the module for future use.
    module_flet$utils = module;

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
        PRINT_STRING("flet.utils: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet.utils: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("flet.utils: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initflet$utils\n");

    moduledict_flet$utils = MODULE_DICT(module_flet$utils);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_flet$utils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_flet$utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[21]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_flet$utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_flet$utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_flet$utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_flet$utils);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_flet$utils, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_flet$utils, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_flet$utils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_flet$utils);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_364490723e7d33db873d7586fddeeed2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_flet$utils$$$class__1_Vector_158 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_1d8ae5437de4c8d7d1e35f100b4b7dec_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[104];
        UPDATE_STRING_DICT0(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_2);
    }
    frame_364490723e7d33db873d7586fddeeed2 = MAKE_MODULE_FRAME(codeobj_364490723e7d33db873d7586fddeeed2, module_flet$utils);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_364490723e7d33db873d7586fddeeed2);
    assert(Py_REFCNT(frame_364490723e7d33db873d7586fddeeed2) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[104];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[106], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[107], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[90];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_flet$utils;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[73];
        frame_364490723e7d33db873d7586fddeeed2->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[0];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_flet$utils;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[73];
        frame_364490723e7d33db873d7586fddeeed2->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[65];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_flet$utils;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[73];
        frame_364490723e7d33db873d7586fddeeed2->m_frame.f_lineno = 4;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT0(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[78];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_flet$utils;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[73];
        frame_364490723e7d33db873d7586fddeeed2->m_frame.f_lineno = 6;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[32];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_flet$utils;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[73];
        frame_364490723e7d33db873d7586fddeeed2->m_frame.f_lineno = 7;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[109];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_flet$utils;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[110];
        tmp_level_value_6 = mod_consts[73];
        frame_364490723e7d33db873d7586fddeeed2->m_frame.f_lineno = 8;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_flet$utils,
                mod_consts[58],
                mod_consts[73]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[58]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_flet$utils$$$function__1_is_windows();

        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_flet$utils$$$function__2_is_linux();

        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_flet$utils$$$function__3_is_linux_server();

        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_flet$utils$$$function__4_is_macos();

        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_flet$utils$$$function__5_get_platform();

        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_flet$utils$$$function__6_get_arch();

        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_flet$utils$$$function__7_open_in_browser();

        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[117];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_19 = MAKE_FUNCTION_flet$utils$$$function__8_which(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_flet$utils$$$function__9_is_within_directory();

        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_2;
        PyObject *tmp_kw_defaults_1;
        tmp_defaults_2 = mod_consts[119];
        tmp_kw_defaults_1 = DICT_COPY(mod_consts[120]);
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_21 = MAKE_FUNCTION_flet$utils$$$function__10_safe_tar_extractall(tmp_defaults_2, tmp_kw_defaults_1);

        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_flet$utils$$$function__11_is_localhost_url();

        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_flet$utils$$$function__12_get_package_root_dir();

        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_flet$utils$$$function__13_get_package_bin_dir();

        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_flet$utils$$$function__14_get_package_web_dir();

        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_flet$utils$$$function__15_get_free_tcp_port();

        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_flet$utils$$$function__16_get_current_script_dir();

        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[127]);


        tmp_assign_source_28 = MAKE_FUNCTION_flet$utils$$$function__17_slugify(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_28);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[129];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_29 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
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


            exception_lineno = 158;

            goto try_except_handler_1;
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
        tmp_subscript_value_1 = mod_consts[73];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_31 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[130]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[130]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = mod_consts[131];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_364490723e7d33db873d7586fddeeed2->m_frame.f_lineno = 158;
        tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[132]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_1;
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
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[133];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[95];
        tmp_getattr_default_1 = mod_consts[134];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[95]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 158;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_33;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_flet$utils$$$class__1_Vector_158 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[135];
        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[136], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[137];
        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[103], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[131];
        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[138], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_3;
        }
        frame_1d8ae5437de4c8d7d1e35f100b4b7dec_2 = MAKE_CLASS_FRAME(codeobj_1d8ae5437de4c8d7d1e35f100b4b7dec, module_flet$utils, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_1d8ae5437de4c8d7d1e35f100b4b7dec_2);
        assert(Py_REFCNT(frame_1d8ae5437de4c8d7d1e35f100b4b7dec_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[139];
        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[92], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_expression_value_6;
            tmp_expression_value_6 = PyObject_GetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[140]);

            if (tmp_expression_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_6 = (PyObject *)&PyComplex_Type;
                    Py_INCREF(tmp_expression_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[141]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[88], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_expression_value_7;
            tmp_expression_value_7 = PyObject_GetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[140]);

            if (tmp_expression_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_7 = (PyObject *)&PyComplex_Type;
                    Py_INCREF(tmp_expression_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[142]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[89], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet$utils$$$function__18_lambda();

        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[83], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet$utils$$$function__19_lambda();

        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[84], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet$utils$$$function__20_lambda();

        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[85], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet$utils$$$function__21_lambda();

        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[86], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet$utils$$$function__22_lambda();

        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[146], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = mod_consts[117];
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_flet$utils$$$function__23_lambda(tmp_defaults_3);

            tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[147], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet$utils$$$function__24___eq__();

        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[94], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet$utils$$$function__25___ne__();

        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[149], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet$utils$$$function__26___iter__();

        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[151], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet$utils$$$function__27___str__();

        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[153], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet$utils$$$function__28___repr__();

        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[155], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_classmethod_arg_1;
            tmp_res = MAPPING_HAS_ITEM(locals_flet$utils$$$class__1_Vector_158, mod_consts[157]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_2 = PyObject_GetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[157]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[157]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 246;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_1 = MAKE_FUNCTION_flet$utils$$$function__29_polar();

            frame_1d8ae5437de4c8d7d1e35f100b4b7dec_2->m_frame.f_lineno = 246;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;


            tmp_classmethod_arg_1 = MAKE_FUNCTION_flet$utils$$$function__29_polar();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[102], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_3;
            tmp_res = MAPPING_HAS_ITEM(locals_flet$utils$$$class__1_Vector_158, mod_consts[159]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_3 = PyObject_GetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[159]);

            if (unlikely(tmp_called_value_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[159]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 253;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_2 = MAKE_FUNCTION_flet$utils$$$function__30_magnitude();

            frame_1d8ae5437de4c8d7d1e35f100b4b7dec_2->m_frame.f_lineno = 253;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_called_value_4 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_3 = MAKE_FUNCTION_flet$utils$$$function__30_magnitude();

            frame_1d8ae5437de4c8d7d1e35f100b4b7dec_2->m_frame.f_lineno = 253;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[160], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_5;
            tmp_res = MAPPING_HAS_ITEM(locals_flet$utils$$$class__1_Vector_158, mod_consts[159]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_6 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            tmp_called_value_5 = PyObject_GetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[159]);

            if (unlikely(tmp_called_value_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[159]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_4 = MAKE_FUNCTION_flet$utils$$$function__31_degrees();

            frame_1d8ae5437de4c8d7d1e35f100b4b7dec_2->m_frame.f_lineno = 257;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_6 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_5 = MAKE_FUNCTION_flet$utils$$$function__31_degrees();

            frame_1d8ae5437de4c8d7d1e35f100b4b7dec_2->m_frame.f_lineno = 257;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[99], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_7;
            tmp_res = MAPPING_HAS_ITEM(locals_flet$utils$$$class__1_Vector_158, mod_consts[159]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            tmp_called_value_7 = PyObject_GetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[159]);

            if (unlikely(tmp_called_value_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[159]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_6 = MAKE_FUNCTION_flet$utils$$$function__32_radians();

            frame_1d8ae5437de4c8d7d1e35f100b4b7dec_2->m_frame.f_lineno = 261;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_called_value_8 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_7 = MAKE_FUNCTION_flet$utils$$$function__32_radians();

            frame_1d8ae5437de4c8d7d1e35f100b4b7dec_2->m_frame.f_lineno = 261;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_5:;
            tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[100], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_flet$utils$$$function__33_with_x();

        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[164], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet$utils$$$function__34_with_y();

        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[166], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet$utils$$$function__35_with_magnitude();

        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[168], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet$utils$$$function__36_with_radians();

        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[170], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_flet$utils$$$function__37_with_degrees();

        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[172], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_1d8ae5437de4c8d7d1e35f100b4b7dec_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_1d8ae5437de4c8d7d1e35f100b4b7dec_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_1d8ae5437de4c8d7d1e35f100b4b7dec_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_1d8ae5437de4c8d7d1e35f100b4b7dec_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_1d8ae5437de4c8d7d1e35f100b4b7dec_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[129];
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[129];
        tmp_res = PyObject_SetItem(locals_flet$utils$$$class__1_Vector_158, mod_consts[174], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto try_except_handler_3;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_9 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[131];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_flet$utils$$$class__1_Vector_158;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_364490723e7d33db873d7586fddeeed2->m_frame.f_lineno = 158;
            tmp_assign_source_35 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_35;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_34 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_34);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_flet$utils$$$class__1_Vector_158);
        locals_flet$utils$$$class__1_Vector_158 = NULL;
        goto try_return_handler_2;
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

        Py_DECREF(locals_flet$utils$$$class__1_Vector_158);
        locals_flet$utils$$$class__1_Vector_158 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
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
        exception_lineno = 158;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_flet$utils, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_34);
    }
    goto try_end_1;
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

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_364490723e7d33db873d7586fddeeed2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_364490723e7d33db873d7586fddeeed2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_364490723e7d33db873d7586fddeeed2, exception_lineno);
    }



    assertFrameObject(frame_364490723e7d33db873d7586fddeeed2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
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
    PGO_onModuleExit("flet.utils", false);

    Py_INCREF(module_flet$utils);
    return module_flet$utils;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_flet$utils, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("flet$utils", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
