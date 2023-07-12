/* Generated code for Python module 'anyio.from_thread'
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

/* The "module_anyio$from_thread" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anyio$from_thread;
PyDictObject *moduledict_anyio$from_thread;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[245];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[245];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("anyio.from_thread"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 245; i++) {
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
void checkModuleConstants_anyio$from_thread(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 245; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_30d0068b191a3e4a1ffd5b6497ec4cb7;
static PyCodeObject *codeobj_4e8351ea42031a6126e27e571cdfb6fb;
static PyCodeObject *codeobj_0b6a96ac9b54f4d948c5b2c339d88e14;
static PyCodeObject *codeobj_86d99307e7795f94f827579bcf5ef964;
static PyCodeObject *codeobj_f77f85d54f666fe9be5dd635c454bb2a;
static PyCodeObject *codeobj_ca7dcf60e40076447c0ab3699ba2d75f;
static PyCodeObject *codeobj_3e53874270d62a324d0b0922a8d1d67a;
static PyCodeObject *codeobj_4313dc6ebb81b01b090e35990a9c34da;
static PyCodeObject *codeobj_5469a3d3519dced6eb310a1240f69fbc;
static PyCodeObject *codeobj_8de90bf62232c27b51cee3971cebb671;
static PyCodeObject *codeobj_4499739cc15b4813092b7e0d54c6d79c;
static PyCodeObject *codeobj_12b7f1016f2ec714a8e0a9b0ec8cc041;
static PyCodeObject *codeobj_e2105173e902f6c765c0fc558c321d4a;
static PyCodeObject *codeobj_66bdcd9494729a2f89aceacc5b0d6aff;
static PyCodeObject *codeobj_afcc74dc027edd57cbfab023b6c663f3;
static PyCodeObject *codeobj_e18d2d1a69f13ff8fa8154e514e4c519;
static PyCodeObject *codeobj_d12e8e93a3c23ba6d02c400d1926fea9;
static PyCodeObject *codeobj_dc0ae9ca05be3bfd38bbafe1ab394643;
static PyCodeObject *codeobj_329b9f87e3605d6c9c4979b9e6615442;
static PyCodeObject *codeobj_986a4e577b346a0cf92d3932c8473edf;
static PyCodeObject *codeobj_9f3740f354d6e0f466b0c1cd0a095aaa;
static PyCodeObject *codeobj_fcb687e8af7a5390b9cbac5b6e252761;
static PyCodeObject *codeobj_50c86196f48b7d88342c01b043779bc1;
static PyCodeObject *codeobj_74233275f8654f0204c61a0e1b75eaa4;
static PyCodeObject *codeobj_224ac8fa334a3167e407e329e07b3051;
static PyCodeObject *codeobj_17f781e42b3b9ddec4d42bcab404c3af;
static PyCodeObject *codeobj_f5ef926740af5abdf552960d8ab7da66;
static PyCodeObject *codeobj_054155ea8f2438f7ebdf3391d34cde1e;
static PyCodeObject *codeobj_1733ff19f3b03ecb4ee751316b5497a2;
static PyCodeObject *codeobj_05fcb80bf6e7758fc43007cd1878bdd3;
static PyCodeObject *codeobj_16c4ac5f37c754a9f2bf88f676caeb66;
static PyCodeObject *codeobj_b373ac6c2a38718194e33fe5d6cec9ba;
static PyCodeObject *codeobj_41ec5066f9e1d38ebce4bfb5a1e74c8d;
static PyCodeObject *codeobj_22e139422214cf3d6fde8fbe39d1199c;
static PyCodeObject *codeobj_f1a072fec0f8b1d47f07bcd1bbd51437;
static PyCodeObject *codeobj_ec3e0fa1271b67932c20b6f9bcdec25e;
static PyCodeObject *codeobj_fdb82336f71e0cb5f4ba9943f65d926d;
static PyCodeObject *codeobj_b7d6f651fb53c06f7c2f872d64a65af9;
static PyCodeObject *codeobj_5bf8983d88fdbc1a7b52b450a4126814;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[121]; CHECK_OBJECT(module_filename_obj);
    codeobj_30d0068b191a3e4a1ffd5b6497ec4cb7 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[217], mod_consts[217], NULL, NULL, 0, 0, 0);
    codeobj_4e8351ea42031a6126e27e571cdfb6fb = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[218], NULL, 0, 0, 0);
    codeobj_0b6a96ac9b54f4d948c5b2c339d88e14 = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[218], NULL, 0, 0, 0);
    codeobj_86d99307e7795f94f827579bcf5ef964 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[218], NULL, 0, 0, 0);
    codeobj_f77f85d54f666fe9be5dd635c454bb2a = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[219], NULL, 1, 0, 0);
    codeobj_ca7dcf60e40076447c0ab3699ba2d75f = MAKE_CODE_OBJECT(module_filename_obj, 163, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[220], NULL, 4, 0, 0);
    codeobj_3e53874270d62a324d0b0922a8d1d67a = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[221], NULL, 1, 0, 0);
    codeobj_4313dc6ebb81b01b090e35990a9c34da = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[222], NULL, 4, 0, 0);
    codeobj_5469a3d3519dced6eb310a1240f69fbc = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[178], mod_consts[178], mod_consts[219], NULL, 1, 0, 0);
    codeobj_8de90bf62232c27b51cee3971cebb671 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[178], mod_consts[178], mod_consts[223], NULL, 3, 0, 0);
    codeobj_4499739cc15b4813092b7e0d54c6d79c = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[178], mod_consts[178], mod_consts[224], NULL, 2, 0, 0);
    codeobj_12b7f1016f2ec714a8e0a9b0ec8cc041 = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[195], mod_consts[195], mod_consts[225], NULL, 1, 0, 0);
    codeobj_e2105173e902f6c765c0fc558c321d4a = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[226], NULL, 5, 0, 0);
    codeobj_66bdcd9494729a2f89aceacc5b0d6aff = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[219], NULL, 1, 0, 0);
    codeobj_afcc74dc027edd57cbfab023b6c663f3 = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[227], NULL, 6, 0, 0);
    codeobj_e18d2d1a69f13ff8fa8154e514e4c519 = MAKE_CODE_OBJECT(module_filename_obj, 259, CO_VARARGS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[228], NULL, 2, 0, 0);
    codeobj_d12e8e93a3c23ba6d02c400d1926fea9 = MAKE_CODE_OBJECT(module_filename_obj, 265, CO_VARARGS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[228], NULL, 2, 0, 0);
    codeobj_dc0ae9ca05be3bfd38bbafe1ab394643 = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[228], NULL, 2, 0, 0);
    codeobj_329b9f87e3605d6c9c4979b9e6615442 = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[64], mod_consts[64], mod_consts[229], mod_consts[230], 1, 0, 0);
    codeobj_986a4e577b346a0cf92d3932c8473edf = MAKE_CODE_OBJECT(module_filename_obj, 431, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[215], mod_consts[215], NULL, NULL, 0, 0, 0);
    codeobj_9f3740f354d6e0f466b0c1cd0a095aaa = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[8], mod_consts[8], mod_consts[231], NULL, 1, 0, 0);
    codeobj_fcb687e8af7a5390b9cbac5b6e252761 = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[232], NULL, 1, 0, 0);
    codeobj_50c86196f48b7d88342c01b043779bc1 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[233], NULL, 1, 0, 0);
    codeobj_74233275f8654f0204c61a0e1b75eaa4 = MAKE_CODE_OBJECT(module_filename_obj, 468, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[106], mod_consts[106], mod_consts[234], mod_consts[235], 0, 0, 0);
    codeobj_224ac8fa334a3167e407e329e07b3051 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[231], NULL, 1, 0, 0);
    codeobj_17f781e42b3b9ddec4d42bcab404c3af = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[233], NULL, 1, 0, 0);
    codeobj_f5ef926740af5abdf552960d8ab7da66 = MAKE_CODE_OBJECT(module_filename_obj, 180, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[55], mod_consts[55], mod_consts[219], NULL, 1, 0, 0);
    codeobj_054155ea8f2438f7ebdf3391d34cde1e = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_VARARGS | CO_NOFREE, mod_consts[205], mod_consts[205], mod_consts[236], NULL, 2, 1, 0);
    codeobj_1733ff19f3b03ecb4ee751316b5497a2 = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_VARARGS | CO_NOFREE, mod_consts[205], mod_consts[205], mod_consts[236], NULL, 2, 1, 0);
    codeobj_05fcb80bf6e7758fc43007cd1878bdd3 = MAKE_CODE_OBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[205], mod_consts[205], mod_consts[236], NULL, 2, 1, 0);
    codeobj_16c4ac5f37c754a9f2bf88f676caeb66 = MAKE_CODE_OBJECT(module_filename_obj, 451, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[118], mod_consts[118], mod_consts[237], NULL, 2, 0, 0);
    codeobj_b373ac6c2a38718194e33fe5d6cec9ba = MAKE_CODE_OBJECT(module_filename_obj, 372, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[209], mod_consts[209], mod_consts[238], NULL, 2, 1, 0);
    codeobj_41ec5066f9e1d38ebce4bfb5a1e74c8d = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_VARARGS | CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[236], NULL, 2, 1, 0);
    codeobj_22e139422214cf3d6fde8fbe39d1199c = MAKE_CODE_OBJECT(module_filename_obj, 339, CO_VARARGS | CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[236], NULL, 2, 1, 0);
    codeobj_f1a072fec0f8b1d47f07bcd1bbd51437 = MAKE_CODE_OBJECT(module_filename_obj, 344, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[239], NULL, 2, 1, 0);
    codeobj_ec3e0fa1271b67932c20b6f9bcdec25e = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[191], mod_consts[191], mod_consts[240], NULL, 2, 0, 0);
    codeobj_fdb82336f71e0cb5f4ba9943f65d926d = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[47], mod_consts[241], NULL, 2, 0, 0);
    codeobj_b7d6f651fb53c06f7c2f872d64a65af9 = MAKE_CODE_OBJECT(module_filename_obj, 393, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[91], mod_consts[91], mod_consts[242], mod_consts[243], 1, 0, 0);
    codeobj_5bf8983d88fdbc1a7b52b450a4126814 = MAKE_CODE_OBJECT(module_filename_obj, 413, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[212], mod_consts[212], mod_consts[221], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_anyio$from_thread$$$function__6_run_async_cm$$$coroutine__1_run_async_cm(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$from_thread$$$function__13___aenter__$$$coroutine__1___aenter__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$from_thread$$$function__14___aexit__$$$coroutine__1___aexit__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$from_thread$$$function__16_sleep_until_stopped$$$coroutine__1_sleep_until_stopped(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$from_thread$$$function__17_stop$$$coroutine__1_stop(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$from_thread$$$function__18__call_func$$$coroutine__1__call_func(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal$$$function__1_run_portal$$$coroutine__1_run_portal(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__15_complex_call_helper_pos_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1_complex_call_helper_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_star_list_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__5_complex_call_helper_pos_keywords_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__10_started(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__11___new__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__12___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__13___aenter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__14___aexit__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__15__check_running(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__16_sleep_until_stopped(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__17_stop(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__18__call_func(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__18__call_func$$$coroutine__1__call_func$$$function__1_callback(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__19__spawn_task_from_thread(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__1_run(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__20_call(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__21_call(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__22_call(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__23_spawn_task(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__24_spawn_task(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__25_spawn_task(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__26_start_task_soon(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__27_start_task_soon(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__28_start_task_soon(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__29_start_task(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__29_start_task$$$function__1_task_done(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__2_run_async_from_thread(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__30_wrap_async_context_manager(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__31_create_blocking_portal(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__32_start_blocking_portal(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal$$$function__1_run_portal(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__3_run_sync(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__4_run_sync_from_thread(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__5___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__6_run_async_cm(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__7___enter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__8___exit__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__9___init__(PyObject *annotations);


// The module function definitions.
static PyObject *impl_anyio$from_thread$$$function__1_run(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *var_asynclib = NULL;
    struct Nuitka_FrameObject *frame_9f3740f354d6e0f466b0c1cd0a095aaa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9f3740f354d6e0f466b0c1cd0a095aaa = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9f3740f354d6e0f466b0c1cd0a095aaa)) {
        Py_XDECREF(cache_frame_9f3740f354d6e0f466b0c1cd0a095aaa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9f3740f354d6e0f466b0c1cd0a095aaa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9f3740f354d6e0f466b0c1cd0a095aaa = MAKE_FUNCTION_FRAME(codeobj_9f3740f354d6e0f466b0c1cd0a095aaa, module_anyio$from_thread, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9f3740f354d6e0f466b0c1cd0a095aaa->m_type_description == NULL);
    frame_9f3740f354d6e0f466b0c1cd0a095aaa = cache_frame_9f3740f354d6e0f466b0c1cd0a095aaa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9f3740f354d6e0f466b0c1cd0a095aaa);
    assert(Py_REFCNT(frame_9f3740f354d6e0f466b0c1cd0a095aaa) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_asynclib == NULL);
        var_asynclib = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_9f3740f354d6e0f466b0c1cd0a095aaa, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_9f3740f354d6e0f466b0c1cd0a095aaa, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[2];
        frame_9f3740f354d6e0f466b0c1cd0a095aaa->m_frame.f_lineno = 47;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 47;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 44;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9f3740f354d6e0f466b0c1cd0a095aaa->m_frame) frame_9f3740f354d6e0f466b0c1cd0a095aaa->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(var_asynclib);
        tmp_expression_value_2 = var_asynclib;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[3]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_tuple_element_1 = par_func;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__15_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
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
        exception_tb = MAKE_TRACEBACK(frame_9f3740f354d6e0f466b0c1cd0a095aaa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9f3740f354d6e0f466b0c1cd0a095aaa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9f3740f354d6e0f466b0c1cd0a095aaa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9f3740f354d6e0f466b0c1cd0a095aaa,
        type_description_1,
        par_func,
        par_args,
        var_asynclib
    );


    // Release cached frame if used for exception.
    if (frame_9f3740f354d6e0f466b0c1cd0a095aaa == cache_frame_9f3740f354d6e0f466b0c1cd0a095aaa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9f3740f354d6e0f466b0c1cd0a095aaa);
        cache_frame_9f3740f354d6e0f466b0c1cd0a095aaa = NULL;
    }

    assertFrameObject(frame_9f3740f354d6e0f466b0c1cd0a095aaa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_asynclib);
    Py_DECREF(var_asynclib);
    var_asynclib = NULL;
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

    Py_XDECREF(var_asynclib);
    var_asynclib = NULL;
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
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$from_thread$$$function__2_run_async_from_thread(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    PyObject *par_args = python_pars[1];
    struct Nuitka_FrameObject *frame_50c86196f48b7d88342c01b043779bc1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_50c86196f48b7d88342c01b043779bc1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_50c86196f48b7d88342c01b043779bc1)) {
        Py_XDECREF(cache_frame_50c86196f48b7d88342c01b043779bc1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_50c86196f48b7d88342c01b043779bc1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_50c86196f48b7d88342c01b043779bc1 = MAKE_FUNCTION_FRAME(codeobj_50c86196f48b7d88342c01b043779bc1, module_anyio$from_thread, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_50c86196f48b7d88342c01b043779bc1->m_type_description == NULL);
    frame_50c86196f48b7d88342c01b043779bc1 = cache_frame_50c86196f48b7d88342c01b043779bc1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_50c86196f48b7d88342c01b043779bc1);
    assert(Py_REFCNT(frame_50c86196f48b7d88342c01b043779bc1) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[6];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_50c86196f48b7d88342c01b043779bc1->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_tuple_element_1 = par_func;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__15_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
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
        exception_tb = MAKE_TRACEBACK(frame_50c86196f48b7d88342c01b043779bc1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_50c86196f48b7d88342c01b043779bc1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_50c86196f48b7d88342c01b043779bc1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_50c86196f48b7d88342c01b043779bc1,
        type_description_1,
        par_func,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_50c86196f48b7d88342c01b043779bc1 == cache_frame_50c86196f48b7d88342c01b043779bc1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_50c86196f48b7d88342c01b043779bc1);
        cache_frame_50c86196f48b7d88342c01b043779bc1 = NULL;
    }

    assertFrameObject(frame_50c86196f48b7d88342c01b043779bc1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$from_thread$$$function__3_run_sync(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *var_asynclib = NULL;
    struct Nuitka_FrameObject *frame_224ac8fa334a3167e407e329e07b3051;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_224ac8fa334a3167e407e329e07b3051 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_224ac8fa334a3167e407e329e07b3051)) {
        Py_XDECREF(cache_frame_224ac8fa334a3167e407e329e07b3051);

#if _DEBUG_REFCOUNTS
        if (cache_frame_224ac8fa334a3167e407e329e07b3051 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_224ac8fa334a3167e407e329e07b3051 = MAKE_FUNCTION_FRAME(codeobj_224ac8fa334a3167e407e329e07b3051, module_anyio$from_thread, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_224ac8fa334a3167e407e329e07b3051->m_type_description == NULL);
    frame_224ac8fa334a3167e407e329e07b3051 = cache_frame_224ac8fa334a3167e407e329e07b3051;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_224ac8fa334a3167e407e329e07b3051);
    assert(Py_REFCNT(frame_224ac8fa334a3167e407e329e07b3051) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(var_asynclib == NULL);
        var_asynclib = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_224ac8fa334a3167e407e329e07b3051, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_224ac8fa334a3167e407e329e07b3051, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[2];
        frame_224ac8fa334a3167e407e329e07b3051->m_frame.f_lineno = 74;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 74;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 71;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_224ac8fa334a3167e407e329e07b3051->m_frame) frame_224ac8fa334a3167e407e329e07b3051->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(var_asynclib);
        tmp_expression_value_2 = var_asynclib;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_tuple_element_1 = par_func;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__15_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
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
        exception_tb = MAKE_TRACEBACK(frame_224ac8fa334a3167e407e329e07b3051, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_224ac8fa334a3167e407e329e07b3051->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_224ac8fa334a3167e407e329e07b3051, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_224ac8fa334a3167e407e329e07b3051,
        type_description_1,
        par_func,
        par_args,
        var_asynclib
    );


    // Release cached frame if used for exception.
    if (frame_224ac8fa334a3167e407e329e07b3051 == cache_frame_224ac8fa334a3167e407e329e07b3051) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_224ac8fa334a3167e407e329e07b3051);
        cache_frame_224ac8fa334a3167e407e329e07b3051 = NULL;
    }

    assertFrameObject(frame_224ac8fa334a3167e407e329e07b3051);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_asynclib);
    Py_DECREF(var_asynclib);
    var_asynclib = NULL;
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

    Py_XDECREF(var_asynclib);
    var_asynclib = NULL;
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
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$from_thread$$$function__4_run_sync_from_thread(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[0];
    PyObject *par_args = python_pars[1];
    struct Nuitka_FrameObject *frame_17f781e42b3b9ddec4d42bcab404c3af;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_17f781e42b3b9ddec4d42bcab404c3af = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_17f781e42b3b9ddec4d42bcab404c3af)) {
        Py_XDECREF(cache_frame_17f781e42b3b9ddec4d42bcab404c3af);

#if _DEBUG_REFCOUNTS
        if (cache_frame_17f781e42b3b9ddec4d42bcab404c3af == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_17f781e42b3b9ddec4d42bcab404c3af = MAKE_FUNCTION_FRAME(codeobj_17f781e42b3b9ddec4d42bcab404c3af, module_anyio$from_thread, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_17f781e42b3b9ddec4d42bcab404c3af->m_type_description == NULL);
    frame_17f781e42b3b9ddec4d42bcab404c3af = cache_frame_17f781e42b3b9ddec4d42bcab404c3af;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_17f781e42b3b9ddec4d42bcab404c3af);
    assert(Py_REFCNT(frame_17f781e42b3b9ddec4d42bcab404c3af) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[11];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_17f781e42b3b9ddec4d42bcab404c3af->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_tuple_element_1 = par_func;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__15_complex_call_helper_pos_star_list(dir_call_args);
        }
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
        exception_tb = MAKE_TRACEBACK(frame_17f781e42b3b9ddec4d42bcab404c3af, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_17f781e42b3b9ddec4d42bcab404c3af->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_17f781e42b3b9ddec4d42bcab404c3af, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_17f781e42b3b9ddec4d42bcab404c3af,
        type_description_1,
        par_func,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_17f781e42b3b9ddec4d42bcab404c3af == cache_frame_17f781e42b3b9ddec4d42bcab404c3af) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_17f781e42b3b9ddec4d42bcab404c3af);
        cache_frame_17f781e42b3b9ddec4d42bcab404c3af = NULL;
    }

    assertFrameObject(frame_17f781e42b3b9ddec4d42bcab404c3af);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$from_thread$$$function__5___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_async_cm = python_pars[1];
    PyObject *par_portal = python_pars[2];
    struct Nuitka_FrameObject *frame_8de90bf62232c27b51cee3971cebb671;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8de90bf62232c27b51cee3971cebb671 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8de90bf62232c27b51cee3971cebb671)) {
        Py_XDECREF(cache_frame_8de90bf62232c27b51cee3971cebb671);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8de90bf62232c27b51cee3971cebb671 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8de90bf62232c27b51cee3971cebb671 = MAKE_FUNCTION_FRAME(codeobj_8de90bf62232c27b51cee3971cebb671, module_anyio$from_thread, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8de90bf62232c27b51cee3971cebb671->m_type_description == NULL);
    frame_8de90bf62232c27b51cee3971cebb671 = cache_frame_8de90bf62232c27b51cee3971cebb671;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8de90bf62232c27b51cee3971cebb671);
    assert(Py_REFCNT(frame_8de90bf62232c27b51cee3971cebb671) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_async_cm);
        tmp_assattr_value_1 = par_async_cm;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_portal);
        tmp_assattr_value_2 = par_portal;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[14], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8de90bf62232c27b51cee3971cebb671, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8de90bf62232c27b51cee3971cebb671->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8de90bf62232c27b51cee3971cebb671, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8de90bf62232c27b51cee3971cebb671,
        type_description_1,
        par_self,
        par_async_cm,
        par_portal
    );


    // Release cached frame if used for exception.
    if (frame_8de90bf62232c27b51cee3971cebb671 == cache_frame_8de90bf62232c27b51cee3971cebb671) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8de90bf62232c27b51cee3971cebb671);
        cache_frame_8de90bf62232c27b51cee3971cebb671 = NULL;
    }

    assertFrameObject(frame_8de90bf62232c27b51cee3971cebb671);

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
    CHECK_OBJECT(par_async_cm);
    Py_DECREF(par_async_cm);
    CHECK_OBJECT(par_portal);
    Py_DECREF(par_portal);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_async_cm);
    Py_DECREF(par_async_cm);
    CHECK_OBJECT(par_portal);
    Py_DECREF(par_portal);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$from_thread$$$function__6_run_async_cm(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_anyio$from_thread$$$function__6_run_async_cm$$$coroutine__1_run_async_cm(tmp_closure_1);

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
struct anyio$from_thread$$$function__6_run_async_cm$$$coroutine__1_run_async_cm_locals {
    PyObject *var_value;
    PyObject *var_exc;
    PyObject *var_result;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    bool tmp_result;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
};
#endif

static PyObject *anyio$from_thread$$$function__6_run_async_cm$$$coroutine__1_run_async_cm_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$from_thread$$$function__6_run_async_cm$$$coroutine__1_run_async_cm_locals *coroutine_heap = (struct anyio$from_thread$$$function__6_run_async_cm$$$coroutine__1_run_async_cm_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 4: goto yield_return_4;
    case 3: goto yield_return_3;
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_value = NULL;
    coroutine_heap->var_exc = NULL;
    coroutine_heap->var_result = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_fcb687e8af7a5390b9cbac5b6e252761, module_anyio$from_thread, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    // Tried code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 101;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 101;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 101;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 101;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_2;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[17], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 101;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        coroutine->m_frame->m_frame.f_lineno = 102;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 102;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[13]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 102;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 102;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[18]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 102;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 102;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 102;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = yield_return_value;
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 102;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_2;
        }
        assert(coroutine_heap->var_value == NULL);
        coroutine_heap->var_value = tmp_assign_source_1;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    coroutine_heap->exception_keeper_type_1 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_1 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_1 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (coroutine_heap->exception_keeper_tb_1 == NULL) {
        coroutine_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
    } else if (coroutine_heap->exception_keeper_lineno_1 != 0) {
        coroutine_heap->exception_keeper_tb_1 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_1, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&coroutine_heap->exception_keeper_type_1, &coroutine_heap->exception_keeper_value_1, &coroutine_heap->exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_1 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = EXC_VALUE(PyThreadState_GET());
        assert(coroutine_heap->var_exc == NULL);
        Py_INCREF(tmp_assign_source_2);
        coroutine_heap->var_exc = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 104;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[19]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 104;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(coroutine_heap->var_exc);
        tmp_args_element_value_1 = coroutine_heap->var_exc;
        coroutine->m_frame->m_frame.f_lineno = 104;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[20], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 104;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 105;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_4;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_4:;
    coroutine_heap->exception_keeper_type_2 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_2 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_2 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_exc);
    coroutine_heap->var_exc = NULL;

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_2;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_2;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_2;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 100;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    coroutine_heap->exception_keeper_type_3 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_3 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_3 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_1);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_3;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_3;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_3;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 107;
            coroutine_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[19]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 107;
            coroutine_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(coroutine_heap->var_value);
        tmp_args_element_value_2 = coroutine_heap->var_value;
        coroutine->m_frame->m_frame.f_lineno = 107;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[21], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 107;
            coroutine_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    // Tried code:
    {
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 114;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 114;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[17]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 114;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_5;
        }
        coroutine->m_frame->m_frame.f_lineno = 114;
        tmp_expression_value_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[22]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 114;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_5;
        }
        tmp_expression_value_6 = ASYNC_AWAIT(tmp_expression_value_7, await_normal);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 114;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_5;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_instance_4, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yieldfrom = tmp_expression_value_6;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), &tmp_called_instance_4, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 114;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_5;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 114;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_await_result_1);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    coroutine_heap->exception_keeper_type_4 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_4 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_4 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Preserve existing published exception id 2.
    coroutine_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (coroutine_heap->exception_keeper_tb_4 == NULL) {
        coroutine_heap->exception_keeper_tb_4 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_4);
    } else if (coroutine_heap->exception_keeper_lineno_4 != 0) {
        coroutine_heap->exception_keeper_tb_4 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_4, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_4);
    }

    PUBLISH_CURRENT_EXCEPTION(&coroutine_heap->exception_keeper_type_4, &coroutine_heap->exception_keeper_value_4, &coroutine_heap->exception_keeper_tb_4);
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_expression_value_13;
        coroutine->m_frame->m_frame.f_lineno = 119;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_12 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[13]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_6;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[23]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_6;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_13 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_dircall_arg2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[24]);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_6;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_expression_value_10 = impl___main__$$$function__1_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_9 = ASYNC_AWAIT(tmp_expression_value_10, await_normal);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_6;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), &tmp_dircall_arg1_1, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_dircall_arg2_1, sizeof(PyObject *), &tmp_expression_value_13, sizeof(PyObject *), NULL);
        SAVE_COROUTINE_EXCEPTION(coroutine);
        coroutine->m_yield_return_index = 3;
        coroutine->m_yieldfrom = tmp_expression_value_9;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_3:
        RESTORE_COROUTINE_EXCEPTION(coroutine);
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), &tmp_dircall_arg1_1, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_dircall_arg2_1, sizeof(PyObject *), &tmp_expression_value_13, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_3 = yield_return_value;
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooo";
            goto try_except_handler_6;
        }
        assert(coroutine_heap->var_result == NULL);
        coroutine_heap->var_result = tmp_assign_source_3;
    }
    CHECK_OBJECT(coroutine_heap->var_result);
    coroutine_heap->tmp_return_value = coroutine_heap->var_result;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_6;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_2);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_6:;
    coroutine_heap->exception_keeper_type_5 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_5 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_5 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_2);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_5;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_5;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_5;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_expression_value_18;
        coroutine->m_frame->m_frame.f_lineno = 119;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[13]);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[23]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_dircall_arg2_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[24]);
        if (tmp_dircall_arg2_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_dircall_arg1_2);

            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_expression_value_15 = impl___main__$$$function__1_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = ASYNC_AWAIT(tmp_expression_value_15, await_normal);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_15, sizeof(PyObject *), &tmp_dircall_arg1_2, sizeof(PyObject *), &tmp_expression_value_16, sizeof(PyObject *), &tmp_expression_value_17, sizeof(PyObject *), &tmp_dircall_arg2_2, sizeof(PyObject *), &tmp_expression_value_18, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 4;
        coroutine->m_yieldfrom = tmp_expression_value_14;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_4:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_15, sizeof(PyObject *), &tmp_dircall_arg1_2, sizeof(PyObject *), &tmp_expression_value_16, sizeof(PyObject *), &tmp_expression_value_17, sizeof(PyObject *), &tmp_dircall_arg2_2, sizeof(PyObject *), &tmp_expression_value_18, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = yield_return_value;
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 119;
            coroutine_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_result == NULL);
        coroutine_heap->var_result = tmp_assign_source_4;
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
            coroutine_heap->var_value,
            coroutine_heap->var_exc,
            coroutine_heap->var_result
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
    CHECK_OBJECT(coroutine_heap->var_result);
    coroutine_heap->tmp_return_value = coroutine_heap->var_result;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(coroutine_heap->var_value);
    Py_DECREF(coroutine_heap->var_value);
    coroutine_heap->var_value = NULL;
    CHECK_OBJECT(coroutine_heap->var_result);
    Py_DECREF(coroutine_heap->var_result);
    coroutine_heap->var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_6 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_6 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_6 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_value);
    coroutine_heap->var_value = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_6;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_6;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_6;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

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

static PyObject *MAKE_COROUTINE_anyio$from_thread$$$function__6_run_async_cm$$$coroutine__1_run_async_cm(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$from_thread$$$function__6_run_async_cm$$$coroutine__1_run_async_cm_context,
        module_anyio$from_thread,
        mod_consts[25],
        mod_consts[26],
        codeobj_fcb687e8af7a5390b9cbac5b6e252761,
        closure,
        1,
#if 1
        sizeof(struct anyio$from_thread$$$function__6_run_async_cm$$$coroutine__1_run_async_cm_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$from_thread$$$function__7___enter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_cm = NULL;
    struct Nuitka_FrameObject *frame_3e53874270d62a324d0b0922a8d1d67a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3e53874270d62a324d0b0922a8d1d67a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3e53874270d62a324d0b0922a8d1d67a)) {
        Py_XDECREF(cache_frame_3e53874270d62a324d0b0922a8d1d67a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e53874270d62a324d0b0922a8d1d67a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e53874270d62a324d0b0922a8d1d67a = MAKE_FUNCTION_FRAME(codeobj_3e53874270d62a324d0b0922a8d1d67a, module_anyio$from_thread, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3e53874270d62a324d0b0922a8d1d67a->m_type_description == NULL);
    frame_3e53874270d62a324d0b0922a8d1d67a = cache_frame_3e53874270d62a324d0b0922a8d1d67a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3e53874270d62a324d0b0922a8d1d67a);
    assert(Py_REFCNT(frame_3e53874270d62a324d0b0922a8d1d67a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e53874270d62a324d0b0922a8d1d67a->m_frame.f_lineno = 123;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[25]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e53874270d62a324d0b0922a8d1d67a->m_frame.f_lineno = 124;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[29], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[19]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3e53874270d62a324d0b0922a8d1d67a->m_frame.f_lineno = 125;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[30]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_cm == NULL);
        var_cm = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cm);
        tmp_args_element_value_3 = var_cm;
        frame_3e53874270d62a324d0b0922a8d1d67a->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
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
        exception_tb = MAKE_TRACEBACK(frame_3e53874270d62a324d0b0922a8d1d67a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e53874270d62a324d0b0922a8d1d67a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e53874270d62a324d0b0922a8d1d67a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e53874270d62a324d0b0922a8d1d67a,
        type_description_1,
        par_self,
        var_cm
    );


    // Release cached frame if used for exception.
    if (frame_3e53874270d62a324d0b0922a8d1d67a == cache_frame_3e53874270d62a324d0b0922a8d1d67a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3e53874270d62a324d0b0922a8d1d67a);
        cache_frame_3e53874270d62a324d0b0922a8d1d67a = NULL;
    }

    assertFrameObject(frame_3e53874270d62a324d0b0922a8d1d67a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cm);
    Py_DECREF(var_cm);
    var_cm = NULL;
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

    Py_XDECREF(var_cm);
    var_cm = NULL;
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


static PyObject *impl_anyio$from_thread$$$function__8___exit__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par__BlockingAsyncContextManager__exc_type = python_pars[1];
    PyObject *par__BlockingAsyncContextManager__exc_value = python_pars[2];
    PyObject *par__BlockingAsyncContextManager__traceback = python_pars[3];
    struct Nuitka_FrameObject *frame_4313dc6ebb81b01b090e35990a9c34da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4313dc6ebb81b01b090e35990a9c34da = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4313dc6ebb81b01b090e35990a9c34da)) {
        Py_XDECREF(cache_frame_4313dc6ebb81b01b090e35990a9c34da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4313dc6ebb81b01b090e35990a9c34da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4313dc6ebb81b01b090e35990a9c34da = MAKE_FUNCTION_FRAME(codeobj_4313dc6ebb81b01b090e35990a9c34da, module_anyio$from_thread, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4313dc6ebb81b01b090e35990a9c34da->m_type_description == NULL);
    frame_4313dc6ebb81b01b090e35990a9c34da = cache_frame_4313dc6ebb81b01b090e35990a9c34da;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4313dc6ebb81b01b090e35990a9c34da);
    assert(Py_REFCNT(frame_4313dc6ebb81b01b090e35990a9c34da) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par__BlockingAsyncContextManager__exc_type);
        tmp_tuple_element_1 = par__BlockingAsyncContextManager__exc_type;
        tmp_assattr_value_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_assattr_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par__BlockingAsyncContextManager__exc_value);
        tmp_tuple_element_1 = par__BlockingAsyncContextManager__exc_value;
        PyTuple_SET_ITEM0(tmp_assattr_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par__BlockingAsyncContextManager__traceback);
        tmp_tuple_element_1 = par__BlockingAsyncContextManager__traceback;
        PyTuple_SET_ITEM0(tmp_assattr_value_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[24], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[17]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[34]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4313dc6ebb81b01b090e35990a9c34da->m_frame.f_lineno = 135;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[29]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_4313dc6ebb81b01b090e35990a9c34da->m_frame.f_lineno = 136;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[30]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4313dc6ebb81b01b090e35990a9c34da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4313dc6ebb81b01b090e35990a9c34da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4313dc6ebb81b01b090e35990a9c34da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4313dc6ebb81b01b090e35990a9c34da,
        type_description_1,
        par_self,
        par__BlockingAsyncContextManager__exc_type,
        par__BlockingAsyncContextManager__exc_value,
        par__BlockingAsyncContextManager__traceback
    );


    // Release cached frame if used for exception.
    if (frame_4313dc6ebb81b01b090e35990a9c34da == cache_frame_4313dc6ebb81b01b090e35990a9c34da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4313dc6ebb81b01b090e35990a9c34da);
        cache_frame_4313dc6ebb81b01b090e35990a9c34da = NULL;
    }

    assertFrameObject(frame_4313dc6ebb81b01b090e35990a9c34da);

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
    CHECK_OBJECT(par__BlockingAsyncContextManager__exc_type);
    Py_DECREF(par__BlockingAsyncContextManager__exc_type);
    CHECK_OBJECT(par__BlockingAsyncContextManager__exc_value);
    Py_DECREF(par__BlockingAsyncContextManager__exc_value);
    CHECK_OBJECT(par__BlockingAsyncContextManager__traceback);
    Py_DECREF(par__BlockingAsyncContextManager__traceback);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par__BlockingAsyncContextManager__exc_type);
    Py_DECREF(par__BlockingAsyncContextManager__exc_type);
    CHECK_OBJECT(par__BlockingAsyncContextManager__exc_value);
    Py_DECREF(par__BlockingAsyncContextManager__exc_value);
    CHECK_OBJECT(par__BlockingAsyncContextManager__traceback);
    Py_DECREF(par__BlockingAsyncContextManager__traceback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$from_thread$$$function__9___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_future = python_pars[1];
    struct Nuitka_FrameObject *frame_4499739cc15b4813092b7e0d54c6d79c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4499739cc15b4813092b7e0d54c6d79c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4499739cc15b4813092b7e0d54c6d79c)) {
        Py_XDECREF(cache_frame_4499739cc15b4813092b7e0d54c6d79c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4499739cc15b4813092b7e0d54c6d79c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4499739cc15b4813092b7e0d54c6d79c = MAKE_FUNCTION_FRAME(codeobj_4499739cc15b4813092b7e0d54c6d79c, module_anyio$from_thread, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4499739cc15b4813092b7e0d54c6d79c->m_type_description == NULL);
    frame_4499739cc15b4813092b7e0d54c6d79c = cache_frame_4499739cc15b4813092b7e0d54c6d79c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4499739cc15b4813092b7e0d54c6d79c);
    assert(Py_REFCNT(frame_4499739cc15b4813092b7e0d54c6d79c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_future);
        tmp_assattr_value_1 = par_future;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[35], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4499739cc15b4813092b7e0d54c6d79c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4499739cc15b4813092b7e0d54c6d79c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4499739cc15b4813092b7e0d54c6d79c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4499739cc15b4813092b7e0d54c6d79c,
        type_description_1,
        par_self,
        par_future
    );


    // Release cached frame if used for exception.
    if (frame_4499739cc15b4813092b7e0d54c6d79c == cache_frame_4499739cc15b4813092b7e0d54c6d79c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4499739cc15b4813092b7e0d54c6d79c);
        cache_frame_4499739cc15b4813092b7e0d54c6d79c = NULL;
    }

    assertFrameObject(frame_4499739cc15b4813092b7e0d54c6d79c);

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
    CHECK_OBJECT(par_future);
    Py_DECREF(par_future);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_future);
    Py_DECREF(par_future);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$from_thread$$$function__10_started(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_ec3e0fa1271b67932c20b6f9bcdec25e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ec3e0fa1271b67932c20b6f9bcdec25e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ec3e0fa1271b67932c20b6f9bcdec25e)) {
        Py_XDECREF(cache_frame_ec3e0fa1271b67932c20b6f9bcdec25e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ec3e0fa1271b67932c20b6f9bcdec25e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ec3e0fa1271b67932c20b6f9bcdec25e = MAKE_FUNCTION_FRAME(codeobj_ec3e0fa1271b67932c20b6f9bcdec25e, module_anyio$from_thread, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ec3e0fa1271b67932c20b6f9bcdec25e->m_type_description == NULL);
    frame_ec3e0fa1271b67932c20b6f9bcdec25e = cache_frame_ec3e0fa1271b67932c20b6f9bcdec25e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ec3e0fa1271b67932c20b6f9bcdec25e);
    assert(Py_REFCNT(frame_ec3e0fa1271b67932c20b6f9bcdec25e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[35]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_ec3e0fa1271b67932c20b6f9bcdec25e->m_frame.f_lineno = 144;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[21], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
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
        exception_tb = MAKE_TRACEBACK(frame_ec3e0fa1271b67932c20b6f9bcdec25e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ec3e0fa1271b67932c20b6f9bcdec25e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ec3e0fa1271b67932c20b6f9bcdec25e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ec3e0fa1271b67932c20b6f9bcdec25e,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_ec3e0fa1271b67932c20b6f9bcdec25e == cache_frame_ec3e0fa1271b67932c20b6f9bcdec25e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ec3e0fa1271b67932c20b6f9bcdec25e);
        cache_frame_ec3e0fa1271b67932c20b6f9bcdec25e = NULL;
    }

    assertFrameObject(frame_ec3e0fa1271b67932c20b6f9bcdec25e);

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


static PyObject *impl_anyio$from_thread$$$function__11___new__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_FrameObject *frame_12b7f1016f2ec714a8e0a9b0ec8cc041;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_12b7f1016f2ec714a8e0a9b0ec8cc041 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_12b7f1016f2ec714a8e0a9b0ec8cc041)) {
        Py_XDECREF(cache_frame_12b7f1016f2ec714a8e0a9b0ec8cc041);

#if _DEBUG_REFCOUNTS
        if (cache_frame_12b7f1016f2ec714a8e0a9b0ec8cc041 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_12b7f1016f2ec714a8e0a9b0ec8cc041 = MAKE_FUNCTION_FRAME(codeobj_12b7f1016f2ec714a8e0a9b0ec8cc041, module_anyio$from_thread, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_12b7f1016f2ec714a8e0a9b0ec8cc041->m_type_description == NULL);
    frame_12b7f1016f2ec714a8e0a9b0ec8cc041 = cache_frame_12b7f1016f2ec714a8e0a9b0ec8cc041;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_12b7f1016f2ec714a8e0a9b0ec8cc041);
    assert(Py_REFCNT(frame_12b7f1016f2ec714a8e0a9b0ec8cc041) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_12b7f1016f2ec714a8e0a9b0ec8cc041->m_frame.f_lineno = 151;
        tmp_called_instance_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_12b7f1016f2ec714a8e0a9b0ec8cc041->m_frame.f_lineno = 151;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[37]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
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
        exception_tb = MAKE_TRACEBACK(frame_12b7f1016f2ec714a8e0a9b0ec8cc041, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_12b7f1016f2ec714a8e0a9b0ec8cc041->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_12b7f1016f2ec714a8e0a9b0ec8cc041, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_12b7f1016f2ec714a8e0a9b0ec8cc041,
        type_description_1,
        par_cls
    );


    // Release cached frame if used for exception.
    if (frame_12b7f1016f2ec714a8e0a9b0ec8cc041 == cache_frame_12b7f1016f2ec714a8e0a9b0ec8cc041) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_12b7f1016f2ec714a8e0a9b0ec8cc041);
        cache_frame_12b7f1016f2ec714a8e0a9b0ec8cc041 = NULL;
    }

    assertFrameObject(frame_12b7f1016f2ec714a8e0a9b0ec8cc041);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$from_thread$$$function__12___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_5469a3d3519dced6eb310a1240f69fbc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_5469a3d3519dced6eb310a1240f69fbc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5469a3d3519dced6eb310a1240f69fbc)) {
        Py_XDECREF(cache_frame_5469a3d3519dced6eb310a1240f69fbc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5469a3d3519dced6eb310a1240f69fbc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5469a3d3519dced6eb310a1240f69fbc = MAKE_FUNCTION_FRAME(codeobj_5469a3d3519dced6eb310a1240f69fbc, module_anyio$from_thread, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5469a3d3519dced6eb310a1240f69fbc->m_type_description == NULL);
    frame_5469a3d3519dced6eb310a1240f69fbc = cache_frame_5469a3d3519dced6eb310a1240f69fbc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5469a3d3519dced6eb310a1240f69fbc);
    assert(Py_REFCNT(frame_5469a3d3519dced6eb310a1240f69fbc) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5469a3d3519dced6eb310a1240f69fbc->m_frame.f_lineno = 154;
        tmp_assattr_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[39]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[40], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5469a3d3519dced6eb310a1240f69fbc->m_frame.f_lineno = 155;
        tmp_assattr_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[41], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5469a3d3519dced6eb310a1240f69fbc->m_frame.f_lineno = 156;
        tmp_assattr_value_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[43], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_assattr_target_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5469a3d3519dced6eb310a1240f69fbc->m_frame.f_lineno = 157;
        tmp_assattr_value_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[45], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5469a3d3519dced6eb310a1240f69fbc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5469a3d3519dced6eb310a1240f69fbc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5469a3d3519dced6eb310a1240f69fbc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5469a3d3519dced6eb310a1240f69fbc,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_5469a3d3519dced6eb310a1240f69fbc == cache_frame_5469a3d3519dced6eb310a1240f69fbc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5469a3d3519dced6eb310a1240f69fbc);
        cache_frame_5469a3d3519dced6eb310a1240f69fbc = NULL;
    }

    assertFrameObject(frame_5469a3d3519dced6eb310a1240f69fbc);

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


static PyObject *impl_anyio$from_thread$$$function__13___aenter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_anyio$from_thread$$$function__13___aenter__$$$coroutine__1___aenter__(tmp_closure_1);

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
struct anyio$from_thread$$$function__13___aenter__$$$coroutine__1___aenter___locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$from_thread$$$function__13___aenter__$$$coroutine__1___aenter___context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$from_thread$$$function__13___aenter__$$$coroutine__1___aenter___locals *coroutine_heap = (struct anyio$from_thread$$$function__13___aenter__$$$coroutine__1___aenter___locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_f77f85d54f666fe9be5dd635c454bb2a, module_anyio$from_thread, sizeof(void *));
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 160;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[43]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 160;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[18]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_await_result_1);
    }
    if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

        FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
        coroutine_heap->exception_tb = NULL;
        NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        CHAIN_EXCEPTION(coroutine_heap->exception_value);

        coroutine_heap->exception_lineno = 161;
        coroutine_heap->type_description_1 = "c";
        goto frame_exception_exit_1;
    }

    coroutine_heap->tmp_return_value = Nuitka_Cell_GET(coroutine->m_closure[0]);
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto frame_return_exit_1;

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

    goto function_return_exit;

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

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$from_thread$$$function__13___aenter__$$$coroutine__1___aenter__(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$from_thread$$$function__13___aenter__$$$coroutine__1___aenter___context,
        module_anyio$from_thread,
        mod_consts[18],
        mod_consts[46],
        codeobj_f77f85d54f666fe9be5dd635c454bb2a,
        closure,
        1,
#if 1
        sizeof(struct anyio$from_thread$$$function__13___aenter__$$$coroutine__1___aenter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$from_thread$$$function__14___aexit__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_exc_type = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_exc_val = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_exc_tb = Nuitka_Cell_New1(python_pars[3]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[4];

        tmp_closure_1[0] = par_exc_tb;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_exc_type;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_exc_val;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_self;
        Py_INCREF(tmp_closure_1[3]);

        tmp_return_value = MAKE_COROUTINE_anyio$from_thread$$$function__14___aexit__$$$coroutine__1___aexit__(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_val);
    Py_DECREF(par_exc_val);
    CHECK_OBJECT(par_exc_tb);
    Py_DECREF(par_exc_tb);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$from_thread$$$function__14___aexit__$$$coroutine__1___aexit___locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$from_thread$$$function__14___aexit__$$$coroutine__1___aexit___context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$from_thread$$$function__14___aexit__$$$coroutine__1___aexit___locals *coroutine_heap = (struct anyio$from_thread$$$function__14___aexit__$$$coroutine__1___aexit___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 2: goto yield_return_2;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_ca7dcf60e40076447c0ab3699ba2d75f, module_anyio$from_thread, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 169;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 169;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        coroutine->m_frame->m_frame.f_lineno = 169;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[47]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 169;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 169;
            coroutine_heap->type_description_1 = "cccc";
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


            coroutine_heap->exception_lineno = 169;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 169;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_await_result_1);
    }
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        coroutine->m_frame->m_frame.f_lineno = 170;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[43]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[23]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[48]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[49]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[50]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_expression_value_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = ASYNC_AWAIT(tmp_expression_value_4, await_normal);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yieldfrom = tmp_expression_value_3;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_return_value = yield_return_value;
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 170;
            coroutine_heap->type_description_1 = "cccc";
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

    goto function_return_exit;

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
            coroutine->m_closure[3],
            coroutine->m_closure[1],
            coroutine->m_closure[2],
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

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$from_thread$$$function__14___aexit__$$$coroutine__1___aexit__(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$from_thread$$$function__14___aexit__$$$coroutine__1___aexit___context,
        module_anyio$from_thread,
        mod_consts[23],
        mod_consts[51],
        codeobj_ca7dcf60e40076447c0ab3699ba2d75f,
        closure,
        4,
#if 1
        sizeof(struct anyio$from_thread$$$function__14___aexit__$$$coroutine__1___aexit___locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$from_thread$$$function__15__check_running(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_66bdcd9494729a2f89aceacc5b0d6aff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_66bdcd9494729a2f89aceacc5b0d6aff = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_66bdcd9494729a2f89aceacc5b0d6aff)) {
        Py_XDECREF(cache_frame_66bdcd9494729a2f89aceacc5b0d6aff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_66bdcd9494729a2f89aceacc5b0d6aff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_66bdcd9494729a2f89aceacc5b0d6aff = MAKE_FUNCTION_FRAME(codeobj_66bdcd9494729a2f89aceacc5b0d6aff, module_anyio$from_thread, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_66bdcd9494729a2f89aceacc5b0d6aff->m_type_description == NULL);
    frame_66bdcd9494729a2f89aceacc5b0d6aff = cache_frame_66bdcd9494729a2f89aceacc5b0d6aff;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_66bdcd9494729a2f89aceacc5b0d6aff);
    assert(Py_REFCNT(frame_66bdcd9494729a2f89aceacc5b0d6aff) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[40]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[52];
        frame_66bdcd9494729a2f89aceacc5b0d6aff->m_frame.f_lineno = 174;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 174;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[40]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_66bdcd9494729a2f89aceacc5b0d6aff->m_frame.f_lineno = 175;
        tmp_cmp_expr_right_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[39]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 175;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
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
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[53];
        frame_66bdcd9494729a2f89aceacc5b0d6aff->m_frame.f_lineno = 176;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 176;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_66bdcd9494729a2f89aceacc5b0d6aff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_66bdcd9494729a2f89aceacc5b0d6aff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_66bdcd9494729a2f89aceacc5b0d6aff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_66bdcd9494729a2f89aceacc5b0d6aff,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_66bdcd9494729a2f89aceacc5b0d6aff == cache_frame_66bdcd9494729a2f89aceacc5b0d6aff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_66bdcd9494729a2f89aceacc5b0d6aff);
        cache_frame_66bdcd9494729a2f89aceacc5b0d6aff = NULL;
    }

    assertFrameObject(frame_66bdcd9494729a2f89aceacc5b0d6aff);

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


static PyObject *impl_anyio$from_thread$$$function__16_sleep_until_stopped(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_anyio$from_thread$$$function__16_sleep_until_stopped$$$coroutine__1_sleep_until_stopped(tmp_closure_1);

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
struct anyio$from_thread$$$function__16_sleep_until_stopped$$$coroutine__1_sleep_until_stopped_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$from_thread$$$function__16_sleep_until_stopped$$$coroutine__1_sleep_until_stopped_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$from_thread$$$function__16_sleep_until_stopped$$$coroutine__1_sleep_until_stopped_locals *coroutine_heap = (struct anyio$from_thread$$$function__16_sleep_until_stopped$$$coroutine__1_sleep_until_stopped_locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_f5ef926740af5abdf552960d8ab7da66, module_anyio$from_thread, sizeof(void *));
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 182;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 182;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[41]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 182;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 182;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[22]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 182;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 182;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 182;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 182;
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

static PyObject *MAKE_COROUTINE_anyio$from_thread$$$function__16_sleep_until_stopped$$$coroutine__1_sleep_until_stopped(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$from_thread$$$function__16_sleep_until_stopped$$$coroutine__1_sleep_until_stopped_context,
        module_anyio$from_thread,
        mod_consts[55],
        mod_consts[56],
        codeobj_f5ef926740af5abdf552960d8ab7da66,
        closure,
        1,
#if 1
        sizeof(struct anyio$from_thread$$$function__16_sleep_until_stopped$$$coroutine__1_sleep_until_stopped_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$from_thread$$$function__17_stop(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_cancel_remaining = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_cancel_remaining;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_COROUTINE_anyio$from_thread$$$function__17_stop$$$coroutine__1_stop(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cancel_remaining);
    Py_DECREF(par_cancel_remaining);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$from_thread$$$function__17_stop$$$coroutine__1_stop_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    bool tmp_result;
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$from_thread$$$function__17_stop$$$coroutine__1_stop_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$from_thread$$$function__17_stop$$$coroutine__1_stop_locals *coroutine_heap = (struct anyio$from_thread$$$function__17_stop$$$coroutine__1_stop_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_fdb82336f71e0cb5f4ba9943f65d926d, module_anyio$from_thread, sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 195;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[40], tmp_assattr_value_1);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 195;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 196;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 196;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 196;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[34]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 196;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[58]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 197;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(coroutine->m_closure[0]));
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 197;
            coroutine_heap->type_description_1 = "cc";
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 198;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[43]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 198;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[59]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 198;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 198;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[60]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 198;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;

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

static PyObject *MAKE_COROUTINE_anyio$from_thread$$$function__17_stop$$$coroutine__1_stop(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$from_thread$$$function__17_stop$$$coroutine__1_stop_context,
        module_anyio$from_thread,
        mod_consts[47],
        mod_consts[61],
        codeobj_fdb82336f71e0cb5f4ba9943f65d926d,
        closure,
        2,
#if 1
        sizeof(struct anyio$from_thread$$$function__17_stop$$$coroutine__1_stop_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$from_thread$$$function__18__call_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_func = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_args = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_future = Nuitka_Cell_New1(python_pars[4]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[5];

        tmp_closure_1[0] = par_args;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_func;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_future;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_kwargs;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_self;
        Py_INCREF(tmp_closure_1[4]);

        tmp_return_value = MAKE_COROUTINE_anyio$from_thread$$$function__18__call_func$$$coroutine__1__call_func(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    CHECK_OBJECT(par_future);
    Py_DECREF(par_future);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$from_thread$$$function__18__call_func$$$coroutine__1__call_func_locals {
    PyObject *var_callback;
    PyObject *var_retval;
    struct Nuitka_CellObject *var_scope;
    PyObject *var_exc;
    nuitka_bool tmp_try_except_1__unhandled_indicator;
    PyObject *tmp_with_1__enter;
    PyObject *tmp_with_1__exit;
    nuitka_bool tmp_with_1__indicator;
    PyObject *tmp_with_1__source;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    int exception_keeper_lineno_9;
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    int exception_keeper_lineno_10;
};
#endif

static PyObject *anyio$from_thread$$$function__18__call_func$$$coroutine__1__call_func_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$from_thread$$$function__18__call_func$$$coroutine__1__call_func_locals *coroutine_heap = (struct anyio$from_thread$$$function__18__call_func$$$coroutine__1__call_func_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_callback = NULL;
    coroutine_heap->var_retval = NULL;
    coroutine_heap->var_scope = Nuitka_Cell_Empty();
    coroutine_heap->var_exc = NULL;
    coroutine_heap->tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    coroutine_heap->tmp_with_1__enter = NULL;
    coroutine_heap->tmp_with_1__exit = NULL;
    coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    coroutine_heap->tmp_with_1__source = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_e2105173e902f6c765c0fc558c321d4a, module_anyio$from_thread, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        struct Nuitka_CellObject *tmp_closure_1[2];
        tmp_dict_key_1 = mod_consts[62];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 203;
            coroutine_heap->type_description_1 = "cccccooco";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(coroutine_heap->tmp_res != 0));
        tmp_dict_key_1 = mod_consts[63];
        tmp_dict_value_1 = Py_None;
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(coroutine_heap->tmp_res != 0));

        tmp_closure_1[0] = coroutine_heap->var_scope;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = coroutine->m_closure[4];
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_1 = MAKE_FUNCTION_anyio$from_thread$$$function__18__call_func$$$coroutine__1__call_func$$$function__1_callback(tmp_annotations_1, tmp_closure_1);

        assert(coroutine_heap->var_callback == NULL);
        coroutine_heap->var_callback = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_assign_source_2;
        tmp_assign_source_2 = NUITKA_BOOL_TRUE;
        coroutine_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[66]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 211;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_3;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[67]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 211;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_3;
        }

        tmp_dircall_arg2_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[68]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 211;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_3;
        }

        tmp_dircall_arg3_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_3 = impl___main__$$$function__8_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 211;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_3;
        }
        assert(coroutine_heap->var_retval == NULL);
        coroutine_heap->var_retval = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 212;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(coroutine_heap->var_retval);
        tmp_args_element_value_1 = coroutine_heap->var_retval;
        coroutine->m_frame->m_frame.f_lineno = 212;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 212;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_3;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_call_result_1);

            coroutine_heap->exception_lineno = 212;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_3;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_4;
        }
        coroutine->m_frame->m_frame.f_lineno = 213;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_4;
        }
        assert(coroutine_heap->tmp_with_1__source == NULL);
        coroutine_heap->tmp_with_1__source = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
        tmp_expression_value_1 = coroutine_heap->tmp_with_1__source;
        tmp_called_value_3 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[71]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_4;
        }
        coroutine->m_frame->m_frame.f_lineno = 213;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_4;
        }
        assert(coroutine_heap->tmp_with_1__enter == NULL);
        coroutine_heap->tmp_with_1__enter = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
        tmp_expression_value_2 = coroutine_heap->tmp_with_1__source;
        tmp_assign_source_6 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[72]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_4;
        }
        assert(coroutine_heap->tmp_with_1__exit == NULL);
        coroutine_heap->tmp_with_1__exit = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_assign_source_7;
        tmp_assign_source_7 = NUITKA_BOOL_TRUE;
        coroutine_heap->tmp_with_1__indicator = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
        tmp_assign_source_8 = coroutine_heap->tmp_with_1__enter;
        assert(Nuitka_Cell_GET(coroutine_heap->var_scope) == NULL);
        Py_INCREF(tmp_assign_source_8);
        PyCell_SET(coroutine_heap->var_scope, tmp_assign_source_8);

    }
    // Tried code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[73]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 214;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_6;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 214;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[74]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 214;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_6;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_call_result_2);

            coroutine_heap->exception_lineno = 214;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_6;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(Nuitka_Cell_GET(coroutine_heap->var_scope));
        tmp_called_instance_2 = Nuitka_Cell_GET(coroutine_heap->var_scope);
        coroutine->m_frame->m_frame.f_lineno = 215;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[60]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 215;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[73]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 217;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_6;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        CHECK_OBJECT(coroutine_heap->var_callback);
        tmp_args_element_value_2 = coroutine_heap->var_callback;
        coroutine->m_frame->m_frame.f_lineno = 217;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[75], tmp_args_element_value_2);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 217;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        coroutine->m_frame->m_frame.f_lineno = 219;
        CHECK_OBJECT(coroutine_heap->var_retval);
        tmp_expression_value_4 = coroutine_heap->var_retval;
        tmp_expression_value_3 = ASYNC_AWAIT(tmp_expression_value_4, await_normal);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 219;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_6;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_3;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 219;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_6;
        }
        tmp_assign_source_9 = yield_return_value;
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 219;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_6;
        }
        {
            PyObject *old = coroutine_heap->var_retval;
            assert(old != NULL);
            coroutine_heap->var_retval = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_6:;
    coroutine_heap->exception_keeper_type_1 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_1 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_1 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (coroutine_heap->exception_keeper_tb_1 == NULL) {
        coroutine_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
    } else if (coroutine_heap->exception_keeper_lineno_1 != 0) {
        coroutine_heap->exception_keeper_tb_1 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_1, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&coroutine_heap->exception_keeper_type_1, &coroutine_heap->exception_keeper_value_1, &coroutine_heap->exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_3 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_assign_source_10;
        tmp_assign_source_10 = NUITKA_BOOL_FALSE;
        coroutine_heap->tmp_with_1__indicator = tmp_assign_source_10;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
        tmp_called_value_4 = coroutine_heap->tmp_with_1__exit;
        tmp_args_element_value_3 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_4 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_5 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        coroutine->m_frame->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_7;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_7;
        }
        tmp_condition_result_4 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 213;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cccccooco";
    goto try_except_handler_7;
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 213;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cccccooco";
    goto try_except_handler_7;
    branch_end_3:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_7:;
    coroutine_heap->exception_keeper_type_2 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_2 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_2 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_1);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_2;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_2;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_2;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    coroutine_heap->exception_keeper_type_3 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_3 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_3 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = coroutine_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
        tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
        coroutine->m_frame->m_frame.f_lineno = 213;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[76]);

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

            Py_DECREF(coroutine_heap->exception_keeper_type_3);
            Py_XDECREF(coroutine_heap->exception_keeper_value_3);
            Py_XDECREF(coroutine_heap->exception_keeper_tb_3);

            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_5:;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_3;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_3;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_3;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_6;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = coroutine_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
        tmp_called_value_6 = coroutine_heap->tmp_with_1__exit;
        coroutine->m_frame->m_frame.f_lineno = 213;
        tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[76]);

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 213;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_6:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    coroutine_heap->exception_keeper_type_4 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_4 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_4 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_with_1__source);
    coroutine_heap->tmp_with_1__source = NULL;
    Py_XDECREF(coroutine_heap->tmp_with_1__enter);
    coroutine_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(coroutine_heap->tmp_with_1__exit);
    coroutine_heap->tmp_with_1__exit = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_4;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_4;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_4;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

    goto try_except_handler_3;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
    Py_DECREF(coroutine_heap->tmp_with_1__source);
    coroutine_heap->tmp_with_1__source = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
    Py_DECREF(coroutine_heap->tmp_with_1__enter);
    coroutine_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(coroutine_heap->tmp_with_1__exit);
    coroutine_heap->tmp_with_1__exit = NULL;
    branch_no_1:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_3:;
    coroutine_heap->exception_keeper_type_5 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_5 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_5 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    {
        nuitka_bool tmp_assign_source_11;
        tmp_assign_source_11 = NUITKA_BOOL_FALSE;
        coroutine_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_11;
    }
    // Preserve existing published exception id 2.
    coroutine_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (coroutine_heap->exception_keeper_tb_5 == NULL) {
        coroutine_heap->exception_keeper_tb_5 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_5);
    } else if (coroutine_heap->exception_keeper_lineno_5 != 0) {
        coroutine_heap->exception_keeper_tb_5 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_5, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(&coroutine_heap->exception_keeper_type_5, &coroutine_heap->exception_keeper_value_5, &coroutine_heap->exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_5;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 220;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_8;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[4]);
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[45]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 220;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_8;
        }
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 220;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_8;
        }
        tmp_condition_result_7 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_7;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[73]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 221;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_8;
        }

        tmp_called_instance_4 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 221;
        tmp_call_result_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[60]);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 221;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_7);
    }
    goto branch_end_7;
    branch_no_7:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_5 = PyExc_BaseException;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_8 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = EXC_VALUE(PyThreadState_GET());
        assert(coroutine_heap->var_exc == NULL);
        Py_INCREF(tmp_assign_source_12);
        coroutine_heap->var_exc = tmp_assign_source_12;
    }
    // Tried code:
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_instance_5;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[73]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 223;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_9;
        }

        tmp_called_instance_5 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 223;
        tmp_operand_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[74]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 223;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_9;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 223;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_9;
        }
        tmp_condition_result_9 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_6;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[73]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 224;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_9;
        }

        tmp_called_instance_6 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        CHECK_OBJECT(coroutine_heap->var_exc);
        tmp_args_element_value_6 = coroutine_heap->var_exc;
        coroutine->m_frame->m_frame.f_lineno = 224;
        tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[20], tmp_args_element_value_6);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 224;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_9:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        if (coroutine_heap->var_exc == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[77]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 227;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_9;
        }

        tmp_isinstance_inst_1 = coroutine_heap->var_exc;
        tmp_isinstance_cls_1 = PyExc_Exception;
        coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 227;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_9;
        }
        tmp_operand_value_3 = (coroutine_heap->tmp_res != 0) ? Py_True : Py_False;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 227;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_9;
        }
        tmp_condition_result_10 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 228;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cccccooco";
    goto try_except_handler_9;
    branch_no_10:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    coroutine_heap->exception_keeper_type_6 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_6 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_6 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_exc);
    coroutine_heap->var_exc = NULL;

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_6;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_6;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_6;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
    Py_XDECREF(coroutine_heap->var_exc);
    coroutine_heap->var_exc = NULL;

    goto branch_end_8;
    branch_no_8:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 210;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cccccooco";
    goto try_except_handler_8;
    branch_end_8:;
    branch_end_7:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    coroutine_heap->exception_keeper_type_7 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_7 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_7 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_2);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_7;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_7;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_7;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

    goto try_except_handler_2;
    // End of try:
    try_end_7:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_2);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    {
        bool tmp_condition_result_11;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(coroutine_heap->tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = coroutine_heap->tmp_try_except_1__unhandled_indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_11 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_called_instance_7;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[73]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 230;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_2;
        }

        tmp_called_instance_7 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 230;
        tmp_operand_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[74]);
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 230;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_2;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 230;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_2;
        }
        tmp_condition_result_12 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_7;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[73]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 231;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[21]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 231;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_2;
        }
        if (coroutine_heap->var_retval == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[78]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 231;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_2;
        }

        tmp_args_element_value_7 = coroutine_heap->var_retval;
        coroutine->m_frame->m_frame.f_lineno = 231;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 231;
            coroutine_heap->type_description_1 = "cccccooco";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_no_12:;
    branch_no_11:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_2:;
    coroutine_heap->exception_keeper_type_8 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_8 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_8 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_8 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Preserve existing published exception id 3.
    coroutine_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION();

    if (coroutine_heap->exception_keeper_tb_8 == NULL) {
        coroutine_heap->exception_keeper_tb_8 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_8);
    } else if (coroutine_heap->exception_keeper_lineno_8 != 0) {
        coroutine_heap->exception_keeper_tb_8 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_8, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_8);
    }

    PUBLISH_CURRENT_EXCEPTION(&coroutine_heap->exception_keeper_type_8, &coroutine_heap->exception_keeper_value_8, &coroutine_heap->exception_keeper_tb_8);
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = Py_None;
        {
            PyObject *old = Nuitka_Cell_GET(coroutine_heap->var_scope);
            PyCell_SET(coroutine_heap->var_scope, tmp_assign_source_13);
            Py_INCREF(tmp_assign_source_13);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 210;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cccccooco";
    goto try_except_handler_10;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_10:;
    coroutine_heap->exception_keeper_type_9 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_9 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_9 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_9 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_3);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_9;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_9;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_9;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_8:;

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
            coroutine->m_closure[4],
            coroutine->m_closure[1],
            coroutine->m_closure[0],
            coroutine->m_closure[3],
            coroutine->m_closure[2],
            coroutine_heap->var_callback,
            coroutine_heap->var_retval,
            coroutine_heap->var_scope,
            coroutine_heap->var_exc
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
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = Py_None;
        {
            PyObject *old = Nuitka_Cell_GET(coroutine_heap->var_scope);
            PyCell_SET(coroutine_heap->var_scope, tmp_assign_source_14);
            Py_INCREF(tmp_assign_source_14);
            Py_XDECREF(old);
        }

    }
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(coroutine_heap->var_callback);
    coroutine_heap->var_callback = NULL;
    Py_XDECREF(coroutine_heap->var_retval);
    coroutine_heap->var_retval = NULL;
    CHECK_OBJECT(coroutine_heap->var_scope);
    Py_DECREF(coroutine_heap->var_scope);
    coroutine_heap->var_scope = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_10 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_10 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_10 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_10 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_callback);
    coroutine_heap->var_callback = NULL;
    Py_XDECREF(coroutine_heap->var_retval);
    coroutine_heap->var_retval = NULL;
    CHECK_OBJECT(coroutine_heap->var_scope);
    Py_DECREF(coroutine_heap->var_scope);
    coroutine_heap->var_scope = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_10;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_10;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_10;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_10;

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

static PyObject *MAKE_COROUTINE_anyio$from_thread$$$function__18__call_func$$$coroutine__1__call_func(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$from_thread$$$function__18__call_func$$$coroutine__1__call_func_context,
        module_anyio$from_thread,
        mod_consts[79],
        mod_consts[80],
        codeobj_e2105173e902f6c765c0fc558c321d4a,
        closure,
        5,
#if 1
        sizeof(struct anyio$from_thread$$$function__18__call_func$$$coroutine__1__call_func_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$from_thread$$$function__18__call_func$$$coroutine__1__call_func$$$function__1_callback(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[0];
    struct Nuitka_FrameObject *frame_329b9f87e3605d6c9c4979b9e6615442;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_329b9f87e3605d6c9c4979b9e6615442 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_329b9f87e3605d6c9c4979b9e6615442)) {
        Py_XDECREF(cache_frame_329b9f87e3605d6c9c4979b9e6615442);

#if _DEBUG_REFCOUNTS
        if (cache_frame_329b9f87e3605d6c9c4979b9e6615442 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_329b9f87e3605d6c9c4979b9e6615442 = MAKE_FUNCTION_FRAME(codeobj_329b9f87e3605d6c9c4979b9e6615442, module_anyio$from_thread, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_329b9f87e3605d6c9c4979b9e6615442->m_type_description == NULL);
    frame_329b9f87e3605d6c9c4979b9e6615442 = cache_frame_329b9f87e3605d6c9c4979b9e6615442;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_329b9f87e3605d6c9c4979b9e6615442);
    assert(Py_REFCNT(frame_329b9f87e3605d6c9c4979b9e6615442) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_f);
        tmp_called_instance_1 = par_f;
        frame_329b9f87e3605d6c9c4979b9e6615442->m_frame.f_lineno = 204;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[74]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 204;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 204;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[40]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = Py_None;
        tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_instance_2;
            PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "occ";
                goto tuple_build_exception_1;
            }
            frame_329b9f87e3605d6c9c4979b9e6615442->m_frame.f_lineno = 206;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[39]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "occ";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "occ";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[81]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[60]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 208;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        frame_329b9f87e3605d6c9c4979b9e6615442->m_frame.f_lineno = 208;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_329b9f87e3605d6c9c4979b9e6615442, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_329b9f87e3605d6c9c4979b9e6615442->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_329b9f87e3605d6c9c4979b9e6615442, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_329b9f87e3605d6c9c4979b9e6615442,
        type_description_1,
        par_f,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_329b9f87e3605d6c9c4979b9e6615442 == cache_frame_329b9f87e3605d6c9c4979b9e6615442) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_329b9f87e3605d6c9c4979b9e6615442);
        cache_frame_329b9f87e3605d6c9c4979b9e6615442 = NULL;
    }

    assertFrameObject(frame_329b9f87e3605d6c9c4979b9e6615442);

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
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$from_thread$$$function__19__spawn_task_from_thread(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    PyObject *par_name = python_pars[4];
    PyObject *par_future = python_pars[5];
    struct Nuitka_FrameObject *frame_afcc74dc027edd57cbfab023b6c663f3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_afcc74dc027edd57cbfab023b6c663f3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_afcc74dc027edd57cbfab023b6c663f3)) {
        Py_XDECREF(cache_frame_afcc74dc027edd57cbfab023b6c663f3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_afcc74dc027edd57cbfab023b6c663f3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_afcc74dc027edd57cbfab023b6c663f3 = MAKE_FUNCTION_FRAME(codeobj_afcc74dc027edd57cbfab023b6c663f3, module_anyio$from_thread, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_afcc74dc027edd57cbfab023b6c663f3->m_type_description == NULL);
    frame_afcc74dc027edd57cbfab023b6c663f3 = cache_frame_afcc74dc027edd57cbfab023b6c663f3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_afcc74dc027edd57cbfab023b6c663f3);
    assert(Py_REFCNT(frame_afcc74dc027edd57cbfab023b6c663f3) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 256;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_afcc74dc027edd57cbfab023b6c663f3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_afcc74dc027edd57cbfab023b6c663f3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_afcc74dc027edd57cbfab023b6c663f3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_afcc74dc027edd57cbfab023b6c663f3,
        type_description_1,
        par_self,
        par_func,
        par_args,
        par_kwargs,
        par_name,
        par_future
    );


    // Release cached frame if used for exception.
    if (frame_afcc74dc027edd57cbfab023b6c663f3 == cache_frame_afcc74dc027edd57cbfab023b6c663f3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_afcc74dc027edd57cbfab023b6c663f3);
        cache_frame_afcc74dc027edd57cbfab023b6c663f3 = NULL;
    }

    assertFrameObject(frame_afcc74dc027edd57cbfab023b6c663f3);

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
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_future);
    Py_DECREF(par_future);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_anyio$from_thread$$$function__22_call(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_args = python_pars[2];
    struct Nuitka_FrameObject *frame_dc0ae9ca05be3bfd38bbafe1ab394643;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dc0ae9ca05be3bfd38bbafe1ab394643 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dc0ae9ca05be3bfd38bbafe1ab394643)) {
        Py_XDECREF(cache_frame_dc0ae9ca05be3bfd38bbafe1ab394643);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dc0ae9ca05be3bfd38bbafe1ab394643 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dc0ae9ca05be3bfd38bbafe1ab394643 = MAKE_FUNCTION_FRAME(codeobj_dc0ae9ca05be3bfd38bbafe1ab394643, module_anyio$from_thread, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dc0ae9ca05be3bfd38bbafe1ab394643->m_type_description == NULL);
    frame_dc0ae9ca05be3bfd38bbafe1ab394643 = cache_frame_dc0ae9ca05be3bfd38bbafe1ab394643;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dc0ae9ca05be3bfd38bbafe1ab394643);
    assert(Py_REFCNT(frame_dc0ae9ca05be3bfd38bbafe1ab394643) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_tuple_element_1 = par_func;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_called_instance_1 = impl___main__$$$function__15_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_dc0ae9ca05be3bfd38bbafe1ab394643->m_frame.f_lineno = 283;
        tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[30]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_dc0ae9ca05be3bfd38bbafe1ab394643->m_frame.f_lineno = 283;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
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
        exception_tb = MAKE_TRACEBACK(frame_dc0ae9ca05be3bfd38bbafe1ab394643, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dc0ae9ca05be3bfd38bbafe1ab394643->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dc0ae9ca05be3bfd38bbafe1ab394643, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dc0ae9ca05be3bfd38bbafe1ab394643,
        type_description_1,
        par_self,
        par_func,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_dc0ae9ca05be3bfd38bbafe1ab394643 == cache_frame_dc0ae9ca05be3bfd38bbafe1ab394643) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dc0ae9ca05be3bfd38bbafe1ab394643);
        cache_frame_dc0ae9ca05be3bfd38bbafe1ab394643 = NULL;
    }

    assertFrameObject(frame_dc0ae9ca05be3bfd38bbafe1ab394643);

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
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$from_thread$$$function__25_spawn_task(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_name = python_pars[2];
    PyObject *par_args = python_pars[3];
    struct Nuitka_FrameObject *frame_05fcb80bf6e7758fc43007cd1878bdd3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_05fcb80bf6e7758fc43007cd1878bdd3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_05fcb80bf6e7758fc43007cd1878bdd3)) {
        Py_XDECREF(cache_frame_05fcb80bf6e7758fc43007cd1878bdd3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_05fcb80bf6e7758fc43007cd1878bdd3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_05fcb80bf6e7758fc43007cd1878bdd3 = MAKE_FUNCTION_FRAME(codeobj_05fcb80bf6e7758fc43007cd1878bdd3, module_anyio$from_thread, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_05fcb80bf6e7758fc43007cd1878bdd3->m_type_description == NULL);
    frame_05fcb80bf6e7758fc43007cd1878bdd3 = cache_frame_05fcb80bf6e7758fc43007cd1878bdd3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_05fcb80bf6e7758fc43007cd1878bdd3);
    assert(Py_REFCNT(frame_05fcb80bf6e7758fc43007cd1878bdd3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[85];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_05fcb80bf6e7758fc43007cd1878bdd3->m_frame.f_lineno = 323;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_tuple_element_1 = par_func;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        tmp_dict_key_1 = mod_consts[86];
        CHECK_OBJECT(par_name);
        tmp_dict_value_1 = par_name;
        tmp_dircall_arg4_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg4_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__5_complex_call_helper_pos_keywords_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_05fcb80bf6e7758fc43007cd1878bdd3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_05fcb80bf6e7758fc43007cd1878bdd3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05fcb80bf6e7758fc43007cd1878bdd3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_05fcb80bf6e7758fc43007cd1878bdd3,
        type_description_1,
        par_self,
        par_func,
        par_name,
        par_args
    );


    // Release cached frame if used for exception.
    if (frame_05fcb80bf6e7758fc43007cd1878bdd3 == cache_frame_05fcb80bf6e7758fc43007cd1878bdd3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_05fcb80bf6e7758fc43007cd1878bdd3);
        cache_frame_05fcb80bf6e7758fc43007cd1878bdd3 = NULL;
    }

    assertFrameObject(frame_05fcb80bf6e7758fc43007cd1878bdd3);

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
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$from_thread$$$function__28_start_task_soon(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_name = python_pars[2];
    PyObject *par_args = python_pars[3];
    PyObject *var_f = NULL;
    struct Nuitka_FrameObject *frame_f1a072fec0f8b1d47f07bcd1bbd51437;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f1a072fec0f8b1d47f07bcd1bbd51437 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f1a072fec0f8b1d47f07bcd1bbd51437)) {
        Py_XDECREF(cache_frame_f1a072fec0f8b1d47f07bcd1bbd51437);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f1a072fec0f8b1d47f07bcd1bbd51437 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f1a072fec0f8b1d47f07bcd1bbd51437 = MAKE_FUNCTION_FRAME(codeobj_f1a072fec0f8b1d47f07bcd1bbd51437, module_anyio$from_thread, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f1a072fec0f8b1d47f07bcd1bbd51437->m_type_description == NULL);
    frame_f1a072fec0f8b1d47f07bcd1bbd51437 = cache_frame_f1a072fec0f8b1d47f07bcd1bbd51437;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f1a072fec0f8b1d47f07bcd1bbd51437);
    assert(Py_REFCNT(frame_f1a072fec0f8b1d47f07bcd1bbd51437) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_f1a072fec0f8b1d47f07bcd1bbd51437->m_frame.f_lineno = 367;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[88]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_f1a072fec0f8b1d47f07bcd1bbd51437->m_frame.f_lineno = 368;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_f == NULL);
        var_f = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_func);
        tmp_args_element_value_1 = par_func;
        CHECK_OBJECT(par_args);
        tmp_args_element_value_2 = par_args;
        tmp_args_element_value_3 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_name);
        tmp_args_element_value_4 = par_name;
        CHECK_OBJECT(var_f);
        tmp_args_element_value_5 = var_f;
        frame_f1a072fec0f8b1d47f07bcd1bbd51437->m_frame.f_lineno = 369;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS5(
                tmp_called_instance_2,
                mod_consts[89],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f1a072fec0f8b1d47f07bcd1bbd51437, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f1a072fec0f8b1d47f07bcd1bbd51437->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f1a072fec0f8b1d47f07bcd1bbd51437, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f1a072fec0f8b1d47f07bcd1bbd51437,
        type_description_1,
        par_self,
        par_func,
        par_name,
        par_args,
        var_f
    );


    // Release cached frame if used for exception.
    if (frame_f1a072fec0f8b1d47f07bcd1bbd51437 == cache_frame_f1a072fec0f8b1d47f07bcd1bbd51437) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f1a072fec0f8b1d47f07bcd1bbd51437);
        cache_frame_f1a072fec0f8b1d47f07bcd1bbd51437 = NULL;
    }

    assertFrameObject(frame_f1a072fec0f8b1d47f07bcd1bbd51437);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_f);
    tmp_return_value = var_f;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_f);
    Py_DECREF(var_f);
    var_f = NULL;
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

    Py_XDECREF(var_f);
    var_f = NULL;
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
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$from_thread$$$function__29_start_task(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_name = python_pars[2];
    PyObject *par_args = python_pars[3];
    struct Nuitka_CellObject *var_task_status_future = Nuitka_Cell_Empty();
    PyObject *var_f = NULL;
    PyObject *var_task_done = NULL;
    PyObject *var_task_status = NULL;
    struct Nuitka_FrameObject *frame_b373ac6c2a38718194e33fe5d6cec9ba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b373ac6c2a38718194e33fe5d6cec9ba = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b373ac6c2a38718194e33fe5d6cec9ba)) {
        Py_XDECREF(cache_frame_b373ac6c2a38718194e33fe5d6cec9ba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b373ac6c2a38718194e33fe5d6cec9ba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b373ac6c2a38718194e33fe5d6cec9ba = MAKE_FUNCTION_FRAME(codeobj_b373ac6c2a38718194e33fe5d6cec9ba, module_anyio$from_thread, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b373ac6c2a38718194e33fe5d6cec9ba->m_type_description == NULL);
    frame_b373ac6c2a38718194e33fe5d6cec9ba = cache_frame_b373ac6c2a38718194e33fe5d6cec9ba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b373ac6c2a38718194e33fe5d6cec9ba);
    assert(Py_REFCNT(frame_b373ac6c2a38718194e33fe5d6cec9ba) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_dict_key_1 = mod_consts[73];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooocooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[63];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));

        tmp_closure_1[0] = var_task_status_future;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_anyio$from_thread$$$function__29_start_task$$$function__1_task_done(tmp_annotations_1, tmp_closure_1);

        assert(var_task_done == NULL);
        var_task_done = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_b373ac6c2a38718194e33fe5d6cec9ba->m_frame.f_lineno = 405;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[88]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooocooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooocooo";
            goto frame_exception_exit_1;
        }
        frame_b373ac6c2a38718194e33fe5d6cec9ba->m_frame.f_lineno = 406;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooocooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_task_status_future) == NULL);
        PyCell_SET(var_task_status_future, tmp_assign_source_2);

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[93]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_task_status_future));
        tmp_args_element_value_1 = Nuitka_Cell_GET(var_task_status_future);
        frame_b373ac6c2a38718194e33fe5d6cec9ba->m_frame.f_lineno = 407;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooocooo";
            goto frame_exception_exit_1;
        }
        assert(var_task_status == NULL);
        var_task_status = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooocooo";
            goto frame_exception_exit_1;
        }
        frame_b373ac6c2a38718194e33fe5d6cec9ba->m_frame.f_lineno = 408;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooocooo";
            goto frame_exception_exit_1;
        }
        assert(var_f == NULL);
        var_f = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_f);
        tmp_called_instance_2 = var_f;
        CHECK_OBJECT(var_task_done);
        tmp_args_element_value_2 = var_task_done;
        frame_b373ac6c2a38718194e33fe5d6cec9ba->m_frame.f_lineno = 409;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[75], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oooocooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(par_func);
        tmp_args_element_value_3 = par_func;
        CHECK_OBJECT(par_args);
        tmp_args_element_value_4 = par_args;
        tmp_dict_key_2 = mod_consts[94];
        CHECK_OBJECT(var_task_status);
        tmp_dict_value_2 = var_task_status;
        tmp_args_element_value_5 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_args_element_value_5, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_name);
        tmp_args_element_value_6 = par_name;
        CHECK_OBJECT(var_f);
        tmp_args_element_value_7 = var_f;
        frame_b373ac6c2a38718194e33fe5d6cec9ba->m_frame.f_lineno = 410;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS5(
                tmp_called_instance_3,
                mod_consts[89],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooocooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_f);
        tmp_tuple_element_1 = var_f;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_instance_4;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(Nuitka_Cell_GET(var_task_status_future));
            tmp_called_instance_4 = Nuitka_Cell_GET(var_task_status_future);
            frame_b373ac6c2a38718194e33fe5d6cec9ba->m_frame.f_lineno = 411;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[30]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;
                type_description_1 = "oooocooo";
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
        exception_tb = MAKE_TRACEBACK(frame_b373ac6c2a38718194e33fe5d6cec9ba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b373ac6c2a38718194e33fe5d6cec9ba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b373ac6c2a38718194e33fe5d6cec9ba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b373ac6c2a38718194e33fe5d6cec9ba,
        type_description_1,
        par_self,
        par_func,
        par_name,
        par_args,
        var_task_status_future,
        var_f,
        var_task_done,
        var_task_status
    );


    // Release cached frame if used for exception.
    if (frame_b373ac6c2a38718194e33fe5d6cec9ba == cache_frame_b373ac6c2a38718194e33fe5d6cec9ba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b373ac6c2a38718194e33fe5d6cec9ba);
        cache_frame_b373ac6c2a38718194e33fe5d6cec9ba = NULL;
    }

    assertFrameObject(frame_b373ac6c2a38718194e33fe5d6cec9ba);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_task_status_future);
    Py_DECREF(var_task_status_future);
    var_task_status_future = NULL;
    CHECK_OBJECT(var_f);
    Py_DECREF(var_f);
    var_f = NULL;
    CHECK_OBJECT(var_task_done);
    Py_DECREF(var_task_done);
    var_task_done = NULL;
    CHECK_OBJECT(var_task_status);
    Py_DECREF(var_task_status);
    var_task_status = NULL;
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

    CHECK_OBJECT(var_task_status_future);
    Py_DECREF(var_task_status_future);
    var_task_status_future = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_task_done);
    var_task_done = NULL;
    Py_XDECREF(var_task_status);
    var_task_status = NULL;
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
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$from_thread$$$function__29_start_task$$$function__1_task_done(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_future = python_pars[0];
    PyObject *var_exc = NULL;
    struct Nuitka_FrameObject *frame_b7d6f651fb53c06f7c2f872d64a65af9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b7d6f651fb53c06f7c2f872d64a65af9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b7d6f651fb53c06f7c2f872d64a65af9)) {
        Py_XDECREF(cache_frame_b7d6f651fb53c06f7c2f872d64a65af9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b7d6f651fb53c06f7c2f872d64a65af9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b7d6f651fb53c06f7c2f872d64a65af9 = MAKE_FUNCTION_FRAME(codeobj_b7d6f651fb53c06f7c2f872d64a65af9, module_anyio$from_thread, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b7d6f651fb53c06f7c2f872d64a65af9->m_type_description == NULL);
    frame_b7d6f651fb53c06f7c2f872d64a65af9 = cache_frame_b7d6f651fb53c06f7c2f872d64a65af9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b7d6f651fb53c06f7c2f872d64a65af9);
    assert(Py_REFCNT(frame_b7d6f651fb53c06f7c2f872d64a65af9) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_b7d6f651fb53c06f7c2f872d64a65af9->m_frame.f_lineno = 394;
        tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[97]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "ooc";
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_future);
        tmp_called_instance_2 = par_future;
        frame_b7d6f651fb53c06f7c2f872d64a65af9->m_frame.f_lineno = 395;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[74]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 395;
            type_description_1 = "ooc";
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 396;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_b7d6f651fb53c06f7c2f872d64a65af9->m_frame.f_lineno = 396;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[60]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_future);
        tmp_called_instance_4 = par_future;
        frame_b7d6f651fb53c06f7c2f872d64a65af9->m_frame.f_lineno = 397;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[98]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 397;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_5;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 398;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_future);
        tmp_called_instance_5 = par_future;
        frame_b7d6f651fb53c06f7c2f872d64a65af9->m_frame.f_lineno = 398;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[98]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 398;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_b7d6f651fb53c06f7c2f872d64a65af9->m_frame.f_lineno = 398;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[99];
        frame_b7d6f651fb53c06f7c2f872d64a65af9->m_frame.f_lineno = 400;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_exc == NULL);
        var_exc = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_exc);
        tmp_args_element_value_2 = var_exc;
        frame_b7d6f651fb53c06f7c2f872d64a65af9->m_frame.f_lineno = 403;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[20], tmp_args_element_value_2);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_end_3:;
    branch_end_2:;
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b7d6f651fb53c06f7c2f872d64a65af9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b7d6f651fb53c06f7c2f872d64a65af9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b7d6f651fb53c06f7c2f872d64a65af9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b7d6f651fb53c06f7c2f872d64a65af9,
        type_description_1,
        par_future,
        var_exc,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_b7d6f651fb53c06f7c2f872d64a65af9 == cache_frame_b7d6f651fb53c06f7c2f872d64a65af9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b7d6f651fb53c06f7c2f872d64a65af9);
        cache_frame_b7d6f651fb53c06f7c2f872d64a65af9 = NULL;
    }

    assertFrameObject(frame_b7d6f651fb53c06f7c2f872d64a65af9);

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
    Py_XDECREF(var_exc);
    var_exc = NULL;
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

    Py_XDECREF(var_exc);
    var_exc = NULL;
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
    CHECK_OBJECT(par_future);
    Py_DECREF(par_future);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_future);
    Py_DECREF(par_future);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$from_thread$$$function__30_wrap_async_context_manager(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cm = python_pars[1];
    struct Nuitka_FrameObject *frame_5bf8983d88fdbc1a7b52b450a4126814;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5bf8983d88fdbc1a7b52b450a4126814 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5bf8983d88fdbc1a7b52b450a4126814)) {
        Py_XDECREF(cache_frame_5bf8983d88fdbc1a7b52b450a4126814);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5bf8983d88fdbc1a7b52b450a4126814 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5bf8983d88fdbc1a7b52b450a4126814 = MAKE_FUNCTION_FRAME(codeobj_5bf8983d88fdbc1a7b52b450a4126814, module_anyio$from_thread, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5bf8983d88fdbc1a7b52b450a4126814->m_type_description == NULL);
    frame_5bf8983d88fdbc1a7b52b450a4126814 = cache_frame_5bf8983d88fdbc1a7b52b450a4126814;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5bf8983d88fdbc1a7b52b450a4126814);
    assert(Py_REFCNT(frame_5bf8983d88fdbc1a7b52b450a4126814) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cm);
        tmp_args_element_value_1 = par_cm;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        frame_5bf8983d88fdbc1a7b52b450a4126814->m_frame.f_lineno = 428;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
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
        exception_tb = MAKE_TRACEBACK(frame_5bf8983d88fdbc1a7b52b450a4126814, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5bf8983d88fdbc1a7b52b450a4126814->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5bf8983d88fdbc1a7b52b450a4126814, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5bf8983d88fdbc1a7b52b450a4126814,
        type_description_1,
        par_self,
        par_cm
    );


    // Release cached frame if used for exception.
    if (frame_5bf8983d88fdbc1a7b52b450a4126814 == cache_frame_5bf8983d88fdbc1a7b52b450a4126814) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5bf8983d88fdbc1a7b52b450a4126814);
        cache_frame_5bf8983d88fdbc1a7b52b450a4126814 = NULL;
    }

    assertFrameObject(frame_5bf8983d88fdbc1a7b52b450a4126814);

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
    CHECK_OBJECT(par_cm);
    Py_DECREF(par_cm);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cm);
    Py_DECREF(par_cm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$from_thread$$$function__31_create_blocking_portal(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_986a4e577b346a0cf92d3932c8473edf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_986a4e577b346a0cf92d3932c8473edf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_986a4e577b346a0cf92d3932c8473edf)) {
        Py_XDECREF(cache_frame_986a4e577b346a0cf92d3932c8473edf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_986a4e577b346a0cf92d3932c8473edf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_986a4e577b346a0cf92d3932c8473edf = MAKE_FUNCTION_FRAME(codeobj_986a4e577b346a0cf92d3932c8473edf, module_anyio$from_thread, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_986a4e577b346a0cf92d3932c8473edf->m_type_description == NULL);
    frame_986a4e577b346a0cf92d3932c8473edf = cache_frame_986a4e577b346a0cf92d3932c8473edf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_986a4e577b346a0cf92d3932c8473edf);
    assert(Py_REFCNT(frame_986a4e577b346a0cf92d3932c8473edf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[102];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;

            goto frame_exception_exit_1;
        }
        frame_986a4e577b346a0cf92d3932c8473edf->m_frame.f_lineno = 442;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

            goto frame_exception_exit_1;
        }
        frame_986a4e577b346a0cf92d3932c8473edf->m_frame.f_lineno = 447;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;

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
        exception_tb = MAKE_TRACEBACK(frame_986a4e577b346a0cf92d3932c8473edf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_986a4e577b346a0cf92d3932c8473edf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_986a4e577b346a0cf92d3932c8473edf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_986a4e577b346a0cf92d3932c8473edf,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_986a4e577b346a0cf92d3932c8473edf == cache_frame_986a4e577b346a0cf92d3932c8473edf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_986a4e577b346a0cf92d3932c8473edf);
        cache_frame_986a4e577b346a0cf92d3932c8473edf = NULL;
    }

    assertFrameObject(frame_986a4e577b346a0cf92d3932c8473edf);

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


static PyObject *impl_anyio$from_thread$$$function__32_start_blocking_portal(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_backend = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_backend_options = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_backend;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_backend_options;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_GENERATOR_anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
    CHECK_OBJECT(par_backend_options);
    Py_DECREF(par_backend_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal_locals {
    struct Nuitka_CellObject *var_future;
    PyObject *var_run_portal;
    PyObject *var_executor;
    PyObject *var_run_future;
    PyObject *var_portal;
    PyObject *tmp_with_1__enter;
    PyObject *tmp_with_1__exit;
    nuitka_bool tmp_with_1__indicator;
    PyObject *tmp_with_1__source;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    int exception_keeper_lineno_9;
};
#endif

static PyObject *anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal_locals *generator_heap = (struct anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_future = Nuitka_Cell_Empty();
    generator_heap->var_run_portal = NULL;
    generator_heap->var_executor = NULL;
    generator_heap->var_run_future = NULL;
    generator_heap->var_portal = NULL;
    generator_heap->tmp_with_1__enter = NULL;
    generator_heap->tmp_with_1__exit = NULL;
    generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    generator_heap->tmp_with_1__source = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_annotations_1 = DICT_COPY(mod_consts[105]);

        tmp_closure_1[0] = generator_heap->var_future;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal$$$function__1_run_portal(tmp_annotations_1, tmp_closure_1);

        assert(generator_heap->var_run_portal == NULL);
        generator_heap->var_run_portal = tmp_assign_source_1;
    }
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_16c4ac5f37c754a9f2bf88f676caeb66, module_anyio$from_thread, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 474;
            generator_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 474;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 474;
            generator_heap->type_description_1 = "cccoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(generator_heap->var_future) == NULL);
        PyCell_SET(generator_heap->var_future, tmp_assign_source_2);

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 475;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 475;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[109]);

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 475;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_with_1__source == NULL);
        generator_heap->tmp_with_1__source = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(generator_heap->tmp_with_1__source);
        tmp_expression_value_1 = generator_heap->tmp_with_1__source;
        tmp_called_value_3 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[71]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 475;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 475;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 475;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_with_1__enter == NULL);
        generator_heap->tmp_with_1__enter = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(generator_heap->tmp_with_1__source);
        tmp_expression_value_2 = generator_heap->tmp_with_1__source;
        tmp_assign_source_5 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[72]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 475;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_with_1__exit == NULL);
        generator_heap->tmp_with_1__exit = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        generator_heap->tmp_with_1__indicator = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(generator_heap->tmp_with_1__enter);
        tmp_assign_source_7 = generator_heap->tmp_with_1__enter;
        assert(generator_heap->var_executor == NULL);
        Py_INCREF(tmp_assign_source_7);
        generator_heap->var_executor = tmp_assign_source_7;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        CHECK_OBJECT(generator_heap->var_executor);
        tmp_expression_value_3 = generator_heap->var_executor;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[110]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 476;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_4);

            generator_heap->exception_lineno = 477;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[8]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_4);

            generator_heap->exception_lineno = 477;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(generator_heap->var_run_portal);
        tmp_kw_call_arg_value_1_1 = generator_heap->var_run_portal;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[112]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 479;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }

        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[113]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 480;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }

        tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        generator->m_frame->m_frame.f_lineno = 476;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[114]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 476;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }
        assert(generator_heap->var_run_future == NULL);
        generator_heap->var_run_future = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 483;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_5;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 484;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_5;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 484;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_5;
        }
        tmp_subscript_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_subscript_value_1 == NULL)) {
            tmp_subscript_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 484;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 484;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(generator_heap->var_run_future);
        tmp_list_element_1 = generator_heap->var_run_future;
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_args_element_value_2, 0, tmp_list_element_1);
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_future));
        tmp_list_element_1 = Nuitka_Cell_GET(generator_heap->var_future);
        PyList_SET_ITEM0(tmp_args_element_value_2, 1, tmp_list_element_1);
        generator->m_frame->m_frame.f_lineno = 484;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_kw_call_arg_value_0_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 484;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_5;
        }
        tmp_kw_call_dict_value_0_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_kw_call_dict_value_0_2 == NULL)) {
            tmp_kw_call_dict_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            generator_heap->exception_lineno = 485;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_5;
        }
        generator->m_frame->m_frame.f_lineno = 483;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[117]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 483;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_1 == NULL) {
        generator_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        generator_heap->exception_keeper_tb_1 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_1, generator->m_frame, generator_heap->exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_1, &generator_heap->exception_keeper_value_1, &generator_heap->exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_future));
        tmp_called_instance_1 = Nuitka_Cell_GET(generator_heap->var_future);
        generator->m_frame->m_frame.f_lineno = 488;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[60]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 488;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(generator_heap->var_run_future);
        tmp_called_instance_2 = generator_heap->var_run_future;
        generator->m_frame->m_frame.f_lineno = 489;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[60]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 489;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_3);
    }
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 490;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "cccoooo";
    goto try_except_handler_6;
    goto branch_end_1;
    branch_no_1:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 482;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "cccoooo";
    goto try_except_handler_6;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_6:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        int tmp_truth_name_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_future));
        tmp_called_instance_3 = Nuitka_Cell_GET(generator_heap->var_future);
        generator->m_frame->m_frame.f_lineno = 492;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[97]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 492;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_4);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_4);

            generator_heap->exception_lineno = 492;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_4);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_future));
        tmp_called_instance_4 = Nuitka_Cell_GET(generator_heap->var_future);
        generator->m_frame->m_frame.f_lineno = 493;
        tmp_assign_source_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[30]);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 493;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }
        assert(generator_heap->var_portal == NULL);
        generator_heap->var_portal = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_expression_value_6;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_portal);
        tmp_expression_value_6 = generator_heap->var_portal;
        Py_INCREF(tmp_expression_value_6);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_6;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 495;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_7;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_7:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 2.
    generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_3 == NULL) {
        generator_heap->exception_keeper_tb_3 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_3);
    } else if (generator_heap->exception_keeper_lineno_3 != 0) {
        generator_heap->exception_keeper_tb_3 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_3, generator->m_frame, generator_heap->exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_3, &generator_heap->exception_keeper_value_3, &generator_heap->exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_BaseException;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_3 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(generator_heap->var_portal);
        tmp_expression_value_7 = generator_heap->var_portal;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[33]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 497;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(generator_heap->var_portal);
        tmp_expression_value_8 = generator_heap->var_portal;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[47]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_7);

            generator_heap->exception_lineno = 497;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_4 = Py_True;
        generator->m_frame->m_frame.f_lineno = 497;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 497;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_5);
    }
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 498;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "cccoooo";
    goto try_except_handler_8;
    goto branch_end_3;
    branch_no_3:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 494;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "cccoooo";
    goto try_except_handler_8;
    branch_end_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_8:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_2);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(generator_heap->var_portal);
        tmp_expression_value_9 = generator_heap->var_portal;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[33]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 500;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(generator_heap->var_portal);
        tmp_expression_value_10 = generator_heap->var_portal;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[47]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_8);

            generator_heap->exception_lineno = 500;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_6 = Py_False;
        generator->m_frame->m_frame.f_lineno = 500;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 500;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_2:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(generator_heap->var_run_future);
        tmp_called_instance_5 = generator_heap->var_run_future;
        generator->m_frame->m_frame.f_lineno = 502;
        tmp_call_result_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[30]);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 502;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_7);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 3.
    generator_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_5 == NULL) {
        generator_heap->exception_keeper_tb_5 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_5);
    } else if (generator_heap->exception_keeper_lineno_5 != 0) {
        generator_heap->exception_keeper_tb_5 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_5, generator->m_frame, generator_heap->exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_5, &generator_heap->exception_keeper_value_5, &generator_heap->exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_BaseException;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_4 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_assign_source_10;
        tmp_assign_source_10 = NUITKA_BOOL_FALSE;
        generator_heap->tmp_with_1__indicator = tmp_assign_source_10;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_9 = generator_heap->tmp_with_1__exit;
        tmp_args_element_value_7 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_8 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_9 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        generator->m_frame->m_frame.f_lineno = 475;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_9, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 475;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_9;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 475;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_9;
        }
        tmp_condition_result_5 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 475;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "cccoooo";
    goto try_except_handler_9;
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 475;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "cccoooo";
    goto try_except_handler_9;
    branch_end_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_9:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_3);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_6;
    generator_heap->exception_value = generator_heap->exception_keeper_value_6;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

    goto try_except_handler_3;
    // End of try:
    try_end_4:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_3);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    {
        bool tmp_condition_result_6;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = generator_heap->tmp_with_1__indicator;
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
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_10 = generator_heap->tmp_with_1__exit;
        generator->m_frame->m_frame.f_lineno = 475;
        tmp_call_result_8 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_10, mod_consts[76]);

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

            Py_DECREF(generator_heap->exception_keeper_type_7);
            Py_XDECREF(generator_heap->exception_keeper_value_7);
            Py_XDECREF(generator_heap->exception_keeper_tb_7);

            generator_heap->exception_lineno = 475;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_6:;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_7;
    generator_heap->exception_value = generator_heap->exception_keeper_value_7;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

    goto try_except_handler_2;
    // End of try:
    try_end_5:;
    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = generator_heap->tmp_with_1__indicator;
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
        PyObject *tmp_called_value_11;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_11 = generator_heap->tmp_with_1__exit;
        generator->m_frame->m_frame.f_lineno = 475;
        tmp_call_result_9 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_11, mod_consts[76]);

        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 475;
            generator_heap->type_description_1 = "cccoooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_no_7:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_8 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_8 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_8 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_with_1__source);
    generator_heap->tmp_with_1__source = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__enter);
    generator_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__exit);
    generator_heap->tmp_with_1__exit = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_8;
    generator_heap->exception_value = generator_heap->exception_keeper_value_8;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_8;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;

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
            generator->m_closure[1],
            generator_heap->var_future,
            generator_heap->var_run_portal,
            generator_heap->var_executor,
            generator_heap->var_run_future,
            generator_heap->var_portal
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
    goto try_end_7;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_9 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_9 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_9 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->var_future);
    Py_DECREF(generator_heap->var_future);
    generator_heap->var_future = NULL;
    CHECK_OBJECT(generator_heap->var_run_portal);
    Py_DECREF(generator_heap->var_run_portal);
    generator_heap->var_run_portal = NULL;
    Py_XDECREF(generator_heap->var_executor);
    generator_heap->var_executor = NULL;
    Py_XDECREF(generator_heap->var_run_future);
    generator_heap->var_run_future = NULL;
    Py_XDECREF(generator_heap->var_portal);
    generator_heap->var_portal = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_9;
    generator_heap->exception_value = generator_heap->exception_keeper_value_9;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_9;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(generator_heap->tmp_with_1__source);
    Py_DECREF(generator_heap->tmp_with_1__source);
    generator_heap->tmp_with_1__source = NULL;
    CHECK_OBJECT(generator_heap->tmp_with_1__enter);
    Py_DECREF(generator_heap->tmp_with_1__enter);
    generator_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__exit);
    generator_heap->tmp_with_1__exit = NULL;
    CHECK_OBJECT(generator_heap->var_future);
    Py_DECREF(generator_heap->var_future);
    generator_heap->var_future = NULL;
    CHECK_OBJECT(generator_heap->var_run_portal);
    Py_DECREF(generator_heap->var_run_portal);
    generator_heap->var_run_portal = NULL;
    CHECK_OBJECT(generator_heap->var_executor);
    Py_DECREF(generator_heap->var_executor);
    generator_heap->var_executor = NULL;
    Py_XDECREF(generator_heap->var_run_future);
    generator_heap->var_run_future = NULL;
    Py_XDECREF(generator_heap->var_portal);
    generator_heap->var_portal = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal_context,
        module_anyio$from_thread,
        mod_consts[118],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_16c4ac5f37c754a9f2bf88f676caeb66,
        closure,
        2,
#if 1
        sizeof(struct anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal$$$function__1_run_portal(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = self->m_closure[0];
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_COROUTINE_anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal$$$function__1_run_portal$$$coroutine__1_run_portal(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal$$$function__1_run_portal$$$coroutine__1_run_portal_locals {
    PyObject *var_portal_;
    PyObject *tmp_with_1__enter;
    PyObject *tmp_with_1__exit;
    nuitka_bool tmp_with_1__indicator;
    PyObject *tmp_with_1__source;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
};
#endif

static PyObject *anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal$$$function__1_run_portal$$$coroutine__1_run_portal_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal$$$function__1_run_portal$$$coroutine__1_run_portal_locals *coroutine_heap = (struct anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal$$$function__1_run_portal$$$coroutine__1_run_portal_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 5: goto yield_return_5;
    case 4: goto yield_return_4;
    case 3: goto yield_return_3;
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_portal_ = NULL;
    coroutine_heap->tmp_with_1__enter = NULL;
    coroutine_heap->tmp_with_1__exit = NULL;
    coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    coroutine_heap->tmp_with_1__source = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_74233275f8654f0204c61a0e1b75eaa4, module_anyio$from_thread, sizeof(void *)+sizeof(void *));
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
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 469;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_2;
        }
        assert(coroutine_heap->tmp_with_1__source == NULL);
        coroutine_heap->tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
        tmp_expression_value_1 = coroutine_heap->tmp_with_1__source;
        tmp_called_value_2 = LOOKUP_SPECIAL(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 469;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_2;
        }
        assert(coroutine_heap->tmp_with_1__enter == NULL);
        coroutine_heap->tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
        tmp_expression_value_2 = coroutine_heap->tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[23]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_2;
        }
        assert(coroutine_heap->tmp_with_1__exit == NULL);
        coroutine_heap->tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        coroutine->m_frame->m_frame.f_lineno = 469;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
        tmp_expression_value_4 = coroutine_heap->tmp_with_1__enter;
        tmp_expression_value_3 = ASYNC_AWAIT(tmp_expression_value_4, await_enter);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_3;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = yield_return_value;
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_2;
        }
        {
            PyObject *old = coroutine_heap->tmp_with_1__enter;
            assert(old != NULL);
            coroutine_heap->tmp_with_1__enter = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        coroutine_heap->tmp_with_1__indicator = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
        tmp_assign_source_6 = coroutine_heap->tmp_with_1__enter;
        assert(coroutine_heap->var_portal_ == NULL);
        Py_INCREF(tmp_assign_source_6);
        coroutine_heap->var_portal_ = tmp_assign_source_6;
    }
    // Tried code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[73]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 470;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_4;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 470;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[119]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 470;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_4;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_call_result_1);

            coroutine_heap->exception_lineno = 470;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_4;
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[73]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 471;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_4;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        CHECK_OBJECT(coroutine_heap->var_portal_);
        tmp_args_element_value_1 = coroutine_heap->var_portal_;
        coroutine->m_frame->m_frame.f_lineno = 471;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[21], tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 471;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 472;
        CHECK_OBJECT(coroutine_heap->var_portal_);
        tmp_called_instance_3 = coroutine_heap->var_portal_;
        coroutine->m_frame->m_frame.f_lineno = 472;
        tmp_expression_value_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[55]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 472;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_4;
        }
        tmp_expression_value_5 = ASYNC_AWAIT(tmp_expression_value_6, await_normal);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 472;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_4;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_3, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yieldfrom = tmp_expression_value_5;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_instance_3, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 472;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_4;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 472;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_await_result_1);
    }
    branch_no_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    coroutine_heap->exception_keeper_type_1 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_1 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_1 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (coroutine_heap->exception_keeper_tb_1 == NULL) {
        coroutine_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
    } else if (coroutine_heap->exception_keeper_lineno_1 != 0) {
        coroutine_heap->exception_keeper_tb_1 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_1, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&coroutine_heap->exception_keeper_type_1, &coroutine_heap->exception_keeper_value_1, &coroutine_heap->exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_2 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_assign_source_7;
        tmp_assign_source_7 = NUITKA_BOOL_FALSE;
        coroutine_heap->tmp_with_1__indicator = tmp_assign_source_7;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        coroutine->m_frame->m_frame.f_lineno = 469;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
        tmp_called_value_3 = coroutine_heap->tmp_with_1__exit;
        tmp_args_element_value_2 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_3 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_4 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        coroutine->m_frame->m_frame.f_lineno = 469;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_expression_value_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_5;
        }
        tmp_expression_value_7 = ASYNC_AWAIT(tmp_expression_value_8, await_exit);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_5;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_3, sizeof(bool), &tmp_expression_value_8, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
        SAVE_COROUTINE_EXCEPTION(coroutine);
        coroutine->m_yield_return_index = 3;
        coroutine->m_yieldfrom = tmp_expression_value_7;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_3:
        RESTORE_COROUTINE_EXCEPTION(coroutine);
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_3, sizeof(bool), &tmp_expression_value_8, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_5;
        }
        tmp_operand_value_1 = yield_return_value;
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_5;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_5;
        }
        tmp_condition_result_3 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 469;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "oc";
    goto try_except_handler_5;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 469;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "oc";
    goto try_except_handler_5;
    branch_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    coroutine_heap->exception_keeper_type_2 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_2 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_2 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_1);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_2;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_2;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_2;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    coroutine_heap->exception_keeper_type_3 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_3 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_3 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = coroutine_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_called_value_4;
        PyObject *tmp_await_result_2;
        coroutine->m_frame->m_frame.f_lineno = 469;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
        tmp_called_value_4 = coroutine_heap->tmp_with_1__exit;
        coroutine->m_frame->m_frame.f_lineno = 469;
        tmp_expression_value_10 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[76]);

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

            Py_DECREF(coroutine_heap->exception_keeper_type_3);
            Py_XDECREF(coroutine_heap->exception_keeper_value_3);
            Py_XDECREF(coroutine_heap->exception_keeper_tb_3);

            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_2;
        }
        tmp_expression_value_9 = ASYNC_AWAIT(tmp_expression_value_10, await_exit);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

            Py_DECREF(coroutine_heap->exception_keeper_type_3);
            Py_XDECREF(coroutine_heap->exception_keeper_value_3);
            Py_XDECREF(coroutine_heap->exception_keeper_tb_3);

            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), NULL);
        SAVE_COROUTINE_EXCEPTION(coroutine);
        coroutine->m_yield_return_index = 4;
        coroutine->m_yieldfrom = tmp_expression_value_9;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_4:
        RESTORE_COROUTINE_EXCEPTION(coroutine);
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

            Py_DECREF(coroutine_heap->exception_keeper_type_3);
            Py_XDECREF(coroutine_heap->exception_keeper_value_3);
            Py_XDECREF(coroutine_heap->exception_keeper_tb_3);

            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_2;
        }
        tmp_await_result_2 = yield_return_value;
        if (tmp_await_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

            Py_DECREF(coroutine_heap->exception_keeper_type_3);
            Py_XDECREF(coroutine_heap->exception_keeper_value_3);
            Py_XDECREF(coroutine_heap->exception_keeper_tb_3);

            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_await_result_2);
    }
    branch_no_4:;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_3;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_3;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_3;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = coroutine_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_called_value_5;
        PyObject *tmp_await_result_3;
        coroutine->m_frame->m_frame.f_lineno = 469;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
        tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
        coroutine->m_frame->m_frame.f_lineno = 469;
        tmp_expression_value_12 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[76]);

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_2;
        }
        tmp_expression_value_11 = ASYNC_AWAIT(tmp_expression_value_12, await_exit);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_12, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 5;
        coroutine->m_yieldfrom = tmp_expression_value_11;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_5:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_12, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_2;
        }
        tmp_await_result_3 = yield_return_value;
        if (tmp_await_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 469;
            coroutine_heap->type_description_1 = "oc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_await_result_3);
    }
    branch_no_5:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    coroutine_heap->exception_keeper_type_4 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_4 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_4 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_with_1__source);
    coroutine_heap->tmp_with_1__source = NULL;
    Py_XDECREF(coroutine_heap->tmp_with_1__enter);
    coroutine_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(coroutine_heap->tmp_with_1__exit);
    coroutine_heap->tmp_with_1__exit = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_4;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_4;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_4;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

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
            coroutine_heap->var_portal_,
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
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
    Py_DECREF(coroutine_heap->tmp_with_1__source);
    coroutine_heap->tmp_with_1__source = NULL;
    CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
    Py_DECREF(coroutine_heap->tmp_with_1__enter);
    coroutine_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(coroutine_heap->tmp_with_1__exit);
    coroutine_heap->tmp_with_1__exit = NULL;
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(coroutine_heap->var_portal_);
    coroutine_heap->var_portal_ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_5 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_5 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_5 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_portal_);
    coroutine_heap->var_portal_ = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_5;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_5;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_5;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

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

static PyObject *MAKE_COROUTINE_anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal$$$function__1_run_portal$$$coroutine__1_run_portal(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal$$$function__1_run_portal$$$coroutine__1_run_portal_context,
        module_anyio$from_thread,
        mod_consts[106],
        mod_consts[107],
        codeobj_74233275f8654f0204c61a0e1b75eaa4,
        closure,
        1,
#if 1
        sizeof(struct anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal$$$function__1_run_portal$$$coroutine__1_run_portal_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__10_started(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__10_started,
        mod_consts[191],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_ec3e0fa1271b67932c20b6f9bcdec25e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__11___new__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__11___new__,
        mod_consts[195],
#if PYTHON_VERSION >= 0x300
        mod_consts[196],
#endif
        codeobj_12b7f1016f2ec714a8e0a9b0ec8cc041,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__12___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__12___init__,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        mod_consts[197],
#endif
        codeobj_5469a3d3519dced6eb310a1240f69fbc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__13___aenter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__13___aenter__,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[46],
#endif
        codeobj_f77f85d54f666fe9be5dd635c454bb2a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__14___aexit__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__14___aexit__,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[51],
#endif
        codeobj_ca7dcf60e40076447c0ab3699ba2d75f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__15__check_running(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__15__check_running,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        mod_consts[198],
#endif
        codeobj_66bdcd9494729a2f89aceacc5b0d6aff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__16_sleep_until_stopped(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__16_sleep_until_stopped,
        mod_consts[55],
#if PYTHON_VERSION >= 0x300
        mod_consts[56],
#endif
        codeobj_f5ef926740af5abdf552960d8ab7da66,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        mod_consts[54],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__17_stop(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__17_stop,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[61],
#endif
        codeobj_fdb82336f71e0cb5f4ba9943f65d926d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        mod_consts[57],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__18__call_func(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__18__call_func,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_e2105173e902f6c765c0fc558c321d4a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__18__call_func$$$coroutine__1__call_func$$$function__1_callback(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__18__call_func$$$coroutine__1__call_func$$$function__1_callback,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        mod_consts[65],
#endif
        codeobj_329b9f87e3605d6c9c4979b9e6615442,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__19__spawn_task_from_thread(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__19__spawn_task_from_thread,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        mod_consts[201],
#endif
        codeobj_afcc74dc027edd57cbfab023b6c663f3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        mod_consts[82],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__1_run(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__1_run,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9f3740f354d6e0f466b0c1cd0a095aaa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__20_call(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_e18d2d1a69f13ff8fa8154e514e4c519,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__21_call(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_d12e8e93a3c23ba6d02c400d1926fea9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__22_call(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__22_call,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_dc0ae9ca05be3bfd38bbafe1ab394643,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        mod_consts[84],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__23_spawn_task(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_054155ea8f2438f7ebdf3391d34cde1e,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__24_spawn_task(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_1733ff19f3b03ecb4ee751316b5497a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__25_spawn_task(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__25_spawn_task,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_05fcb80bf6e7758fc43007cd1878bdd3,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$from_thread,
        mod_consts[87],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__26_start_task_soon(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_41ec5066f9e1d38ebce4bfb5a1e74c8d,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__27_start_task_soon(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_22e139422214cf3d6fde8fbe39d1199c,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__28_start_task_soon(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__28_start_task_soon,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[207],
#endif
        codeobj_f1a072fec0f8b1d47f07bcd1bbd51437,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$from_thread,
        mod_consts[90],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__29_start_task(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__29_start_task,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        mod_consts[210],
#endif
        codeobj_b373ac6c2a38718194e33fe5d6cec9ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$from_thread,
        mod_consts[95],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__29_start_task$$$function__1_task_done(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__29_start_task$$$function__1_task_done,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        mod_consts[92],
#endif
        codeobj_b7d6f651fb53c06f7c2f872d64a65af9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__2_run_async_from_thread(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__2_run_async_from_thread,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_50c86196f48b7d88342c01b043779bc1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__30_wrap_async_context_manager(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__30_wrap_async_context_manager,
        mod_consts[212],
#if PYTHON_VERSION >= 0x300
        mod_consts[213],
#endif
        codeobj_5bf8983d88fdbc1a7b52b450a4126814,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        mod_consts[101],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__31_create_blocking_portal(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__31_create_blocking_portal,
        mod_consts[215],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_986a4e577b346a0cf92d3932c8473edf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        mod_consts[103],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__32_start_blocking_portal(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__32_start_blocking_portal,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_16c4ac5f37c754a9f2bf88f676caeb66,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        mod_consts[104],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal$$$function__1_run_portal(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal$$$function__1_run_portal,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_74233275f8654f0204c61a0e1b75eaa4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__3_run_sync(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__3_run_sync,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_224ac8fa334a3167e407e329e07b3051,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__4_run_sync_from_thread(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__4_run_sync_from_thread,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_17f781e42b3b9ddec4d42bcab404c3af,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__5___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__5___init__,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_8de90bf62232c27b51cee3971cebb671,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__6_run_async_cm(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__6_run_async_cm,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[26],
#endif
        codeobj_fcb687e8af7a5390b9cbac5b6e252761,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__7___enter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__7___enter__,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        mod_consts[181],
#endif
        codeobj_3e53874270d62a324d0b0922a8d1d67a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__8___exit__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__8___exit__,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_4313dc6ebb81b01b090e35990a9c34da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$from_thread$$$function__9___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$from_thread$$$function__9___init__,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_4499739cc15b4813092b7e0d54c6d79c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$from_thread,
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

function_impl_code functable_anyio$from_thread[] = {
    impl_anyio$from_thread$$$function__18__call_func$$$coroutine__1__call_func$$$function__1_callback,
    impl_anyio$from_thread$$$function__29_start_task$$$function__1_task_done,
    impl_anyio$from_thread$$$function__32_start_blocking_portal$$$genobj__1_start_blocking_portal$$$function__1_run_portal,
    impl_anyio$from_thread$$$function__1_run,
    impl_anyio$from_thread$$$function__2_run_async_from_thread,
    impl_anyio$from_thread$$$function__3_run_sync,
    impl_anyio$from_thread$$$function__4_run_sync_from_thread,
    impl_anyio$from_thread$$$function__5___init__,
    impl_anyio$from_thread$$$function__6_run_async_cm,
    impl_anyio$from_thread$$$function__7___enter__,
    impl_anyio$from_thread$$$function__8___exit__,
    impl_anyio$from_thread$$$function__9___init__,
    impl_anyio$from_thread$$$function__10_started,
    impl_anyio$from_thread$$$function__11___new__,
    impl_anyio$from_thread$$$function__12___init__,
    impl_anyio$from_thread$$$function__13___aenter__,
    impl_anyio$from_thread$$$function__14___aexit__,
    impl_anyio$from_thread$$$function__15__check_running,
    impl_anyio$from_thread$$$function__16_sleep_until_stopped,
    impl_anyio$from_thread$$$function__17_stop,
    impl_anyio$from_thread$$$function__18__call_func,
    impl_anyio$from_thread$$$function__19__spawn_task_from_thread,
    NULL,
    NULL,
    impl_anyio$from_thread$$$function__22_call,
    NULL,
    NULL,
    impl_anyio$from_thread$$$function__25_spawn_task,
    NULL,
    NULL,
    impl_anyio$from_thread$$$function__28_start_task_soon,
    impl_anyio$from_thread$$$function__29_start_task,
    impl_anyio$from_thread$$$function__30_wrap_async_context_manager,
    impl_anyio$from_thread$$$function__31_create_blocking_portal,
    impl_anyio$from_thread$$$function__32_start_blocking_portal,
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

    function_impl_code *current = functable_anyio$from_thread;
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

    if (offset > sizeof(functable_anyio$from_thread) || offset < 0) {
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
        functable_anyio$from_thread[offset],
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
        module_anyio$from_thread,
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
PyObject *modulecode_anyio$from_thread(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anyio.from_thread");

    // Store the module for future use.
    module_anyio$from_thread = module;

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
        PRINT_STRING("anyio.from_thread: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio.from_thread: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio.from_thread: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initanyio$from_thread\n");

    moduledict_anyio$from_thread = MODULE_DICT(module_anyio$from_thread);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anyio$from_thread,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anyio$from_thread,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[244]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anyio$from_thread,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$from_thread,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$from_thread,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anyio$from_thread);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anyio$from_thread, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_anyio$from_thread, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anyio$from_thread, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_anyio$from_thread);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    struct Nuitka_FrameObject *frame_30d0068b191a3e4a1ffd5b6497ec4cb7;
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
    int tmp_res;
    PyObject *locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_0b6a96ac9b54f4d948c5b2c339d88e14_2;
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
    PyObject *locals_anyio$from_thread$$$class__2__BlockingPortalTaskStatus_139 = NULL;
    struct Nuitka_FrameObject *frame_86d99307e7795f94f827579bcf5ef964_3;
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
    PyObject *locals_anyio$from_thread$$$class__3_BlockingPortal_147 = NULL;
    struct Nuitka_FrameObject *frame_4e8351ea42031a6126e27e571cdfb6fb_4;
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
        UPDATE_STRING_DICT0(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[121];
        UPDATE_STRING_DICT0(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_2);
    }
    frame_30d0068b191a3e4a1ffd5b6497ec4cb7 = MAKE_MODULE_FRAME(codeobj_30d0068b191a3e4a1ffd5b6497ec4cb7, module_anyio$from_thread);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_30d0068b191a3e4a1ffd5b6497ec4cb7);
    assert(Py_REFCNT(frame_30d0068b191a3e4a1ffd5b6497ec4cb7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[121];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[124], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[125], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[38];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$from_thread;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[127];
        frame_30d0068b191a3e4a1ffd5b6497ec4cb7->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[128];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_anyio$from_thread;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[129];
        tmp_level_value_2 = mod_consts[127];
        frame_30d0068b191a3e4a1ffd5b6497ec4cb7->m_frame.f_lineno = 2;
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
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[69],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[69]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[130];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_anyio$from_thread;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[131];
        tmp_level_value_3 = mod_consts[127];
        frame_30d0068b191a3e4a1ffd5b6497ec4cb7->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
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
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[116],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[116]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[27],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[27]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[108],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[108]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[22],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[22]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_10);
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[132];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_anyio$from_thread;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[133];
        tmp_level_value_4 = mod_consts[127];
        frame_30d0068b191a3e4a1ffd5b6497ec4cb7->m_frame.f_lineno = 4;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[134],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[134]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[135],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[135]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_13);
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
        PyObject *tmp_import_name_from_8;
        tmp_import_name_from_8 = IMPORT_HARD_TYPES();
        assert(!(tmp_import_name_from_8 == NULL));
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[136],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[136]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_15 == NULL));
        assert(tmp_import_from_3__module == NULL);
        Py_INCREF(tmp_assign_source_15);
        tmp_import_from_3__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_9 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[137],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[137]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[138],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[138]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[139],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[139]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[140],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[140]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[141],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[141]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_14 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[142],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[142]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_15 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[143],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[143]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_16 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[115],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_16, mod_consts[115]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_17 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[144],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_17, mod_consts[144]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_18 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[145],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_18, mod_consts[145]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_19 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[146],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_19, mod_consts[146]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_20 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[147],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_20, mod_consts[147]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_21 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[148],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_21, mod_consts[148]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_22 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[31],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_22, mod_consts[31]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_23 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[149],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_23, mod_consts[149]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_30);
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
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[150];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_anyio$from_thread;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[151];
        tmp_level_value_5 = mod_consts[127];
        frame_30d0068b191a3e4a1ffd5b6497ec4cb7->m_frame.f_lineno = 23;
        tmp_import_name_from_24 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[5],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_24, mod_consts[5]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[152];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_anyio$from_thread;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[153];
        tmp_level_value_6 = mod_consts[154];
        frame_30d0068b191a3e4a1ffd5b6497ec4cb7->m_frame.f_lineno = 25;
        tmp_import_name_from_25 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[111],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_25, mod_consts[111]);
        }

        Py_DECREF(tmp_import_name_from_25);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[155];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_anyio$from_thread;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[156];
        tmp_level_value_7 = mod_consts[154];
        frame_30d0068b191a3e4a1ffd5b6497ec4cb7->m_frame.f_lineno = 26;
        tmp_assign_source_33 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_33;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_26 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[36],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_26, mod_consts[36]);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_27 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[44],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_27, mod_consts[44]);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_28 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[0],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_28, mod_consts[0]);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_36);
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
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_29;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[157];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_anyio$from_thread;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[158];
        tmp_level_value_8 = mod_consts[154];
        frame_30d0068b191a3e4a1ffd5b6497ec4cb7->m_frame.f_lineno = 27;
        tmp_import_name_from_29 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[15],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_29, mod_consts[15]);
        }

        Py_DECREF(tmp_import_name_from_29);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[159];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_anyio$from_thread;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[160];
        tmp_level_value_9 = mod_consts[154];
        frame_30d0068b191a3e4a1ffd5b6497ec4cb7->m_frame.f_lineno = 28;
        tmp_assign_source_38 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_38;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_30 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[70],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_30, mod_consts[70]);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_31 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[42],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_31, mod_consts[42]);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_40);
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

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_32;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[161];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_anyio$from_thread;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[162];
        tmp_level_value_10 = mod_consts[154];
        frame_30d0068b191a3e4a1ffd5b6497ec4cb7->m_frame.f_lineno = 29;
        tmp_import_name_from_32 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_anyio$from_thread,
                mod_consts[163],
                mod_consts[127]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_32, mod_consts[163]);
        }

        Py_DECREF(tmp_import_name_from_32);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        frame_30d0068b191a3e4a1ffd5b6497ec4cb7->m_frame.f_lineno = 31;
        tmp_assign_source_42 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[164]);

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        frame_30d0068b191a3e4a1ffd5b6497ec4cb7->m_frame.f_lineno = 32;
        tmp_assign_source_43 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[165]);

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_dict_key_1 = mod_consts[66];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = Py_Ellipsis;
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_tuple_element_2;
            PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[141]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_tuple_element_2 == NULL)) {
                tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_tuple_element_2 == NULL)) {
                tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

            if (unlikely(tmp_tuple_element_2 == NULL)) {
                tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_2, 2, tmp_tuple_element_2);
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_subscript_value_2);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[67];
        tmp_dict_value_1 = (PyObject *)&PyBaseObject_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[63];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_44 = MAKE_FUNCTION_anyio$from_thread$$$function__1_run(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_tuple_element_3;
        tmp_dict_key_2 = mod_consts[66];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = Py_Ellipsis;
        tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_tuple_element_4;
            PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_3);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[141]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_tuple_element_4 == NULL)) {
                tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
            }

            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto tuple_build_exception_3;
            }
            tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_tuple_element_4 == NULL)) {
                tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
            }

            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

            if (unlikely(tmp_tuple_element_4 == NULL)) {
                tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
            }

            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_4, 2, tmp_tuple_element_4);
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_subscript_value_4);
            goto tuple_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_subscript_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[67];
        tmp_dict_value_2 = (PyObject *)&PyBaseObject_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[63];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_45 = MAKE_FUNCTION_anyio$from_thread$$$function__2_run_async_from_thread(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_tuple_element_5;
        tmp_dict_key_3 = mod_consts[66];
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = Py_Ellipsis;
        tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_5, 1, tmp_tuple_element_5);
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_subscript_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[67];
        tmp_dict_value_3 = (PyObject *)&PyBaseObject_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[63];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_46 = MAKE_FUNCTION_anyio$from_thread$$$function__3_run_sync(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_tuple_element_6;
        tmp_dict_key_4 = mod_consts[66];
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = Py_Ellipsis;
        tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_6, 0, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_6, 1, tmp_tuple_element_6);
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_subscript_value_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_6);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[67];
        tmp_dict_value_4 = (PyObject *)&PyBaseObject_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[63];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto dict_build_exception_4;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;


        tmp_assign_source_47 = MAKE_FUNCTION_anyio$from_thread$$$function__4_run_sync_from_thread(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_47);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_6;
        }
        tmp_assign_source_48 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_48, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_49 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_6;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_7 = tmp_class_creation_1__bases;
        tmp_subscript_value_7 = mod_consts[127];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_7, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_6;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_51 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_51;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_8 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_8, mod_consts[166]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_9 = tmp_class_creation_1__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[166]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_6;
        }
        tmp_tuple_element_8 = mod_consts[100];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_8 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_30d0068b191a3e4a1ffd5b6497ec4cb7->m_frame.f_lineno = 87;
        tmp_assign_source_52 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_52;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_10 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_10, mod_consts[167]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

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
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[168];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[169];
        tmp_getattr_default_1 = mod_consts[170];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_11 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_11 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[169]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 87;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_53;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_54;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[171];
        tmp_res = PyObject_SetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[172], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[100];
        tmp_res = PyObject_SetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[173], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_8;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[174], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_8;
        }
        frame_0b6a96ac9b54f4d948c5b2c339d88e14_2 = MAKE_CLASS_FRAME(codeobj_0b6a96ac9b54f4d948c5b2c339d88e14, module_anyio$from_thread, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0b6a96ac9b54f4d948c5b2c339d88e14_2);
        assert(Py_REFCNT(frame_0b6a96ac9b54f4d948c5b2c339d88e14_2) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[27]);

            if (tmp_ass_subvalue_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_1 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[27]);

                    if (unlikely(tmp_ass_subvalue_1 == NULL)) {
                        tmp_ass_subvalue_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
                    }

                    if (tmp_ass_subvalue_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 88;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_ass_subvalue_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_ass_subscribed_1 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[174]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_1);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_1);

                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_1 = mod_consts[19];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            Py_DECREF(tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[27]);

            if (tmp_ass_subvalue_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_2 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[27]);

                    if (unlikely(tmp_ass_subvalue_2 == NULL)) {
                        tmp_ass_subvalue_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
                    }

                    if (tmp_ass_subvalue_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 89;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_ass_subvalue_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_ass_subscribed_2 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[174]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_2);

                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_2 = mod_consts[29];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);
            Py_DECREF(tmp_ass_subvalue_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_ass_subvalue_3 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[15]);

            if (tmp_ass_subvalue_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_3 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[15]);

                    if (unlikely(tmp_ass_subvalue_3 == NULL)) {
                        tmp_ass_subvalue_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
                    }

                    if (tmp_ass_subvalue_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 90;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_ass_subvalue_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_ass_subscribed_3 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[174]);

            if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_3);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_3);

                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_3 = mod_consts[17];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            Py_DECREF(tmp_ass_subscribed_3);
            Py_DECREF(tmp_ass_subvalue_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyObject_SetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[24], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            tmp_expression_value_12 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[145]);

            if (tmp_expression_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[145]);

                    if (unlikely(tmp_expression_value_12 == NULL)) {
                        tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
                    }

                    if (tmp_expression_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 91;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_12);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_13 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[144]);

            if (tmp_expression_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[144]);

                    if (unlikely(tmp_expression_value_13 == NULL)) {
                        tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                    }

                    if (tmp_expression_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_12);

                        exception_lineno = 92;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_14 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[146]);

            if (tmp_expression_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[146]);

                    if (unlikely(tmp_expression_value_14 == NULL)) {
                        tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
                    }

                    if (tmp_expression_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_12);
                        Py_DECREF(tmp_expression_value_13);

                        exception_lineno = 92;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_10 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[175]);

            if (tmp_subscript_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_10 = PyExc_BaseException;
                    Py_INCREF(tmp_subscript_value_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_10);
            Py_DECREF(tmp_expression_value_14);
            Py_DECREF(tmp_subscript_value_10);
            if (tmp_subscript_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_12);
                Py_DECREF(tmp_expression_value_13);

                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_9);
            Py_DECREF(tmp_expression_value_13);
            Py_DECREF(tmp_subscript_value_9);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_12);

                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_15;
                PyObject *tmp_subscript_value_11;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_subscript_value_12;
                PyTuple_SET_ITEM(tmp_subscript_value_8, 0, tmp_tuple_element_10);
                tmp_expression_value_15 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[144]);

                if (tmp_expression_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[144]);

                        if (unlikely(tmp_expression_value_15 == NULL)) {
                            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                        }

                        if (tmp_expression_value_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 92;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_15);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                tmp_subscript_value_11 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[175]);

                if (tmp_subscript_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_11 = PyExc_BaseException;
                        Py_INCREF(tmp_subscript_value_11);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_15);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 92;
                    type_description_2 = "o";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_8, 1, tmp_tuple_element_10);
                tmp_expression_value_16 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[144]);

                if (tmp_expression_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[144]);

                        if (unlikely(tmp_expression_value_16 == NULL)) {
                            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                        }

                        if (tmp_expression_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 92;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_16);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                tmp_subscript_value_12 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[136]);

                if (tmp_subscript_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_12 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[136]);

                        if (unlikely(tmp_subscript_value_12 == NULL)) {
                            tmp_subscript_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                        }

                        if (tmp_subscript_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_16);

                            exception_lineno = 92;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_subscript_value_12);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_16);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 92;
                    type_description_2 = "o";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_8, 2, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_expression_value_12);
            Py_DECREF(tmp_subscript_value_8);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_8);
            Py_DECREF(tmp_expression_value_12);
            Py_DECREF(tmp_subscript_value_8);
            if (tmp_ass_subvalue_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_4 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[174]);

            if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_4);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[174]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_4);

                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_4 = mod_consts[24];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
            Py_DECREF(tmp_ass_subscribed_4);
            Py_DECREF(tmp_ass_subvalue_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_13;
            tmp_dict_key_5 = mod_consts[176];
            tmp_expression_value_17 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[138]);

            if (tmp_expression_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[138]);

                    if (unlikely(tmp_expression_value_17 == NULL)) {
                        tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
                    }

                    if (tmp_expression_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 95;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_17);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_13 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[32]);

            if (tmp_subscript_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[32]);

                    if (unlikely(tmp_subscript_value_13 == NULL)) {
                        tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                    }

                    if (tmp_subscript_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_17);

                        exception_lineno = 95;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_13);
            Py_DECREF(tmp_expression_value_17);
            Py_DECREF(tmp_subscript_value_13);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[177];
            tmp_dict_value_5 = mod_consts[37];
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__5___init__(tmp_annotations_5);

            tmp_res = PyObject_SetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[178], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_14;
            tmp_dict_key_6 = mod_consts[63];
            tmp_expression_value_18 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[144]);

            if (tmp_expression_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[144]);

                    if (unlikely(tmp_expression_value_18 == NULL)) {
                        tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                    }

                    if (tmp_expression_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 99;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_18);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_14 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[180]);

            if (tmp_subscript_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_14 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_subscript_value_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_18);
            Py_DECREF(tmp_subscript_value_14);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__6_run_async_cm(tmp_annotations_6);

            tmp_res = PyObject_SetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_dict_key_7 = mod_consts[63];
            tmp_dict_value_7 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[32]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[32]);

                    if (unlikely(tmp_dict_value_7 == NULL)) {
                        tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                    }

                    if (tmp_dict_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 122;
                        type_description_2 = "o";
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


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__7___enter__(tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[71], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_16;
            tmp_dict_key_8 = mod_consts[182];
            tmp_expression_value_19 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[144]);

            if (tmp_expression_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[144]);

                    if (unlikely(tmp_expression_value_19 == NULL)) {
                        tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                    }

                    if (tmp_expression_value_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 130;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_19);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_20 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[146]);

            if (tmp_expression_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[146]);

                    if (unlikely(tmp_expression_value_20 == NULL)) {
                        tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
                    }

                    if (tmp_expression_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_19);

                        exception_lineno = 130;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_20);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_16 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[175]);

            if (tmp_subscript_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_16 = PyExc_BaseException;
                    Py_INCREF(tmp_subscript_value_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_16);
            Py_DECREF(tmp_expression_value_20);
            Py_DECREF(tmp_subscript_value_16);
            if (tmp_subscript_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_19);

                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_15);
            Py_DECREF(tmp_expression_value_19);
            Py_DECREF(tmp_subscript_value_15);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_21;
                PyObject *tmp_subscript_value_17;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_subscript_value_18;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_subscript_value_19;
                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[183];
                tmp_expression_value_21 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[144]);

                if (tmp_expression_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[144]);

                        if (unlikely(tmp_expression_value_21 == NULL)) {
                            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                        }

                        if (tmp_expression_value_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 131;
                            type_description_2 = "o";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_21);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_subscript_value_17 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[175]);

                if (tmp_subscript_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_17 = PyExc_BaseException;
                        Py_INCREF(tmp_subscript_value_17);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_17);
                Py_DECREF(tmp_expression_value_21);
                Py_DECREF(tmp_subscript_value_17);
                if (tmp_dict_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 131;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[184];
                tmp_expression_value_22 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[144]);

                if (tmp_expression_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[144]);

                        if (unlikely(tmp_expression_value_22 == NULL)) {
                            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                        }

                        if (tmp_expression_value_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 132;
                            type_description_2 = "o";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_22);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_subscript_value_18 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[136]);

                if (tmp_subscript_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_18 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[136]);

                        if (unlikely(tmp_subscript_value_18 == NULL)) {
                            tmp_subscript_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                        }

                        if (tmp_subscript_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_22);

                            exception_lineno = 132;
                            type_description_2 = "o";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_subscript_value_18);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_18);
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_subscript_value_18);
                if (tmp_dict_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 132;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[63];
                tmp_expression_value_23 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[144]);

                if (tmp_expression_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[144]);

                        if (unlikely(tmp_expression_value_23 == NULL)) {
                            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                        }

                        if (tmp_expression_value_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 133;
                            type_description_2 = "o";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_23);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_subscript_value_19 = PyObject_GetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[180]);

                if (tmp_subscript_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_19 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_19);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_19);
                Py_DECREF(tmp_expression_value_23);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_dict_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 133;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_annotations_8);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__8___exit__(tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_0b6a96ac9b54f4d948c5b2c339d88e14_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0b6a96ac9b54f4d948c5b2c339d88e14_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0b6a96ac9b54f4d948c5b2c339d88e14_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0b6a96ac9b54f4d948c5b2c339d88e14_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_0b6a96ac9b54f4d948c5b2c339d88e14_2);

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


                exception_lineno = 87;

                goto try_except_handler_8;
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
        tmp_res = PyObject_SetItem(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87, mod_consts[186], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto try_except_handler_8;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_11 = mod_consts[100];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_11 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_30d0068b191a3e4a1ffd5b6497ec4cb7->m_frame.f_lineno = 87;
            tmp_assign_source_55 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto try_except_handler_8;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_55;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_54 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_54);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87);
        locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87 = NULL;
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

        Py_DECREF(locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87);
        locals_anyio$from_thread$$$class__1__BlockingAsyncContextManager_87 = NULL;
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
        exception_lineno = 87;
        goto try_except_handler_6;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_54);
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
        PyObject *tmp_assign_source_56;
        PyObject *tmp_tuple_element_12;
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_9;
        }
        tmp_assign_source_56 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_56, 0, tmp_tuple_element_12);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_57 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_9;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_24 = tmp_class_creation_2__bases;
        tmp_subscript_value_20 = mod_consts[127];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_24, tmp_subscript_value_20, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_9;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_59 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_59;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_25 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_25, mod_consts[166]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_26 = tmp_class_creation_2__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[166]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_9;
        }
        tmp_tuple_element_13 = mod_consts[93];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_13 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_30d0068b191a3e4a1ffd5b6497ec4cb7->m_frame.f_lineno = 139;
        tmp_assign_source_60 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_60;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_27;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_27 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_27, mod_consts[167]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_9;
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
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[168];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[169];
        tmp_getattr_default_2 = mod_consts[170];
        tmp_tuple_element_14 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_28;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_28 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_28 == NULL));
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[169]);
            Py_DECREF(tmp_expression_value_28);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 139;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_61;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_62;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_anyio$from_thread$$$class__2__BlockingPortalTaskStatus_139 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[171];
        tmp_res = PyObject_SetItem(locals_anyio$from_thread$$$class__2__BlockingPortalTaskStatus_139, mod_consts[172], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[93];
        tmp_res = PyObject_SetItem(locals_anyio$from_thread$$$class__2__BlockingPortalTaskStatus_139, mod_consts[173], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_11;
        }
        frame_86d99307e7795f94f827579bcf5ef964_3 = MAKE_CLASS_FRAME(codeobj_86d99307e7795f94f827579bcf5ef964, module_anyio$from_thread, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_86d99307e7795f94f827579bcf5ef964_3);
        assert(Py_REFCNT(frame_86d99307e7795f94f827579bcf5ef964_3) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            tmp_dict_key_9 = mod_consts[73];
            tmp_dict_value_9 = PyObject_GetItem(locals_anyio$from_thread$$$class__2__BlockingPortalTaskStatus_139, mod_consts[27]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[27]);

                    if (unlikely(tmp_dict_value_9 == NULL)) {
                        tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
                    }

                    if (tmp_dict_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 140;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__9___init__(tmp_annotations_9);

            tmp_res = PyObject_SetItem(locals_anyio$from_thread$$$class__2__BlockingPortalTaskStatus_139, mod_consts[178], tmp_dictset_value);
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
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_defaults_1 = mod_consts[188];
            tmp_dict_key_10 = mod_consts[189];
            tmp_dict_value_10 = PyObject_GetItem(locals_anyio$from_thread$$$class__2__BlockingPortalTaskStatus_139, mod_consts[190]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = (PyObject *)&PyBaseObject_Type;
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_10 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[63];
            tmp_dict_value_10 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__10_started(tmp_defaults_1, tmp_annotations_10);

            tmp_res = PyObject_SetItem(locals_anyio$from_thread$$$class__2__BlockingPortalTaskStatus_139, mod_consts[191], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_86d99307e7795f94f827579bcf5ef964_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_86d99307e7795f94f827579bcf5ef964_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_86d99307e7795f94f827579bcf5ef964_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_86d99307e7795f94f827579bcf5ef964_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_86d99307e7795f94f827579bcf5ef964_3);

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
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_anyio$from_thread$$$class__2__BlockingPortalTaskStatus_139, mod_consts[186], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto try_except_handler_11;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_63;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_15 = mod_consts[93];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_15 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_anyio$from_thread$$$class__2__BlockingPortalTaskStatus_139;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_30d0068b191a3e4a1ffd5b6497ec4cb7->m_frame.f_lineno = 139;
            tmp_assign_source_63 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto try_except_handler_11;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_63;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_62 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_62);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_anyio$from_thread$$$class__2__BlockingPortalTaskStatus_139);
        locals_anyio$from_thread$$$class__2__BlockingPortalTaskStatus_139 = NULL;
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

        Py_DECREF(locals_anyio$from_thread$$$class__2__BlockingPortalTaskStatus_139);
        locals_anyio$from_thread$$$class__2__BlockingPortalTaskStatus_139 = NULL;
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
        exception_lineno = 139;
        goto try_except_handler_9;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_62);
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
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_65;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_66;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_anyio$from_thread$$$class__3_BlockingPortal_147 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[171];
        tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[172], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[193];
        tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[120], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[173], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_11;
            tmp_annotations_11 = DICT_COPY(mod_consts[194]);


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__11___new__(tmp_annotations_11);

            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[195], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_12;
            tmp_annotations_12 = DICT_COPY(mod_consts[105]);


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__12___init__(tmp_annotations_12);

            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[178], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_13;
            tmp_annotations_13 = DICT_COPY(mod_consts[194]);


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__13___aenter__(tmp_annotations_13);

            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        frame_4e8351ea42031a6126e27e571cdfb6fb_4 = MAKE_CLASS_FRAME(codeobj_4e8351ea42031a6126e27e571cdfb6fb, module_anyio$from_thread, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4e8351ea42031a6126e27e571cdfb6fb_4);
        assert(Py_REFCNT(frame_4e8351ea42031a6126e27e571cdfb6fb_4) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_subscript_value_22;
            tmp_dict_key_11 = mod_consts[48];
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[146]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_subscript_value_22 = PyExc_BaseException;
            tmp_subscript_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_22);
            if (tmp_subscript_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_21);
            Py_DECREF(tmp_subscript_value_21);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_14 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_31;
                PyObject *tmp_subscript_value_23;
                PyObject *tmp_expression_value_32;
                PyObject *tmp_subscript_value_24;
                PyObject *tmp_expression_value_33;
                PyObject *tmp_subscript_value_25;
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[49];
                tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[144]);

                if (unlikely(tmp_expression_value_31 == NULL)) {
                    tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                }

                if (tmp_expression_value_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 166;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_23 = PyExc_BaseException;
                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_23);
                if (tmp_dict_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 166;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[50];
                tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[144]);

                if (unlikely(tmp_expression_value_32 == NULL)) {
                    tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                }

                if (tmp_expression_value_32 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 167;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_24 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[136]);

                if (unlikely(tmp_subscript_value_24 == NULL)) {
                    tmp_subscript_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                }

                if (tmp_subscript_value_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 167;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_24);
                if (tmp_dict_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 167;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[63];
                tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[144]);

                if (unlikely(tmp_expression_value_33 == NULL)) {
                    tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                }

                if (tmp_expression_value_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 168;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_25 = (PyObject *)&PyBool_Type;
                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_25);
                if (tmp_dict_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 168;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_14);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__14___aexit__(tmp_annotations_14);

            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_15;
            tmp_annotations_15 = DICT_COPY(mod_consts[105]);


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__15__check_running(tmp_annotations_15);

            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[88], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_16;
            tmp_annotations_16 = DICT_COPY(mod_consts[105]);


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__16_sleep_until_stopped(tmp_annotations_16);

            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[55], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_17;
            tmp_defaults_2 = mod_consts[199];
            tmp_annotations_17 = DICT_COPY(mod_consts[200]);
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__17_stop(tmp_defaults_2, tmp_annotations_17);

            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[47], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_dict_key_12 = mod_consts[66];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[139]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_18 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_34;
                PyObject *tmp_subscript_value_26;
                PyObject *tmp_tuple_element_16;
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[67];
                tmp_dict_value_12 = (PyObject *)&PyTuple_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[68];
                tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[142]);

                if (unlikely(tmp_expression_value_34 == NULL)) {
                    tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                }

                if (tmp_expression_value_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 201;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_tuple_element_16 = (PyObject *)&PyUnicode_Type;
                tmp_subscript_value_26 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_subscript_value_26, 0, tmp_tuple_element_16);
                tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

                if (unlikely(tmp_tuple_element_16 == NULL)) {
                    tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                }

                if (tmp_tuple_element_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 201;
                    type_description_2 = "o";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_26, 1, tmp_tuple_element_16);
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_subscript_value_26);
                goto dict_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_26);
                Py_DECREF(tmp_subscript_value_26);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 201;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[73];
                tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[27]);

                if (unlikely(tmp_dict_value_12 == NULL)) {
                    tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
                }

                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 201;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[63];
                tmp_dict_value_12 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_annotations_18);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__18__call_func(tmp_annotations_18);

            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            tmp_dict_key_13 = mod_consts[66];
            tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[139]);

            if (unlikely(tmp_dict_value_13 == NULL)) {
                tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
            }

            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_19 = _PyDict_NewPresized( 6 );
            {
                PyObject *tmp_expression_value_35;
                PyObject *tmp_subscript_value_27;
                PyObject *tmp_tuple_element_17;
                tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_13, tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[67];
                tmp_dict_value_13 = (PyObject *)&PyTuple_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_13, tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[68];
                tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[142]);

                if (unlikely(tmp_expression_value_35 == NULL)) {
                    tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
                }

                if (tmp_expression_value_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 239;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_tuple_element_17 = (PyObject *)&PyUnicode_Type;
                tmp_subscript_value_27 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_subscript_value_27, 0, tmp_tuple_element_17);
                tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

                if (unlikely(tmp_tuple_element_17 == NULL)) {
                    tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                }

                if (tmp_tuple_element_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 239;
                    type_description_2 = "o";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_27, 1, tmp_tuple_element_17);
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_subscript_value_27);
                goto dict_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_27);
                Py_DECREF(tmp_subscript_value_27);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 239;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[86];
                tmp_dict_value_13 = (PyObject *)&PyBaseObject_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_13, tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[73];
                tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[27]);

                if (unlikely(tmp_dict_value_13 == NULL)) {
                    tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
                }

                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 241;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_13, tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[63];
                tmp_dict_value_13 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_13, tmp_dict_value_13);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_annotations_19);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__19__spawn_task_from_thread(tmp_annotations_19);

            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[89], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_28;
            PyObject *tmp_tuple_element_18;
            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[149]);

            if (unlikely(tmp_called_value_7 == NULL)) {
                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_14 = mod_consts[66];
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[139]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_tuple_element_18 = Py_Ellipsis;
            tmp_subscript_value_28 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_37;
                PyObject *tmp_subscript_value_29;
                PyObject *tmp_tuple_element_19;
                PyTuple_SET_ITEM0(tmp_subscript_value_28, 0, tmp_tuple_element_18);
                tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[141]);

                if (unlikely(tmp_expression_value_37 == NULL)) {
                    tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
                }

                if (tmp_expression_value_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 260;
                    type_description_2 = "o";
                    goto tuple_build_exception_12;
                }
                tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

                if (unlikely(tmp_tuple_element_19 == NULL)) {
                    tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                }

                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 260;
                    type_description_2 = "o";
                    goto tuple_build_exception_12;
                }
                tmp_subscript_value_29 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_29, 0, tmp_tuple_element_19);
                tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

                if (unlikely(tmp_tuple_element_19 == NULL)) {
                    tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                }

                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 260;
                    type_description_2 = "o";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_29, 1, tmp_tuple_element_19);
                tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

                if (unlikely(tmp_tuple_element_19 == NULL)) {
                    tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
                }

                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 260;
                    type_description_2 = "o";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_29, 2, tmp_tuple_element_19);
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_subscript_value_29);
                goto tuple_build_exception_12;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                tmp_tuple_element_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_29);
                Py_DECREF(tmp_subscript_value_29);
                if (tmp_tuple_element_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 260;
                    type_description_2 = "o";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_28, 1, tmp_tuple_element_18);
            }
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_subscript_value_28);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_28);
            Py_DECREF(tmp_subscript_value_28);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_20 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[67];
            tmp_dict_value_14 = (PyObject *)&PyBaseObject_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[63];
            tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

            if (unlikely(tmp_dict_value_14 == NULL)) {
                tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
            }

            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_annotations_20);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;


            tmp_args_element_value_1 = MAKE_FUNCTION_anyio$from_thread$$$function__20_call(tmp_annotations_20);

            frame_4e8351ea42031a6126e27e571cdfb6fb_4->m_frame.f_lineno = 258;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[33], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_subscript_value_30;
            PyObject *tmp_tuple_element_20;
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[149]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_15 = mod_consts[66];
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[139]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_tuple_element_20 = Py_Ellipsis;
            tmp_subscript_value_30 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_30, 0, tmp_tuple_element_20);
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

            if (unlikely(tmp_tuple_element_20 == NULL)) {
                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
            }

            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_2 = "o";
                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_30, 1, tmp_tuple_element_20);
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_subscript_value_30);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_30);
            Py_DECREF(tmp_subscript_value_30);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_21 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[67];
            tmp_dict_value_15 = (PyObject *)&PyBaseObject_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[63];
            tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

            if (unlikely(tmp_dict_value_15 == NULL)) {
                tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
            }

            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_2 = "o";
                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_10;
            // Exception handling pass through code for dict_build:
            dict_build_exception_10:;
            Py_DECREF(tmp_annotations_21);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_10:;


            tmp_args_element_value_2 = MAKE_FUNCTION_anyio$from_thread$$$function__21_call(tmp_annotations_21);

            frame_4e8351ea42031a6126e27e571cdfb6fb_4->m_frame.f_lineno = 264;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 264;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[33], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_31;
            PyObject *tmp_tuple_element_21;
            tmp_dict_key_16 = mod_consts[66];
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[139]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_tuple_element_21 = Py_Ellipsis;
            tmp_subscript_value_31 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_40;
                PyObject *tmp_subscript_value_32;
                PyObject *tmp_tuple_element_22;
                PyObject *tmp_expression_value_41;
                PyObject *tmp_subscript_value_33;
                PyObject *tmp_tuple_element_23;
                PyTuple_SET_ITEM0(tmp_subscript_value_31, 0, tmp_tuple_element_21);
                tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[148]);

                if (unlikely(tmp_expression_value_40 == NULL)) {
                    tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
                }

                if (tmp_expression_value_40 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 270;
                    type_description_2 = "o";
                    goto tuple_build_exception_15;
                }
                tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[141]);

                if (unlikely(tmp_expression_value_41 == NULL)) {
                    tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
                }

                if (tmp_expression_value_41 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 270;
                    type_description_2 = "o";
                    goto tuple_build_exception_15;
                }
                tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

                if (unlikely(tmp_tuple_element_23 == NULL)) {
                    tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                }

                if (tmp_tuple_element_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 270;
                    type_description_2 = "o";
                    goto tuple_build_exception_15;
                }
                tmp_subscript_value_33 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_33, 0, tmp_tuple_element_23);
                tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

                if (unlikely(tmp_tuple_element_23 == NULL)) {
                    tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                }

                if (tmp_tuple_element_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 270;
                    type_description_2 = "o";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_33, 1, tmp_tuple_element_23);
                tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

                if (unlikely(tmp_tuple_element_23 == NULL)) {
                    tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
                }

                if (tmp_tuple_element_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 270;
                    type_description_2 = "o";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_33, 2, tmp_tuple_element_23);
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_16:;
                Py_DECREF(tmp_subscript_value_33);
                goto tuple_build_exception_15;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                tmp_tuple_element_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_33);
                Py_DECREF(tmp_subscript_value_33);
                if (tmp_tuple_element_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 270;
                    type_description_2 = "o";
                    goto tuple_build_exception_15;
                }
                tmp_subscript_value_32 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_32, 0, tmp_tuple_element_22);
                tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

                if (unlikely(tmp_tuple_element_22 == NULL)) {
                    tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
                }

                if (tmp_tuple_element_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 270;
                    type_description_2 = "o";
                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_32, 1, tmp_tuple_element_22);
                goto tuple_build_noexception_16;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_17:;
                Py_DECREF(tmp_subscript_value_32);
                goto tuple_build_exception_15;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_16:;
                tmp_tuple_element_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_32);
                Py_DECREF(tmp_subscript_value_32);
                if (tmp_tuple_element_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 270;
                    type_description_2 = "o";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_31, 1, tmp_tuple_element_21);
            }
            goto tuple_build_noexception_17;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_subscript_value_31);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_17:;
            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_31);
            Py_DECREF(tmp_subscript_value_31);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_22 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[67];
            tmp_dict_value_16 = (PyObject *)&PyBaseObject_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[63];
            tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

            if (unlikely(tmp_dict_value_16 == NULL)) {
                tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
            }

            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "o";
                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_11;
            // Exception handling pass through code for dict_build:
            dict_build_exception_11:;
            Py_DECREF(tmp_annotations_22);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_11:;


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__22_call(tmp_annotations_22);

            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[33], tmp_dictset_value);
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
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_kw_defaults_1;
            PyObject *tmp_annotations_23;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_subscript_value_34;
            PyObject *tmp_tuple_element_24;
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[149]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_kw_defaults_1 = DICT_COPY(mod_consts[203]);
            tmp_dict_key_17 = mod_consts[66];
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[139]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_1);

                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_tuple_element_24 = Py_Ellipsis;
            tmp_subscript_value_34 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_43;
                PyObject *tmp_subscript_value_35;
                PyObject *tmp_tuple_element_25;
                PyTuple_SET_ITEM0(tmp_subscript_value_34, 0, tmp_tuple_element_24);
                tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[141]);

                if (unlikely(tmp_expression_value_43 == NULL)) {
                    tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
                }

                if (tmp_expression_value_43 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 288;
                    type_description_2 = "o";
                    goto tuple_build_exception_18;
                }
                tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

                if (unlikely(tmp_tuple_element_25 == NULL)) {
                    tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                }

                if (tmp_tuple_element_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 288;
                    type_description_2 = "o";
                    goto tuple_build_exception_18;
                }
                tmp_subscript_value_35 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_35, 0, tmp_tuple_element_25);
                tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

                if (unlikely(tmp_tuple_element_25 == NULL)) {
                    tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                }

                if (tmp_tuple_element_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 288;
                    type_description_2 = "o";
                    goto tuple_build_exception_19;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_35, 1, tmp_tuple_element_25);
                tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

                if (unlikely(tmp_tuple_element_25 == NULL)) {
                    tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
                }

                if (tmp_tuple_element_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 288;
                    type_description_2 = "o";
                    goto tuple_build_exception_19;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_35, 2, tmp_tuple_element_25);
                goto tuple_build_noexception_18;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_19:;
                Py_DECREF(tmp_subscript_value_35);
                goto tuple_build_exception_18;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_18:;
                tmp_tuple_element_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_35);
                Py_DECREF(tmp_subscript_value_35);
                if (tmp_tuple_element_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 288;
                    type_description_2 = "o";
                    goto tuple_build_exception_18;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_34, 1, tmp_tuple_element_24);
            }
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_18:;
            Py_DECREF(tmp_kw_defaults_1);
            Py_DECREF(tmp_subscript_value_34);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_34);
            Py_DECREF(tmp_subscript_value_34);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_1);

                exception_lineno = 288;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_23 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[86];
            tmp_dict_value_17 = (PyObject *)&PyBaseObject_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[67];
            tmp_dict_value_17 = (PyObject *)&PyBaseObject_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[63];
            tmp_dict_value_17 = mod_consts[204];
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));


            tmp_args_element_value_3 = MAKE_FUNCTION_anyio$from_thread$$$function__23_spawn_task(tmp_kw_defaults_1, tmp_annotations_23);

            frame_4e8351ea42031a6126e27e571cdfb6fb_4->m_frame.f_lineno = 285;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[205], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_kw_defaults_2;
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_subscript_value_36;
            PyObject *tmp_tuple_element_26;
            tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[149]);

            if (unlikely(tmp_called_value_10 == NULL)) {
                tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
            }

            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_kw_defaults_2 = DICT_COPY(mod_consts[203]);
            tmp_dict_key_18 = mod_consts[66];
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[139]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_2);

                exception_lineno = 296;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_tuple_element_26 = Py_Ellipsis;
            tmp_subscript_value_36 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_36, 0, tmp_tuple_element_26);
            tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

            if (unlikely(tmp_tuple_element_26 == NULL)) {
                tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
            }

            if (tmp_tuple_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_2 = "o";
                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_36, 1, tmp_tuple_element_26);
            goto tuple_build_noexception_20;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_20:;
            Py_DECREF(tmp_kw_defaults_2);
            Py_DECREF(tmp_subscript_value_36);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_20:;
            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_36);
            Py_DECREF(tmp_subscript_value_36);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_2);

                exception_lineno = 296;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_24 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[86];
            tmp_dict_value_18 = (PyObject *)&PyBaseObject_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[67];
            tmp_dict_value_18 = (PyObject *)&PyBaseObject_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_dict_key_18 = mod_consts[63];
            tmp_dict_value_18 = mod_consts[204];
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));


            tmp_args_element_value_4 = MAKE_FUNCTION_anyio$from_thread$$$function__24_spawn_task(tmp_kw_defaults_2, tmp_annotations_24);

            frame_4e8351ea42031a6126e27e571cdfb6fb_4->m_frame.f_lineno = 294;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 294;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[205], tmp_dictset_value);
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
            PyObject *tmp_kw_defaults_3;
            PyObject *tmp_annotations_25;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_subscript_value_37;
            PyObject *tmp_tuple_element_27;
            tmp_kw_defaults_3 = DICT_COPY(mod_consts[203]);
            tmp_dict_key_19 = mod_consts[66];
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[139]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_3);

                exception_lineno = 302;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_tuple_element_27 = Py_Ellipsis;
            tmp_subscript_value_37 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_46;
                PyObject *tmp_subscript_value_38;
                PyObject *tmp_tuple_element_28;
                PyObject *tmp_expression_value_47;
                PyObject *tmp_subscript_value_39;
                PyObject *tmp_tuple_element_29;
                PyTuple_SET_ITEM0(tmp_subscript_value_37, 0, tmp_tuple_element_27);
                tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[148]);

                if (unlikely(tmp_expression_value_46 == NULL)) {
                    tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
                }

                if (tmp_expression_value_46 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 302;
                    type_description_2 = "o";
                    goto tuple_build_exception_21;
                }
                tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[141]);

                if (unlikely(tmp_expression_value_47 == NULL)) {
                    tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
                }

                if (tmp_expression_value_47 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 302;
                    type_description_2 = "o";
                    goto tuple_build_exception_21;
                }
                tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

                if (unlikely(tmp_tuple_element_29 == NULL)) {
                    tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                }

                if (tmp_tuple_element_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 302;
                    type_description_2 = "o";
                    goto tuple_build_exception_21;
                }
                tmp_subscript_value_39 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_39, 0, tmp_tuple_element_29);
                tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

                if (unlikely(tmp_tuple_element_29 == NULL)) {
                    tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                }

                if (tmp_tuple_element_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 302;
                    type_description_2 = "o";
                    goto tuple_build_exception_22;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_39, 1, tmp_tuple_element_29);
                tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

                if (unlikely(tmp_tuple_element_29 == NULL)) {
                    tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
                }

                if (tmp_tuple_element_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 302;
                    type_description_2 = "o";
                    goto tuple_build_exception_22;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_39, 2, tmp_tuple_element_29);
                goto tuple_build_noexception_21;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_22:;
                Py_DECREF(tmp_subscript_value_39);
                goto tuple_build_exception_21;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_21:;
                tmp_tuple_element_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_39);
                Py_DECREF(tmp_subscript_value_39);
                if (tmp_tuple_element_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 302;
                    type_description_2 = "o";
                    goto tuple_build_exception_21;
                }
                tmp_subscript_value_38 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_38, 0, tmp_tuple_element_28);
                tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

                if (unlikely(tmp_tuple_element_28 == NULL)) {
                    tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
                }

                if (tmp_tuple_element_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 302;
                    type_description_2 = "o";
                    goto tuple_build_exception_23;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_38, 1, tmp_tuple_element_28);
                goto tuple_build_noexception_22;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_23:;
                Py_DECREF(tmp_subscript_value_38);
                goto tuple_build_exception_21;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_22:;
                tmp_tuple_element_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_38);
                Py_DECREF(tmp_subscript_value_38);
                if (tmp_tuple_element_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 302;
                    type_description_2 = "o";
                    goto tuple_build_exception_21;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_37, 1, tmp_tuple_element_27);
            }
            goto tuple_build_noexception_23;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_21:;
            Py_DECREF(tmp_kw_defaults_3);
            Py_DECREF(tmp_subscript_value_37);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_23:;
            tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_37);
            Py_DECREF(tmp_subscript_value_37);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_3);

                exception_lineno = 302;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_25 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[86];
            tmp_dict_value_19 = (PyObject *)&PyBaseObject_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[67];
            tmp_dict_value_19 = (PyObject *)&PyBaseObject_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_dict_key_19 = mod_consts[63];
            tmp_dict_value_19 = mod_consts[204];
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__25_spawn_task(tmp_kw_defaults_3, tmp_annotations_25);

            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[205], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_kw_defaults_4;
            PyObject *tmp_annotations_26;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_40;
            PyObject *tmp_tuple_element_30;
            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[149]);

            if (unlikely(tmp_called_value_11 == NULL)) {
                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_kw_defaults_4 = DICT_COPY(mod_consts[203]);
            tmp_dict_key_20 = mod_consts[66];
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[139]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_4);

                exception_lineno = 332;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_tuple_element_30 = Py_Ellipsis;
            tmp_subscript_value_40 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_49;
                PyObject *tmp_subscript_value_41;
                PyObject *tmp_tuple_element_31;
                PyTuple_SET_ITEM0(tmp_subscript_value_40, 0, tmp_tuple_element_30);
                tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[141]);

                if (unlikely(tmp_expression_value_49 == NULL)) {
                    tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
                }

                if (tmp_expression_value_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 332;
                    type_description_2 = "o";
                    goto tuple_build_exception_24;
                }
                tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

                if (unlikely(tmp_tuple_element_31 == NULL)) {
                    tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                }

                if (tmp_tuple_element_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 332;
                    type_description_2 = "o";
                    goto tuple_build_exception_24;
                }
                tmp_subscript_value_41 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_41, 0, tmp_tuple_element_31);
                tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

                if (unlikely(tmp_tuple_element_31 == NULL)) {
                    tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                }

                if (tmp_tuple_element_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 332;
                    type_description_2 = "o";
                    goto tuple_build_exception_25;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_41, 1, tmp_tuple_element_31);
                tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

                if (unlikely(tmp_tuple_element_31 == NULL)) {
                    tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
                }

                if (tmp_tuple_element_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 332;
                    type_description_2 = "o";
                    goto tuple_build_exception_25;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_41, 2, tmp_tuple_element_31);
                goto tuple_build_noexception_24;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_25:;
                Py_DECREF(tmp_subscript_value_41);
                goto tuple_build_exception_24;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_24:;
                tmp_tuple_element_30 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_41);
                Py_DECREF(tmp_subscript_value_41);
                if (tmp_tuple_element_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 332;
                    type_description_2 = "o";
                    goto tuple_build_exception_24;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_40, 1, tmp_tuple_element_30);
            }
            goto tuple_build_noexception_25;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_24:;
            Py_DECREF(tmp_kw_defaults_4);
            Py_DECREF(tmp_subscript_value_40);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_25:;
            tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_40);
            Py_DECREF(tmp_subscript_value_40);
            if (tmp_dict_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_4);

                exception_lineno = 332;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_26 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));
            tmp_dict_key_20 = mod_consts[86];
            tmp_dict_value_20 = (PyObject *)&PyBaseObject_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_20, tmp_dict_value_20);
            assert(!(tmp_res != 0));
            tmp_dict_key_20 = mod_consts[67];
            tmp_dict_value_20 = (PyObject *)&PyBaseObject_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_20, tmp_dict_value_20);
            assert(!(tmp_res != 0));
            tmp_dict_key_20 = mod_consts[63];
            tmp_dict_value_20 = mod_consts[204];
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_20, tmp_dict_value_20);
            assert(!(tmp_res != 0));


            tmp_args_element_value_5 = MAKE_FUNCTION_anyio$from_thread$$$function__26_start_task_soon(tmp_kw_defaults_4, tmp_annotations_26);

            frame_4e8351ea42031a6126e27e571cdfb6fb_4->m_frame.f_lineno = 329;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_kw_defaults_5;
            PyObject *tmp_annotations_27;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_subscript_value_42;
            PyObject *tmp_tuple_element_32;
            tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[149]);

            if (unlikely(tmp_called_value_12 == NULL)) {
                tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
            }

            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_kw_defaults_5 = DICT_COPY(mod_consts[203]);
            tmp_dict_key_21 = mod_consts[66];
            tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[139]);

            if (unlikely(tmp_expression_value_50 == NULL)) {
                tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
            }

            if (tmp_expression_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_5);

                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_tuple_element_32 = Py_Ellipsis;
            tmp_subscript_value_42 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_42, 0, tmp_tuple_element_32);
            tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

            if (unlikely(tmp_tuple_element_32 == NULL)) {
                tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
            }

            if (tmp_tuple_element_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_42, 1, tmp_tuple_element_32);
            goto tuple_build_noexception_26;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_26:;
            Py_DECREF(tmp_kw_defaults_5);
            Py_DECREF(tmp_subscript_value_42);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_26:;
            tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_42);
            Py_DECREF(tmp_subscript_value_42);
            if (tmp_dict_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_5);

                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_27 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[86];
            tmp_dict_value_21 = (PyObject *)&PyBaseObject_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_21, tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[67];
            tmp_dict_value_21 = (PyObject *)&PyBaseObject_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_21, tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_dict_key_21 = mod_consts[63];
            tmp_dict_value_21 = mod_consts[204];
            tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_21, tmp_dict_value_21);
            assert(!(tmp_res != 0));


            tmp_args_element_value_6 = MAKE_FUNCTION_anyio$from_thread$$$function__27_start_task_soon(tmp_kw_defaults_5, tmp_annotations_27);

            frame_4e8351ea42031a6126e27e571cdfb6fb_4->m_frame.f_lineno = 338;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 338;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_kw_defaults_6;
            PyObject *tmp_annotations_28;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_subscript_value_43;
            PyObject *tmp_tuple_element_33;
            tmp_kw_defaults_6 = DICT_COPY(mod_consts[203]);
            tmp_dict_key_22 = mod_consts[66];
            tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[139]);

            if (unlikely(tmp_expression_value_51 == NULL)) {
                tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
            }

            if (tmp_expression_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_6);

                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_tuple_element_33 = Py_Ellipsis;
            tmp_subscript_value_43 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_52;
                PyObject *tmp_subscript_value_44;
                PyObject *tmp_tuple_element_34;
                PyObject *tmp_expression_value_53;
                PyObject *tmp_subscript_value_45;
                PyObject *tmp_tuple_element_35;
                PyTuple_SET_ITEM0(tmp_subscript_value_43, 0, tmp_tuple_element_33);
                tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[148]);

                if (unlikely(tmp_expression_value_52 == NULL)) {
                    tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
                }

                if (tmp_expression_value_52 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 346;
                    type_description_2 = "o";
                    goto tuple_build_exception_27;
                }
                tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[141]);

                if (unlikely(tmp_expression_value_53 == NULL)) {
                    tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
                }

                if (tmp_expression_value_53 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 346;
                    type_description_2 = "o";
                    goto tuple_build_exception_27;
                }
                tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

                if (unlikely(tmp_tuple_element_35 == NULL)) {
                    tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                }

                if (tmp_tuple_element_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 346;
                    type_description_2 = "o";
                    goto tuple_build_exception_27;
                }
                tmp_subscript_value_45 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_45, 0, tmp_tuple_element_35);
                tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

                if (unlikely(tmp_tuple_element_35 == NULL)) {
                    tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                }

                if (tmp_tuple_element_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 346;
                    type_description_2 = "o";
                    goto tuple_build_exception_28;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_45, 1, tmp_tuple_element_35);
                tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

                if (unlikely(tmp_tuple_element_35 == NULL)) {
                    tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
                }

                if (tmp_tuple_element_35 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 346;
                    type_description_2 = "o";
                    goto tuple_build_exception_28;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_45, 2, tmp_tuple_element_35);
                goto tuple_build_noexception_27;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_28:;
                Py_DECREF(tmp_subscript_value_45);
                goto tuple_build_exception_27;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_27:;
                tmp_tuple_element_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_45);
                Py_DECREF(tmp_subscript_value_45);
                if (tmp_tuple_element_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 346;
                    type_description_2 = "o";
                    goto tuple_build_exception_27;
                }
                tmp_subscript_value_44 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_44, 0, tmp_tuple_element_34);
                tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[83]);

                if (unlikely(tmp_tuple_element_34 == NULL)) {
                    tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
                }

                if (tmp_tuple_element_34 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 346;
                    type_description_2 = "o";
                    goto tuple_build_exception_29;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_44, 1, tmp_tuple_element_34);
                goto tuple_build_noexception_28;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_29:;
                Py_DECREF(tmp_subscript_value_44);
                goto tuple_build_exception_27;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_28:;
                tmp_tuple_element_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_44);
                Py_DECREF(tmp_subscript_value_44);
                if (tmp_tuple_element_33 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 346;
                    type_description_2 = "o";
                    goto tuple_build_exception_27;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_43, 1, tmp_tuple_element_33);
            }
            goto tuple_build_noexception_29;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_27:;
            Py_DECREF(tmp_kw_defaults_6);
            Py_DECREF(tmp_subscript_value_43);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_29:;
            tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_43);
            Py_DECREF(tmp_subscript_value_43);
            if (tmp_dict_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_6);

                exception_lineno = 346;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_28 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_22, tmp_dict_value_22);
            Py_DECREF(tmp_dict_value_22);
            assert(!(tmp_res != 0));
            tmp_dict_key_22 = mod_consts[86];
            tmp_dict_value_22 = (PyObject *)&PyBaseObject_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_22, tmp_dict_value_22);
            assert(!(tmp_res != 0));
            tmp_dict_key_22 = mod_consts[67];
            tmp_dict_value_22 = (PyObject *)&PyBaseObject_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_22, tmp_dict_value_22);
            assert(!(tmp_res != 0));
            tmp_dict_key_22 = mod_consts[63];
            tmp_dict_value_22 = mod_consts[204];
            tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_22, tmp_dict_value_22);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__28_start_task_soon(tmp_kw_defaults_6, tmp_annotations_28);

            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_kw_defaults_7;
            PyObject *tmp_annotations_29;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_subscript_value_46;
            PyObject *tmp_tuple_element_36;
            tmp_kw_defaults_7 = DICT_COPY(mod_consts[203]);
            tmp_dict_key_23 = mod_consts[66];
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[139]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_7);

                exception_lineno = 374;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_tuple_element_36 = Py_Ellipsis;
            tmp_subscript_value_46 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_55;
                PyObject *tmp_subscript_value_47;
                PyObject *tmp_tuple_element_37;
                PyTuple_SET_ITEM0(tmp_subscript_value_46, 0, tmp_tuple_element_36);
                tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[141]);

                if (unlikely(tmp_expression_value_55 == NULL)) {
                    tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
                }

                if (tmp_expression_value_55 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 374;
                    type_description_2 = "o";
                    goto tuple_build_exception_30;
                }
                tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

                if (unlikely(tmp_tuple_element_37 == NULL)) {
                    tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                }

                if (tmp_tuple_element_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 374;
                    type_description_2 = "o";
                    goto tuple_build_exception_30;
                }
                tmp_subscript_value_47 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM0(tmp_subscript_value_47, 0, tmp_tuple_element_37);
                tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

                if (unlikely(tmp_tuple_element_37 == NULL)) {
                    tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                }

                if (tmp_tuple_element_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 374;
                    type_description_2 = "o";
                    goto tuple_build_exception_31;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_47, 1, tmp_tuple_element_37);
                tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

                if (unlikely(tmp_tuple_element_37 == NULL)) {
                    tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                }

                if (tmp_tuple_element_37 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 374;
                    type_description_2 = "o";
                    goto tuple_build_exception_31;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_47, 2, tmp_tuple_element_37);
                goto tuple_build_noexception_30;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_31:;
                Py_DECREF(tmp_subscript_value_47);
                goto tuple_build_exception_30;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_30:;
                tmp_tuple_element_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_47);
                Py_DECREF(tmp_subscript_value_47);
                if (tmp_tuple_element_36 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 374;
                    type_description_2 = "o";
                    goto tuple_build_exception_30;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_46, 1, tmp_tuple_element_36);
            }
            goto tuple_build_noexception_31;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_30:;
            Py_DECREF(tmp_kw_defaults_7);
            Py_DECREF(tmp_subscript_value_46);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_31:;
            tmp_dict_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_46);
            Py_DECREF(tmp_subscript_value_46);
            if (tmp_dict_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_7);

                exception_lineno = 374;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_29 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_56;
                PyObject *tmp_subscript_value_48;
                PyObject *tmp_tuple_element_38;
                tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_23, tmp_dict_value_23);
                Py_DECREF(tmp_dict_value_23);
                assert(!(tmp_res != 0));
                tmp_dict_key_23 = mod_consts[86];
                tmp_dict_value_23 = (PyObject *)&PyBaseObject_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_23, tmp_dict_value_23);
                assert(!(tmp_res != 0));
                tmp_dict_key_23 = mod_consts[67];
                tmp_dict_value_23 = (PyObject *)&PyBaseObject_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_23, tmp_dict_value_23);
                assert(!(tmp_res != 0));
                tmp_dict_key_23 = mod_consts[63];
                tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[145]);

                if (unlikely(tmp_expression_value_56 == NULL)) {
                    tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
                }

                if (tmp_expression_value_56 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 377;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_tuple_element_38 = mod_consts[208];
                tmp_subscript_value_48 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_subscript_value_48, 0, tmp_tuple_element_38);
                tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

                if (unlikely(tmp_tuple_element_38 == NULL)) {
                    tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                }

                if (tmp_tuple_element_38 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 377;
                    type_description_2 = "o";
                    goto tuple_build_exception_32;
                }
                PyTuple_SET_ITEM0(tmp_subscript_value_48, 1, tmp_tuple_element_38);
                goto tuple_build_noexception_32;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_32:;
                Py_DECREF(tmp_subscript_value_48);
                goto dict_build_exception_12;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_32:;
                tmp_dict_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_56, tmp_subscript_value_48);
                Py_DECREF(tmp_subscript_value_48);
                if (tmp_dict_value_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 377;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_23, tmp_dict_value_23);
                Py_DECREF(tmp_dict_value_23);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_12;
            // Exception handling pass through code for dict_build:
            dict_build_exception_12:;
            Py_DECREF(tmp_kw_defaults_7);
            Py_DECREF(tmp_annotations_29);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_12:;


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__29_start_task(tmp_kw_defaults_7, tmp_annotations_29);

            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[209], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 372;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_30;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_subscript_value_49;
            tmp_dict_key_24 = mod_consts[211];
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[138]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_subscript_value_49 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[32]);

            if (unlikely(tmp_subscript_value_49 == NULL)) {
                tmp_subscript_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
            }

            if (tmp_subscript_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_49);
            if (tmp_dict_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_30 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_58;
                PyObject *tmp_subscript_value_50;
                tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_24, tmp_dict_value_24);
                Py_DECREF(tmp_dict_value_24);
                assert(!(tmp_res != 0));
                tmp_dict_key_24 = mod_consts[63];
                tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[140]);

                if (unlikely(tmp_expression_value_58 == NULL)) {
                    tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
                }

                if (tmp_expression_value_58 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 415;
                    type_description_2 = "o";
                    goto dict_build_exception_13;
                }
                tmp_subscript_value_50 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[32]);

                if (unlikely(tmp_subscript_value_50 == NULL)) {
                    tmp_subscript_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
                }

                if (tmp_subscript_value_50 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 415;
                    type_description_2 = "o";
                    goto dict_build_exception_13;
                }
                tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_50);
                if (tmp_dict_value_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 415;
                    type_description_2 = "o";
                    goto dict_build_exception_13;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_24, tmp_dict_value_24);
                Py_DECREF(tmp_dict_value_24);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_13;
            // Exception handling pass through code for dict_build:
            dict_build_exception_13:;
            Py_DECREF(tmp_annotations_30);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_13:;


            tmp_dictset_value = MAKE_FUNCTION_anyio$from_thread$$$function__30_wrap_async_context_manager(tmp_annotations_30);

            tmp_res = PyDict_SetItem(locals_anyio$from_thread$$$class__3_BlockingPortal_147, mod_consts[212], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 413;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4e8351ea42031a6126e27e571cdfb6fb_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4e8351ea42031a6126e27e571cdfb6fb_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4e8351ea42031a6126e27e571cdfb6fb_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4e8351ea42031a6126e27e571cdfb6fb_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_4e8351ea42031a6126e27e571cdfb6fb_4);

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
            PyObject *tmp_assign_source_67;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_kwargs_value_5;
            tmp_called_value_13 = (PyObject *)&PyType_Type;
            tmp_tuple_element_39 = mod_consts[37];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_39);
            tmp_tuple_element_39 = mod_consts[214];
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_39);
            tmp_tuple_element_39 = locals_anyio$from_thread$$$class__3_BlockingPortal_147;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_39);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
            frame_30d0068b191a3e4a1ffd5b6497ec4cb7->m_frame.f_lineno = 147;
            tmp_assign_source_67 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto try_except_handler_14;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_67;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_66 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_66);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_anyio$from_thread$$$class__3_BlockingPortal_147);
        locals_anyio$from_thread$$$class__3_BlockingPortal_147 = NULL;
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

        Py_DECREF(locals_anyio$from_thread$$$class__3_BlockingPortal_147);
        locals_anyio$from_thread$$$class__3_BlockingPortal_147 = NULL;
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
        exception_lineno = 147;
        goto try_except_handler_12;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_66);
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

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_annotations_31;
        PyObject *tmp_dict_key_25;
        PyObject *tmp_dict_value_25;
        tmp_dict_key_25 = mod_consts[63];
        tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_dict_value_25 == NULL)) {
            tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        assert(!(tmp_dict_value_25 == NULL));
        tmp_annotations_31 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_25, tmp_dict_value_25);
        assert(!(tmp_res != 0));


        tmp_assign_source_68 = MAKE_FUNCTION_anyio$from_thread$$$function__31_create_blocking_portal(tmp_annotations_31);

        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_defaults_3;
        PyObject *tmp_annotations_32;
        PyObject *tmp_dict_key_26;
        PyObject *tmp_dict_value_26;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = mod_consts[216];
        tmp_dict_key_26 = mod_consts[112];
        tmp_dict_value_26 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_32 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_59;
            PyObject *tmp_subscript_value_51;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_subscript_value_52;
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_53;
            PyObject *tmp_tuple_element_41;
            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_26, tmp_dict_value_26);
            assert(!(tmp_res != 0));
            tmp_dict_key_26 = mod_consts[113];
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 452;

                goto dict_build_exception_14;
            }
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[142]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 452;

                goto dict_build_exception_14;
            }
            tmp_tuple_element_40 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_52 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_52, 0, tmp_tuple_element_40);
            tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_tuple_element_40 == NULL)) {
                tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
            }

            if (tmp_tuple_element_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 452;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_52, 1, tmp_tuple_element_40);
            goto tuple_build_noexception_33;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_33:;
            Py_DECREF(tmp_subscript_value_52);
            goto dict_build_exception_14;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_33:;
            tmp_subscript_value_51 = LOOKUP_SUBSCRIPT(tmp_expression_value_60, tmp_subscript_value_52);
            Py_DECREF(tmp_subscript_value_52);
            if (tmp_subscript_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 452;

                goto dict_build_exception_14;
            }
            tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_51);
            Py_DECREF(tmp_subscript_value_51);
            if (tmp_dict_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 452;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));
            tmp_dict_key_26 = mod_consts[63];
            tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[143]);

            if (unlikely(tmp_expression_value_61 == NULL)) {
                tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
            }

            if (tmp_expression_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 453;

                goto dict_build_exception_14;
            }
            tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[37]);

            if (unlikely(tmp_tuple_element_41 == NULL)) {
                tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
            }

            if (tmp_tuple_element_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 453;

                goto dict_build_exception_14;
            }
            tmp_subscript_value_53 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_53, 0, tmp_tuple_element_41);
            tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[137]);

            if (unlikely(tmp_tuple_element_41 == NULL)) {
                tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
            }

            if (tmp_tuple_element_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 453;

                goto tuple_build_exception_34;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_53, 1, tmp_tuple_element_41);
            tmp_tuple_element_41 = Py_None;
            PyTuple_SET_ITEM0(tmp_subscript_value_53, 2, tmp_tuple_element_41);
            goto tuple_build_noexception_34;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_34:;
            Py_DECREF(tmp_subscript_value_53);
            goto dict_build_exception_14;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_34:;
            tmp_dict_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_53);
            Py_DECREF(tmp_subscript_value_53);
            if (tmp_dict_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 453;

                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_26, tmp_dict_value_26);
            Py_DECREF(tmp_dict_value_26);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_14;
        // Exception handling pass through code for dict_build:
        dict_build_exception_14:;
        Py_DECREF(tmp_annotations_32);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_14:;
        Py_INCREF(tmp_defaults_3);


        tmp_args_element_value_7 = MAKE_FUNCTION_anyio$from_thread$$$function__32_start_blocking_portal(tmp_defaults_3, tmp_annotations_32);

        frame_30d0068b191a3e4a1ffd5b6497ec4cb7->m_frame.f_lineno = 450;
        tmp_assign_source_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$from_thread, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_69);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_30d0068b191a3e4a1ffd5b6497ec4cb7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_30d0068b191a3e4a1ffd5b6497ec4cb7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_30d0068b191a3e4a1ffd5b6497ec4cb7, exception_lineno);
    }



    assertFrameObject(frame_30d0068b191a3e4a1ffd5b6497ec4cb7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anyio.from_thread", false);

    Py_INCREF(module_anyio$from_thread);
    return module_anyio$from_thread;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$from_thread, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("anyio$from_thread", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
