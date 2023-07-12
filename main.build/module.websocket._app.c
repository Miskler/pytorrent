/* Generated code for Python module 'websocket._app'
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

/* The "module_websocket$_app" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_websocket$_app;
PyDictObject *moduledict_websocket$_app;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[278];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[278];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("websocket._app"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 278; i++) {
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
void checkModuleConstants_websocket$_app(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 278; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9be747efb5613afa278a2d2804af0555;
static PyCodeObject *codeobj_9c6b3f039720279cbd10e6790b213796;
static PyCodeObject *codeobj_509c48a5dd7e8ae86efde17559a1a1cb;
static PyCodeObject *codeobj_abc368cb95e26026a9c7e5c90a09e4f5;
static PyCodeObject *codeobj_3f55717a189b2d4b4be2e19a051cf871;
static PyCodeObject *codeobj_83516442b0b9da6f64a59b9808af4e96;
static PyCodeObject *codeobj_ea42b0bce1cfe1f74034d85f692da6df;
static PyCodeObject *codeobj_43f9ef76438fc9e7b5cf8bd0964f23c5;
static PyCodeObject *codeobj_3ae45b51f9e0417e4e93200b1bb28177;
static PyCodeObject *codeobj_3c4261a5500e05fbf359d844628023aa;
static PyCodeObject *codeobj_a42bf82ca1e8999893e392fc27d1c489;
static PyCodeObject *codeobj_b5ef7a5b9b4173eaafa62eff210f8911;
static PyCodeObject *codeobj_4e471cdce5423b044e17d22aa6f19253;
static PyCodeObject *codeobj_967e982aec95da866d6ebdc5cc03366c;
static PyCodeObject *codeobj_437c43e15bb74e8dff9a4c604e1fc629;
static PyCodeObject *codeobj_700f7769b9a1c7d6241046b90321435d;
static PyCodeObject *codeobj_6719565829611bf5a8f77e9adb98d80c;
static PyCodeObject *codeobj_1eb2e9ed5ab94e3703d25d9a8ccd57f8;
static PyCodeObject *codeobj_be3f88d95058b42dd650792776dce75b;
static PyCodeObject *codeobj_62ed899e2fe9ea365c01767e338bdb48;
static PyCodeObject *codeobj_4ed4126212593d3e1233a724cff84dff;
static PyCodeObject *codeobj_a23d127510cc4ec050a6deef1f2420d7;
static PyCodeObject *codeobj_f4f28be5f85c8b9b78f1426b1a21f4e0;
static PyCodeObject *codeobj_a360cc892a6d090a2510f1fd785ab1bc;
static PyCodeObject *codeobj_fa8303a977b67aee2ea2eae5f24dc26c;
static PyCodeObject *codeobj_cf3d581b40b10fe781197fbcb2c647cf;
static PyCodeObject *codeobj_1479327d288e0bb69a5b8454e1e55803;
static PyCodeObject *codeobj_df92b2a73edc1f742db9d50821d69e8d;
static PyCodeObject *codeobj_4d203cbd2433bec927efc31bfcf9fb93;
static PyCodeObject *codeobj_8901c8324cb66daef15a41a1beeab18d;
static PyCodeObject *codeobj_d86fea7e05e6af08a38c638f3da87187;
static PyCodeObject *codeobj_189529616cb7816235d7c219f95ac0c8;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[175]; CHECK_OBJECT(module_filename_obj);
    codeobj_9be747efb5613afa278a2d2804af0555 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[250], mod_consts[250], NULL, NULL, 0, 0, 0);
    codeobj_9c6b3f039720279cbd10e6790b213796 = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_NOFREE, mod_consts[167], mod_consts[167], mod_consts[251], NULL, 0, 0, 0);
    codeobj_509c48a5dd7e8ae86efde17559a1a1cb = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_NOFREE, mod_consts[202], mod_consts[202], mod_consts[251], NULL, 0, 0, 0);
    codeobj_abc368cb95e26026a9c7e5c90a09e4f5 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_NOFREE, mod_consts[166], mod_consts[166], mod_consts[251], NULL, 0, 0, 0);
    codeobj_3f55717a189b2d4b4be2e19a051cf871 = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_NOFREE, mod_consts[194], mod_consts[194], mod_consts[251], NULL, 0, 0, 0);
    codeobj_83516442b0b9da6f64a59b9808af4e96 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_NOFREE, mod_consts[164], mod_consts[164], mod_consts[251], NULL, 0, 0, 0);
    codeobj_ea42b0bce1cfe1f74034d85f692da6df = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[205], mod_consts[205], mod_consts[252], NULL, 3, 0, 0);
    codeobj_43f9ef76438fc9e7b5cf8bd0964f23c5 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[205], mod_consts[205], mod_consts[253], NULL, 4, 0, 0);
    codeobj_3ae45b51f9e0417e4e93200b1bb28177 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[205], mod_consts[205], mod_consts[254], NULL, 16, 0, 0);
    codeobj_3c4261a5500e05fbf359d844628023aa = MAKE_CODE_OBJECT(module_filename_obj, 539, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[123], mod_consts[123], mod_consts[255], NULL, 2, 0, 0);
    codeobj_a42bf82ca1e8999893e392fc27d1c489 = MAKE_CODE_OBJECT(module_filename_obj, 520, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[121], mod_consts[121], mod_consts[256], NULL, 2, 0, 0);
    codeobj_b5ef7a5b9b4173eaafa62eff210f8911 = MAKE_CODE_OBJECT(module_filename_obj, 275, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[257], NULL, 1, 0, 0);
    codeobj_4e471cdce5423b044e17d22aa6f19253 = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[142], mod_consts[142], mod_consts[258], NULL, 1, 0, 0);
    codeobj_967e982aec95da866d6ebdc5cc03366c = MAKE_CODE_OBJECT(module_filename_obj, 268, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[120], mod_consts[120], mod_consts[258], NULL, 1, 0, 0);
    codeobj_437c43e15bb74e8dff9a4c604e1fc629 = MAKE_CODE_OBJECT(module_filename_obj, 464, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[105], mod_consts[105], mod_consts[259], mod_consts[258], 0, 0, 0);
    codeobj_700f7769b9a1c7d6241046b90321435d = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[260], NULL, 1, 0, 0);
    codeobj_6719565829611bf5a8f77e9adb98d80c = MAKE_CODE_OBJECT(module_filename_obj, 511, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[110], mod_consts[110], mod_consts[261], NULL, 4, 0, 0);
    codeobj_1eb2e9ed5ab94e3703d25d9a8ccd57f8 = MAKE_CODE_OBJECT(module_filename_obj, 476, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[108], mod_consts[108], mod_consts[262], mod_consts[263], 2, 0, 0);
    codeobj_be3f88d95058b42dd650792776dce75b = MAKE_CODE_OBJECT(module_filename_obj, 431, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[35], mod_consts[35], mod_consts[264], mod_consts[265], 0, 0, 0);
    codeobj_62ed899e2fe9ea365c01767e338bdb48 = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[35], mod_consts[266], NULL, 4, 0, 0);
    codeobj_4ed4126212593d3e1233a724cff84dff = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[35], mod_consts[267], NULL, 4, 0, 0);
    codeobj_a23d127510cc4ec050a6deef1f2420d7 = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[35], mod_consts[267], NULL, 4, 0, 0);
    codeobj_f4f28be5f85c8b9b78f1426b1a21f4e0 = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[268], NULL, 3, 0, 0);
    codeobj_a360cc892a6d090a2510f1fd785ab1bc = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[269], NULL, 3, 0, 0);
    codeobj_fa8303a977b67aee2ea2eae5f24dc26c = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[243], mod_consts[243], mod_consts[270], NULL, 18, 0, 0);
    codeobj_cf3d581b40b10fe781197fbcb2c647cf = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[271], NULL, 3, 0, 0);
    codeobj_1479327d288e0bb69a5b8454e1e55803 = MAKE_CODE_OBJECT(module_filename_obj, 235, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[64], mod_consts[272], NULL, 3, 0, 0);
    codeobj_df92b2a73edc1f742db9d50821d69e8d = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[198], mod_consts[198], mod_consts[273], NULL, 1, 0, 0);
    codeobj_4d203cbd2433bec927efc31bfcf9fb93 = MAKE_CODE_OBJECT(module_filename_obj, 399, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[102], mod_consts[102], mod_consts[274], mod_consts[275], 1, 0, 0);
    codeobj_8901c8324cb66daef15a41a1beeab18d = MAKE_CODE_OBJECT(module_filename_obj, 370, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[96], mod_consts[96], mod_consts[276], mod_consts[258], 1, 0, 0);
    codeobj_d86fea7e05e6af08a38c638f3da87187 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[277], NULL, 3, 0, 0);
    codeobj_189529616cb7816235d7c219f95ac0c8 = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[36], mod_consts[36], mod_consts[277], NULL, 3, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__15_complex_call_helper_pos_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__10_timeout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__11_reconnect(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__12___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__13_send(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__14_close(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__15__start_ping_thread(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__16__stop_ping_thread(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__17__send_ping(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__18_run_forever(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__18_run_forever$$$function__1_teardown(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__18_run_forever$$$function__2_setSock(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__18_run_forever$$$function__3_read(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__18_run_forever$$$function__4_check(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__18_run_forever$$$function__5_handleDisconnect(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__19_create_dispatcher(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__1_setReconnect(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__20__get_close_args(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__21__callback(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__2___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__3_timeout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__4_reconnect(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__5_read(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__6_read(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__7_select(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__8___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_websocket$_app$$$function__9_read(PyObject *annotations);


// The module function definitions.
static PyObject *impl_websocket$_app$$$function__1_setReconnect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_reconnectInterval = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_reconnectInterval);
        tmp_assign_source_1 = par_reconnectInterval;
        UPDATE_STRING_DICT0(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_reconnectInterval);
    Py_DECREF(par_reconnectInterval);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_app$$$function__2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_app = python_pars[1];
    PyObject *par_ping_timeout = python_pars[2];
    struct Nuitka_FrameObject *frame_ea42b0bce1cfe1f74034d85f692da6df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ea42b0bce1cfe1f74034d85f692da6df = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ea42b0bce1cfe1f74034d85f692da6df)) {
        Py_XDECREF(cache_frame_ea42b0bce1cfe1f74034d85f692da6df);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ea42b0bce1cfe1f74034d85f692da6df == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ea42b0bce1cfe1f74034d85f692da6df = MAKE_FUNCTION_FRAME(codeobj_ea42b0bce1cfe1f74034d85f692da6df, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ea42b0bce1cfe1f74034d85f692da6df->m_type_description == NULL);
    frame_ea42b0bce1cfe1f74034d85f692da6df = cache_frame_ea42b0bce1cfe1f74034d85f692da6df;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ea42b0bce1cfe1f74034d85f692da6df);
    assert(Py_REFCNT(frame_ea42b0bce1cfe1f74034d85f692da6df) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_app);
        tmp_assattr_value_1 = par_app;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_ping_timeout);
        tmp_assattr_value_2 = par_ping_timeout;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ea42b0bce1cfe1f74034d85f692da6df, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ea42b0bce1cfe1f74034d85f692da6df->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ea42b0bce1cfe1f74034d85f692da6df, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ea42b0bce1cfe1f74034d85f692da6df,
        type_description_1,
        par_self,
        par_app,
        par_ping_timeout
    );


    // Release cached frame if used for exception.
    if (frame_ea42b0bce1cfe1f74034d85f692da6df == cache_frame_ea42b0bce1cfe1f74034d85f692da6df) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ea42b0bce1cfe1f74034d85f692da6df);
        cache_frame_ea42b0bce1cfe1f74034d85f692da6df = NULL;
    }

    assertFrameObject(frame_ea42b0bce1cfe1f74034d85f692da6df);

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
    CHECK_OBJECT(par_app);
    Py_DECREF(par_app);
    CHECK_OBJECT(par_ping_timeout);
    Py_DECREF(par_ping_timeout);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_app);
    Py_DECREF(par_app);
    CHECK_OBJECT(par_ping_timeout);
    Py_DECREF(par_ping_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_app$$$function__3_timeout(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_seconds = python_pars[1];
    PyObject *par_callback = python_pars[2];
    struct Nuitka_FrameObject *frame_d86fea7e05e6af08a38c638f3da87187;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d86fea7e05e6af08a38c638f3da87187 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d86fea7e05e6af08a38c638f3da87187)) {
        Py_XDECREF(cache_frame_d86fea7e05e6af08a38c638f3da87187);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d86fea7e05e6af08a38c638f3da87187 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d86fea7e05e6af08a38c638f3da87187 = MAKE_FUNCTION_FRAME(codeobj_d86fea7e05e6af08a38c638f3da87187, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d86fea7e05e6af08a38c638f3da87187->m_type_description == NULL);
    frame_d86fea7e05e6af08a38c638f3da87187 = cache_frame_d86fea7e05e6af08a38c638f3da87187;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d86fea7e05e6af08a38c638f3da87187);
    assert(Py_REFCNT(frame_d86fea7e05e6af08a38c638f3da87187) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_seconds);
        tmp_args_element_value_1 = par_seconds;
        frame_d86fea7e05e6af08a38c638f3da87187->m_frame.f_lineno = 55;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[4], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_callback);
        tmp_called_value_1 = par_callback;
        frame_d86fea7e05e6af08a38c638f3da87187->m_frame.f_lineno = 56;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d86fea7e05e6af08a38c638f3da87187, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d86fea7e05e6af08a38c638f3da87187->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d86fea7e05e6af08a38c638f3da87187, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d86fea7e05e6af08a38c638f3da87187,
        type_description_1,
        par_self,
        par_seconds,
        par_callback
    );


    // Release cached frame if used for exception.
    if (frame_d86fea7e05e6af08a38c638f3da87187 == cache_frame_d86fea7e05e6af08a38c638f3da87187) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d86fea7e05e6af08a38c638f3da87187);
        cache_frame_d86fea7e05e6af08a38c638f3da87187 = NULL;
    }

    assertFrameObject(frame_d86fea7e05e6af08a38c638f3da87187);

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
    CHECK_OBJECT(par_seconds);
    Py_DECREF(par_seconds);
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_seconds);
    Py_DECREF(par_seconds);
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_app$$$function__4_reconnect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_seconds = python_pars[1];
    PyObject *par_reconnector = python_pars[2];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_a360cc892a6d090a2510f1fd785ab1bc;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_a360cc892a6d090a2510f1fd785ab1bc = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a360cc892a6d090a2510f1fd785ab1bc)) {
        Py_XDECREF(cache_frame_a360cc892a6d090a2510f1fd785ab1bc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a360cc892a6d090a2510f1fd785ab1bc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a360cc892a6d090a2510f1fd785ab1bc = MAKE_FUNCTION_FRAME(codeobj_a360cc892a6d090a2510f1fd785ab1bc, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a360cc892a6d090a2510f1fd785ab1bc->m_type_description == NULL);
    frame_a360cc892a6d090a2510f1fd785ab1bc = cache_frame_a360cc892a6d090a2510f1fd785ab1bc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a360cc892a6d090a2510f1fd785ab1bc);
    assert(Py_REFCNT(frame_a360cc892a6d090a2510f1fd785ab1bc) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[7];
        CHECK_OBJECT(par_seconds);
        tmp_kw_call_dict_value_0_1 = par_seconds;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 61;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 61;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
        frame_a360cc892a6d090a2510f1fd785ab1bc->m_frame.f_lineno = 61;
        tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[10]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 61;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
        frame_a360cc892a6d090a2510f1fd785ab1bc->m_frame.f_lineno = 61;
        tmp_kw_call_dict_value_1_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 61;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
        frame_a360cc892a6d090a2510f1fd785ab1bc->m_frame.f_lineno = 60;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 60;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
        frame_a360cc892a6d090a2510f1fd785ab1bc->m_frame.f_lineno = 60;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_seconds);
        tmp_args_element_value_3 = par_seconds;
        frame_a360cc892a6d090a2510f1fd785ab1bc->m_frame.f_lineno = 62;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[4], tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_reconnector);
        tmp_called_value_3 = par_reconnector;
        frame_a360cc892a6d090a2510f1fd785ab1bc->m_frame.f_lineno = 63;
        tmp_call_result_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[12], 0), mod_consts[13]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_3);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_a360cc892a6d090a2510f1fd785ab1bc, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_a360cc892a6d090a2510f1fd785ab1bc, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_e = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[6]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[15];
        CHECK_OBJECT(var_e);
        tmp_kw_call_dict_value_0_2 = var_e;
        frame_a360cc892a6d090a2510f1fd785ab1bc->m_frame.f_lineno = 65;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[16]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 65;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        frame_a360cc892a6d090a2510f1fd785ab1bc->m_frame.f_lineno = 65;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_4);
    }
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 59;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a360cc892a6d090a2510f1fd785ab1bc->m_frame) frame_a360cc892a6d090a2510f1fd785ab1bc->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_2;
    branch_end_1:;
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

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a360cc892a6d090a2510f1fd785ab1bc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a360cc892a6d090a2510f1fd785ab1bc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a360cc892a6d090a2510f1fd785ab1bc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a360cc892a6d090a2510f1fd785ab1bc,
        type_description_1,
        par_self,
        par_seconds,
        par_reconnector,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_a360cc892a6d090a2510f1fd785ab1bc == cache_frame_a360cc892a6d090a2510f1fd785ab1bc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a360cc892a6d090a2510f1fd785ab1bc);
        cache_frame_a360cc892a6d090a2510f1fd785ab1bc = NULL;
    }

    assertFrameObject(frame_a360cc892a6d090a2510f1fd785ab1bc);

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
    CHECK_OBJECT(par_seconds);
    Py_DECREF(par_seconds);
    CHECK_OBJECT(par_reconnector);
    Py_DECREF(par_reconnector);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_seconds);
    Py_DECREF(par_seconds);
    CHECK_OBJECT(par_reconnector);
    Py_DECREF(par_reconnector);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_app$$$function__5_read(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sock = python_pars[1];
    PyObject *par_read_callback = python_pars[2];
    PyObject *par_check_callback = python_pars[3];
    PyObject *var_sel = NULL;
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_4ed4126212593d3e1233a724cff84dff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_4ed4126212593d3e1233a724cff84dff = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4ed4126212593d3e1233a724cff84dff)) {
        Py_XDECREF(cache_frame_4ed4126212593d3e1233a724cff84dff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4ed4126212593d3e1233a724cff84dff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4ed4126212593d3e1233a724cff84dff = MAKE_FUNCTION_FRAME(codeobj_4ed4126212593d3e1233a724cff84dff, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4ed4126212593d3e1233a724cff84dff->m_type_description == NULL);
    frame_4ed4126212593d3e1233a724cff84dff = cache_frame_4ed4126212593d3e1233a724cff84dff;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4ed4126212593d3e1233a724cff84dff);
    assert(Py_REFCNT(frame_4ed4126212593d3e1233a724cff84dff) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_4ed4126212593d3e1233a724cff84dff->m_frame.f_lineno = 73;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[18]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sel == NULL);
        var_sel = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_sel);
        tmp_expression_value_1 = var_sel;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[1]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 74;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[20]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 74;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 74;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 74;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[21]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 74;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_4ed4126212593d3e1233a724cff84dff->m_frame.f_lineno = 74;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[1]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[23]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
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
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_9;
        if (var_sel == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 77;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = var_sel;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[25]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 77;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_9 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[2]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 77;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_4ed4126212593d3e1233a724cff84dff->m_frame.f_lineno = 77;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_r);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_r);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_3;
        if (par_read_callback == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 79;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_value_3 = par_read_callback;
        frame_4ed4126212593d3e1233a724cff84dff->m_frame.f_lineno = 79;
        tmp_operand_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_end_1;
    branch_no_3:;
    branch_no_2:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        if (par_check_callback == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 81;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_value_4 = par_check_callback;
        frame_4ed4126212593d3e1233a724cff84dff->m_frame.f_lineno = 81;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 76;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_4ed4126212593d3e1233a724cff84dff, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_4ed4126212593d3e1233a724cff84dff, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        if (var_sel == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_2 = var_sel;
        frame_4ed4126212593d3e1233a724cff84dff->m_frame.f_lineno = 83;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[28]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 75;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4ed4126212593d3e1233a724cff84dff->m_frame) frame_4ed4126212593d3e1233a724cff84dff->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_3;
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        if (var_sel == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 83;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_sel;
        frame_4ed4126212593d3e1233a724cff84dff->m_frame.f_lineno = 83;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[28]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4ed4126212593d3e1233a724cff84dff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ed4126212593d3e1233a724cff84dff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ed4126212593d3e1233a724cff84dff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4ed4126212593d3e1233a724cff84dff,
        type_description_1,
        par_self,
        par_sock,
        par_read_callback,
        par_check_callback,
        var_sel,
        var_r
    );


    // Release cached frame if used for exception.
    if (frame_4ed4126212593d3e1233a724cff84dff == cache_frame_4ed4126212593d3e1233a724cff84dff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4ed4126212593d3e1233a724cff84dff);
        cache_frame_4ed4126212593d3e1233a724cff84dff = NULL;
    }

    assertFrameObject(frame_4ed4126212593d3e1233a724cff84dff);

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
    Py_XDECREF(var_sel);
    var_sel = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
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

    Py_XDECREF(var_sel);
    var_sel = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
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
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_read_callback);
    Py_DECREF(par_read_callback);
    CHECK_OBJECT(par_check_callback);
    Py_DECREF(par_check_callback);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_read_callback);
    Py_DECREF(par_read_callback);
    CHECK_OBJECT(par_check_callback);
    Py_DECREF(par_check_callback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_app$$$function__6_read(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sock = python_pars[1];
    PyObject *par_read_callback = python_pars[2];
    PyObject *par_check_callback = python_pars[3];
    PyObject *var_sel = NULL;
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_a23d127510cc4ec050a6deef1f2420d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_a23d127510cc4ec050a6deef1f2420d7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a23d127510cc4ec050a6deef1f2420d7)) {
        Py_XDECREF(cache_frame_a23d127510cc4ec050a6deef1f2420d7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a23d127510cc4ec050a6deef1f2420d7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a23d127510cc4ec050a6deef1f2420d7 = MAKE_FUNCTION_FRAME(codeobj_a23d127510cc4ec050a6deef1f2420d7, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a23d127510cc4ec050a6deef1f2420d7->m_type_description == NULL);
    frame_a23d127510cc4ec050a6deef1f2420d7 = cache_frame_a23d127510cc4ec050a6deef1f2420d7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a23d127510cc4ec050a6deef1f2420d7);
    assert(Py_REFCNT(frame_a23d127510cc4ec050a6deef1f2420d7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_sock;
            assert(old != NULL);
            par_sock = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_a23d127510cc4ec050a6deef1f2420d7->m_frame.f_lineno = 92;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[18]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sel == NULL);
        var_sel = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_sel);
        tmp_expression_value_4 = var_sel;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_sock);
        tmp_args_element_value_1 = par_sock;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[21]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_a23d127510cc4ec050a6deef1f2420d7->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[1]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[23]);
        Py_DECREF(tmp_expression_value_6);
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
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[25]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        if (par_sock == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[20]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = par_sock;
        if (var_sel == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_4 = var_sel;
        frame_a23d127510cc4ec050a6deef1f2420d7->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_r;
            var_r = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_r);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_r);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_3;
        if (par_read_callback == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 98;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_value_3 = par_read_callback;
        frame_a23d127510cc4ec050a6deef1f2420d7->m_frame.f_lineno = 98;
        tmp_operand_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    goto loop_end_1;
    branch_no_3:;
    branch_no_2:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        if (par_check_callback == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 100;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_called_value_4 = par_check_callback;
        frame_a23d127510cc4ec050a6deef1f2420d7->m_frame.f_lineno = 100;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 95;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_a23d127510cc4ec050a6deef1f2420d7, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_a23d127510cc4ec050a6deef1f2420d7, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        if (var_sel == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }

        tmp_called_instance_2 = var_sel;
        frame_a23d127510cc4ec050a6deef1f2420d7->m_frame.f_lineno = 102;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[28]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 94;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a23d127510cc4ec050a6deef1f2420d7->m_frame) frame_a23d127510cc4ec050a6deef1f2420d7->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_3;
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        if (var_sel == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_sel;
        frame_a23d127510cc4ec050a6deef1f2420d7->m_frame.f_lineno = 102;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[28]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a23d127510cc4ec050a6deef1f2420d7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a23d127510cc4ec050a6deef1f2420d7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a23d127510cc4ec050a6deef1f2420d7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a23d127510cc4ec050a6deef1f2420d7,
        type_description_1,
        par_self,
        par_sock,
        par_read_callback,
        par_check_callback,
        var_sel,
        var_r
    );


    // Release cached frame if used for exception.
    if (frame_a23d127510cc4ec050a6deef1f2420d7 == cache_frame_a23d127510cc4ec050a6deef1f2420d7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a23d127510cc4ec050a6deef1f2420d7);
        cache_frame_a23d127510cc4ec050a6deef1f2420d7 = NULL;
    }

    assertFrameObject(frame_a23d127510cc4ec050a6deef1f2420d7);

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
    Py_XDECREF(par_sock);
    par_sock = NULL;
    Py_XDECREF(var_sel);
    var_sel = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
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

    Py_XDECREF(par_sock);
    par_sock = NULL;
    Py_XDECREF(var_sel);
    var_sel = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
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
    CHECK_OBJECT(par_read_callback);
    Py_DECREF(par_read_callback);
    CHECK_OBJECT(par_check_callback);
    Py_DECREF(par_check_callback);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_read_callback);
    Py_DECREF(par_read_callback);
    CHECK_OBJECT(par_check_callback);
    Py_DECREF(par_check_callback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_app$$$function__7_select(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sock = python_pars[1];
    PyObject *par_sel = python_pars[2];
    PyObject *var_r = NULL;
    struct Nuitka_FrameObject *frame_cf3d581b40b10fe781197fbcb2c647cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cf3d581b40b10fe781197fbcb2c647cf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cf3d581b40b10fe781197fbcb2c647cf)) {
        Py_XDECREF(cache_frame_cf3d581b40b10fe781197fbcb2c647cf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf3d581b40b10fe781197fbcb2c647cf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf3d581b40b10fe781197fbcb2c647cf = MAKE_FUNCTION_FRAME(codeobj_cf3d581b40b10fe781197fbcb2c647cf, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cf3d581b40b10fe781197fbcb2c647cf->m_type_description == NULL);
    frame_cf3d581b40b10fe781197fbcb2c647cf = cache_frame_cf3d581b40b10fe781197fbcb2c647cf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cf3d581b40b10fe781197fbcb2c647cf);
    assert(Py_REFCNT(frame_cf3d581b40b10fe781197fbcb2c647cf) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_sock;
            assert(old != NULL);
            par_sock = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_sock);
        tmp_called_instance_1 = par_sock;
        frame_cf3d581b40b10fe781197fbcb2c647cf->m_frame.f_lineno = 106;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[29]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 106;
            type_description_1 = "oooo";
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
    {
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(par_sock);
        tmp_list_element_1 = par_sock;
        tmp_return_value = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_return_value, 0, tmp_list_element_1);
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_sel);
        tmp_expression_value_4 = par_sel;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[2]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_cf3d581b40b10fe781197fbcb2c647cf->m_frame.f_lineno = 109;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_r == NULL);
        var_r = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_r);
        tmp_args_element_value_2 = var_r;
        frame_cf3d581b40b10fe781197fbcb2c647cf->m_frame.f_lineno = 111;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[30];
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooo";
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
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_r);
        tmp_expression_value_7 = var_r;
        tmp_subscript_value_1 = mod_consts[30];
        tmp_expression_value_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_1, 0);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[30];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cf3d581b40b10fe781197fbcb2c647cf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf3d581b40b10fe781197fbcb2c647cf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf3d581b40b10fe781197fbcb2c647cf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf3d581b40b10fe781197fbcb2c647cf,
        type_description_1,
        par_self,
        par_sock,
        par_sel,
        var_r
    );


    // Release cached frame if used for exception.
    if (frame_cf3d581b40b10fe781197fbcb2c647cf == cache_frame_cf3d581b40b10fe781197fbcb2c647cf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cf3d581b40b10fe781197fbcb2c647cf);
        cache_frame_cf3d581b40b10fe781197fbcb2c647cf = NULL;
    }

    assertFrameObject(frame_cf3d581b40b10fe781197fbcb2c647cf);

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
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    par_sock = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
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

    Py_XDECREF(par_sock);
    par_sock = NULL;
    Py_XDECREF(var_r);
    var_r = NULL;
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
    CHECK_OBJECT(par_sel);
    Py_DECREF(par_sel);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sel);
    Py_DECREF(par_sel);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_app$$$function__8___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_app = python_pars[1];
    PyObject *par_ping_timeout = python_pars[2];
    PyObject *par_dispatcher = python_pars[3];
    struct Nuitka_FrameObject *frame_43f9ef76438fc9e7b5cf8bd0964f23c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_43f9ef76438fc9e7b5cf8bd0964f23c5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_43f9ef76438fc9e7b5cf8bd0964f23c5)) {
        Py_XDECREF(cache_frame_43f9ef76438fc9e7b5cf8bd0964f23c5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_43f9ef76438fc9e7b5cf8bd0964f23c5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_43f9ef76438fc9e7b5cf8bd0964f23c5 = MAKE_FUNCTION_FRAME(codeobj_43f9ef76438fc9e7b5cf8bd0964f23c5, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_43f9ef76438fc9e7b5cf8bd0964f23c5->m_type_description == NULL);
    frame_43f9ef76438fc9e7b5cf8bd0964f23c5 = cache_frame_43f9ef76438fc9e7b5cf8bd0964f23c5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_43f9ef76438fc9e7b5cf8bd0964f23c5);
    assert(Py_REFCNT(frame_43f9ef76438fc9e7b5cf8bd0964f23c5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_app);
        tmp_assattr_value_1 = par_app;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_ping_timeout);
        tmp_assattr_value_2 = par_ping_timeout;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_dispatcher);
        tmp_assattr_value_3 = par_dispatcher;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[31], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_dispatcher);
        tmp_expression_value_1 = par_dispatcher;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[32]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[33];
        CHECK_OBJECT(par_dispatcher);
        tmp_expression_value_2 = par_dispatcher;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[34]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 123;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_43f9ef76438fc9e7b5cf8bd0964f23c5->m_frame.f_lineno = 123;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
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
        exception_tb = MAKE_TRACEBACK(frame_43f9ef76438fc9e7b5cf8bd0964f23c5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_43f9ef76438fc9e7b5cf8bd0964f23c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_43f9ef76438fc9e7b5cf8bd0964f23c5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_43f9ef76438fc9e7b5cf8bd0964f23c5,
        type_description_1,
        par_self,
        par_app,
        par_ping_timeout,
        par_dispatcher
    );


    // Release cached frame if used for exception.
    if (frame_43f9ef76438fc9e7b5cf8bd0964f23c5 == cache_frame_43f9ef76438fc9e7b5cf8bd0964f23c5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_43f9ef76438fc9e7b5cf8bd0964f23c5);
        cache_frame_43f9ef76438fc9e7b5cf8bd0964f23c5 = NULL;
    }

    assertFrameObject(frame_43f9ef76438fc9e7b5cf8bd0964f23c5);

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
    CHECK_OBJECT(par_app);
    Py_DECREF(par_app);
    CHECK_OBJECT(par_ping_timeout);
    Py_DECREF(par_ping_timeout);
    CHECK_OBJECT(par_dispatcher);
    Py_DECREF(par_dispatcher);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_app);
    Py_DECREF(par_app);
    CHECK_OBJECT(par_ping_timeout);
    Py_DECREF(par_ping_timeout);
    CHECK_OBJECT(par_dispatcher);
    Py_DECREF(par_dispatcher);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_app$$$function__9_read(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sock = python_pars[1];
    PyObject *par_read_callback = python_pars[2];
    PyObject *par_check_callback = python_pars[3];
    struct Nuitka_FrameObject *frame_62ed899e2fe9ea365c01767e338bdb48;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_62ed899e2fe9ea365c01767e338bdb48 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_62ed899e2fe9ea365c01767e338bdb48)) {
        Py_XDECREF(cache_frame_62ed899e2fe9ea365c01767e338bdb48);

#if _DEBUG_REFCOUNTS
        if (cache_frame_62ed899e2fe9ea365c01767e338bdb48 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_62ed899e2fe9ea365c01767e338bdb48 = MAKE_FUNCTION_FRAME(codeobj_62ed899e2fe9ea365c01767e338bdb48, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_62ed899e2fe9ea365c01767e338bdb48->m_type_description == NULL);
    frame_62ed899e2fe9ea365c01767e338bdb48 = cache_frame_62ed899e2fe9ea365c01767e338bdb48;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_62ed899e2fe9ea365c01767e338bdb48);
    assert(Py_REFCNT(frame_62ed899e2fe9ea365c01767e338bdb48) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_sock);
        tmp_args_element_value_1 = par_sock;
        CHECK_OBJECT(par_read_callback);
        tmp_args_element_value_2 = par_read_callback;
        frame_62ed899e2fe9ea365c01767e338bdb48->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[35],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 127;
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
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[36]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[2]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 127;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_check_callback);
        tmp_args_element_value_4 = par_check_callback;
        frame_62ed899e2fe9ea365c01767e338bdb48->m_frame.f_lineno = 127;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_62ed899e2fe9ea365c01767e338bdb48, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_62ed899e2fe9ea365c01767e338bdb48->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_62ed899e2fe9ea365c01767e338bdb48, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_62ed899e2fe9ea365c01767e338bdb48,
        type_description_1,
        par_self,
        par_sock,
        par_read_callback,
        par_check_callback
    );


    // Release cached frame if used for exception.
    if (frame_62ed899e2fe9ea365c01767e338bdb48 == cache_frame_62ed899e2fe9ea365c01767e338bdb48) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_62ed899e2fe9ea365c01767e338bdb48);
        cache_frame_62ed899e2fe9ea365c01767e338bdb48 = NULL;
    }

    assertFrameObject(frame_62ed899e2fe9ea365c01767e338bdb48);

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
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_read_callback);
    Py_DECREF(par_read_callback);
    CHECK_OBJECT(par_check_callback);
    Py_DECREF(par_check_callback);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sock);
    Py_DECREF(par_sock);
    CHECK_OBJECT(par_read_callback);
    Py_DECREF(par_read_callback);
    CHECK_OBJECT(par_check_callback);
    Py_DECREF(par_check_callback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_app$$$function__10_timeout(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_seconds = python_pars[1];
    PyObject *par_callback = python_pars[2];
    struct Nuitka_FrameObject *frame_189529616cb7816235d7c219f95ac0c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_189529616cb7816235d7c219f95ac0c8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_189529616cb7816235d7c219f95ac0c8)) {
        Py_XDECREF(cache_frame_189529616cb7816235d7c219f95ac0c8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_189529616cb7816235d7c219f95ac0c8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_189529616cb7816235d7c219f95ac0c8 = MAKE_FUNCTION_FRAME(codeobj_189529616cb7816235d7c219f95ac0c8, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_189529616cb7816235d7c219f95ac0c8->m_type_description == NULL);
    frame_189529616cb7816235d7c219f95ac0c8 = cache_frame_189529616cb7816235d7c219f95ac0c8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_189529616cb7816235d7c219f95ac0c8);
    assert(Py_REFCNT(frame_189529616cb7816235d7c219f95ac0c8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[31]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_seconds);
        tmp_args_element_value_1 = par_seconds;
        CHECK_OBJECT(par_callback);
        tmp_args_element_value_2 = par_callback;
        frame_189529616cb7816235d7c219f95ac0c8->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[36],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
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
        exception_tb = MAKE_TRACEBACK(frame_189529616cb7816235d7c219f95ac0c8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_189529616cb7816235d7c219f95ac0c8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_189529616cb7816235d7c219f95ac0c8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_189529616cb7816235d7c219f95ac0c8,
        type_description_1,
        par_self,
        par_seconds,
        par_callback
    );


    // Release cached frame if used for exception.
    if (frame_189529616cb7816235d7c219f95ac0c8 == cache_frame_189529616cb7816235d7c219f95ac0c8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_189529616cb7816235d7c219f95ac0c8);
        cache_frame_189529616cb7816235d7c219f95ac0c8 = NULL;
    }

    assertFrameObject(frame_189529616cb7816235d7c219f95ac0c8);

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
    CHECK_OBJECT(par_seconds);
    Py_DECREF(par_seconds);
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_seconds);
    Py_DECREF(par_seconds);
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_app$$$function__11_reconnect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_seconds = python_pars[1];
    PyObject *par_reconnector = python_pars[2];
    struct Nuitka_FrameObject *frame_f4f28be5f85c8b9b78f1426b1a21f4e0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f4f28be5f85c8b9b78f1426b1a21f4e0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f4f28be5f85c8b9b78f1426b1a21f4e0)) {
        Py_XDECREF(cache_frame_f4f28be5f85c8b9b78f1426b1a21f4e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f4f28be5f85c8b9b78f1426b1a21f4e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f4f28be5f85c8b9b78f1426b1a21f4e0 = MAKE_FUNCTION_FRAME(codeobj_f4f28be5f85c8b9b78f1426b1a21f4e0, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f4f28be5f85c8b9b78f1426b1a21f4e0->m_type_description == NULL);
    frame_f4f28be5f85c8b9b78f1426b1a21f4e0 = cache_frame_f4f28be5f85c8b9b78f1426b1a21f4e0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f4f28be5f85c8b9b78f1426b1a21f4e0);
    assert(Py_REFCNT(frame_f4f28be5f85c8b9b78f1426b1a21f4e0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_seconds);
        tmp_args_element_value_1 = par_seconds;
        CHECK_OBJECT(par_reconnector);
        tmp_args_element_value_2 = par_reconnector;
        frame_f4f28be5f85c8b9b78f1426b1a21f4e0->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[36],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
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
        exception_tb = MAKE_TRACEBACK(frame_f4f28be5f85c8b9b78f1426b1a21f4e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f4f28be5f85c8b9b78f1426b1a21f4e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f4f28be5f85c8b9b78f1426b1a21f4e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f4f28be5f85c8b9b78f1426b1a21f4e0,
        type_description_1,
        par_self,
        par_seconds,
        par_reconnector
    );


    // Release cached frame if used for exception.
    if (frame_f4f28be5f85c8b9b78f1426b1a21f4e0 == cache_frame_f4f28be5f85c8b9b78f1426b1a21f4e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f4f28be5f85c8b9b78f1426b1a21f4e0);
        cache_frame_f4f28be5f85c8b9b78f1426b1a21f4e0 = NULL;
    }

    assertFrameObject(frame_f4f28be5f85c8b9b78f1426b1a21f4e0);

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
    CHECK_OBJECT(par_seconds);
    Py_DECREF(par_seconds);
    CHECK_OBJECT(par_reconnector);
    Py_DECREF(par_reconnector);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_seconds);
    Py_DECREF(par_seconds);
    CHECK_OBJECT(par_reconnector);
    Py_DECREF(par_reconnector);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_app$$$function__12___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_url = python_pars[1];
    PyObject *par_header = python_pars[2];
    PyObject *par_on_open = python_pars[3];
    PyObject *par_on_message = python_pars[4];
    PyObject *par_on_error = python_pars[5];
    PyObject *par_on_close = python_pars[6];
    PyObject *par_on_ping = python_pars[7];
    PyObject *par_on_pong = python_pars[8];
    PyObject *par_on_cont_message = python_pars[9];
    PyObject *par_keep_running = python_pars[10];
    PyObject *par_get_mask_key = python_pars[11];
    PyObject *par_cookie = python_pars[12];
    PyObject *par_subprotocols = python_pars[13];
    PyObject *par_on_data = python_pars[14];
    PyObject *par_socket = python_pars[15];
    struct Nuitka_FrameObject *frame_3ae45b51f9e0417e4e93200b1bb28177;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3ae45b51f9e0417e4e93200b1bb28177 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3ae45b51f9e0417e4e93200b1bb28177)) {
        Py_XDECREF(cache_frame_3ae45b51f9e0417e4e93200b1bb28177);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3ae45b51f9e0417e4e93200b1bb28177 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3ae45b51f9e0417e4e93200b1bb28177 = MAKE_FUNCTION_FRAME(codeobj_3ae45b51f9e0417e4e93200b1bb28177, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3ae45b51f9e0417e4e93200b1bb28177->m_type_description == NULL);
    frame_3ae45b51f9e0417e4e93200b1bb28177 = cache_frame_3ae45b51f9e0417e4e93200b1bb28177;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3ae45b51f9e0417e4e93200b1bb28177);
    assert(Py_REFCNT(frame_3ae45b51f9e0417e4e93200b1bb28177) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_url);
        tmp_assattr_value_1 = par_url;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[37], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_header);
        tmp_cmp_expr_left_1 = par_header;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_header);
        tmp_assattr_value_2 = par_header;
        Py_INCREF(tmp_assattr_value_2);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assattr_value_2 = MAKE_LIST_EMPTY(0);
        condexpr_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[38], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_cookie);
        tmp_assattr_value_3 = par_cookie;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[39], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_on_open);
        tmp_assattr_value_4 = par_on_open;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[40], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_on_message);
        tmp_assattr_value_5 = par_on_message;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[41], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_on_data);
        tmp_assattr_value_6 = par_on_data;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[42], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(par_on_error);
        tmp_assattr_value_7 = par_on_error;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[43], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(par_on_close);
        tmp_assattr_value_8 = par_on_close;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[44], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(par_on_ping);
        tmp_assattr_value_9 = par_on_ping;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[45], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        CHECK_OBJECT(par_on_pong);
        tmp_assattr_value_10 = par_on_pong;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[46], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        CHECK_OBJECT(par_on_cont_message);
        tmp_assattr_value_11 = par_on_cont_message;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[47], tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        tmp_assattr_value_12 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[23], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(par_get_mask_key);
        tmp_assattr_value_13 = par_get_mask_key;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[48], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        tmp_assattr_value_14 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[20], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        tmp_assattr_value_15 = mod_consts[30];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[49], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        tmp_assattr_value_16 = mod_consts[30];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[50], tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        tmp_assattr_value_17 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[51], tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        tmp_assattr_value_18 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_18 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[52], tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_assattr_target_19;
        tmp_assattr_value_19 = mod_consts[30];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_19 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[53], tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_assattr_target_20;
        tmp_assattr_value_20 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_20 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_20, mod_consts[2], tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_assattr_target_21;
        tmp_assattr_value_21 = mod_consts[54];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_21 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_21, mod_consts[55], tmp_assattr_value_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_assattr_target_22;
        CHECK_OBJECT(par_subprotocols);
        tmp_assattr_value_22 = par_subprotocols;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_22 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_22, mod_consts[56], tmp_assattr_value_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_assattr_target_23;
        CHECK_OBJECT(par_socket);
        tmp_assattr_value_23 = par_socket;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_23 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_23, mod_consts[57], tmp_assattr_value_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_assattr_target_24;
        tmp_assattr_value_24 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_24 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_24, mod_consts[58], tmp_assattr_value_24);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_assattr_target_25;
        tmp_assattr_value_25 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_25 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_25, mod_consts[59], tmp_assattr_value_25);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_26;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_26;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_3ae45b51f9e0417e4e93200b1bb28177->m_frame.f_lineno = 233;
        tmp_assattr_value_26 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[61]);
        if (tmp_assattr_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_26 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_26, mod_consts[62], tmp_assattr_value_26);
        Py_DECREF(tmp_assattr_value_26);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3ae45b51f9e0417e4e93200b1bb28177, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3ae45b51f9e0417e4e93200b1bb28177->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3ae45b51f9e0417e4e93200b1bb28177, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3ae45b51f9e0417e4e93200b1bb28177,
        type_description_1,
        par_self,
        par_url,
        par_header,
        par_on_open,
        par_on_message,
        par_on_error,
        par_on_close,
        par_on_ping,
        par_on_pong,
        par_on_cont_message,
        par_keep_running,
        par_get_mask_key,
        par_cookie,
        par_subprotocols,
        par_on_data,
        par_socket
    );


    // Release cached frame if used for exception.
    if (frame_3ae45b51f9e0417e4e93200b1bb28177 == cache_frame_3ae45b51f9e0417e4e93200b1bb28177) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3ae45b51f9e0417e4e93200b1bb28177);
        cache_frame_3ae45b51f9e0417e4e93200b1bb28177 = NULL;
    }

    assertFrameObject(frame_3ae45b51f9e0417e4e93200b1bb28177);

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
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_header);
    Py_DECREF(par_header);
    CHECK_OBJECT(par_on_open);
    Py_DECREF(par_on_open);
    CHECK_OBJECT(par_on_message);
    Py_DECREF(par_on_message);
    CHECK_OBJECT(par_on_error);
    Py_DECREF(par_on_error);
    CHECK_OBJECT(par_on_close);
    Py_DECREF(par_on_close);
    CHECK_OBJECT(par_on_ping);
    Py_DECREF(par_on_ping);
    CHECK_OBJECT(par_on_pong);
    Py_DECREF(par_on_pong);
    CHECK_OBJECT(par_on_cont_message);
    Py_DECREF(par_on_cont_message);
    CHECK_OBJECT(par_keep_running);
    Py_DECREF(par_keep_running);
    CHECK_OBJECT(par_get_mask_key);
    Py_DECREF(par_get_mask_key);
    CHECK_OBJECT(par_cookie);
    Py_DECREF(par_cookie);
    CHECK_OBJECT(par_subprotocols);
    Py_DECREF(par_subprotocols);
    CHECK_OBJECT(par_on_data);
    Py_DECREF(par_on_data);
    CHECK_OBJECT(par_socket);
    Py_DECREF(par_socket);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    CHECK_OBJECT(par_header);
    Py_DECREF(par_header);
    CHECK_OBJECT(par_on_open);
    Py_DECREF(par_on_open);
    CHECK_OBJECT(par_on_message);
    Py_DECREF(par_on_message);
    CHECK_OBJECT(par_on_error);
    Py_DECREF(par_on_error);
    CHECK_OBJECT(par_on_close);
    Py_DECREF(par_on_close);
    CHECK_OBJECT(par_on_ping);
    Py_DECREF(par_on_ping);
    CHECK_OBJECT(par_on_pong);
    Py_DECREF(par_on_pong);
    CHECK_OBJECT(par_on_cont_message);
    Py_DECREF(par_on_cont_message);
    CHECK_OBJECT(par_keep_running);
    Py_DECREF(par_keep_running);
    CHECK_OBJECT(par_get_mask_key);
    Py_DECREF(par_get_mask_key);
    CHECK_OBJECT(par_cookie);
    Py_DECREF(par_cookie);
    CHECK_OBJECT(par_subprotocols);
    Py_DECREF(par_subprotocols);
    CHECK_OBJECT(par_on_data);
    Py_DECREF(par_on_data);
    CHECK_OBJECT(par_socket);
    Py_DECREF(par_socket);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_app$$$function__13_send(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *par_opcode = python_pars[2];
    struct Nuitka_FrameObject *frame_1479327d288e0bb69a5b8454e1e55803;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1479327d288e0bb69a5b8454e1e55803 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1479327d288e0bb69a5b8454e1e55803)) {
        Py_XDECREF(cache_frame_1479327d288e0bb69a5b8454e1e55803);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1479327d288e0bb69a5b8454e1e55803 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1479327d288e0bb69a5b8454e1e55803 = MAKE_FUNCTION_FRAME(codeobj_1479327d288e0bb69a5b8454e1e55803, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1479327d288e0bb69a5b8454e1e55803->m_type_description == NULL);
    frame_1479327d288e0bb69a5b8454e1e55803 = cache_frame_1479327d288e0bb69a5b8454e1e55803;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1479327d288e0bb69a5b8454e1e55803);
    assert(Py_REFCNT(frame_1479327d288e0bb69a5b8454e1e55803) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooo";
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
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        CHECK_OBJECT(par_opcode);
        tmp_args_element_value_2 = par_opcode;
        frame_1479327d288e0bb69a5b8454e1e55803->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_cmp_expr_left_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[64],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[30];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooo";
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1479327d288e0bb69a5b8454e1e55803->m_frame.f_lineno = 249;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[66]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 249;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1479327d288e0bb69a5b8454e1e55803, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1479327d288e0bb69a5b8454e1e55803->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1479327d288e0bb69a5b8454e1e55803, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1479327d288e0bb69a5b8454e1e55803,
        type_description_1,
        par_self,
        par_data,
        par_opcode
    );


    // Release cached frame if used for exception.
    if (frame_1479327d288e0bb69a5b8454e1e55803 == cache_frame_1479327d288e0bb69a5b8454e1e55803) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1479327d288e0bb69a5b8454e1e55803);
        cache_frame_1479327d288e0bb69a5b8454e1e55803 = NULL;
    }

    assertFrameObject(frame_1479327d288e0bb69a5b8454e1e55803);

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
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_opcode);
    Py_DECREF(par_opcode);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_opcode);
    Py_DECREF(par_opcode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_app$$$function__14_close(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    struct Nuitka_FrameObject *frame_700f7769b9a1c7d6241046b90321435d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_700f7769b9a1c7d6241046b90321435d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_700f7769b9a1c7d6241046b90321435d)) {
        Py_XDECREF(cache_frame_700f7769b9a1c7d6241046b90321435d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_700f7769b9a1c7d6241046b90321435d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_700f7769b9a1c7d6241046b90321435d = MAKE_FUNCTION_FRAME(codeobj_700f7769b9a1c7d6241046b90321435d, module_websocket$_app, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_700f7769b9a1c7d6241046b90321435d->m_type_description == NULL);
    frame_700f7769b9a1c7d6241046b90321435d = cache_frame_700f7769b9a1c7d6241046b90321435d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_700f7769b9a1c7d6241046b90321435d);
    assert(Py_REFCNT(frame_700f7769b9a1c7d6241046b90321435d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[23], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 257;
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
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[20]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[28]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg2_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_call_result_1 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[20], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_700f7769b9a1c7d6241046b90321435d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_700f7769b9a1c7d6241046b90321435d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_700f7769b9a1c7d6241046b90321435d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_700f7769b9a1c7d6241046b90321435d,
        type_description_1,
        par_self,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_700f7769b9a1c7d6241046b90321435d == cache_frame_700f7769b9a1c7d6241046b90321435d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_700f7769b9a1c7d6241046b90321435d);
        cache_frame_700f7769b9a1c7d6241046b90321435d = NULL;
    }

    assertFrameObject(frame_700f7769b9a1c7d6241046b90321435d);

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


static PyObject *impl_websocket$_app$$$function__15__start_ping_thread(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4e471cdce5423b044e17d22aa6f19253;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4e471cdce5423b044e17d22aa6f19253 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4e471cdce5423b044e17d22aa6f19253)) {
        Py_XDECREF(cache_frame_4e471cdce5423b044e17d22aa6f19253);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4e471cdce5423b044e17d22aa6f19253 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4e471cdce5423b044e17d22aa6f19253 = MAKE_FUNCTION_FRAME(codeobj_4e471cdce5423b044e17d22aa6f19253, module_websocket$_app, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4e471cdce5423b044e17d22aa6f19253->m_type_description == NULL);
    frame_4e471cdce5423b044e17d22aa6f19253 = cache_frame_4e471cdce5423b044e17d22aa6f19253;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4e471cdce5423b044e17d22aa6f19253);
    assert(Py_REFCNT(frame_4e471cdce5423b044e17d22aa6f19253) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[30];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[49], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[30];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[50], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4e471cdce5423b044e17d22aa6f19253->m_frame.f_lineno = 263;
        tmp_assattr_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[69]);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[52], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_4;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[70]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[71]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 264;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4e471cdce5423b044e17d22aa6f19253->m_frame.f_lineno = 264;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assattr_value_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[72]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[51], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_value_3;
        tmp_assattr_value_5 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[51]);
        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[73], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[51]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4e471cdce5423b044e17d22aa6f19253->m_frame.f_lineno = 266;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[74]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
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
        exception_tb = MAKE_TRACEBACK(frame_4e471cdce5423b044e17d22aa6f19253, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4e471cdce5423b044e17d22aa6f19253->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4e471cdce5423b044e17d22aa6f19253, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4e471cdce5423b044e17d22aa6f19253,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4e471cdce5423b044e17d22aa6f19253 == cache_frame_4e471cdce5423b044e17d22aa6f19253) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4e471cdce5423b044e17d22aa6f19253);
        cache_frame_4e471cdce5423b044e17d22aa6f19253 = NULL;
    }

    assertFrameObject(frame_4e471cdce5423b044e17d22aa6f19253);

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


static PyObject *impl_websocket$_app$$$function__16__stop_ping_thread(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_967e982aec95da866d6ebdc5cc03366c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_967e982aec95da866d6ebdc5cc03366c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_967e982aec95da866d6ebdc5cc03366c)) {
        Py_XDECREF(cache_frame_967e982aec95da866d6ebdc5cc03366c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_967e982aec95da866d6ebdc5cc03366c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_967e982aec95da866d6ebdc5cc03366c = MAKE_FUNCTION_FRAME(codeobj_967e982aec95da866d6ebdc5cc03366c, module_websocket$_app, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_967e982aec95da866d6ebdc5cc03366c->m_type_description == NULL);
    frame_967e982aec95da866d6ebdc5cc03366c = cache_frame_967e982aec95da866d6ebdc5cc03366c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_967e982aec95da866d6ebdc5cc03366c);
    assert(Py_REFCNT(frame_967e982aec95da866d6ebdc5cc03366c) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[52]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 269;
            type_description_1 = "o";
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
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[52]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_967e982aec95da866d6ebdc5cc03366c->m_frame.f_lineno = 270;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[75]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[51]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[51]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_967e982aec95da866d6ebdc5cc03366c->m_frame.f_lineno = 271;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[76]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[51]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[77]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_967e982aec95da866d6ebdc5cc03366c->m_frame.f_lineno = 272;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[78]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[30];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[49], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[30];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[50], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_967e982aec95da866d6ebdc5cc03366c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_967e982aec95da866d6ebdc5cc03366c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_967e982aec95da866d6ebdc5cc03366c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_967e982aec95da866d6ebdc5cc03366c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_967e982aec95da866d6ebdc5cc03366c == cache_frame_967e982aec95da866d6ebdc5cc03366c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_967e982aec95da866d6ebdc5cc03366c);
        cache_frame_967e982aec95da866d6ebdc5cc03366c = NULL;
    }

    assertFrameObject(frame_967e982aec95da866d6ebdc5cc03366c);

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


static PyObject *impl_websocket$_app$$$function__17__send_ping(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_b5ef7a5b9b4173eaafa62eff210f8911;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    static struct Nuitka_FrameObject *cache_frame_b5ef7a5b9b4173eaafa62eff210f8911 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b5ef7a5b9b4173eaafa62eff210f8911)) {
        Py_XDECREF(cache_frame_b5ef7a5b9b4173eaafa62eff210f8911);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b5ef7a5b9b4173eaafa62eff210f8911 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b5ef7a5b9b4173eaafa62eff210f8911 = MAKE_FUNCTION_FRAME(codeobj_b5ef7a5b9b4173eaafa62eff210f8911, module_websocket$_app, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b5ef7a5b9b4173eaafa62eff210f8911->m_type_description == NULL);
    frame_b5ef7a5b9b4173eaafa62eff210f8911 = cache_frame_b5ef7a5b9b4173eaafa62eff210f8911;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b5ef7a5b9b4173eaafa62eff210f8911);
    assert(Py_REFCNT(frame_b5ef7a5b9b4173eaafa62eff210f8911) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[52]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[79]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[53]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 276;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b5ef7a5b9b4173eaafa62eff210f8911->m_frame.f_lineno = 276;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 276;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[23]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_False;
        tmp_or_right_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_left_1);
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    loop_start_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[52]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[79]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[53]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b5ef7a5b9b4173eaafa62eff210f8911->m_frame.f_lineno = 278;
        tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[23]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_True;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_2);
        tmp_operand_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_operand_value_1 = tmp_and_left_value_1;
        and_end_1:;
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
    goto loop_end_1;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[20]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b5ef7a5b9b4173eaafa62eff210f8911->m_frame.f_lineno = 280;
        tmp_assattr_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[3]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[49], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_b5ef7a5b9b4173eaafa62eff210f8911->m_frame.f_lineno = 282;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[80],
            PyTuple_GET_ITEM(mod_consts[81], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_12;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 283;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[20]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[82]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 283;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_expression_value_12 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[55]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 283;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_b5ef7a5b9b4173eaafa62eff210f8911->m_frame.f_lineno = 283;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_b5ef7a5b9b4173eaafa62eff210f8911, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_b5ef7a5b9b4173eaafa62eff210f8911, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
            tmp_cmp_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        {
            PyObject *old = var_e;
            var_e = tmp_assign_source_1;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[80]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[84];
        CHECK_OBJECT(var_e);
        tmp_kw_call_dict_value_0_1 = var_e;
        frame_b5ef7a5b9b4173eaafa62eff210f8911->m_frame.f_lineno = 285;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[16]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 285;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        frame_b5ef7a5b9b4173eaafa62eff210f8911->m_frame.f_lineno = 285;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_4);
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 281;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b5ef7a5b9b4173eaafa62eff210f8911->m_frame) frame_b5ef7a5b9b4173eaafa62eff210f8911->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_4:;
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

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    branch_no_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 278;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b5ef7a5b9b4173eaafa62eff210f8911, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b5ef7a5b9b4173eaafa62eff210f8911->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b5ef7a5b9b4173eaafa62eff210f8911, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b5ef7a5b9b4173eaafa62eff210f8911,
        type_description_1,
        par_self,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_b5ef7a5b9b4173eaafa62eff210f8911 == cache_frame_b5ef7a5b9b4173eaafa62eff210f8911) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b5ef7a5b9b4173eaafa62eff210f8911);
        cache_frame_b5ef7a5b9b4173eaafa62eff210f8911 = NULL;
    }

    assertFrameObject(frame_b5ef7a5b9b4173eaafa62eff210f8911);

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
    Py_XDECREF(var_e);
    var_e = NULL;
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

    Py_XDECREF(var_e);
    var_e = NULL;
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


static PyObject *impl_websocket$_app$$$function__18_run_forever(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_sockopt = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_sslopt = Nuitka_Cell_New1(python_pars[2]);
    PyObject *par_ping_interval = python_pars[3];
    PyObject *par_ping_timeout = python_pars[4];
    PyObject *par_ping_payload = python_pars[5];
    struct Nuitka_CellObject *par_http_proxy_host = Nuitka_Cell_New1(python_pars[6]);
    struct Nuitka_CellObject *par_http_proxy_port = Nuitka_Cell_New1(python_pars[7]);
    struct Nuitka_CellObject *par_http_no_proxy = Nuitka_Cell_New1(python_pars[8]);
    struct Nuitka_CellObject *par_http_proxy_auth = Nuitka_Cell_New1(python_pars[9]);
    struct Nuitka_CellObject *par_http_proxy_timeout = Nuitka_Cell_New1(python_pars[10]);
    struct Nuitka_CellObject *par_skip_utf8_validation = Nuitka_Cell_New1(python_pars[11]);
    struct Nuitka_CellObject *par_host = Nuitka_Cell_New1(python_pars[12]);
    struct Nuitka_CellObject *par_origin = Nuitka_Cell_New1(python_pars[13]);
    struct Nuitka_CellObject *par_dispatcher = Nuitka_Cell_New1(python_pars[14]);
    struct Nuitka_CellObject *par_suppress_origin = Nuitka_Cell_New1(python_pars[15]);
    struct Nuitka_CellObject *par_proxy_type = Nuitka_Cell_New1(python_pars[16]);
    struct Nuitka_CellObject *par_reconnect = Nuitka_Cell_New1(python_pars[17]);
    struct Nuitka_CellObject *var_teardown = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_setSock = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_read = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_check = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_handleDisconnect = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_custom_dispatcher = Nuitka_Cell_Empty();
    struct Nuitka_FrameObject *frame_fa8303a977b67aee2ea2eae5f24dc26c;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_fa8303a977b67aee2ea2eae5f24dc26c = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fa8303a977b67aee2ea2eae5f24dc26c)) {
        Py_XDECREF(cache_frame_fa8303a977b67aee2ea2eae5f24dc26c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fa8303a977b67aee2ea2eae5f24dc26c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fa8303a977b67aee2ea2eae5f24dc26c = MAKE_FUNCTION_FRAME(codeobj_fa8303a977b67aee2ea2eae5f24dc26c, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fa8303a977b67aee2ea2eae5f24dc26c->m_type_description == NULL);
    frame_fa8303a977b67aee2ea2eae5f24dc26c = cache_frame_fa8303a977b67aee2ea2eae5f24dc26c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fa8303a977b67aee2ea2eae5f24dc26c);
    assert(Py_REFCNT(frame_fa8303a977b67aee2ea2eae5f24dc26c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_reconnect));
        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(par_reconnect);
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
        tmp_assign_source_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_assign_source_1 == NULL)) {
            tmp_assign_source_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_reconnect);
            PyCell_SET(par_reconnect, tmp_assign_source_1);
            Py_INCREF(tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_ping_timeout);
        tmp_cmp_expr_left_2 = par_ping_timeout;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_ping_timeout);
        tmp_cmp_expr_left_3 = par_ping_timeout;
        tmp_cmp_expr_right_3 = mod_consts[30];
        tmp_and_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        frame_fa8303a977b67aee2ea2eae5f24dc26c->m_frame.f_lineno = 353;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[86]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 353;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "cccooocccccccccccccccccc";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_ping_interval);
        tmp_cmp_expr_left_4 = par_ping_interval;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_and_left_value_2 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_ping_interval);
        tmp_cmp_expr_left_5 = par_ping_interval;
        tmp_cmp_expr_right_5 = mod_consts[30];
        tmp_and_right_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_3 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        frame_fa8303a977b67aee2ea2eae5f24dc26c->m_frame.f_lineno = 355;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[87]);

        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 355;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "cccooocccccccccccccccccc";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        int tmp_truth_name_1;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        int tmp_truth_name_2;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_ping_timeout);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_ping_timeout);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(par_ping_interval);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_ping_interval);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        CHECK_OBJECT(par_ping_interval);
        tmp_cmp_expr_left_6 = par_ping_interval;
        CHECK_OBJECT(par_ping_timeout);
        tmp_cmp_expr_right_6 = par_ping_timeout;
        tmp_and_right_value_4 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_and_right_value_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_and_right_value_3 = tmp_and_left_value_4;
        and_end_4:;
        tmp_condition_result_4 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_4 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        frame_fa8303a977b67aee2ea2eae5f24dc26c->m_frame.f_lineno = 357;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[88]);

        if (tmp_raise_type_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_3;
        exception_lineno = 357;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "cccooocccccccccccccccccc";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        if (Nuitka_Cell_GET(par_sockopt) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 358;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_1 = Nuitka_Cell_GET(par_sockopt);
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = Nuitka_Cell_GET(par_sockopt);
            PyCell_SET(par_sockopt, tmp_assign_source_2);
            Py_XDECREF(old);
        }

    }
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_2;
        if (Nuitka_Cell_GET(par_sslopt) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 360;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_2 = Nuitka_Cell_GET(par_sslopt);
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_DICT_EMPTY();
        {
            PyObject *old = Nuitka_Cell_GET(par_sslopt);
            PyCell_SET(par_sslopt, tmp_assign_source_3);
            Py_XDECREF(old);
        }

    }
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_3;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 362;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(par_self);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 362;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        frame_fa8303a977b67aee2ea2eae5f24dc26c->m_frame.f_lineno = 363;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[91]);

        if (tmp_raise_type_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_4;
        exception_lineno = 363;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "cccooocccccccccccccccccc";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_ping_interval);
        tmp_assattr_value_1 = par_ping_interval;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 365;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[53], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_ping_timeout);
        tmp_assattr_value_2 = par_ping_timeout;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 366;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_ping_payload);
        tmp_assattr_value_3 = par_ping_payload;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 367;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[55], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_True;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 368;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = Nuitka_Cell_GET(par_self);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[23], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_defaults_1 = mod_consts[92];
        tmp_dict_key_1 = mod_consts[93];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_1);

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_4 = MAKE_FUNCTION_websocket$_app$$$function__18_run_forever$$$function__1_teardown(tmp_defaults_1, tmp_annotations_1, tmp_closure_1);

        assert(Nuitka_Cell_GET(var_teardown) == NULL);
        PyCell_SET(var_teardown, tmp_assign_source_4);

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        struct Nuitka_CellObject *tmp_closure_2[17];
        tmp_defaults_2 = mod_consts[98];
        tmp_dict_key_2 = mod_consts[99];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[101];
        tmp_dict_value_2 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_2);

        tmp_closure_2[0] = var_check;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = par_dispatcher;
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = var_handleDisconnect;
        Py_INCREF(tmp_closure_2[2]);
        tmp_closure_2[3] = par_host;
        Py_INCREF(tmp_closure_2[3]);
        tmp_closure_2[4] = par_http_no_proxy;
        Py_INCREF(tmp_closure_2[4]);
        tmp_closure_2[5] = par_http_proxy_auth;
        Py_INCREF(tmp_closure_2[5]);
        tmp_closure_2[6] = par_http_proxy_host;
        Py_INCREF(tmp_closure_2[6]);
        tmp_closure_2[7] = par_http_proxy_port;
        Py_INCREF(tmp_closure_2[7]);
        tmp_closure_2[8] = par_http_proxy_timeout;
        Py_INCREF(tmp_closure_2[8]);
        tmp_closure_2[9] = par_origin;
        Py_INCREF(tmp_closure_2[9]);
        tmp_closure_2[10] = par_proxy_type;
        Py_INCREF(tmp_closure_2[10]);
        tmp_closure_2[11] = var_read;
        Py_INCREF(tmp_closure_2[11]);
        tmp_closure_2[12] = par_self;
        Py_INCREF(tmp_closure_2[12]);
        tmp_closure_2[13] = par_skip_utf8_validation;
        Py_INCREF(tmp_closure_2[13]);
        tmp_closure_2[14] = par_sockopt;
        Py_INCREF(tmp_closure_2[14]);
        tmp_closure_2[15] = par_sslopt;
        Py_INCREF(tmp_closure_2[15]);
        tmp_closure_2[16] = par_suppress_origin;
        Py_INCREF(tmp_closure_2[16]);

        tmp_assign_source_5 = MAKE_FUNCTION_websocket$_app$$$function__18_run_forever$$$function__2_setSock(tmp_defaults_2, tmp_annotations_2, tmp_closure_2);

        assert(Nuitka_Cell_GET(var_setSock) == NULL);
        PyCell_SET(var_setSock, tmp_assign_source_5);

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        struct Nuitka_CellObject *tmp_closure_3[5];
        tmp_dict_key_3 = mod_consts[101];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));

        tmp_closure_3[0] = var_custom_dispatcher;
        Py_INCREF(tmp_closure_3[0]);
        tmp_closure_3[1] = var_handleDisconnect;
        Py_INCREF(tmp_closure_3[1]);
        tmp_closure_3[2] = par_self;
        Py_INCREF(tmp_closure_3[2]);
        tmp_closure_3[3] = par_skip_utf8_validation;
        Py_INCREF(tmp_closure_3[3]);
        tmp_closure_3[4] = var_teardown;
        Py_INCREF(tmp_closure_3[4]);

        tmp_assign_source_6 = MAKE_FUNCTION_websocket$_app$$$function__18_run_forever$$$function__3_read(tmp_annotations_3, tmp_closure_3);

        assert(Nuitka_Cell_GET(var_read) == NULL);
        PyCell_SET(var_read, tmp_assign_source_6);

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        struct Nuitka_CellObject *tmp_closure_4[1];
        tmp_dict_key_4 = mod_consts[101];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));

        tmp_closure_4[0] = par_self;
        Py_INCREF(tmp_closure_4[0]);

        tmp_assign_source_7 = MAKE_FUNCTION_websocket$_app$$$function__18_run_forever$$$function__4_check(tmp_annotations_4, tmp_closure_4);

        assert(Nuitka_Cell_GET(var_check) == NULL);
        PyCell_SET(var_check, tmp_assign_source_7);

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_defaults_3;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        struct Nuitka_CellObject *tmp_closure_5[6];
        tmp_defaults_3 = mod_consts[98];
        tmp_dict_key_5 = mod_consts[107];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[99];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "cccooocccccccccccccccccc";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[101];
        tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_dict_value_5 == NULL)) {
            tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "cccooocccccccccccccccccc";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        Py_INCREF(tmp_defaults_3);

        tmp_closure_5[0] = var_custom_dispatcher;
        Py_INCREF(tmp_closure_5[0]);
        tmp_closure_5[1] = par_dispatcher;
        Py_INCREF(tmp_closure_5[1]);
        tmp_closure_5[2] = par_reconnect;
        Py_INCREF(tmp_closure_5[2]);
        tmp_closure_5[3] = par_self;
        Py_INCREF(tmp_closure_5[3]);
        tmp_closure_5[4] = var_setSock;
        Py_INCREF(tmp_closure_5[4]);
        tmp_closure_5[5] = var_teardown;
        Py_INCREF(tmp_closure_5[5]);

        tmp_assign_source_8 = MAKE_FUNCTION_websocket$_app$$$function__18_run_forever$$$function__5_handleDisconnect(tmp_defaults_3, tmp_annotations_5, tmp_closure_5);

        assert(Nuitka_Cell_GET(var_handleDisconnect) == NULL);
        PyCell_SET(var_handleDisconnect, tmp_assign_source_8);

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_dispatcher) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 496;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(par_dispatcher);
        frame_fa8303a977b67aee2ea2eae5f24dc26c->m_frame.f_lineno = 496;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_custom_dispatcher) == NULL);
        PyCell_SET(var_custom_dispatcher, tmp_assign_source_9);

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 497;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(par_self);
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[110]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ping_timeout);
        tmp_args_element_value_2 = par_ping_timeout;
        if (Nuitka_Cell_GET(par_dispatcher) == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 497;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(par_dispatcher);
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 497;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(par_self) == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 497;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(par_self);
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[37]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 497;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        frame_fa8303a977b67aee2ea2eae5f24dc26c->m_frame.f_lineno = 497;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 497;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[112];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 3);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 497;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        frame_fa8303a977b67aee2ea2eae5f24dc26c->m_frame.f_lineno = 497;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_dispatcher);
            PyCell_SET(par_dispatcher, tmp_assign_source_10);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_setSock));
        tmp_called_value_8 = Nuitka_Cell_GET(var_setSock);
        frame_fa8303a977b67aee2ea2eae5f24dc26c->m_frame.f_lineno = 500;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_and_left_truth_5;
        nuitka_bool tmp_and_left_value_5;
        nuitka_bool tmp_and_right_value_5;
        PyObject *tmp_operand_value_3;
        int tmp_truth_name_4;
        CHECK_OBJECT(Nuitka_Cell_GET(var_custom_dispatcher));
        tmp_operand_value_3 = Nuitka_Cell_GET(var_custom_dispatcher);
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }
        tmp_and_left_value_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_5 == 1) {
            goto and_right_5;
        } else {
            goto and_left_5;
        }
        and_right_5:;
        if (Nuitka_Cell_GET(par_reconnect) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 501;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }

        tmp_truth_name_4 = CHECK_IF_TRUE(Nuitka_Cell_GET(par_reconnect));
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }
        tmp_and_right_value_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
    loop_start_1:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_5;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 502;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(par_self);
        tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[23]);
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    goto loop_end_1;
    branch_no_9:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_instance_1;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[80]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[114];
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 503;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 503;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }
        frame_fa8303a977b67aee2ea2eae5f24dc26c->m_frame.f_lineno = 503;
        tmp_args_element_value_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[10]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 503;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }
        frame_fa8303a977b67aee2ea2eae5f24dc26c->m_frame.f_lineno = 503;
        tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 503;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }
        frame_fa8303a977b67aee2ea2eae5f24dc26c->m_frame.f_lineno = 503;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[115]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 503;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }
        frame_fa8303a977b67aee2ea2eae5f24dc26c->m_frame.f_lineno = 503;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        if (Nuitka_Cell_GET(par_dispatcher) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 504;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(par_dispatcher);
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[113]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(par_reconnect) == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 504;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_8 = Nuitka_Cell_GET(par_reconnect);
        if (Nuitka_Cell_GET(var_setSock) == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 504;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_9 = Nuitka_Cell_GET(var_setSock);
        frame_fa8303a977b67aee2ea2eae5f24dc26c->m_frame.f_lineno = 504;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 502;
        type_description_1 = "cccooocccccccccccccccccc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    branch_no_8:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_fa8303a977b67aee2ea2eae5f24dc26c, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_fa8303a977b67aee2ea2eae5f24dc26c, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(Nuitka_Cell_GET(var_teardown));
        tmp_called_value_12 = Nuitka_Cell_GET(var_teardown);
        frame_fa8303a977b67aee2ea2eae5f24dc26c->m_frame.f_lineno = 507;
        tmp_call_result_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_12);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "cccooocccccccccccccccccc";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_4);
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 499;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_fa8303a977b67aee2ea2eae5f24dc26c->m_frame) frame_fa8303a977b67aee2ea2eae5f24dc26c->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "cccooocccccccccccccccccc";
    goto try_except_handler_3;
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
        PyObject *tmp_called_value_13;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(Nuitka_Cell_GET(var_teardown));
        tmp_called_value_13 = Nuitka_Cell_GET(var_teardown);
        frame_fa8303a977b67aee2ea2eae5f24dc26c->m_frame.f_lineno = 507;
        tmp_call_result_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_13);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_expression_value_8;
        if (Nuitka_Cell_GET(par_self) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 509;
            type_description_1 = "cccooocccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(par_self);
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[58]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "cccooocccccccccccccccccc";
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
        exception_tb = MAKE_TRACEBACK(frame_fa8303a977b67aee2ea2eae5f24dc26c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fa8303a977b67aee2ea2eae5f24dc26c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fa8303a977b67aee2ea2eae5f24dc26c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fa8303a977b67aee2ea2eae5f24dc26c,
        type_description_1,
        par_self,
        par_sockopt,
        par_sslopt,
        par_ping_interval,
        par_ping_timeout,
        par_ping_payload,
        par_http_proxy_host,
        par_http_proxy_port,
        par_http_no_proxy,
        par_http_proxy_auth,
        par_http_proxy_timeout,
        par_skip_utf8_validation,
        par_host,
        par_origin,
        par_dispatcher,
        par_suppress_origin,
        par_proxy_type,
        par_reconnect,
        var_teardown,
        var_setSock,
        var_read,
        var_check,
        var_handleDisconnect,
        var_custom_dispatcher
    );


    // Release cached frame if used for exception.
    if (frame_fa8303a977b67aee2ea2eae5f24dc26c == cache_frame_fa8303a977b67aee2ea2eae5f24dc26c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fa8303a977b67aee2ea2eae5f24dc26c);
        cache_frame_fa8303a977b67aee2ea2eae5f24dc26c = NULL;
    }

    assertFrameObject(frame_fa8303a977b67aee2ea2eae5f24dc26c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_sockopt);
    Py_DECREF(par_sockopt);
    par_sockopt = NULL;
    CHECK_OBJECT(par_sslopt);
    Py_DECREF(par_sslopt);
    par_sslopt = NULL;
    CHECK_OBJECT(par_dispatcher);
    Py_DECREF(par_dispatcher);
    par_dispatcher = NULL;
    CHECK_OBJECT(par_reconnect);
    Py_DECREF(par_reconnect);
    par_reconnect = NULL;
    CHECK_OBJECT(var_teardown);
    Py_DECREF(var_teardown);
    var_teardown = NULL;
    CHECK_OBJECT(var_setSock);
    Py_DECREF(var_setSock);
    var_setSock = NULL;
    CHECK_OBJECT(var_read);
    Py_DECREF(var_read);
    var_read = NULL;
    CHECK_OBJECT(var_check);
    Py_DECREF(var_check);
    var_check = NULL;
    CHECK_OBJECT(var_handleDisconnect);
    Py_DECREF(var_handleDisconnect);
    var_handleDisconnect = NULL;
    CHECK_OBJECT(var_custom_dispatcher);
    Py_DECREF(var_custom_dispatcher);
    var_custom_dispatcher = NULL;
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

    CHECK_OBJECT(par_sockopt);
    Py_DECREF(par_sockopt);
    par_sockopt = NULL;
    CHECK_OBJECT(par_sslopt);
    Py_DECREF(par_sslopt);
    par_sslopt = NULL;
    CHECK_OBJECT(par_dispatcher);
    Py_DECREF(par_dispatcher);
    par_dispatcher = NULL;
    CHECK_OBJECT(par_reconnect);
    Py_DECREF(par_reconnect);
    par_reconnect = NULL;
    CHECK_OBJECT(var_teardown);
    Py_DECREF(var_teardown);
    var_teardown = NULL;
    CHECK_OBJECT(var_setSock);
    Py_DECREF(var_setSock);
    var_setSock = NULL;
    CHECK_OBJECT(var_read);
    Py_DECREF(var_read);
    var_read = NULL;
    CHECK_OBJECT(var_check);
    Py_DECREF(var_check);
    var_check = NULL;
    CHECK_OBJECT(var_handleDisconnect);
    Py_DECREF(var_handleDisconnect);
    var_handleDisconnect = NULL;
    CHECK_OBJECT(var_custom_dispatcher);
    Py_DECREF(var_custom_dispatcher);
    var_custom_dispatcher = NULL;
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
    CHECK_OBJECT(par_ping_interval);
    Py_DECREF(par_ping_interval);
    CHECK_OBJECT(par_ping_timeout);
    Py_DECREF(par_ping_timeout);
    CHECK_OBJECT(par_ping_payload);
    Py_DECREF(par_ping_payload);
    CHECK_OBJECT(par_http_proxy_host);
    Py_DECREF(par_http_proxy_host);
    CHECK_OBJECT(par_http_proxy_port);
    Py_DECREF(par_http_proxy_port);
    CHECK_OBJECT(par_http_no_proxy);
    Py_DECREF(par_http_no_proxy);
    CHECK_OBJECT(par_http_proxy_auth);
    Py_DECREF(par_http_proxy_auth);
    CHECK_OBJECT(par_http_proxy_timeout);
    Py_DECREF(par_http_proxy_timeout);
    CHECK_OBJECT(par_skip_utf8_validation);
    Py_DECREF(par_skip_utf8_validation);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_origin);
    Py_DECREF(par_origin);
    CHECK_OBJECT(par_suppress_origin);
    Py_DECREF(par_suppress_origin);
    CHECK_OBJECT(par_proxy_type);
    Py_DECREF(par_proxy_type);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ping_interval);
    Py_DECREF(par_ping_interval);
    CHECK_OBJECT(par_ping_timeout);
    Py_DECREF(par_ping_timeout);
    CHECK_OBJECT(par_ping_payload);
    Py_DECREF(par_ping_payload);
    CHECK_OBJECT(par_http_proxy_host);
    Py_DECREF(par_http_proxy_host);
    CHECK_OBJECT(par_http_proxy_port);
    Py_DECREF(par_http_proxy_port);
    CHECK_OBJECT(par_http_no_proxy);
    Py_DECREF(par_http_no_proxy);
    CHECK_OBJECT(par_http_proxy_auth);
    Py_DECREF(par_http_proxy_auth);
    CHECK_OBJECT(par_http_proxy_timeout);
    Py_DECREF(par_http_proxy_timeout);
    CHECK_OBJECT(par_skip_utf8_validation);
    Py_DECREF(par_skip_utf8_validation);
    CHECK_OBJECT(par_host);
    Py_DECREF(par_host);
    CHECK_OBJECT(par_origin);
    Py_DECREF(par_origin);
    CHECK_OBJECT(par_suppress_origin);
    Py_DECREF(par_suppress_origin);
    CHECK_OBJECT(par_proxy_type);
    Py_DECREF(par_proxy_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_app$$$function__18_run_forever$$$function__1_teardown(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_close_frame = python_pars[0];
    PyObject *var_close_status_code = NULL;
    PyObject *var_close_reason = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_8901c8324cb66daef15a41a1beeab18d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
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
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_8901c8324cb66daef15a41a1beeab18d = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8901c8324cb66daef15a41a1beeab18d)) {
        Py_XDECREF(cache_frame_8901c8324cb66daef15a41a1beeab18d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8901c8324cb66daef15a41a1beeab18d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8901c8324cb66daef15a41a1beeab18d = MAKE_FUNCTION_FRAME(codeobj_8901c8324cb66daef15a41a1beeab18d, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8901c8324cb66daef15a41a1beeab18d->m_type_description == NULL);
    frame_8901c8324cb66daef15a41a1beeab18d = cache_frame_8901c8324cb66daef15a41a1beeab18d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8901c8324cb66daef15a41a1beeab18d);
    assert(Py_REFCNT(frame_8901c8324cb66daef15a41a1beeab18d) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 383;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[62]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[117]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        frame_8901c8324cb66daef15a41a1beeab18d->m_frame.f_lineno = 383;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_3 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_3, mod_consts[118]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooc";
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
    // Tried code:
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 384;
            type_description_1 = "oooc";
            goto try_except_handler_4;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[59]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooc";
            goto try_except_handler_4;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 384;
            type_description_1 = "oooc";
            goto try_except_handler_4;
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 386;
            type_description_1 = "oooc";
            goto try_except_handler_4;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[59], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooc";
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_8901c8324cb66daef15a41a1beeab18d, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_8901c8324cb66daef15a41a1beeab18d, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
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
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_3;
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
        frame_8901c8324cb66daef15a41a1beeab18d->m_frame.f_lineno = 383;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooc";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooc";
            goto try_except_handler_5;
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
        exception_lineno = 383;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8901c8324cb66daef15a41a1beeab18d->m_frame) frame_8901c8324cb66daef15a41a1beeab18d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooc";
    goto try_except_handler_5;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 383;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8901c8324cb66daef15a41a1beeab18d->m_frame) frame_8901c8324cb66daef15a41a1beeab18d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooc";
    goto try_except_handler_5;
    branch_end_2:;
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
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
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
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_3 = tmp_with_1__exit;
        frame_8901c8324cb66daef15a41a1beeab18d->m_frame.f_lineno = 383;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_3, mod_consts[119]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_4:;
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
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
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
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        frame_8901c8324cb66daef15a41a1beeab18d->m_frame.f_lineno = 383;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[119]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 383;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_5:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        frame_8901c8324cb66daef15a41a1beeab18d->m_frame.f_lineno = 383;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[119]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_6:;
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
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_4;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 388;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_8901c8324cb66daef15a41a1beeab18d->m_frame.f_lineno = 388;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[120]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_False;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 389;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[23], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 390;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[20]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 390;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_5;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 391;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[20]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_8901c8324cb66daef15a41a1beeab18d->m_frame.f_lineno = 391;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[28]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_7:;
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_4;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 392;
            type_description_1 = "oooc";
            goto try_except_handler_6;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[121]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oooc";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(par_close_frame);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_close_frame);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 393;
            type_description_1 = "oooc";
            goto try_except_handler_6;
        }
        tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(par_close_frame);
        tmp_args_element_value_4 = par_close_frame;
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_args_element_value_4 = Py_None;
        condexpr_end_1:;
        frame_8901c8324cb66daef15a41a1beeab18d->m_frame.f_lineno = 392;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_6);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oooc";
            goto try_except_handler_6;
        }
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oooc";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
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


            type_description_1 = "oooc";
            exception_lineno = 392;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
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


            type_description_1 = "oooc";
            exception_lineno = 392;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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

                    type_description_1 = "oooc";
                    exception_lineno = 392;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[122];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooc";
            exception_lineno = 392;
            goto try_except_handler_7;
        }
    }
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        assert(var_close_status_code == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_close_status_code = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        assert(var_close_reason == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_close_reason = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = Py_None;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[20], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 397;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[123]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 397;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[44]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 397;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_close_status_code);
        tmp_args_element_value_6 = var_close_status_code;
        CHECK_OBJECT(var_close_reason);
        tmp_args_element_value_7 = var_close_reason;
        frame_8901c8324cb66daef15a41a1beeab18d->m_frame.f_lineno = 397;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
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
        exception_tb = MAKE_TRACEBACK(frame_8901c8324cb66daef15a41a1beeab18d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8901c8324cb66daef15a41a1beeab18d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8901c8324cb66daef15a41a1beeab18d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8901c8324cb66daef15a41a1beeab18d,
        type_description_1,
        par_close_frame,
        var_close_status_code,
        var_close_reason,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_8901c8324cb66daef15a41a1beeab18d == cache_frame_8901c8324cb66daef15a41a1beeab18d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8901c8324cb66daef15a41a1beeab18d);
        cache_frame_8901c8324cb66daef15a41a1beeab18d = NULL;
    }

    assertFrameObject(frame_8901c8324cb66daef15a41a1beeab18d);

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
    Py_XDECREF(var_close_status_code);
    var_close_status_code = NULL;
    Py_XDECREF(var_close_reason);
    var_close_reason = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_close_status_code);
    var_close_status_code = NULL;
    Py_XDECREF(var_close_reason);
    var_close_reason = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_close_frame);
    Py_DECREF(par_close_frame);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_close_frame);
    Py_DECREF(par_close_frame);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_app$$$function__18_run_forever$$$function__2_setSock(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_reconnecting = python_pars[0];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_4d203cbd2433bec927efc31bfcf9fb93;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_4d203cbd2433bec927efc31bfcf9fb93 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4d203cbd2433bec927efc31bfcf9fb93)) {
        Py_XDECREF(cache_frame_4d203cbd2433bec927efc31bfcf9fb93);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4d203cbd2433bec927efc31bfcf9fb93 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4d203cbd2433bec927efc31bfcf9fb93 = MAKE_FUNCTION_FRAME(codeobj_4d203cbd2433bec927efc31bfcf9fb93, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4d203cbd2433bec927efc31bfcf9fb93->m_type_description == NULL);
    frame_4d203cbd2433bec927efc31bfcf9fb93 = cache_frame_4d203cbd2433bec927efc31bfcf9fb93;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4d203cbd2433bec927efc31bfcf9fb93);
    assert(Py_REFCNT(frame_4d203cbd2433bec927efc31bfcf9fb93) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_reconnecting);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_reconnecting);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (Nuitka_Cell_GET(self->m_closure[12]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 400;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[12]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[20]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 400;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[12]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 401;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[12]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        frame_4d203cbd2433bec927efc31bfcf9fb93->m_frame.f_lineno = 401;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[124]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[125]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[12]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[12]);
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[48]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[14]) == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[89]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(self->m_closure[14]);
        if (Nuitka_Cell_GET(self->m_closure[15]) == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(self->m_closure[15]);
        if (Nuitka_Cell_GET(self->m_closure[12]) == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 405;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[12]);
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[47]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 405;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_kw_call_dict_value_2_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (Nuitka_Cell_GET(self->m_closure[13]) == NULL) {
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[126]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 406;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_3_1 = Nuitka_Cell_GET(self->m_closure[13]);
        tmp_kw_call_dict_value_4_1 = Py_True;
        frame_4d203cbd2433bec927efc31bfcf9fb93->m_frame.f_lineno = 403;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[127]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[12]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[12]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[20], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_3;
        if (Nuitka_Cell_GET(self->m_closure[12]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 409;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(self->m_closure[12]);
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[20]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[128]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 409;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        frame_4d203cbd2433bec927efc31bfcf9fb93->m_frame.f_lineno = 409;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 409;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        frame_4d203cbd2433bec927efc31bfcf9fb93->m_frame.f_lineno = 409;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooccccccccccccccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    // Tried code:
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_kw_call_dict_value_2_2;
        PyObject *tmp_kw_call_dict_value_3_2;
        PyObject *tmp_kw_call_dict_value_4_2;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        PyObject *tmp_kw_call_dict_value_7_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_dict_value_8_1;
        PyObject *tmp_kw_call_dict_value_9_1;
        PyObject *tmp_kw_call_dict_value_10_1;
        PyObject *tmp_kw_call_dict_value_11_1;
        PyObject *tmp_kw_call_dict_value_12_1;
        PyObject *tmp_expression_value_13;
        if (Nuitka_Cell_GET(self->m_closure[12]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 411;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(self->m_closure[12]);
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[20]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[130]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[12]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 412;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(self->m_closure[12]);
        tmp_kw_call_arg_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[37]);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 412;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[12]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 412;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_expression_value_10 = Nuitka_Cell_GET(self->m_closure[12]);
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[38]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 412;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[12]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 412;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_expression_value_11 = Nuitka_Cell_GET(self->m_closure[12]);
        tmp_kw_call_dict_value_1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[39]);
        if (tmp_kw_call_dict_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);

            exception_lineno = 412;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_1_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[131]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 413;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_kw_call_dict_value_2_2 = Nuitka_Cell_GET(self->m_closure[6]);
        if (Nuitka_Cell_GET(self->m_closure[7]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_1_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[132]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 414;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_kw_call_dict_value_3_2 = Nuitka_Cell_GET(self->m_closure[7]);
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_1_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[133]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 414;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_kw_call_dict_value_4_2 = Nuitka_Cell_GET(self->m_closure[4]);
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_1_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 415;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_kw_call_dict_value_5_1 = Nuitka_Cell_GET(self->m_closure[5]);
        if (Nuitka_Cell_GET(self->m_closure[8]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_1_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[135]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 415;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_kw_call_dict_value_6_1 = Nuitka_Cell_GET(self->m_closure[8]);
        if (Nuitka_Cell_GET(self->m_closure[12]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_1_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 416;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_expression_value_12 = Nuitka_Cell_GET(self->m_closure[12]);
        tmp_kw_call_dict_value_7_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[56]);
        if (tmp_kw_call_dict_value_7_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_1_2);

            exception_lineno = 416;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_1_2);
            Py_DECREF(tmp_kw_call_dict_value_7_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[136]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 417;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_kw_call_dict_value_8_1 = Nuitka_Cell_GET(self->m_closure[3]);
        if (Nuitka_Cell_GET(self->m_closure[9]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_1_2);
            Py_DECREF(tmp_kw_call_dict_value_7_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[137]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 417;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_kw_call_dict_value_9_1 = Nuitka_Cell_GET(self->m_closure[9]);
        if (Nuitka_Cell_GET(self->m_closure[16]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_1_2);
            Py_DECREF(tmp_kw_call_dict_value_7_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[138]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 417;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_kw_call_dict_value_10_1 = Nuitka_Cell_GET(self->m_closure[16]);
        if (Nuitka_Cell_GET(self->m_closure[10]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_1_2);
            Py_DECREF(tmp_kw_call_dict_value_7_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[139]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 418;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_kw_call_dict_value_11_1 = Nuitka_Cell_GET(self->m_closure[10]);
        if (Nuitka_Cell_GET(self->m_closure[12]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_1_2);
            Py_DECREF(tmp_kw_call_dict_value_7_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 418;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_expression_value_13 = Nuitka_Cell_GET(self->m_closure[12]);
        tmp_kw_call_dict_value_12_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[57]);
        if (tmp_kw_call_dict_value_12_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_1_2);
            Py_DECREF(tmp_kw_call_dict_value_7_1);

            exception_lineno = 418;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        frame_4d203cbd2433bec927efc31bfcf9fb93->m_frame.f_lineno = 411;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[13] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_2, tmp_kw_call_dict_value_4_2, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1, tmp_kw_call_dict_value_7_1, tmp_kw_call_dict_value_8_1, tmp_kw_call_dict_value_9_1, tmp_kw_call_dict_value_10_1, tmp_kw_call_dict_value_11_1, tmp_kw_call_dict_value_12_1};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[140]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_1_2);
        Py_DECREF(tmp_kw_call_dict_value_7_1);
        Py_DECREF(tmp_kw_call_dict_value_12_1);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        frame_4d203cbd2433bec927efc31bfcf9fb93->m_frame.f_lineno = 420;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[141], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_3;
        if (Nuitka_Cell_GET(self->m_closure[12]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 422;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_expression_value_14 = Nuitka_Cell_GET(self->m_closure[12]);
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[53]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 422;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        tmp_condition_result_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_5;
        if (Nuitka_Cell_GET(self->m_closure[12]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 423;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(self->m_closure[12]);
        frame_4d203cbd2433bec927efc31bfcf9fb93->m_frame.f_lineno = 423;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[142]);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_16;
        if (Nuitka_Cell_GET(self->m_closure[12]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 425;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_expression_value_15 = Nuitka_Cell_GET(self->m_closure[12]);
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[123]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[12]) == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 425;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_expression_value_16 = Nuitka_Cell_GET(self->m_closure[12]);
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[40]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 425;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        frame_4d203cbd2433bec927efc31bfcf9fb93->m_frame.f_lineno = 425;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 427;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_expression_value_17 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[35]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[12]) == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 427;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_expression_value_19 = Nuitka_Cell_GET(self->m_closure[12]);
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[20]);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 427;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[20]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 427;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[11]) == NULL) {
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 427;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_args_element_value_4 = Nuitka_Cell_GET(self->m_closure[11]);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 427;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }

        tmp_args_element_value_5 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_4d203cbd2433bec927efc31bfcf9fb93->m_frame.f_lineno = 427;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_call_result_7);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_4d203cbd2433bec927efc31bfcf9fb93, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_4d203cbd2433bec927efc31bfcf9fb93, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_tuple_element_1;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_2, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ooccccccccccccccccc";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_2, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ooccccccccccccccccc";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_2, 2, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ooccccccccccccccccc";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_2, 3, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ooccccccccccccccccc";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_2, 4, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_right_2);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_e = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 429;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_3;
        }

        tmp_called_value_7 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(var_e);
        tmp_args_element_value_6 = var_e;
        CHECK_OBJECT(par_reconnecting);
        tmp_args_element_value_7 = par_reconnecting;
        frame_4d203cbd2433bec927efc31bfcf9fb93->m_frame.f_lineno = 429;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ooccccccccccccccccc";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_8);
    }
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 410;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_4d203cbd2433bec927efc31bfcf9fb93->m_frame) frame_4d203cbd2433bec927efc31bfcf9fb93->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooccccccccccccccccc";
    goto try_except_handler_2;
    branch_end_3:;
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

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4d203cbd2433bec927efc31bfcf9fb93, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4d203cbd2433bec927efc31bfcf9fb93->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4d203cbd2433bec927efc31bfcf9fb93, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4d203cbd2433bec927efc31bfcf9fb93,
        type_description_1,
        par_reconnecting,
        var_e,
        self->m_closure[12],
        self->m_closure[14],
        self->m_closure[15],
        self->m_closure[13],
        self->m_closure[6],
        self->m_closure[7],
        self->m_closure[4],
        self->m_closure[5],
        self->m_closure[8],
        self->m_closure[3],
        self->m_closure[9],
        self->m_closure[16],
        self->m_closure[10],
        self->m_closure[1],
        self->m_closure[11],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_4d203cbd2433bec927efc31bfcf9fb93 == cache_frame_4d203cbd2433bec927efc31bfcf9fb93) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4d203cbd2433bec927efc31bfcf9fb93);
        cache_frame_4d203cbd2433bec927efc31bfcf9fb93 = NULL;
    }

    assertFrameObject(frame_4d203cbd2433bec927efc31bfcf9fb93);

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
    CHECK_OBJECT(par_reconnecting);
    Py_DECREF(par_reconnecting);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_reconnecting);
    Py_DECREF(par_reconnecting);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_app$$$function__18_run_forever$$$function__3_read(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_op_code = NULL;
    PyObject *var_frame = NULL;
    PyObject *var_e = NULL;
    PyObject *var_data = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_be3f88d95058b42dd650792776dce75b;
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
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_be3f88d95058b42dd650792776dce75b = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_be3f88d95058b42dd650792776dce75b)) {
        Py_XDECREF(cache_frame_be3f88d95058b42dd650792776dce75b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_be3f88d95058b42dd650792776dce75b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_be3f88d95058b42dd650792776dce75b = MAKE_FUNCTION_FRAME(codeobj_be3f88d95058b42dd650792776dce75b, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_be3f88d95058b42dd650792776dce75b->m_type_description == NULL);
    frame_be3f88d95058b42dd650792776dce75b = cache_frame_be3f88d95058b42dd650792776dce75b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_be3f88d95058b42dd650792776dce75b);
    assert(Py_REFCNT(frame_be3f88d95058b42dd650792776dce75b) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 432;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooccccc";
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
        PyObject *tmp_called_value_1;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[4]);
        frame_be3f88d95058b42dd650792776dce75b->m_frame.f_lineno = 433;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 436;
            type_description_1 = "ooooccccc";
            goto try_except_handler_3;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooooccccc";
            goto try_except_handler_3;
        }
        frame_be3f88d95058b42dd650792776dce75b->m_frame.f_lineno = 436;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[145],
            PyTuple_GET_ITEM(mod_consts[12], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooooccccc";
            goto try_except_handler_3;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "ooooccccc";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooccccc";
            exception_lineno = 436;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooccccc";
            exception_lineno = 436;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

                    type_description_1 = "ooooccccc";
                    exception_lineno = 436;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[122];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooccccc";
            exception_lineno = 436;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_be3f88d95058b42dd650792776dce75b, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_be3f88d95058b42dd650792776dce75b, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_tuple_element_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ooooccccc";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ooooccccc";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_right_1);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ooooccccc";
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
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_e = tmp_assign_source_4;
    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[146]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 438;
            type_description_1 = "ooooccccc";
            goto try_except_handler_6;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(self->m_closure[0]));
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ooooccccc";
            goto try_except_handler_6;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 439;
            type_description_1 = "ooooccccc";
            goto try_except_handler_6;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(var_e);
        tmp_args_element_value_1 = var_e;
        frame_be3f88d95058b42dd650792776dce75b->m_frame.f_lineno = 439;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooccccc";
            goto try_except_handler_6;
        }
        goto try_return_handler_6;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_1;
        CHECK_OBJECT(var_e);
        tmp_raise_type_1 = var_e;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 441;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooccccc";
        goto try_except_handler_6;
    }
    branch_end_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    Py_XDECREF(var_e);
    var_e = NULL;

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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 435;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_be3f88d95058b42dd650792776dce75b->m_frame) frame_be3f88d95058b42dd650792776dce75b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooccccc";
    goto try_except_handler_5;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
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
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_op_code == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_op_code = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_frame == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_frame = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_op_code);
        tmp_cmp_expr_left_2 = var_op_code;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[147]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 444;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_3 = Nuitka_Cell_GET(self->m_closure[4]);
        CHECK_OBJECT(var_frame);
        tmp_args_element_value_2 = var_frame;
        frame_be3f88d95058b42dd650792776dce75b->m_frame.f_lineno = 444;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_op_code);
        tmp_cmp_expr_left_3 = var_op_code;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[148]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ooooccccc";
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
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_7;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 446;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[123]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 446;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[45]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 446;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame);
        tmp_expression_value_7 = var_frame;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[149]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 446;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        frame_be3f88d95058b42dd650792776dce75b->m_frame.f_lineno = 446;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_op_code);
        tmp_cmp_expr_left_4 = var_op_code;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[150]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        frame_be3f88d95058b42dd650792776dce75b->m_frame.f_lineno = 448;
        tmp_assattr_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[3]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_assattr_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 448;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[50], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_11;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 449;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[123]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 449;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[46]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 449;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame);
        tmp_expression_value_11 = var_frame;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[149]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 449;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        frame_be3f88d95058b42dd650792776dce75b->m_frame.f_lineno = 449;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_op_code);
        tmp_cmp_expr_left_5 = var_op_code;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[151]);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 450;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[47]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 450;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_condition_result_7 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_7 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_18;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 451;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[123]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 451;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[42]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 451;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame);
        tmp_expression_value_16 = var_frame;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[149]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 451;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame);
        tmp_expression_value_17 = var_frame;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[152]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 452;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame);
        tmp_expression_value_18 = var_frame;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[153]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_9);

            exception_lineno = 452;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        frame_be3f88d95058b42dd650792776dce75b->m_frame.f_lineno = 451;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_22;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 453;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_19 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[123]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 453;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_20 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[47]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 453;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame);
        tmp_expression_value_21 = var_frame;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[149]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 454;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_frame);
        tmp_expression_value_22 = var_frame;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[153]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 454;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        frame_be3f88d95058b42dd650792776dce75b->m_frame.f_lineno = 453;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(var_frame);
        tmp_expression_value_23 = var_frame;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[149]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(var_op_code);
        tmp_cmp_expr_left_6 = var_op_code;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[154]);
        if (tmp_cmp_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[126]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 457;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_2 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_8 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_8 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(var_data);
        tmp_expression_value_25 = var_data;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[155]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        frame_be3f88d95058b42dd650792776dce75b->m_frame.f_lineno = 458;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[156]);

        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_data;
            assert(old != NULL);
            var_data = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    branch_no_8:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_17;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 459;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_26 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[123]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 459;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_27 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[42]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 459;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_args_element_value_15 = var_data;
        CHECK_OBJECT(var_frame);
        tmp_expression_value_28 = var_frame;
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[152]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);
            Py_DECREF(tmp_args_element_value_14);

            exception_lineno = 459;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = Py_True;
        frame_be3f88d95058b42dd650792776dce75b->m_frame.f_lineno = 459;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_14);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_element_value_19;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 460;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_29 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[123]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 460;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_30 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[41]);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 460;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_args_element_value_19 = var_data;
        frame_be3f88d95058b42dd650792776dce75b->m_frame.f_lineno = 460;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ooooccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_end_7:;
    branch_end_6:;
    branch_end_5:;
    branch_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_be3f88d95058b42dd650792776dce75b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_be3f88d95058b42dd650792776dce75b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_be3f88d95058b42dd650792776dce75b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_be3f88d95058b42dd650792776dce75b,
        type_description_1,
        var_op_code,
        var_frame,
        var_e,
        var_data,
        self->m_closure[2],
        self->m_closure[4],
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[3]
    );


    // Release cached frame if used for exception.
    if (frame_be3f88d95058b42dd650792776dce75b == cache_frame_be3f88d95058b42dd650792776dce75b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_be3f88d95058b42dd650792776dce75b);
        cache_frame_be3f88d95058b42dd650792776dce75b = NULL;
    }

    assertFrameObject(frame_be3f88d95058b42dd650792776dce75b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_op_code);
    var_op_code = NULL;
    Py_XDECREF(var_frame);
    var_frame = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
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

    Py_XDECREF(var_op_code);
    var_op_code = NULL;
    Py_XDECREF(var_frame);
    var_frame = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
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


static PyObject *impl_websocket$_app$$$function__18_run_forever$$$function__4_check(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_has_timeout_expired = NULL;
    PyObject *var_has_pong_not_arrived_after_last_ping = NULL;
    PyObject *var_has_pong_arrived_too_late = NULL;
    struct Nuitka_FrameObject *frame_437c43e15bb74e8dff9a4c604e1fc629;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_437c43e15bb74e8dff9a4c604e1fc629 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_437c43e15bb74e8dff9a4c604e1fc629)) {
        Py_XDECREF(cache_frame_437c43e15bb74e8dff9a4c604e1fc629);

#if _DEBUG_REFCOUNTS
        if (cache_frame_437c43e15bb74e8dff9a4c604e1fc629 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_437c43e15bb74e8dff9a4c604e1fc629 = MAKE_FUNCTION_FRAME(codeobj_437c43e15bb74e8dff9a4c604e1fc629, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_437c43e15bb74e8dff9a4c604e1fc629->m_type_description == NULL);
    frame_437c43e15bb74e8dff9a4c604e1fc629 = cache_frame_437c43e15bb74e8dff9a4c604e1fc629;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_437c43e15bb74e8dff9a4c604e1fc629);
    assert(Py_REFCNT(frame_437c43e15bb74e8dff9a4c604e1fc629) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 465;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 465;
            type_description_1 = "oooc";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_437c43e15bb74e8dff9a4c604e1fc629->m_frame.f_lineno = 466;
        tmp_sub_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[3]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 466;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[49]);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 466;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 466;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 466;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_has_timeout_expired == NULL);
        var_has_timeout_expired = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 467;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_sub_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[50]);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 467;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_sub_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[49]);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 467;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[30];
        tmp_assign_source_2 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_has_pong_not_arrived_after_last_ping == NULL);
        var_has_pong_not_arrived_after_last_ping = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 468;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_sub_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[50]);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 468;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_sub_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[49]);
        if (tmp_sub_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_3);

            exception_lineno = 468;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        Py_DECREF(tmp_sub_expr_right_3);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 468;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[2]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 468;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_has_pong_arrived_too_late == NULL);
        var_has_pong_arrived_too_late = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_3;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_truth_name_4;
        int tmp_truth_name_5;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 470;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[49]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 470;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_has_timeout_expired);
        tmp_truth_name_3 = CHECK_IF_TRUE(var_has_timeout_expired);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_has_pong_not_arrived_after_last_ping);
        tmp_truth_name_4 = CHECK_IF_TRUE(var_has_pong_not_arrived_after_last_ping);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_has_pong_arrived_too_late);
        tmp_truth_name_5 = CHECK_IF_TRUE(var_has_pong_arrived_too_late);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_right_value_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_and_right_value_2 = tmp_or_left_value_1;
        or_end_1:;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[157]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        frame_437c43e15bb74e8dff9a4c604e1fc629->m_frame.f_lineno = 473;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[158]);

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 473;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooc";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_437c43e15bb74e8dff9a4c604e1fc629, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_437c43e15bb74e8dff9a4c604e1fc629->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_437c43e15bb74e8dff9a4c604e1fc629, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_437c43e15bb74e8dff9a4c604e1fc629,
        type_description_1,
        var_has_timeout_expired,
        var_has_pong_not_arrived_after_last_ping,
        var_has_pong_arrived_too_late,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_437c43e15bb74e8dff9a4c604e1fc629 == cache_frame_437c43e15bb74e8dff9a4c604e1fc629) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_437c43e15bb74e8dff9a4c604e1fc629);
        cache_frame_437c43e15bb74e8dff9a4c604e1fc629 = NULL;
    }

    assertFrameObject(frame_437c43e15bb74e8dff9a4c604e1fc629);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_has_timeout_expired);
    var_has_timeout_expired = NULL;
    Py_XDECREF(var_has_pong_not_arrived_after_last_ping);
    var_has_pong_not_arrived_after_last_ping = NULL;
    Py_XDECREF(var_has_pong_arrived_too_late);
    var_has_pong_arrived_too_late = NULL;
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

    Py_XDECREF(var_has_timeout_expired);
    var_has_timeout_expired = NULL;
    Py_XDECREF(var_has_pong_not_arrived_after_last_ping);
    var_has_pong_not_arrived_after_last_ping = NULL;
    Py_XDECREF(var_has_pong_arrived_too_late);
    var_has_pong_arrived_too_late = NULL;
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


static PyObject *impl_websocket$_app$$$function__18_run_forever$$$function__5_handleDisconnect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_e = python_pars[0];
    PyObject *par_reconnecting = python_pars[1];
    struct Nuitka_FrameObject *frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8)) {
        Py_XDECREF(cache_frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8 = MAKE_FUNCTION_FRAME(codeobj_1eb2e9ed5ab94e3703d25d9a8ccd57f8, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8->m_type_description == NULL);
    frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8 = cache_frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8);
    assert(Py_REFCNT(frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 477;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[58], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 478;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[3]);
        frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8->m_frame.f_lineno = 478;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[120]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_reconnecting);
        tmp_operand_value_1 = par_reconnecting;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "oocccccc";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 480;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[123]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[22]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 480;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[43]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 480;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_e);
        tmp_args_element_value_2 = par_e;
        frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8->m_frame.f_lineno = 480;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_tuple_element_1;
        int tmp_truth_name_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[159]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        if (par_e == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 482;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_e;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_4, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oocccccc";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_element_value_4, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_args_element_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8->m_frame.f_lineno = 482;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 482;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_4;
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 483;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_3 = Nuitka_Cell_GET(self->m_closure[5]);
        frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8->m_frame.f_lineno = 483;
        tmp_call_result_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 485;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8->m_frame) frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oocccccc";
    goto frame_exception_exit_1;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 487;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE(Nuitka_Cell_GET(self->m_closure[2]));
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[160];
        if (par_e == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 488;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = par_e;
        frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8->m_frame.f_lineno = 488;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[16]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 488;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8->m_frame.f_lineno = 488;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_3;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[146]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 489;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_3 = CHECK_IF_TRUE(Nuitka_Cell_GET(self->m_closure[0]));
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_instance_2;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[80]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[161];
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 490;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 490;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8->m_frame.f_lineno = 490;
        tmp_args_element_value_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[10]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 490;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8->m_frame.f_lineno = 490;
        tmp_kw_call_dict_value_0_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 490;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8->m_frame.f_lineno = 490;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[115]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 490;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8->m_frame.f_lineno = 490;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 491;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[113]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 491;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_8 = Nuitka_Cell_GET(self->m_closure[2]);
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 491;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = Nuitka_Cell_GET(self->m_closure[4]);
        frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8->m_frame.f_lineno = 491;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[162]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_3 = mod_consts[163];
        if (par_e == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 493;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_3 = par_e;
        frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8->m_frame.f_lineno = 493;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[16]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 493;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8->m_frame.f_lineno = 493;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_9;
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[96]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 494;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_9 = Nuitka_Cell_GET(self->m_closure[5]);
        frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8->m_frame.f_lineno = 494;
        tmp_call_result_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_9);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "oocccccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    branch_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8,
        type_description_1,
        par_e,
        par_reconnecting,
        self->m_closure[3],
        self->m_closure[5],
        self->m_closure[2],
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[4]
    );


    // Release cached frame if used for exception.
    if (frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8 == cache_frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8);
        cache_frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8 = NULL;
    }

    assertFrameObject(frame_1eb2e9ed5ab94e3703d25d9a8ccd57f8);

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
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    CHECK_OBJECT(par_reconnecting);
    Py_DECREF(par_reconnecting);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_e);
    Py_DECREF(par_e);
    CHECK_OBJECT(par_reconnecting);
    Py_DECREF(par_reconnecting);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_app$$$function__19_create_dispatcher(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ping_timeout = python_pars[1];
    PyObject *par_dispatcher = python_pars[2];
    PyObject *par_is_ssl = python_pars[3];
    PyObject *var_timeout = NULL;
    struct Nuitka_FrameObject *frame_6719565829611bf5a8f77e9adb98d80c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6719565829611bf5a8f77e9adb98d80c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6719565829611bf5a8f77e9adb98d80c)) {
        Py_XDECREF(cache_frame_6719565829611bf5a8f77e9adb98d80c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6719565829611bf5a8f77e9adb98d80c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6719565829611bf5a8f77e9adb98d80c = MAKE_FUNCTION_FRAME(codeobj_6719565829611bf5a8f77e9adb98d80c, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6719565829611bf5a8f77e9adb98d80c->m_type_description == NULL);
    frame_6719565829611bf5a8f77e9adb98d80c = cache_frame_6719565829611bf5a8f77e9adb98d80c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6719565829611bf5a8f77e9adb98d80c);
    assert(Py_REFCNT(frame_6719565829611bf5a8f77e9adb98d80c) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_dispatcher);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_dispatcher);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "ooooo";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[164]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_ping_timeout);
        tmp_args_element_value_2 = par_ping_timeout;
        CHECK_OBJECT(par_dispatcher);
        tmp_args_element_value_3 = par_dispatcher;
        frame_6719565829611bf5a8f77e9adb98d80c->m_frame.f_lineno = 513;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        CHECK_OBJECT(par_ping_timeout);
        tmp_or_left_value_1 = par_ping_timeout;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_or_right_value_1 = mod_consts[165];
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_timeout == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_timeout = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_is_ssl);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_is_ssl);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_4 = par_self;
        CHECK_OBJECT(var_timeout);
        tmp_args_element_value_5 = var_timeout;
        frame_6719565829611bf5a8f77e9adb98d80c->m_frame.f_lineno = 516;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_6 = par_self;
        CHECK_OBJECT(var_timeout);
        tmp_args_element_value_7 = var_timeout;
        frame_6719565829611bf5a8f77e9adb98d80c->m_frame.f_lineno = 518;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
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
        exception_tb = MAKE_TRACEBACK(frame_6719565829611bf5a8f77e9adb98d80c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6719565829611bf5a8f77e9adb98d80c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6719565829611bf5a8f77e9adb98d80c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6719565829611bf5a8f77e9adb98d80c,
        type_description_1,
        par_self,
        par_ping_timeout,
        par_dispatcher,
        par_is_ssl,
        var_timeout
    );


    // Release cached frame if used for exception.
    if (frame_6719565829611bf5a8f77e9adb98d80c == cache_frame_6719565829611bf5a8f77e9adb98d80c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6719565829611bf5a8f77e9adb98d80c);
        cache_frame_6719565829611bf5a8f77e9adb98d80c = NULL;
    }

    assertFrameObject(frame_6719565829611bf5a8f77e9adb98d80c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_timeout);
    var_timeout = NULL;
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

    Py_XDECREF(var_timeout);
    var_timeout = NULL;
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
    CHECK_OBJECT(par_ping_timeout);
    Py_DECREF(par_ping_timeout);
    CHECK_OBJECT(par_dispatcher);
    Py_DECREF(par_dispatcher);
    CHECK_OBJECT(par_is_ssl);
    Py_DECREF(par_is_ssl);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ping_timeout);
    Py_DECREF(par_ping_timeout);
    CHECK_OBJECT(par_dispatcher);
    Py_DECREF(par_dispatcher);
    CHECK_OBJECT(par_is_ssl);
    Py_DECREF(par_is_ssl);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_app$$$function__20__get_close_args(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_close_frame = python_pars[1];
    PyObject *var_close_status_code = NULL;
    PyObject *var_reason = NULL;
    struct Nuitka_FrameObject *frame_a42bf82ca1e8999893e392fc27d1c489;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a42bf82ca1e8999893e392fc27d1c489 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a42bf82ca1e8999893e392fc27d1c489)) {
        Py_XDECREF(cache_frame_a42bf82ca1e8999893e392fc27d1c489);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a42bf82ca1e8999893e392fc27d1c489 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a42bf82ca1e8999893e392fc27d1c489 = MAKE_FUNCTION_FRAME(codeobj_a42bf82ca1e8999893e392fc27d1c489, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a42bf82ca1e8999893e392fc27d1c489->m_type_description == NULL);
    frame_a42bf82ca1e8999893e392fc27d1c489 = cache_frame_a42bf82ca1e8999893e392fc27d1c489;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a42bf82ca1e8999893e392fc27d1c489);
    assert(Py_REFCNT(frame_a42bf82ca1e8999893e392fc27d1c489) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[44]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_close_frame);
        tmp_operand_value_2 = par_close_frame;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = MAKE_LIST_REPEATED(2, Py_None);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_close_frame);
        tmp_expression_value_2 = par_close_frame;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[149]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 531;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_close_frame);
        tmp_expression_value_3 = par_close_frame;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[149]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_a42bf82ca1e8999893e392fc27d1c489->m_frame.f_lineno = 531;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[33];
        tmp_and_right_value_1 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        tmp_mult_expr_left_1 = mod_consts[168];
        CHECK_OBJECT(par_close_frame);
        tmp_expression_value_5 = par_close_frame;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[149]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[30];
        tmp_mult_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_close_frame);
        tmp_expression_value_7 = par_close_frame;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[149]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 532;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[169];
        tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 1);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 532;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_close_status_code == NULL);
        var_close_status_code = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_close_frame);
        tmp_expression_value_10 = par_close_frame;
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[149]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[170];
        tmp_expression_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[155]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_a42bf82ca1e8999893e392fc27d1c489->m_frame.f_lineno = 533;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[156]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_reason == NULL);
        var_reason = tmp_assign_source_2;
    }
    {
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(var_close_status_code);
        tmp_list_element_1 = var_close_status_code;
        tmp_return_value = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_return_value, 0, tmp_list_element_1);
        CHECK_OBJECT(var_reason);
        tmp_list_element_1 = var_reason;
        PyList_SET_ITEM0(tmp_return_value, 1, tmp_list_element_1);
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = MAKE_LIST_REPEATED(2, Py_None);
    goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_a42bf82ca1e8999893e392fc27d1c489, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a42bf82ca1e8999893e392fc27d1c489->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a42bf82ca1e8999893e392fc27d1c489, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a42bf82ca1e8999893e392fc27d1c489,
        type_description_1,
        par_self,
        par_close_frame,
        var_close_status_code,
        var_reason
    );


    // Release cached frame if used for exception.
    if (frame_a42bf82ca1e8999893e392fc27d1c489 == cache_frame_a42bf82ca1e8999893e392fc27d1c489) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a42bf82ca1e8999893e392fc27d1c489);
        cache_frame_a42bf82ca1e8999893e392fc27d1c489 = NULL;
    }

    assertFrameObject(frame_a42bf82ca1e8999893e392fc27d1c489);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_close_status_code);
    var_close_status_code = NULL;
    Py_XDECREF(var_reason);
    var_reason = NULL;
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

    Py_XDECREF(var_close_status_code);
    var_close_status_code = NULL;
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
    CHECK_OBJECT(par_close_frame);
    Py_DECREF(par_close_frame);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_close_frame);
    Py_DECREF(par_close_frame);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_websocket$_app$$$function__21__callback(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_callback = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_3c4261a5500e05fbf359d844628023aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_3c4261a5500e05fbf359d844628023aa = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3c4261a5500e05fbf359d844628023aa)) {
        Py_XDECREF(cache_frame_3c4261a5500e05fbf359d844628023aa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3c4261a5500e05fbf359d844628023aa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3c4261a5500e05fbf359d844628023aa = MAKE_FUNCTION_FRAME(codeobj_3c4261a5500e05fbf359d844628023aa, module_websocket$_app, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3c4261a5500e05fbf359d844628023aa->m_type_description == NULL);
    frame_3c4261a5500e05fbf359d844628023aa = cache_frame_3c4261a5500e05fbf359d844628023aa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3c4261a5500e05fbf359d844628023aa);
    assert(Py_REFCNT(frame_3c4261a5500e05fbf359d844628023aa) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_callback);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_callback);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
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
    // Tried code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_callback);
        tmp_dircall_arg1_1 = par_callback;
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__15_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "oooo";
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_3c4261a5500e05fbf359d844628023aa, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_3c4261a5500e05fbf359d844628023aa, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "oooo";
            goto try_except_handler_2;
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
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_e = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[162]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[172];
        CHECK_OBJECT(par_callback);
        tmp_kw_call_dict_value_0_1 = par_callback;
        CHECK_OBJECT(var_e);
        tmp_kw_call_dict_value_1_1 = var_e;
        frame_3c4261a5500e05fbf359d844628023aa->m_frame.f_lineno = 545;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[173]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 545;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        frame_3c4261a5500e05fbf359d844628023aa->m_frame.f_lineno = 545;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[43]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 546;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        CHECK_OBJECT(var_e);
        tmp_args_element_value_3 = var_e;
        frame_3c4261a5500e05fbf359d844628023aa->m_frame.f_lineno = 547;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[43],
                call_args
            );
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_3:;
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF(var_e);
    var_e = NULL;

    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 541;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3c4261a5500e05fbf359d844628023aa->m_frame) frame_3c4261a5500e05fbf359d844628023aa->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_2;
    branch_end_2:;
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

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3c4261a5500e05fbf359d844628023aa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3c4261a5500e05fbf359d844628023aa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3c4261a5500e05fbf359d844628023aa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3c4261a5500e05fbf359d844628023aa,
        type_description_1,
        par_self,
        par_callback,
        par_args,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_3c4261a5500e05fbf359d844628023aa == cache_frame_3c4261a5500e05fbf359d844628023aa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3c4261a5500e05fbf359d844628023aa);
        cache_frame_3c4261a5500e05fbf359d844628023aa = NULL;
    }

    assertFrameObject(frame_3c4261a5500e05fbf359d844628023aa);

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
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_callback);
    Py_DECREF(par_callback);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__10_timeout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__10_timeout,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[227],
#endif
        codeobj_189529616cb7816235d7c219f95ac0c8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__11_reconnect(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__11_reconnect,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        mod_consts[228],
#endif
        codeobj_f4f28be5f85c8b9b78f1426b1a21f4e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__12___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__12___init__,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        mod_consts[234],
#endif
        codeobj_3ae45b51f9e0417e4e93200b1bb28177,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        mod_consts[63],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__13_send(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__13_send,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        mod_consts[235],
#endif
        codeobj_1479327d288e0bb69a5b8454e1e55803,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        mod_consts[67],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__14_close(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__14_close,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[237],
#endif
        codeobj_700f7769b9a1c7d6241046b90321435d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        mod_consts[68],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__15__start_ping_thread(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__15__start_ping_thread,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        mod_consts[238],
#endif
        codeobj_4e471cdce5423b044e17d22aa6f19253,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__16__stop_ping_thread(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__16__stop_ping_thread,
        mod_consts[120],
#if PYTHON_VERSION >= 0x300
        mod_consts[239],
#endif
        codeobj_967e982aec95da866d6ebdc5cc03366c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__17__send_ping(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__17__send_ping,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        mod_consts[240],
#endif
        codeobj_b5ef7a5b9b4173eaafa62eff210f8911,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__18_run_forever(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__18_run_forever,
        mod_consts[243],
#if PYTHON_VERSION >= 0x300
        mod_consts[244],
#endif
        codeobj_fa8303a977b67aee2ea2eae5f24dc26c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        mod_consts[116],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__18_run_forever$$$function__1_teardown(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__18_run_forever$$$function__1_teardown,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        mod_consts[97],
#endif
        codeobj_8901c8324cb66daef15a41a1beeab18d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        mod_consts[95],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__18_run_forever$$$function__2_setSock(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__18_run_forever$$$function__2_setSock,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_4d203cbd2433bec927efc31bfcf9fb93,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        NULL,
        closure,
        17
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__18_run_forever$$$function__3_read(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__18_run_forever$$$function__3_read,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_be3f88d95058b42dd650792776dce75b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        NULL,
        closure,
        5
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__18_run_forever$$$function__4_check(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__18_run_forever$$$function__4_check,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_437c43e15bb74e8dff9a4c604e1fc629,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__18_run_forever$$$function__5_handleDisconnect(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__18_run_forever$$$function__5_handleDisconnect,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_1eb2e9ed5ab94e3703d25d9a8ccd57f8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        NULL,
        closure,
        6
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__19_create_dispatcher(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__19_create_dispatcher,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        mod_consts[247],
#endif
        codeobj_6719565829611bf5a8f77e9adb98d80c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__1_setReconnect(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__1_setReconnect,
        mod_consts[198],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_df92b2a73edc1f742db9d50821d69e8d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__20__get_close_args(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__20__get_close_args,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        mod_consts[248],
#endif
        codeobj_a42bf82ca1e8999893e392fc27d1c489,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        mod_consts[171],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__21__callback(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__21__callback,
        mod_consts[123],
#if PYTHON_VERSION >= 0x300
        mod_consts[249],
#endif
        codeobj_3c4261a5500e05fbf359d844628023aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__2___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__2___init__,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_ea42b0bce1cfe1f74034d85f692da6df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__3_timeout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__3_timeout,
        mod_consts[36],
#if PYTHON_VERSION >= 0x300
        mod_consts[209],
#endif
        codeobj_d86fea7e05e6af08a38c638f3da87187,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__4_reconnect(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__4_reconnect,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        mod_consts[211],
#endif
        codeobj_a360cc892a6d090a2510f1fd785ab1bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__5_read(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__5_read,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[219],
#endif
        codeobj_4ed4126212593d3e1233a724cff84dff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__6_read(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__6_read,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[222],
#endif
        codeobj_a23d127510cc4ec050a6deef1f2420d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__7_select(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__7_select,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[223],
#endif
        codeobj_cf3d581b40b10fe781197fbcb2c647cf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__8___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__8___init__,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        mod_consts[225],
#endif
        codeobj_43f9ef76438fc9e7b5cf8bd0964f23c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_websocket$_app$$$function__9_read(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_websocket$_app$$$function__9_read,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[226],
#endif
        codeobj_62ed899e2fe9ea365c01767e338bdb48,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_websocket$_app,
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

function_impl_code functable_websocket$_app[] = {
    impl_websocket$_app$$$function__18_run_forever$$$function__1_teardown,
    impl_websocket$_app$$$function__18_run_forever$$$function__2_setSock,
    impl_websocket$_app$$$function__18_run_forever$$$function__3_read,
    impl_websocket$_app$$$function__18_run_forever$$$function__4_check,
    impl_websocket$_app$$$function__18_run_forever$$$function__5_handleDisconnect,
    impl_websocket$_app$$$function__1_setReconnect,
    impl_websocket$_app$$$function__2___init__,
    impl_websocket$_app$$$function__3_timeout,
    impl_websocket$_app$$$function__4_reconnect,
    impl_websocket$_app$$$function__5_read,
    impl_websocket$_app$$$function__6_read,
    impl_websocket$_app$$$function__7_select,
    impl_websocket$_app$$$function__8___init__,
    impl_websocket$_app$$$function__9_read,
    impl_websocket$_app$$$function__10_timeout,
    impl_websocket$_app$$$function__11_reconnect,
    impl_websocket$_app$$$function__12___init__,
    impl_websocket$_app$$$function__13_send,
    impl_websocket$_app$$$function__14_close,
    impl_websocket$_app$$$function__15__start_ping_thread,
    impl_websocket$_app$$$function__16__stop_ping_thread,
    impl_websocket$_app$$$function__17__send_ping,
    impl_websocket$_app$$$function__18_run_forever,
    impl_websocket$_app$$$function__19_create_dispatcher,
    impl_websocket$_app$$$function__20__get_close_args,
    impl_websocket$_app$$$function__21__callback,
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

    function_impl_code *current = functable_websocket$_app;
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

    if (offset > sizeof(functable_websocket$_app) || offset < 0) {
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
        functable_websocket$_app[offset],
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
        module_websocket$_app,
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
PyObject *modulecode_websocket$_app(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("websocket._app");

    // Store the module for future use.
    module_websocket$_app = module;

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
        PRINT_STRING("websocket._app: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("websocket._app: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("websocket._app: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initwebsocket$_app\n");

    moduledict_websocket$_app = MODULE_DICT(module_websocket$_app);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_websocket$_app,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_websocket$_app,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[54]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_websocket$_app,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_app,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_websocket$_app,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_websocket$_app);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_websocket$_app, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_websocket$_app, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_websocket$_app, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_websocket$_app);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
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
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_9be747efb5613afa278a2d2804af0555;
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
    int tmp_res;
    PyObject *locals_websocket$_app$$$class__1_DispatcherBase_46 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_509c48a5dd7e8ae86efde17559a1a1cb_2;
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
    PyObject *locals_websocket$_app$$$class__2_Dispatcher_68 = NULL;
    struct Nuitka_FrameObject *frame_9c6b3f039720279cbd10e6790b213796_3;
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
    PyObject *locals_websocket$_app$$$class__3_SSLDispatcher_86 = NULL;
    struct Nuitka_FrameObject *frame_abc368cb95e26026a9c7e5c90a09e4f5_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    PyObject *locals_websocket$_app$$$class__4_WrappedDispatcher_115 = NULL;
    struct Nuitka_FrameObject *frame_83516442b0b9da6f64a59b9808af4e96_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    PyObject *locals_websocket$_app$$$class__5_WebSocketApp_136 = NULL;
    struct Nuitka_FrameObject *frame_3f55717a189b2d4b4be2e19a051cf871_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[175];
        UPDATE_STRING_DICT0(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_2);
    }
    frame_9be747efb5613afa278a2d2804af0555 = MAKE_MODULE_FRAME(codeobj_9be747efb5613afa278a2d2804af0555, module_websocket$_app);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9be747efb5613afa278a2d2804af0555);
    assert(Py_REFCNT(frame_9be747efb5613afa278a2d2804af0555) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[175];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[177]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[177]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[137], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[177]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[177]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[178], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[9];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_websocket$_app;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[30];
        frame_9be747efb5613afa278a2d2804af0555->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[17];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_websocket$_app;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[30];
        frame_9be747efb5613afa278a2d2804af0555->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[60];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_websocket$_app;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[30];
        frame_9be747efb5613afa278a2d2804af0555->m_frame.f_lineno = 4;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[3];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_websocket$_app;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[30];
        frame_9be747efb5613afa278a2d2804af0555->m_frame.f_lineno = 5;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        assert(!(tmp_assign_source_8 == NULL));
        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[181];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_websocket$_app;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[30];
        frame_9be747efb5613afa278a2d2804af0555->m_frame.f_lineno = 6;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[182];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_websocket$_app;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[30];
        frame_9be747efb5613afa278a2d2804af0555->m_frame.f_lineno = 7;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_11 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_11);
        tmp_import_from_1__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_websocket$_app,
                mod_consts[183],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[183]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_websocket$_app,
                mod_consts[184],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[184]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_13);
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
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[54];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_websocket$_app;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[185];
        tmp_level_value_7 = mod_consts[169];
        frame_9be747efb5613afa278a2d2804af0555->m_frame.f_lineno = 11;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_websocket$_app,
                mod_consts[5],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[5]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[186];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_websocket$_app;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[187];
        tmp_level_value_8 = mod_consts[169];
        frame_9be747efb5613afa278a2d2804af0555->m_frame.f_lineno = 12;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_websocket$_app,
                mod_consts[94],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[94]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[188];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_websocket$_app;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[189];
        tmp_level_value_9 = mod_consts[169];
        frame_9be747efb5613afa278a2d2804af0555->m_frame.f_lineno = 13;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_websocket$_app,
                mod_consts[111],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[111]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[190];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_websocket$_app;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[191];
        tmp_level_value_10 = mod_consts[169];
        frame_9be747efb5613afa278a2d2804af0555->m_frame.f_lineno = 14;
        tmp_assign_source_17 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_websocket$_app,
                mod_consts[125],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[125]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_websocket$_app,
                mod_consts[129],
                mod_consts[30]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[129]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_19);
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
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[192];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_websocket$_app;
        tmp_locals_arg_value_11 = (PyObject *)moduledict_websocket$_app;
        tmp_fromlist_value_11 = mod_consts[193];
        tmp_level_value_11 = mod_consts[169];
        frame_9be747efb5613afa278a2d2804af0555->m_frame.f_lineno = 15;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_websocket$_app, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_LIST1(mod_consts[194]);
        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[196];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[101];
        tmp_dict_value_1 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_22 = MAKE_FUNCTION_websocket$_app$$$function__1_setReconnect(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_24;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_websocket$_app$$$class__1_DispatcherBase_46 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[199];
        tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__1_DispatcherBase_46, mod_consts[200], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[201];
        tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__1_DispatcherBase_46, mod_consts[174], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[202];
        tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__1_DispatcherBase_46, mod_consts[203], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_509c48a5dd7e8ae86efde17559a1a1cb_2 = MAKE_CLASS_FRAME(codeobj_509c48a5dd7e8ae86efde17559a1a1cb, module_websocket$_app, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_509c48a5dd7e8ae86efde17559a1a1cb_2);
        assert(Py_REFCNT(frame_509c48a5dd7e8ae86efde17559a1a1cb_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_dict_key_2 = mod_consts[1];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[184]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[2];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[204]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[101];
            tmp_dict_value_2 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_2);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__2___init__(tmp_annotations_2);

            tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__1_DispatcherBase_46, mod_consts[205], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_key_3 = mod_consts[207];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[208];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[101];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_3);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__3_timeout(tmp_annotations_3);

            tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__1_DispatcherBase_46, mod_consts[36], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_dict_key_4 = mod_consts[207];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[210];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
            }

            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[101];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_annotations_4);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__4_reconnect(tmp_annotations_4);

            tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__1_DispatcherBase_46, mod_consts[113], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_509c48a5dd7e8ae86efde17559a1a1cb_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_509c48a5dd7e8ae86efde17559a1a1cb_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_509c48a5dd7e8ae86efde17559a1a1cb_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_509c48a5dd7e8ae86efde17559a1a1cb_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_509c48a5dd7e8ae86efde17559a1a1cb_2);

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
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[202];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[212];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_websocket$_app$$$class__1_DispatcherBase_46;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_9be747efb5613afa278a2d2804af0555->m_frame.f_lineno = 46;
            tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_26;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_25 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_25);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_websocket$_app$$$class__1_DispatcherBase_46);
        locals_websocket$_app$$$class__1_DispatcherBase_46 = NULL;
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

        Py_DECREF(locals_websocket$_app$$$class__1_DispatcherBase_46);
        locals_websocket$_app$$$class__1_DispatcherBase_46 = NULL;
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
        exception_lineno = 46;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_25);
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
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[202]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[202]);
        }

        assert(!(tmp_tuple_element_2 == NULL));
        tmp_assign_source_27 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_27, 0, tmp_tuple_element_2);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_27;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_28 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

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
        tmp_expression_value_1 = tmp_class_creation_2__bases;
        tmp_subscript_value_1 = mod_consts[30];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_6;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_1 = tmp_class_creation_2__bases;
        tmp_assign_source_30 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_30;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_2 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[213]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_3 = tmp_class_creation_2__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[213]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_6;
        }
        tmp_tuple_element_3 = mod_consts[167];
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_3 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
        frame_9be747efb5613afa278a2d2804af0555->m_frame.f_lineno = 68;
        tmp_assign_source_31 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_2);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_4 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[214]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

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
        tmp_mod_expr_left_1 = mod_consts[215];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_1 = mod_consts[216];
        tmp_getattr_default_1 = mod_consts[217];
        tmp_tuple_element_4 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_2 = tmp_class_creation_2__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[216]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

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


            exception_lineno = 68;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 68;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_32;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_33;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_websocket$_app$$$class__2_Dispatcher_68 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[199];
        tmp_res = PyObject_SetItem(locals_websocket$_app$$$class__2_Dispatcher_68, mod_consts[200], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[218];
        tmp_res = PyObject_SetItem(locals_websocket$_app$$$class__2_Dispatcher_68, mod_consts[174], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[167];
        tmp_res = PyObject_SetItem(locals_websocket$_app$$$class__2_Dispatcher_68, mod_consts[203], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_8;
        }
        frame_9c6b3f039720279cbd10e6790b213796_3 = MAKE_CLASS_FRAME(codeobj_9c6b3f039720279cbd10e6790b213796, module_websocket$_app, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_9c6b3f039720279cbd10e6790b213796_3);
        assert(Py_REFCNT(frame_9c6b3f039720279cbd10e6790b213796_3) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_6;
            tmp_dict_key_5 = mod_consts[20];
            tmp_expression_value_6 = PyObject_GetItem(locals_websocket$_app$$$class__2_Dispatcher_68, mod_consts[182]);

            if (tmp_expression_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[182]);

                    if (unlikely(tmp_expression_value_6 == NULL)) {
                        tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[182]);
                    }

                    if (tmp_expression_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[182]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[26];
            tmp_dict_value_5 = PyObject_GetItem(locals_websocket$_app$$$class__2_Dispatcher_68, mod_consts[183]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183]);

                    if (unlikely(tmp_dict_value_5 == NULL)) {
                        tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
                    }

                    if (tmp_dict_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;
                        type_description_2 = "o";
                        goto dict_build_exception_4;
                    }
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto dict_build_exception_4;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[27];
            tmp_dict_value_5 = PyObject_GetItem(locals_websocket$_app$$$class__2_Dispatcher_68, mod_consts[183]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183]);

                    if (unlikely(tmp_dict_value_5 == NULL)) {
                        tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
                    }

                    if (tmp_dict_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;
                        type_description_2 = "o";
                        goto dict_build_exception_4;
                    }
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto dict_build_exception_4;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[101];
            tmp_dict_value_5 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__5_read(tmp_annotations_5);

            tmp_res = PyObject_SetItem(locals_websocket$_app$$$class__2_Dispatcher_68, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9c6b3f039720279cbd10e6790b213796_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9c6b3f039720279cbd10e6790b213796_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9c6b3f039720279cbd10e6790b213796_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9c6b3f039720279cbd10e6790b213796_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_9c6b3f039720279cbd10e6790b213796_3);

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


                exception_lineno = 68;

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
        tmp_res = PyObject_SetItem(locals_websocket$_app$$$class__2_Dispatcher_68, mod_consts[220], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_8;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_3;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_3 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_5 = mod_consts[167];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_5 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_websocket$_app$$$class__2_Dispatcher_68;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
            frame_9be747efb5613afa278a2d2804af0555->m_frame.f_lineno = 68;
            tmp_assign_source_34 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_34;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_33 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_33);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_websocket$_app$$$class__2_Dispatcher_68);
        locals_websocket$_app$$$class__2_Dispatcher_68 = NULL;
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

        Py_DECREF(locals_websocket$_app$$$class__2_Dispatcher_68);
        locals_websocket$_app$$$class__2_Dispatcher_68 = NULL;
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
        exception_lineno = 68;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_33);
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

    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
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
        PyObject *tmp_assign_source_35;
        PyObject *tmp_tuple_element_6;
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[202]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[202]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_9;
        }
        tmp_assign_source_35 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_35, 0, tmp_tuple_element_6);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_36 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_9;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_7 = tmp_class_creation_3__bases;
        tmp_subscript_value_2 = mod_consts[30];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_9;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_2 = tmp_class_creation_3__bases;
        tmp_assign_source_38 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_38;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_8 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_8, mod_consts[213]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_4;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_9 = tmp_class_creation_3__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[213]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_9;
        }
        tmp_tuple_element_7 = mod_consts[166];
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_7 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
        frame_9be747efb5613afa278a2d2804af0555->m_frame.f_lineno = 86;
        tmp_assign_source_39 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_4);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_39;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_10 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_10, mod_consts[214]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

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
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[215];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_2 = mod_consts[216];
        tmp_getattr_default_2 = mod_consts[217];
        tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_4 = tmp_class_creation_3__prepared;
            tmp_expression_value_11 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_11 == NULL));
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[216]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
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


            exception_lineno = 86;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 86;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_40;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_websocket$_app$$$class__3_SSLDispatcher_86 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[199];
        tmp_res = PyObject_SetItem(locals_websocket$_app$$$class__3_SSLDispatcher_86, mod_consts[200], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[221];
        tmp_res = PyObject_SetItem(locals_websocket$_app$$$class__3_SSLDispatcher_86, mod_consts[174], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[166];
        tmp_res = PyObject_SetItem(locals_websocket$_app$$$class__3_SSLDispatcher_86, mod_consts[203], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_11;
        }
        frame_abc368cb95e26026a9c7e5c90a09e4f5_4 = MAKE_CLASS_FRAME(codeobj_abc368cb95e26026a9c7e5c90a09e4f5, module_websocket$_app, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_abc368cb95e26026a9c7e5c90a09e4f5_4);
        assert(Py_REFCNT(frame_abc368cb95e26026a9c7e5c90a09e4f5_4) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_12;
            tmp_dict_key_6 = mod_consts[20];
            tmp_expression_value_12 = PyObject_GetItem(locals_websocket$_app$$$class__3_SSLDispatcher_86, mod_consts[182]);

            if (tmp_expression_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[182]);

                    if (unlikely(tmp_expression_value_12 == NULL)) {
                        tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[182]);
                    }

                    if (tmp_expression_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 90;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_12);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[182]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[26];
            tmp_dict_value_6 = PyObject_GetItem(locals_websocket$_app$$$class__3_SSLDispatcher_86, mod_consts[183]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183]);

                    if (unlikely(tmp_dict_value_6 == NULL)) {
                        tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
                    }

                    if (tmp_dict_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 90;
                        type_description_2 = "o";
                        goto dict_build_exception_5;
                    }
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto dict_build_exception_5;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[27];
            tmp_dict_value_6 = PyObject_GetItem(locals_websocket$_app$$$class__3_SSLDispatcher_86, mod_consts[183]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183]);

                    if (unlikely(tmp_dict_value_6 == NULL)) {
                        tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
                    }

                    if (tmp_dict_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 90;
                        type_description_2 = "o";
                        goto dict_build_exception_5;
                    }
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto dict_build_exception_5;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[101];
            tmp_dict_value_6 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_annotations_6);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__6_read(tmp_annotations_6);

            tmp_res = PyObject_SetItem(locals_websocket$_app$$$class__3_SSLDispatcher_86, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_13;
            tmp_dict_key_7 = mod_consts[24];
            tmp_expression_value_13 = PyObject_GetItem(locals_websocket$_app$$$class__3_SSLDispatcher_86, mod_consts[17]);

            if (tmp_expression_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[17]);

                    if (unlikely(tmp_expression_value_13 == NULL)) {
                        tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
                    }

                    if (tmp_expression_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 104;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_13);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[18]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__7_select(tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_websocket$_app$$$class__3_SSLDispatcher_86, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_abc368cb95e26026a9c7e5c90a09e4f5_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_abc368cb95e26026a9c7e5c90a09e4f5_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_abc368cb95e26026a9c7e5c90a09e4f5_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_abc368cb95e26026a9c7e5c90a09e4f5_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_abc368cb95e26026a9c7e5c90a09e4f5_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_websocket$_app$$$class__3_SSLDispatcher_86, mod_consts[220], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;

            goto try_except_handler_11;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_5;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_5 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_9 = mod_consts[166];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_9 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_websocket$_app$$$class__3_SSLDispatcher_86;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
            frame_9be747efb5613afa278a2d2804af0555->m_frame.f_lineno = 86;
            tmp_assign_source_42 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 86;

                goto try_except_handler_11;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_42;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_41 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_41);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_websocket$_app$$$class__3_SSLDispatcher_86);
        locals_websocket$_app$$$class__3_SSLDispatcher_86 = NULL;
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

        Py_DECREF(locals_websocket$_app$$$class__3_SSLDispatcher_86);
        locals_websocket$_app$$$class__3_SSLDispatcher_86 = NULL;
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
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
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

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 86;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_41);
    }
    goto try_end_5;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_44;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_websocket$_app$$$class__4_WrappedDispatcher_115 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        tmp_dictset_value = mod_consts[199];
        tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__4_WrappedDispatcher_115, mod_consts[200], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[224];
        tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__4_WrappedDispatcher_115, mod_consts[174], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[164];
        tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__4_WrappedDispatcher_115, mod_consts[203], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_83516442b0b9da6f64a59b9808af4e96_5 = MAKE_CLASS_FRAME(codeobj_83516442b0b9da6f64a59b9808af4e96, module_websocket$_app, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_83516442b0b9da6f64a59b9808af4e96_5);
        assert(Py_REFCNT(frame_83516442b0b9da6f64a59b9808af4e96_5) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_key_8 = mod_consts[2];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[204]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[31];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[167]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[101];
            tmp_dict_value_8 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_8);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__8___init__(tmp_annotations_8);

            tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__4_WrappedDispatcher_115, mod_consts[205], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_14;
            tmp_dict_key_9 = mod_consts[20];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[182]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[182]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[182]);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[26];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
            }

            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[27];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
            }

            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[101];
            tmp_dict_value_9 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_annotations_9);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__9_read(tmp_annotations_9);

            tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__4_WrappedDispatcher_115, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_dict_key_10 = mod_consts[207];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[208];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_2 = "o";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[101];
            tmp_dict_value_10 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_annotations_10);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__10_timeout(tmp_annotations_10);

            tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__4_WrappedDispatcher_115, mod_consts[36], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            tmp_dict_key_11 = mod_consts[207];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_annotations_11 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[210];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[101];
            tmp_dict_value_11 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_annotations_11);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__11_reconnect(tmp_annotations_11);

            tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__4_WrappedDispatcher_115, mod_consts[113], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_83516442b0b9da6f64a59b9808af4e96_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_83516442b0b9da6f64a59b9808af4e96_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_83516442b0b9da6f64a59b9808af4e96_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_83516442b0b9da6f64a59b9808af4e96_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_83516442b0b9da6f64a59b9808af4e96_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_14;
        skip_nested_handling_4:;
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_6;
            tmp_called_value_6 = (PyObject *)&PyType_Type;
            tmp_tuple_element_10 = mod_consts[164];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[212];
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_websocket$_app$$$class__4_WrappedDispatcher_115;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_4__class_decl_dict;
            frame_9be747efb5613afa278a2d2804af0555->m_frame.f_lineno = 115;
            tmp_assign_source_46 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto try_except_handler_14;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_46;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_45 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_45);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_websocket$_app$$$class__4_WrappedDispatcher_115);
        locals_websocket$_app$$$class__4_WrappedDispatcher_115 = NULL;
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

        Py_DECREF(locals_websocket$_app$$$class__4_WrappedDispatcher_115);
        locals_websocket$_app$$$class__4_WrappedDispatcher_115 = NULL;
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
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
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

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 115;
        goto try_except_handler_12;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_45);
    }
    goto try_end_6;
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

    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_48;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_49;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_websocket$_app$$$class__5_WebSocketApp_136 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        tmp_dictset_value = mod_consts[199];
        tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__5_WebSocketApp_136, mod_consts[200], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[229];
        tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__5_WebSocketApp_136, mod_consts[174], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[194];
        tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__5_WebSocketApp_136, mod_consts[203], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_3f55717a189b2d4b4be2e19a051cf871_6 = MAKE_CLASS_FRAME(codeobj_3f55717a189b2d4b4be2e19a051cf871, module_websocket$_app, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3f55717a189b2d4b4be2e19a051cf871_6);
        assert(Py_REFCNT(frame_3f55717a189b2d4b4be2e19a051cf871_6) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_defaults_1 = mod_consts[230];
            tmp_dict_key_12 = mod_consts[37];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[231]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[231]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_annotations_12 = _PyDict_NewPresized( 16 );
            {
                int tmp_or_left_truth_1;
                PyObject *tmp_or_left_value_1;
                PyObject *tmp_or_right_value_1;
                PyObject *tmp_expression_value_15;
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[38];
                tmp_or_left_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[232]);

                if (unlikely(tmp_or_left_value_1 == NULL)) {
                    tmp_or_left_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
                }

                if (tmp_or_left_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 141;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
                if (tmp_or_left_truth_1 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 141;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                if (tmp_or_left_truth_1 == 1) {
                    goto or_left_1;
                } else {
                    goto or_right_1;
                }
                or_right_1:;
                tmp_or_right_value_1 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[233]);

                if (unlikely(tmp_or_right_value_1 == NULL)) {
                    tmp_or_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
                }

                if (tmp_or_right_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 141;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_dict_value_12 = tmp_or_right_value_1;
                goto or_end_1;
                or_left_1:;
                tmp_dict_value_12 = tmp_or_left_value_1;
                or_end_1:;
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[40];
                tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183]);

                if (unlikely(tmp_dict_value_12 == NULL)) {
                    tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
                }

                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 142;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[41];
                tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183]);

                if (unlikely(tmp_dict_value_12 == NULL)) {
                    tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
                }

                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 142;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[43];
                tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183]);

                if (unlikely(tmp_dict_value_12 == NULL)) {
                    tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
                }

                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 142;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[44];
                tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183]);

                if (unlikely(tmp_dict_value_12 == NULL)) {
                    tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
                }

                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 143;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[45];
                tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183]);

                if (unlikely(tmp_dict_value_12 == NULL)) {
                    tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
                }

                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 143;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[46];
                tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183]);

                if (unlikely(tmp_dict_value_12 == NULL)) {
                    tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
                }

                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 143;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[47];
                tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183]);

                if (unlikely(tmp_dict_value_12 == NULL)) {
                    tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
                }

                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 144;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[23];
                tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[100]);

                if (unlikely(tmp_dict_value_12 == NULL)) {
                    tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
                }

                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[48];
                tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183]);

                if (unlikely(tmp_dict_value_12 == NULL)) {
                    tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
                }

                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[39];
                tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[231]);

                if (unlikely(tmp_dict_value_12 == NULL)) {
                    tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[231]);
                }

                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 145;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[56];
                tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[232]);

                if (unlikely(tmp_dict_value_12 == NULL)) {
                    tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
                }

                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 146;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[42];
                tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[183]);

                if (unlikely(tmp_dict_value_12 == NULL)) {
                    tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
                }

                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 147;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[182];
                tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[182]);

                if (unlikely(tmp_expression_value_15 == NULL)) {
                    tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[182]);
                }

                if (tmp_expression_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 148;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[182]);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 148;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[101];
                tmp_dict_value_12 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_10;
            // Exception handling pass through code for dict_build:
            dict_build_exception_10:;
            Py_DECREF(tmp_annotations_12);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_10:;
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__12___init__(tmp_defaults_1, tmp_annotations_12);

            tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__5_WebSocketApp_136, mod_consts[205], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[94]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[154]);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_defaults_2 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_11);
            tmp_dict_key_13 = mod_consts[149];
            tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[231]);

            if (unlikely(tmp_dict_value_13 == NULL)) {
                tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[231]);
            }

            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_defaults_2);

                exception_lineno = 235;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_annotations_13 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[152];
            tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_dict_value_13 == NULL)) {
                tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "o";
                goto dict_build_exception_11;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[101];
            tmp_dict_value_13 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_11;
            // Exception handling pass through code for dict_build:
            dict_build_exception_11:;
            Py_DECREF(tmp_defaults_2);
            Py_DECREF(tmp_annotations_13);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_11:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__13_send(tmp_defaults_2, tmp_annotations_13);

            tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__5_WebSocketApp_136, mod_consts[64], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_14;
            tmp_annotations_14 = DICT_COPY(mod_consts[236]);


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__14_close(tmp_annotations_14);

            tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__5_WebSocketApp_136, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_15;
            tmp_annotations_15 = DICT_COPY(mod_consts[236]);


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__15__start_ping_thread(tmp_annotations_15);

            tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__5_WebSocketApp_136, mod_consts[142], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_16;
            tmp_annotations_16 = DICT_COPY(mod_consts[236]);


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__16__stop_ping_thread(tmp_annotations_16);

            tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__5_WebSocketApp_136, mod_consts[120], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_annotations_17;
            tmp_annotations_17 = DICT_COPY(mod_consts[236]);


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__17__send_ping(tmp_annotations_17);

            tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__5_WebSocketApp_136, mod_consts[71], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            tmp_defaults_3 = mod_consts[241];
            tmp_dict_key_14 = mod_consts[89];
            tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[242]);

            if (unlikely(tmp_dict_value_14 == NULL)) {
                tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[242]);
            }

            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_annotations_18 = _PyDict_NewPresized( 18 );
            {
                int tmp_or_left_truth_2;
                PyObject *tmp_or_left_value_2;
                PyObject *tmp_or_right_value_2;
                int tmp_or_left_truth_3;
                PyObject *tmp_or_left_value_3;
                PyObject *tmp_or_right_value_3;
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[90];
                tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[233]);

                if (unlikely(tmp_dict_value_14 == NULL)) {
                    tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
                }

                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 287;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[53];
                tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[204]);

                if (unlikely(tmp_dict_value_14 == NULL)) {
                    tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                }

                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 288;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[2];
                tmp_or_left_value_2 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[204]);

                if (unlikely(tmp_or_left_value_2 == NULL)) {
                    tmp_or_left_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                }

                if (tmp_or_left_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 288;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
                if (tmp_or_left_truth_2 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 288;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                if (tmp_or_left_truth_2 == 1) {
                    goto or_left_2;
                } else {
                    goto or_right_2;
                }
                or_right_2:;
                tmp_or_right_value_2 = Py_None;
                tmp_dict_value_14 = tmp_or_right_value_2;
                goto or_end_2;
                or_left_2:;
                tmp_dict_value_14 = tmp_or_left_value_2;
                or_end_2:;
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[55];
                tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[231]);

                if (unlikely(tmp_dict_value_14 == NULL)) {
                    tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[231]);
                }

                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 289;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[131];
                tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[231]);

                if (unlikely(tmp_dict_value_14 == NULL)) {
                    tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[231]);
                }

                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 290;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[132];
                tmp_or_left_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[197]);

                if (unlikely(tmp_or_left_value_3 == NULL)) {
                    tmp_or_left_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
                }

                if (tmp_or_left_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 290;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
                if (tmp_or_left_truth_3 == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 290;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                if (tmp_or_left_truth_3 == 1) {
                    goto or_left_3;
                } else {
                    goto or_right_3;
                }
                or_right_3:;
                tmp_or_right_value_3 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[231]);

                if (unlikely(tmp_or_right_value_3 == NULL)) {
                    tmp_or_right_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[231]);
                }

                if (tmp_or_right_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 290;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_dict_value_14 = tmp_or_right_value_3;
                goto or_end_3;
                or_left_3:;
                tmp_dict_value_14 = tmp_or_left_value_3;
                or_end_3:;
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[133];
                tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[232]);

                if (unlikely(tmp_dict_value_14 == NULL)) {
                    tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
                }

                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 291;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[134];
                tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[242]);

                if (unlikely(tmp_dict_value_14 == NULL)) {
                    tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[242]);
                }

                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 291;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[135];
                tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[204]);

                if (unlikely(tmp_dict_value_14 == NULL)) {
                    tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
                }

                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 292;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[126];
                tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[100]);

                if (unlikely(tmp_dict_value_14 == NULL)) {
                    tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
                }

                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 293;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[136];
                tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[231]);

                if (unlikely(tmp_dict_value_14 == NULL)) {
                    tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[231]);
                }

                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 294;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[137];
                tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[231]);

                if (unlikely(tmp_dict_value_14 == NULL)) {
                    tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[231]);
                }

                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 294;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[31];
                tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[167]);

                if (unlikely(tmp_dict_value_14 == NULL)) {
                    tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
                }

                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 294;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[138];
                tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[100]);

                if (unlikely(tmp_dict_value_14 == NULL)) {
                    tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
                }

                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 295;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[139];
                tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[231]);

                if (unlikely(tmp_dict_value_14 == NULL)) {
                    tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[231]);
                }

                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 295;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[113];
                tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[197]);

                if (unlikely(tmp_dict_value_14 == NULL)) {
                    tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
                }

                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 295;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[101];
                tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[100]);

                if (unlikely(tmp_dict_value_14 == NULL)) {
                    tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
                }

                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 295;
                    type_description_2 = "o";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_12;
            // Exception handling pass through code for dict_build:
            dict_build_exception_12:;
            Py_DECREF(tmp_annotations_18);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_12:;
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__18_run_forever(tmp_defaults_3, tmp_annotations_18);

            tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__5_WebSocketApp_136, mod_consts[243], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_defaults_4;
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            tmp_defaults_4 = mod_consts[245];
            tmp_dict_key_15 = mod_consts[2];
            tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[197]);

            if (unlikely(tmp_dict_value_15 == NULL)) {
                tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[197]);
            }

            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 511;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_annotations_19 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[31];
            tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[167]);

            if (unlikely(tmp_dict_value_15 == NULL)) {
                tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
            }

            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 511;
                type_description_2 = "o";
                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[246];
            tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[100]);

            if (unlikely(tmp_dict_value_15 == NULL)) {
                tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[100]);
            }

            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 511;
                type_description_2 = "o";
                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[101];
            tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[202]);

            if (unlikely(tmp_dict_value_15 == NULL)) {
                tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[202]);
            }

            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 511;
                type_description_2 = "o";
                goto dict_build_exception_13;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_13;
            // Exception handling pass through code for dict_build:
            dict_build_exception_13:;
            Py_DECREF(tmp_annotations_19);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_13:;
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__19_create_dispatcher(tmp_defaults_4, tmp_annotations_19);

            tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__5_WebSocketApp_136, mod_consts[110], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 511;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            tmp_dict_key_16 = mod_consts[93];
            tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[94]);

            if (unlikely(tmp_dict_value_16 == NULL)) {
                tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
            }

            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 520;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_annotations_20 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[101];
            tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[232]);

            if (unlikely(tmp_dict_value_16 == NULL)) {
                tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
            }

            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 520;
                type_description_2 = "o";
                goto dict_build_exception_14;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_14;
            // Exception handling pass through code for dict_build:
            dict_build_exception_14:;
            Py_DECREF(tmp_annotations_20);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_14:;


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__20__get_close_args(tmp_annotations_20);

            tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__5_WebSocketApp_136, mod_consts[121], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 520;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3f55717a189b2d4b4be2e19a051cf871_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3f55717a189b2d4b4be2e19a051cf871_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3f55717a189b2d4b4be2e19a051cf871_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3f55717a189b2d4b4be2e19a051cf871_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_3f55717a189b2d4b4be2e19a051cf871_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_17;
        skip_nested_handling_5:;
        {
            PyObject *tmp_annotations_21;
            tmp_annotations_21 = DICT_COPY(mod_consts[236]);


            tmp_dictset_value = MAKE_FUNCTION_websocket$_app$$$function__21__callback(tmp_annotations_21);

            tmp_res = PyDict_SetItem(locals_websocket$_app$$$class__5_WebSocketApp_136, mod_consts[123], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_7;
            tmp_called_value_7 = (PyObject *)&PyType_Type;
            tmp_tuple_element_12 = mod_consts[194];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[212];
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_websocket$_app$$$class__5_WebSocketApp_136;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_7 = tmp_class_creation_5__class_decl_dict;
            frame_9be747efb5613afa278a2d2804af0555->m_frame.f_lineno = 136;
            tmp_assign_source_50 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto try_except_handler_17;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_50;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_49 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_49);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_websocket$_app$$$class__5_WebSocketApp_136);
        locals_websocket$_app$$$class__5_WebSocketApp_136 = NULL;
        goto try_return_handler_16;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_websocket$_app$$$class__5_WebSocketApp_136);
        locals_websocket$_app$$$class__5_WebSocketApp_136 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 136;
        goto try_except_handler_15;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_websocket$_app, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_49);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9be747efb5613afa278a2d2804af0555, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9be747efb5613afa278a2d2804af0555->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9be747efb5613afa278a2d2804af0555, exception_lineno);
    }



    assertFrameObject(frame_9be747efb5613afa278a2d2804af0555);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("websocket._app", false);

    Py_INCREF(module_websocket$_app);
    return module_websocket$_app;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_websocket$_app, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("websocket$_app", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
