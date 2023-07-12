/* Generated code for Python module 'httpcore._sync.http2'
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

/* The "module_httpcore$_sync$http2" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_httpcore$_sync$http2;
PyDictObject *moduledict_httpcore$_sync$http2;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[302];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[302];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("httpcore._sync.http2"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 302; i++) {
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
void checkModuleConstants_httpcore$_sync$http2(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 302; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_abf9a77f9d04a8d7c5603d19dc49d01c;
static PyCodeObject *codeobj_672f9d7d0cede4fbee43ba307348e541;
static PyCodeObject *codeobj_9054407a42acb251301f9fa2c59fe00b;
static PyCodeObject *codeobj_09ca3e5ef5a4512a3a9a45db0eb1ae6f;
static PyCodeObject *codeobj_43c74ff6dad3f9a07f6d95a26db71c2e;
static PyCodeObject *codeobj_c06772c979dd93900f202ea6aaf2674b;
static PyCodeObject *codeobj_78e48df81ed32f9bbe5fe99700c67b5b;
static PyCodeObject *codeobj_c2000d015e5a0c6ac5458e9f7ac529aa;
static PyCodeObject *codeobj_8dc402030b04720f73ad0dfac58ff0ed;
static PyCodeObject *codeobj_88d8b510f287b406e16b171cd7bcac71;
static PyCodeObject *codeobj_6199b3db982e001e8d7413b8c6e793c5;
static PyCodeObject *codeobj_0be06d72827afbb535bd50cee55409b3;
static PyCodeObject *codeobj_e0448418e93c73181d47418e60f0595f;
static PyCodeObject *codeobj_b31ba2dcbe10e8c2f20abc1ebc268a51;
static PyCodeObject *codeobj_95004fb6d3cd9cf43c07be6a91212e03;
static PyCodeObject *codeobj_a526c9fdba19855e750c49259f282eda;
static PyCodeObject *codeobj_76af70e37bbfe8ec480b97bac5c704ea;
static PyCodeObject *codeobj_975eeed9bb4a2a3c8b20eb3944619ef3;
static PyCodeObject *codeobj_ce7d1cb4dc16da0871be8e7f161e8347;
static PyCodeObject *codeobj_6f8a1cd2e052432ed031317d0f758ae3;
static PyCodeObject *codeobj_4fc307909ce7006c027170088f261df3;
static PyCodeObject *codeobj_c750470ac8d1987cbbbff24ba0a49bd0;
static PyCodeObject *codeobj_4df57d98d0c10f523402f35248b9af00;
static PyCodeObject *codeobj_b67220cf6b0a2be9f0c4e4ccf4c09cd8;
static PyCodeObject *codeobj_1a9cfa3190c7b5ff14e8cfdafa230f84;
static PyCodeObject *codeobj_497e738988c810ee979d8eb0e769e223;
static PyCodeObject *codeobj_a94c87ffb2741a44e11b796b3b4da2e6;
static PyCodeObject *codeobj_530e484cf57efd339d50521fc736d4f5;
static PyCodeObject *codeobj_407e20b8553acbcb6b8ae8f3d896f29d;
static PyCodeObject *codeobj_a6ce4402918c4c4d5b99a96c6785c135;
static PyCodeObject *codeobj_13e13997050b1617caabec6e2d06a002;
static PyCodeObject *codeobj_10616265dfcffc074bbb6f651d20e09c;
static PyCodeObject *codeobj_a22e57d6edb5302e175e3c51f06c7560;
static PyCodeObject *codeobj_b1380c85a1b4af602fb5cf9cf110375d;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[177]; CHECK_OBJECT(module_filename_obj);
    codeobj_abf9a77f9d04a8d7c5603d19dc49d01c = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[275], NULL, 1, 0, 0);
    codeobj_672f9d7d0cede4fbee43ba307348e541 = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[276], mod_consts[276], mod_consts[277], NULL, 1, 0, 0);
    codeobj_9054407a42acb251301f9fa2c59fe00b = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[276], mod_consts[276], mod_consts[277], NULL, 1, 0, 0);
    codeobj_09ca3e5ef5a4512a3a9a45db0eb1ae6f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[278], mod_consts[278], NULL, NULL, 0, 0, 0);
    codeobj_43c74ff6dad3f9a07f6d95a26db71c2e = MAKE_CODE_OBJECT(module_filename_obj, 37, CO_NOFREE, mod_consts[217], mod_consts[217], mod_consts[279], NULL, 0, 0, 0);
    codeobj_c06772c979dd93900f202ea6aaf2674b = MAKE_CODE_OBJECT(module_filename_obj, 444, CO_NOFREE, mod_consts[69], mod_consts[69], mod_consts[279], NULL, 0, 0, 0);
    codeobj_78e48df81ed32f9bbe5fe99700c67b5b = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[279], NULL, 0, 0, 0);
    codeobj_c2000d015e5a0c6ac5458e9f7ac529aa = MAKE_CODE_OBJECT(module_filename_obj, 432, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[40], mod_consts[40], mod_consts[280], NULL, 1, 0, 0);
    codeobj_8dc402030b04720f73ad0dfac58ff0ed = MAKE_CODE_OBJECT(module_filename_obj, 435, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[41], mod_consts[281], NULL, 4, 0, 0);
    codeobj_88d8b510f287b406e16b171cd7bcac71 = MAKE_CODE_OBJECT(module_filename_obj, 445, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[226], mod_consts[226], mod_consts[282], NULL, 4, 0, 0);
    codeobj_6199b3db982e001e8d7413b8c6e793c5 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[226], mod_consts[226], mod_consts[283], NULL, 4, 0, 0);
    codeobj_0be06d72827afbb535bd50cee55409b3 = MAKE_CODE_OBJECT(module_filename_obj, 453, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[284], NULL, 1, 0, 0);
    codeobj_e0448418e93c73181d47418e60f0595f = MAKE_CODE_OBJECT(module_filename_obj, 421, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[261], mod_consts[261], mod_consts[285], NULL, 1, 0, 0);
    codeobj_b31ba2dcbe10e8c2f20abc1ebc268a51 = MAKE_CODE_OBJECT(module_filename_obj, 317, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[139], mod_consts[139], mod_consts[286], NULL, 2, 0, 0);
    codeobj_95004fb6d3cd9cf43c07be6a91212e03 = MAKE_CODE_OBJECT(module_filename_obj, 267, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[135], mod_consts[135], mod_consts[287], NULL, 3, 0, 0);
    codeobj_a526c9fdba19855e750c49259f282eda = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[288], NULL, 3, 0, 0);
    codeobj_76af70e37bbfe8ec480b97bac5c704ea = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[132], mod_consts[132], mod_consts[289], NULL, 3, 0, 0);
    codeobj_975eeed9bb4a2a3c8b20eb3944619ef3 = MAKE_CODE_OBJECT(module_filename_obj, 256, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[115], mod_consts[115], mod_consts[290], NULL, 3, 0, 0);
    codeobj_ce7d1cb4dc16da0871be8e7f161e8347 = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[291], NULL, 2, 0, 0);
    codeobj_6f8a1cd2e052432ed031317d0f758ae3 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[49], mod_consts[49], mod_consts[292], NULL, 2, 0, 0);
    codeobj_4fc307909ce7006c027170088f261df3 = MAKE_CODE_OBJECT(module_filename_obj, 207, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[293], NULL, 3, 0, 0);
    codeobj_c750470ac8d1987cbbbff24ba0a49bd0 = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[294], NULL, 3, 0, 0);
    codeobj_4df57d98d0c10f523402f35248b9af00 = MAKE_CODE_OBJECT(module_filename_obj, 374, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[111], mod_consts[111], mod_consts[295], NULL, 3, 0, 0);
    codeobj_b67220cf6b0a2be9f0c4e4ccf4c09cd8 = MAKE_CODE_OBJECT(module_filename_obj, 347, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[296], NULL, 2, 0, 0);
    codeobj_1a9cfa3190c7b5ff14e8cfdafa230f84 = MAKE_CODE_OBJECT(module_filename_obj, 394, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[297], NULL, 2, 0, 0);
    codeobj_497e738988c810ee979d8eb0e769e223 = MAKE_CODE_OBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[280], NULL, 1, 0, 0);
    codeobj_a94c87ffb2741a44e11b796b3b4da2e6 = MAKE_CODE_OBJECT(module_filename_obj, 468, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[143], mod_consts[298], NULL, 1, 0, 0);
    codeobj_530e484cf57efd339d50521fc736d4f5 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[228], mod_consts[228], mod_consts[299], NULL, 2, 0, 0);
    codeobj_407e20b8553acbcb6b8ae8f3d896f29d = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[94], mod_consts[94], mod_consts[300], NULL, 1, 0, 0);
    codeobj_a6ce4402918c4c4d5b99a96c6785c135 = MAKE_CODE_OBJECT(module_filename_obj, 404, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[252], mod_consts[252], mod_consts[301], NULL, 1, 0, 0);
    codeobj_13e13997050b1617caabec6e2d06a002 = MAKE_CODE_OBJECT(module_filename_obj, 414, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[259], mod_consts[259], mod_consts[297], NULL, 1, 0, 0);
    codeobj_10616265dfcffc074bbb6f651d20e09c = MAKE_CODE_OBJECT(module_filename_obj, 397, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[250], mod_consts[250], mod_consts[280], NULL, 1, 0, 0);
    codeobj_a22e57d6edb5302e175e3c51f06c7560 = MAKE_CODE_OBJECT(module_filename_obj, 411, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[256], mod_consts[256], mod_consts[280], NULL, 1, 0, 0);
    codeobj_b1380c85a1b4af602fb5cf9cf110375d = MAKE_CODE_OBJECT(module_filename_obj, 408, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[254], mod_consts[254], mod_consts[280], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_httpcore$_sync$http2$$$function__1_has_body_headers$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_httpcore$_sync$http2$$$function__8__receive_response_body$$$genobj__1__receive_response_body(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_httpcore$_sync$http2$$$function__26___iter__$$$genobj__1___iter__(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__10__receive_events(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__11__response_closed(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__12_close(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__13__read_incoming_data(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__14__write_outgoing_data(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__15__wait_for_outgoing_flow(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__16_can_handle_request(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__17_is_available(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__18_has_expired(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__19_is_idle(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__1_has_body_headers(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__20_is_closed(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__21_info(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__22___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__23___enter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__24___exit__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__25___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__26___iter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__27_close(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__2___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__3_handle_request(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__4__send_connection_init(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__5__send_request_headers(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__6__send_request_body(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__7__receive_response(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__8__receive_response_body(PyObject *annotations);


static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__9__receive_stream_event(PyObject *annotations);


// The module function definitions.
static PyObject *impl_httpcore$_sync$http2$$$function__1_has_body_headers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_request = python_pars[0];
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_407e20b8553acbcb6b8ae8f3d896f29d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_407e20b8553acbcb6b8ae8f3d896f29d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_407e20b8553acbcb6b8ae8f3d896f29d)) {
        Py_XDECREF(cache_frame_407e20b8553acbcb6b8ae8f3d896f29d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_407e20b8553acbcb6b8ae8f3d896f29d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_407e20b8553acbcb6b8ae8f3d896f29d = MAKE_FUNCTION_FRAME(codeobj_407e20b8553acbcb6b8ae8f3d896f29d, module_httpcore$_sync$http2, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_407e20b8553acbcb6b8ae8f3d896f29d->m_type_description == NULL);
    frame_407e20b8553acbcb6b8ae8f3d896f29d = cache_frame_407e20b8553acbcb6b8ae8f3d896f29d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_407e20b8553acbcb6b8ae8f3d896f29d);
    assert(Py_REFCNT(frame_407e20b8553acbcb6b8ae8f3d896f29d) == 2);

    // Framed code:
    {
        PyObject *tmp_any_arg_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(par_request);
            tmp_expression_value_1 = par_request;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 27;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 25;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_any_arg_1 = MAKE_GENERATOR_httpcore$_sync$http2$$$function__1_has_body_headers$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = BUILTIN_ANY(tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
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
        exception_tb = MAKE_TRACEBACK(frame_407e20b8553acbcb6b8ae8f3d896f29d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_407e20b8553acbcb6b8ae8f3d896f29d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_407e20b8553acbcb6b8ae8f3d896f29d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_407e20b8553acbcb6b8ae8f3d896f29d,
        type_description_1,
        par_request
    );


    // Release cached frame if used for exception.
    if (frame_407e20b8553acbcb6b8ae8f3d896f29d == cache_frame_407e20b8553acbcb6b8ae8f3d896f29d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_407e20b8553acbcb6b8ae8f3d896f29d);
        cache_frame_407e20b8553acbcb6b8ae8f3d896f29d = NULL;
    }

    assertFrameObject(frame_407e20b8553acbcb6b8ae8f3d896f29d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct httpcore$_sync$http2$$$function__1_has_body_headers$$$genexpr__1_genexpr_locals {
    PyObject *var_k;
    PyObject *var_v;
    PyObject *tmp_iter_value_0;
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

static PyObject *httpcore$_sync$http2$$$function__1_has_body_headers$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpcore$_sync$http2$$$function__1_has_body_headers$$$genexpr__1_genexpr_locals *generator_heap = (struct httpcore$_sync$http2$$$function__1_has_body_headers$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
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
    generator_heap->tmp_iter_value_0 = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_abf9a77f9d04a8d7c5603d19dc49d01c, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
                generator_heap->type_description_1 = "Noo";
                generator_heap->exception_lineno = 25;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 25;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 25;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 25;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                    generator_heap->type_description_1 = "Noo";
                    generator_heap->exception_lineno = 25;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[1];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 25;
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_k;
            generator_heap->var_k = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_k);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_v;
            generator_heap->var_v = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_k);
        tmp_expression_value_2 = generator_heap->var_k;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 26;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 26;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 26;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_or_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_BYTES(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 26;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            generator_heap->exception_lineno = 26;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(generator_heap->var_k);
        tmp_expression_value_3 = generator_heap->var_k;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 26;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 26;
        tmp_cmp_expr_left_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 26;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = mod_consts[4];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_BYTES(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 26;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_expression_value_1 = tmp_or_left_value_1;
        or_end_1:;
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_or_left_truth_1, sizeof(int), &tmp_or_left_value_1, sizeof(PyObject *), &tmp_or_right_value_1, sizeof(PyObject *), &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_cmp_expr_left_2, sizeof(PyObject *), &tmp_cmp_expr_right_2, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_or_left_truth_1, sizeof(int), &tmp_or_left_value_1, sizeof(PyObject *), &tmp_or_right_value_1, sizeof(PyObject *), &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_cmp_expr_left_2, sizeof(PyObject *), &tmp_cmp_expr_right_2, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 26;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 25;
        generator_heap->type_description_1 = "Noo";
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

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
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
            NULL,
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
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
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

static PyObject *MAKE_GENERATOR_httpcore$_sync$http2$$$function__1_has_body_headers$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpcore$_sync$http2$$$function__1_has_body_headers$$$genexpr__1_genexpr_context,
        module_httpcore$_sync$http2,
        mod_consts[5],
#if PYTHON_VERSION >= 0x350
        mod_consts[6],
#endif
        codeobj_abf9a77f9d04a8d7c5603d19dc49d01c,
        closure,
        1,
#if 1
        sizeof(struct httpcore$_sync$http2$$$function__1_has_body_headers$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_sync$http2$$$function__2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_origin = python_pars[1];
    PyObject *par_stream = python_pars[2];
    PyObject *par_keepalive_expiry = python_pars[3];
    struct Nuitka_FrameObject *frame_6199b3db982e001e8d7413b8c6e793c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6199b3db982e001e8d7413b8c6e793c5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6199b3db982e001e8d7413b8c6e793c5)) {
        Py_XDECREF(cache_frame_6199b3db982e001e8d7413b8c6e793c5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6199b3db982e001e8d7413b8c6e793c5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6199b3db982e001e8d7413b8c6e793c5 = MAKE_FUNCTION_FRAME(codeobj_6199b3db982e001e8d7413b8c6e793c5, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6199b3db982e001e8d7413b8c6e793c5->m_type_description == NULL);
    frame_6199b3db982e001e8d7413b8c6e793c5 = cache_frame_6199b3db982e001e8d7413b8c6e793c5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6199b3db982e001e8d7413b8c6e793c5);
    assert(Py_REFCNT(frame_6199b3db982e001e8d7413b8c6e793c5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_origin);
        tmp_assattr_value_1 = par_origin;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_stream);
        tmp_assattr_value_2 = par_stream;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[8], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_keepalive_expiry);
        tmp_assattr_value_3 = par_keepalive_expiry;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[9], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_4;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[13]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_6199b3db982e001e8d7413b8c6e793c5->m_frame.f_lineno = 50;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assattr_value_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[15], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_assattr_target_5;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[17]);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[18], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[19], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = mod_consts[20];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[21], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_assattr_target_8;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_6199b3db982e001e8d7413b8c6e793c5->m_frame.f_lineno = 54;
        tmp_assattr_value_8 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assattr_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[23], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_called_value_3;
        PyObject *tmp_assattr_target_9;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_6199b3db982e001e8d7413b8c6e793c5->m_frame.f_lineno = 55;
        tmp_assattr_value_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_assattr_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[24], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_called_value_4;
        PyObject *tmp_assattr_target_10;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_6199b3db982e001e8d7413b8c6e793c5->m_frame.f_lineno = 56;
        tmp_assattr_value_10 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_assattr_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[25], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_called_value_5;
        PyObject *tmp_assattr_target_11;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_6199b3db982e001e8d7413b8c6e793c5->m_frame.f_lineno = 57;
        tmp_assattr_value_11 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        if (tmp_assattr_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[26], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        tmp_assattr_value_12 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[27], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        tmp_assattr_value_13 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[28], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        tmp_assattr_value_14 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[29], tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        tmp_assattr_value_15 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[30], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        tmp_assattr_value_16 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[31], tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        tmp_assattr_value_17 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[32], tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        tmp_assattr_value_18 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_18 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[33], tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6199b3db982e001e8d7413b8c6e793c5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6199b3db982e001e8d7413b8c6e793c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6199b3db982e001e8d7413b8c6e793c5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6199b3db982e001e8d7413b8c6e793c5,
        type_description_1,
        par_self,
        par_origin,
        par_stream,
        par_keepalive_expiry
    );


    // Release cached frame if used for exception.
    if (frame_6199b3db982e001e8d7413b8c6e793c5 == cache_frame_6199b3db982e001e8d7413b8c6e793c5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6199b3db982e001e8d7413b8c6e793c5);
        cache_frame_6199b3db982e001e8d7413b8c6e793c5 = NULL;
    }

    assertFrameObject(frame_6199b3db982e001e8d7413b8c6e793c5);

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
    CHECK_OBJECT(par_origin);
    Py_DECREF(par_origin);
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_keepalive_expiry);
    Py_DECREF(par_keepalive_expiry);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_origin);
    Py_DECREF(par_origin);
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    CHECK_OBJECT(par_keepalive_expiry);
    Py_DECREF(par_keepalive_expiry);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http2$$$function__3_handle_request(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *var_kwargs = NULL;
    PyObject *var_max_streams = NULL;
    PyObject *var_stream_id = NULL;
    PyObject *var_trace = NULL;
    PyObject *var_status = NULL;
    PyObject *var_headers = NULL;
    PyObject *var_exc = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    PyObject *tmp_with_3__enter = NULL;
    PyObject *tmp_with_3__exit = NULL;
    nuitka_bool tmp_with_3__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_3__source = NULL;
    PyObject *tmp_with_4__enter = NULL;
    PyObject *tmp_with_4__exit = NULL;
    nuitka_bool tmp_with_4__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_4__source = NULL;
    PyObject *tmp_with_5__enter = NULL;
    PyObject *tmp_with_5__exit = NULL;
    nuitka_bool tmp_with_5__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_5__source = NULL;
    PyObject *tmp_with_6__enter = NULL;
    PyObject *tmp_with_6__exit = NULL;
    nuitka_bool tmp_with_6__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_6__source = NULL;
    PyObject *tmp_with_7__enter = NULL;
    PyObject *tmp_with_7__exit = NULL;
    nuitka_bool tmp_with_7__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_7__source = NULL;
    struct Nuitka_FrameObject *frame_530e484cf57efd339d50521fc736d4f5;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
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
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
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
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    struct Nuitka_ExceptionStackItem exception_preserved_4;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    struct Nuitka_ExceptionStackItem exception_preserved_5;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    struct Nuitka_ExceptionStackItem exception_preserved_6;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    struct Nuitka_ExceptionStackItem exception_preserved_7;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    struct Nuitka_ExceptionStackItem exception_preserved_9;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    struct Nuitka_ExceptionStackItem exception_preserved_8;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    static struct Nuitka_FrameObject *cache_frame_530e484cf57efd339d50521fc736d4f5 = NULL;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_530e484cf57efd339d50521fc736d4f5)) {
        Py_XDECREF(cache_frame_530e484cf57efd339d50521fc736d4f5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_530e484cf57efd339d50521fc736d4f5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_530e484cf57efd339d50521fc736d4f5 = MAKE_FUNCTION_FRAME(codeobj_530e484cf57efd339d50521fc736d4f5, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_530e484cf57efd339d50521fc736d4f5->m_type_description == NULL);
    frame_530e484cf57efd339d50521fc736d4f5 = cache_frame_530e484cf57efd339d50521fc736d4f5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_530e484cf57efd339d50521fc736d4f5);
    assert(Py_REFCNT(frame_530e484cf57efd339d50521fc736d4f5) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_expression_value_3 = par_request;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[35]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 67;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[36]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 67;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 67;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[37];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_request);
            tmp_expression_value_5 = par_request;
            tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[35]);
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[36]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[38];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[39];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_6 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[7]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[38];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_1 = "ooooooooo";
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
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[38], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 72;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 72;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[24]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_8 = tmp_with_1__source;
        tmp_called_value_2 = LOOKUP_SPECIAL(tmp_expression_value_8, mod_consts[40]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 77;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_9 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_9, mod_consts[41]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooo";
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
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[18]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 78;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[42]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 78;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_tuple_element_2);
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[17]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[21]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[43];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_6 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_6;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[21], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooooooo";
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

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[19], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_assattr_target_3;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[42]);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[18], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 83;
        tmp_raise_type_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 83;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    branch_end_2:;
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
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_530e484cf57efd339d50521fc736d4f5, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_530e484cf57efd339d50521fc736d4f5, exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_BaseException;
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
    {
        nuitka_bool tmp_assign_source_7;
        tmp_assign_source_7 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_7;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        tmp_args_element_value_2 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_3 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_4 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 77;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_530e484cf57efd339d50521fc736d4f5->m_frame) frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_6;
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 77;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_530e484cf57efd339d50521fc736d4f5->m_frame) frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_6;
    branch_end_3:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_4;
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
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 77;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[45]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_4);
            Py_XDECREF(exception_keeper_value_4);
            Py_XDECREF(exception_keeper_tb_4);

            exception_lineno = 77;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_5:;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
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
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 77;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[45]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_6:;
    goto try_end_5;
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

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[23]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }
        assert(tmp_with_3__source == NULL);
        tmp_with_3__source = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_with_3__source);
        tmp_expression_value_16 = tmp_with_3__source;
        tmp_called_value_7 = LOOKUP_SPECIAL(tmp_expression_value_16, mod_consts[40]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 85;
        tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }
        assert(tmp_with_3__enter == NULL);
        tmp_with_3__enter = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_with_3__source);
        tmp_expression_value_17 = tmp_with_3__source;
        tmp_assign_source_10 = LOOKUP_SPECIAL(tmp_expression_value_17, mod_consts[41]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }
        assert(tmp_with_3__exit == NULL);
        tmp_with_3__exit = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_assign_source_11;
        tmp_assign_source_11 = NUITKA_BOOL_TRUE;
        tmp_with_3__indicator = tmp_assign_source_11;
    }
    // Tried code:
    // Tried code:
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(par_self);
        tmp_expression_value_18 = par_self;
        tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[27]);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[46];
        CHECK_OBJECT(par_request);
        tmp_dict_value_1 = par_request;
        tmp_assign_source_12 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_12, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_kwargs == NULL);
        var_kwargs = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }
        tmp_args_element_value_5 = mod_consts[48];
        CHECK_OBJECT(par_request);
        tmp_args_element_value_6 = par_request;
        CHECK_OBJECT(var_kwargs);
        tmp_args_element_value_7 = var_kwargs;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }
        assert(tmp_with_2__source == NULL);
        tmp_with_2__source = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_19 = tmp_with_2__source;
        tmp_called_value_9 = LOOKUP_SPECIAL(tmp_expression_value_19, mod_consts[40]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 88;
        tmp_assign_source_14 = CALL_FUNCTION_NO_ARGS(tmp_called_value_9);
        Py_DECREF(tmp_called_value_9);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }
        assert(tmp_with_2__enter == NULL);
        tmp_with_2__enter = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_20 = tmp_with_2__source;
        tmp_assign_source_15 = LOOKUP_SPECIAL(tmp_expression_value_20, mod_consts[41]);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }
        assert(tmp_with_2__exit == NULL);
        tmp_with_2__exit = tmp_assign_source_15;
    }
    {
        nuitka_bool tmp_assign_source_16;
        tmp_assign_source_16 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_16;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_21 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[49]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_kwargs);
        tmp_dircall_arg2_1 = var_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_call_result_3 = impl___main__$$$function__6_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooooo";
            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_6 == NULL) {
        exception_keeper_tb_6 = MAKE_TRACEBACK(frame_530e484cf57efd339d50521fc736d4f5, exception_keeper_lineno_6);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_530e484cf57efd339d50521fc736d4f5, exception_keeper_lineno_6);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    // Tried code:
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_5 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        nuitka_bool tmp_assign_source_17;
        tmp_assign_source_17 = NUITKA_BOOL_FALSE;
        tmp_with_2__indicator = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_10 = tmp_with_2__exit;
        tmp_args_element_value_8 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_9 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_10 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 88;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_operand_value_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_10, call_args);
        }

        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooo";
            goto try_except_handler_13;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooo";
            goto try_except_handler_13;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 88;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_530e484cf57efd339d50521fc736d4f5->m_frame) frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_13;
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 88;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_530e484cf57efd339d50521fc736d4f5->m_frame) frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_13;
    branch_end_8:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_11;
    // End of try:
    try_end_7:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_6;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_6:;
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

    {
        bool tmp_condition_result_10;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_with_2__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_10 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_11 = tmp_with_2__exit;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 88;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_11, mod_consts[45]);

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_8);
            Py_XDECREF(exception_keeper_value_8);
            Py_XDECREF(exception_keeper_tb_8);

            exception_lineno = 88;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_10:;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_10;
    // End of try:
    try_end_8:;
    {
        bool tmp_condition_result_11;
        nuitka_bool tmp_cmp_expr_left_7;
        nuitka_bool tmp_cmp_expr_right_7;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_7 = tmp_with_2__indicator;
        tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
        tmp_condition_result_11 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_12 = tmp_with_2__exit;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 88;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_12, mod_consts[45]);

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_11:;
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

    Py_XDECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    Py_XDECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_9;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_with_2__source);
    Py_DECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    CHECK_OBJECT(tmp_with_2__enter);
    Py_DECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[27], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(par_self);
        tmp_expression_value_24 = par_self;
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[15]);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[50]);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[51]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
        assert(var_max_streams == NULL);
        var_max_streams = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_assattr_target_5;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_max_streams);
        tmp_args_element_value_11 = var_max_streams;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 92;
        tmp_assattr_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_11);
        if (tmp_assattr_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[53], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
    }
    branch_no_7:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 3.
    exception_preserved_3 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_10 == NULL) {
        exception_keeper_tb_10 = MAKE_TRACEBACK(frame_530e484cf57efd339d50521fc736d4f5, exception_keeper_lineno_10);
    } else if (exception_keeper_lineno_10 != 0) {
        exception_keeper_tb_10 = ADD_TRACEBACK(exception_keeper_tb_10, frame_530e484cf57efd339d50521fc736d4f5, exception_keeper_lineno_10);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10);
    // Tried code:
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        tmp_cmp_expr_left_8 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_8 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_12 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        nuitka_bool tmp_assign_source_19;
        tmp_assign_source_19 = NUITKA_BOOL_FALSE;
        tmp_with_3__indicator = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_14 = tmp_with_3__exit;
        tmp_args_element_value_12 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_13 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_14 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 85;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_operand_value_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_14, call_args);
        }

        if (tmp_operand_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooo";
            goto try_except_handler_14;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooo";
            goto try_except_handler_14;
        }
        tmp_condition_result_13 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 85;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_530e484cf57efd339d50521fc736d4f5->m_frame) frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_14;
    branch_no_13:;
    goto branch_end_12;
    branch_no_12:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 85;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_530e484cf57efd339d50521fc736d4f5->m_frame) frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_14;
    branch_end_12:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_8;
    // End of try:
    try_end_11:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    goto try_end_10;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_10:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_14;
        nuitka_bool tmp_cmp_expr_left_9;
        nuitka_bool tmp_cmp_expr_right_9;
        assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_9 = tmp_with_3__indicator;
        tmp_cmp_expr_right_9 = NUITKA_BOOL_TRUE;
        tmp_condition_result_14 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_15 = tmp_with_3__exit;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 85;
        tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_15, mod_consts[45]);

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_12);
            Py_XDECREF(exception_keeper_value_12);
            Py_XDECREF(exception_keeper_tb_12);

            exception_lineno = 85;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_14:;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_7;
    // End of try:
    try_end_12:;
    {
        bool tmp_condition_result_15;
        nuitka_bool tmp_cmp_expr_left_10;
        nuitka_bool tmp_cmp_expr_right_10;
        assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_10 = tmp_with_3__indicator;
        tmp_cmp_expr_right_10 = NUITKA_BOOL_TRUE;
        tmp_condition_result_15 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_16 = tmp_with_3__exit;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 85;
        tmp_call_result_7 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_16, mod_consts[45]);

        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_15:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_3__source);
    tmp_with_3__source = NULL;
    Py_XDECREF(tmp_with_3__enter);
    tmp_with_3__enter = NULL;
    Py_XDECREF(tmp_with_3__exit);
    tmp_with_3__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_with_3__source);
    Py_DECREF(tmp_with_3__source);
    tmp_with_3__source = NULL;
    CHECK_OBJECT(tmp_with_3__enter);
    Py_DECREF(tmp_with_3__enter);
    tmp_with_3__enter = NULL;
    Py_XDECREF(tmp_with_3__exit);
    tmp_with_3__exit = NULL;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_25 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[53]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 94;
        tmp_call_result_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[54]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(par_self);
        tmp_expression_value_26 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[15]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooo";
            goto try_except_handler_15;
        }
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 97;
        tmp_assign_source_20 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[55]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooo";
            goto try_except_handler_15;
        }
        assert(var_stream_id == NULL);
        var_stream_id = tmp_assign_source_20;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_expression_value_27 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[30]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 98;
            type_description_1 = "ooooooooo";
            goto try_except_handler_15;
        }
        CHECK_OBJECT(var_stream_id);
        tmp_ass_subscript_1 = var_stream_id;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "ooooooooo";
            goto try_except_handler_15;
        }
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 4.
    exception_preserved_4 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_14 == NULL) {
        exception_keeper_tb_14 = MAKE_TRACEBACK(frame_530e484cf57efd339d50521fc736d4f5, exception_keeper_lineno_14);
    } else if (exception_keeper_lineno_14 != 0) {
        exception_keeper_tb_14 = ADD_TRACEBACK(exception_keeper_tb_14, frame_530e484cf57efd339d50521fc736d4f5, exception_keeper_lineno_14);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_14, &exception_keeper_value_14, &exception_keeper_tb_14);
    // Tried code:
    {
        bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_expression_value_29;
        tmp_cmp_expr_left_11 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooo";
            goto try_except_handler_16;
        }
        tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[56]);
        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooo";
            goto try_except_handler_16;
        }
        tmp_cmp_expr_right_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[57]);
        Py_DECREF(tmp_expression_value_28);
        if (tmp_cmp_expr_right_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooo";
            goto try_except_handler_16;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_right_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "ooooooooo";
            goto try_except_handler_16;
        }
        tmp_condition_result_16 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[28], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "ooooooooo";
            goto try_except_handler_16;
        }
    }
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_called_value_17;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooo";
            goto try_except_handler_16;
        }
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 101;
        tmp_raise_type_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_17);
        if (tmp_raise_type_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooo";
            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_3;
        exception_lineno = 101;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto try_except_handler_16;
    }
    goto branch_end_16;
    branch_no_16:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 96;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_530e484cf57efd339d50521fc736d4f5->m_frame) frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_16;
    branch_end_16:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&exception_preserved_4);

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_14:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[46];
        CHECK_OBJECT(par_request);
        tmp_dict_value_2 = par_request;
        tmp_assign_source_21 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[58];
        CHECK_OBJECT(var_stream_id);
        tmp_dict_value_2 = var_stream_id;
        tmp_res = PyDict_SetItem(tmp_assign_source_21, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        {
            PyObject *old = var_kwargs;
            var_kwargs = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooo";
            goto try_except_handler_18;
        }
        tmp_args_element_value_15 = mod_consts[59];
        CHECK_OBJECT(par_request);
        tmp_args_element_value_16 = par_request;
        CHECK_OBJECT(var_kwargs);
        tmp_args_element_value_17 = var_kwargs;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_18, call_args);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooo";
            goto try_except_handler_18;
        }
        assert(tmp_with_4__source == NULL);
        tmp_with_4__source = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_30;
        CHECK_OBJECT(tmp_with_4__source);
        tmp_expression_value_30 = tmp_with_4__source;
        tmp_called_value_19 = LOOKUP_SPECIAL(tmp_expression_value_30, mod_consts[40]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooo";
            goto try_except_handler_18;
        }
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 105;
        tmp_assign_source_23 = CALL_FUNCTION_NO_ARGS(tmp_called_value_19);
        Py_DECREF(tmp_called_value_19);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooo";
            goto try_except_handler_18;
        }
        assert(tmp_with_4__enter == NULL);
        tmp_with_4__enter = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_value_31;
        CHECK_OBJECT(tmp_with_4__source);
        tmp_expression_value_31 = tmp_with_4__source;
        tmp_assign_source_24 = LOOKUP_SPECIAL(tmp_expression_value_31, mod_consts[41]);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooo";
            goto try_except_handler_18;
        }
        assert(tmp_with_4__exit == NULL);
        tmp_with_4__exit = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_assign_source_25;
        tmp_assign_source_25 = NUITKA_BOOL_TRUE;
        tmp_with_4__indicator = tmp_assign_source_25;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_9;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_32 = par_self;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[60]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooo";
            goto try_except_handler_20;
        }
        CHECK_OBJECT(par_request);
        tmp_kw_call_value_0_1 = par_request;
        CHECK_OBJECT(var_stream_id);
        tmp_kw_call_value_1_1 = var_stream_id;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 106;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_call_result_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_20, kw_values, mod_consts[61]);
        }

        Py_DECREF(tmp_called_value_20);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooo";
            goto try_except_handler_20;
        }
        Py_DECREF(tmp_call_result_9);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 5.
    exception_preserved_5 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_16 == NULL) {
        exception_keeper_tb_16 = MAKE_TRACEBACK(frame_530e484cf57efd339d50521fc736d4f5, exception_keeper_lineno_16);
    } else if (exception_keeper_lineno_16 != 0) {
        exception_keeper_tb_16 = ADD_TRACEBACK(exception_keeper_tb_16, frame_530e484cf57efd339d50521fc736d4f5, exception_keeper_lineno_16);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_16, &exception_keeper_value_16, &exception_keeper_tb_16);
    // Tried code:
    {
        bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        tmp_cmp_expr_left_12 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_12 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_17 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        nuitka_bool tmp_assign_source_26;
        tmp_assign_source_26 = NUITKA_BOOL_FALSE;
        tmp_with_4__indicator = tmp_assign_source_26;
    }
    {
        bool tmp_condition_result_18;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        CHECK_OBJECT(tmp_with_4__exit);
        tmp_called_value_21 = tmp_with_4__exit;
        tmp_args_element_value_18 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_19 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_20 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_operand_value_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_21, call_args);
        }

        if (tmp_operand_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooo";
            goto try_except_handler_21;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooo";
            goto try_except_handler_21;
        }
        tmp_condition_result_18 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 105;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_530e484cf57efd339d50521fc736d4f5->m_frame) frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_21;
    branch_no_18:;
    goto branch_end_17;
    branch_no_17:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 105;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_530e484cf57efd339d50521fc736d4f5->m_frame) frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_21;
    branch_end_17:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(&exception_preserved_5);

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_19;
    // End of try:
    try_end_16:;
    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(&exception_preserved_5);

    goto try_end_15;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_15:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_19;
        nuitka_bool tmp_cmp_expr_left_13;
        nuitka_bool tmp_cmp_expr_right_13;
        assert(tmp_with_4__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_13 = tmp_with_4__indicator;
        tmp_cmp_expr_right_13 = NUITKA_BOOL_TRUE;
        tmp_condition_result_19 = (tmp_cmp_expr_left_13 == tmp_cmp_expr_right_13) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(tmp_with_4__exit);
        tmp_called_value_22 = tmp_with_4__exit;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 105;
        tmp_call_result_10 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_22, mod_consts[45]);

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_18);
            Py_XDECREF(exception_keeper_value_18);
            Py_XDECREF(exception_keeper_tb_18);

            exception_lineno = 105;
            type_description_1 = "ooooooooo";
            goto try_except_handler_18;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_no_19:;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto try_except_handler_18;
    // End of try:
    try_end_17:;
    {
        bool tmp_condition_result_20;
        nuitka_bool tmp_cmp_expr_left_14;
        nuitka_bool tmp_cmp_expr_right_14;
        assert(tmp_with_4__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_14 = tmp_with_4__indicator;
        tmp_cmp_expr_right_14 = NUITKA_BOOL_TRUE;
        tmp_condition_result_20 = (tmp_cmp_expr_left_14 == tmp_cmp_expr_right_14) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_call_result_11;
        CHECK_OBJECT(tmp_with_4__exit);
        tmp_called_value_23 = tmp_with_4__exit;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 105;
        tmp_call_result_11 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_23, mod_consts[45]);

        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "ooooooooo";
            goto try_except_handler_18;
        }
        Py_DECREF(tmp_call_result_11);
    }
    branch_no_20:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_4__source);
    tmp_with_4__source = NULL;
    Py_XDECREF(tmp_with_4__enter);
    tmp_with_4__enter = NULL;
    Py_XDECREF(tmp_with_4__exit);
    tmp_with_4__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_17;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(tmp_with_4__source);
    Py_DECREF(tmp_with_4__source);
    tmp_with_4__source = NULL;
    CHECK_OBJECT(tmp_with_4__enter);
    Py_DECREF(tmp_with_4__enter);
    tmp_with_4__enter = NULL;
    Py_XDECREF(tmp_with_4__exit);
    tmp_with_4__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooo";
            goto try_except_handler_22;
        }
        tmp_args_element_value_21 = mod_consts[62];
        CHECK_OBJECT(par_request);
        tmp_args_element_value_22 = par_request;
        CHECK_OBJECT(var_kwargs);
        tmp_args_element_value_23 = var_kwargs;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_assign_source_27 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_24, call_args);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooo";
            goto try_except_handler_22;
        }
        assert(tmp_with_5__source == NULL);
        tmp_with_5__source = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_33;
        CHECK_OBJECT(tmp_with_5__source);
        tmp_expression_value_33 = tmp_with_5__source;
        tmp_called_value_25 = LOOKUP_SPECIAL(tmp_expression_value_33, mod_consts[40]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooo";
            goto try_except_handler_22;
        }
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 107;
        tmp_assign_source_28 = CALL_FUNCTION_NO_ARGS(tmp_called_value_25);
        Py_DECREF(tmp_called_value_25);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooo";
            goto try_except_handler_22;
        }
        assert(tmp_with_5__enter == NULL);
        tmp_with_5__enter = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(tmp_with_5__source);
        tmp_expression_value_34 = tmp_with_5__source;
        tmp_assign_source_29 = LOOKUP_SPECIAL(tmp_expression_value_34, mod_consts[41]);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooo";
            goto try_except_handler_22;
        }
        assert(tmp_with_5__exit == NULL);
        tmp_with_5__exit = tmp_assign_source_29;
    }
    {
        nuitka_bool tmp_assign_source_30;
        tmp_assign_source_30 = NUITKA_BOOL_TRUE;
        tmp_with_5__indicator = tmp_assign_source_30;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_12;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_35 = par_self;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[63]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(par_request);
        tmp_kw_call_value_0_2 = par_request;
        CHECK_OBJECT(var_stream_id);
        tmp_kw_call_value_1_2 = var_stream_id;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 108;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

            tmp_call_result_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_26, kw_values, mod_consts[61]);
        }

        Py_DECREF(tmp_called_value_26);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooo";
            goto try_except_handler_24;
        }
        Py_DECREF(tmp_call_result_12);
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 6.
    exception_preserved_6 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_20 == NULL) {
        exception_keeper_tb_20 = MAKE_TRACEBACK(frame_530e484cf57efd339d50521fc736d4f5, exception_keeper_lineno_20);
    } else if (exception_keeper_lineno_20 != 0) {
        exception_keeper_tb_20 = ADD_TRACEBACK(exception_keeper_tb_20, frame_530e484cf57efd339d50521fc736d4f5, exception_keeper_lineno_20);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_20, &exception_keeper_value_20, &exception_keeper_tb_20);
    // Tried code:
    {
        bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        tmp_cmp_expr_left_15 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_15 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_21 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        nuitka_bool tmp_assign_source_31;
        tmp_assign_source_31 = NUITKA_BOOL_FALSE;
        tmp_with_5__indicator = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_22;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        CHECK_OBJECT(tmp_with_5__exit);
        tmp_called_value_27 = tmp_with_5__exit;
        tmp_args_element_value_24 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_25 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_26 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 107;
        {
            PyObject *call_args[] = {tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_operand_value_7 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_27, call_args);
        }

        if (tmp_operand_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooo";
            goto try_except_handler_25;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        Py_DECREF(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooo";
            goto try_except_handler_25;
        }
        tmp_condition_result_22 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 107;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_530e484cf57efd339d50521fc736d4f5->m_frame) frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_25;
    branch_no_22:;
    goto branch_end_21;
    branch_no_21:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 107;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_530e484cf57efd339d50521fc736d4f5->m_frame) frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_25;
    branch_end_21:;
    goto try_end_20;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(&exception_preserved_6);

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto try_except_handler_23;
    // End of try:
    try_end_20:;
    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(&exception_preserved_6);

    goto try_end_19;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_19:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_23;
        nuitka_bool tmp_cmp_expr_left_16;
        nuitka_bool tmp_cmp_expr_right_16;
        assert(tmp_with_5__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_16 = tmp_with_5__indicator;
        tmp_cmp_expr_right_16 = NUITKA_BOOL_TRUE;
        tmp_condition_result_23 = (tmp_cmp_expr_left_16 == tmp_cmp_expr_right_16) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_call_result_13;
        CHECK_OBJECT(tmp_with_5__exit);
        tmp_called_value_28 = tmp_with_5__exit;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 107;
        tmp_call_result_13 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_28, mod_consts[45]);

        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_22);
            Py_XDECREF(exception_keeper_value_22);
            Py_XDECREF(exception_keeper_tb_22);

            exception_lineno = 107;
            type_description_1 = "ooooooooo";
            goto try_except_handler_22;
        }
        Py_DECREF(tmp_call_result_13);
    }
    branch_no_23:;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_22;
    // End of try:
    try_end_21:;
    {
        bool tmp_condition_result_24;
        nuitka_bool tmp_cmp_expr_left_17;
        nuitka_bool tmp_cmp_expr_right_17;
        assert(tmp_with_5__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_17 = tmp_with_5__indicator;
        tmp_cmp_expr_right_17 = NUITKA_BOOL_TRUE;
        tmp_condition_result_24 = (tmp_cmp_expr_left_17 == tmp_cmp_expr_right_17) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_call_result_14;
        CHECK_OBJECT(tmp_with_5__exit);
        tmp_called_value_29 = tmp_with_5__exit;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 107;
        tmp_call_result_14 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_29, mod_consts[45]);

        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooo";
            goto try_except_handler_22;
        }
        Py_DECREF(tmp_call_result_14);
    }
    branch_no_24:;
    goto try_end_22;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_5__source);
    tmp_with_5__source = NULL;
    Py_XDECREF(tmp_with_5__enter);
    tmp_with_5__enter = NULL;
    Py_XDECREF(tmp_with_5__exit);
    tmp_with_5__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto try_except_handler_17;
    // End of try:
    try_end_22:;
    CHECK_OBJECT(tmp_with_5__source);
    Py_DECREF(tmp_with_5__source);
    tmp_with_5__source = NULL;
    CHECK_OBJECT(tmp_with_5__enter);
    Py_DECREF(tmp_with_5__enter);
    tmp_with_5__enter = NULL;
    Py_XDECREF(tmp_with_5__exit);
    tmp_with_5__exit = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooo";
            goto try_except_handler_26;
        }
        tmp_args_element_value_27 = mod_consts[64];
        CHECK_OBJECT(par_request);
        tmp_args_element_value_28 = par_request;
        CHECK_OBJECT(var_kwargs);
        tmp_args_element_value_29 = var_kwargs;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29};
            tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_30, call_args);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooo";
            goto try_except_handler_26;
        }
        assert(tmp_with_6__source == NULL);
        tmp_with_6__source = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(tmp_with_6__source);
        tmp_expression_value_36 = tmp_with_6__source;
        tmp_called_value_31 = LOOKUP_SPECIAL(tmp_expression_value_36, mod_consts[40]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooo";
            goto try_except_handler_26;
        }
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 109;
        tmp_assign_source_33 = CALL_FUNCTION_NO_ARGS(tmp_called_value_31);
        Py_DECREF(tmp_called_value_31);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooo";
            goto try_except_handler_26;
        }
        assert(tmp_with_6__enter == NULL);
        tmp_with_6__enter = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_expression_value_37;
        CHECK_OBJECT(tmp_with_6__source);
        tmp_expression_value_37 = tmp_with_6__source;
        tmp_assign_source_34 = LOOKUP_SPECIAL(tmp_expression_value_37, mod_consts[41]);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooo";
            goto try_except_handler_26;
        }
        assert(tmp_with_6__exit == NULL);
        tmp_with_6__exit = tmp_assign_source_34;
    }
    {
        nuitka_bool tmp_assign_source_35;
        tmp_assign_source_35 = NUITKA_BOOL_TRUE;
        tmp_with_6__indicator = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_with_6__enter);
        tmp_assign_source_36 = tmp_with_6__enter;
        assert(var_trace == NULL);
        Py_INCREF(tmp_assign_source_36);
        var_trace = tmp_assign_source_36;
    }
    // Tried code:
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_38 = par_self;
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[65]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooo";
            goto try_except_handler_29;
        }
        CHECK_OBJECT(par_request);
        tmp_kw_call_value_0_3 = par_request;
        CHECK_OBJECT(var_stream_id);
        tmp_kw_call_value_1_3 = var_stream_id;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 112;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3};

            tmp_iter_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_32, kw_values, mod_consts[61]);
        }

        Py_DECREF(tmp_called_value_32);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooo";
            goto try_except_handler_29;
        }
        tmp_assign_source_37 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooo";
            goto try_except_handler_29;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_37;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_38 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_38 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 112;
            goto try_except_handler_30;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_39 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_39 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 112;
            goto try_except_handler_30;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_39;
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
                    exception_lineno = 112;
                    goto try_except_handler_30;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[1];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 112;
            goto try_except_handler_30;
        }
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto try_except_handler_29;
    // End of try:
    try_end_23:;
    goto try_end_24;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto try_except_handler_28;
    // End of try:
    try_end_24:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_40 = tmp_tuple_unpack_1__element_1;
        assert(var_status == NULL);
        Py_INCREF(tmp_assign_source_40);
        var_status = tmp_assign_source_40;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_41 = tmp_tuple_unpack_1__element_2;
        assert(var_headers == NULL);
        Py_INCREF(tmp_assign_source_41);
        var_headers = tmp_assign_source_41;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(var_status);
        tmp_tuple_element_3 = var_status;
        tmp_assattr_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assattr_value_7, 0, tmp_tuple_element_3);
        CHECK_OBJECT(var_headers);
        tmp_tuple_element_3 = var_headers;
        PyTuple_SET_ITEM0(tmp_assattr_value_7, 1, tmp_tuple_element_3);
        CHECK_OBJECT(var_trace);
        tmp_assattr_target_7 = var_trace;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[66], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooo";
            goto try_except_handler_28;
        }
    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 7.
    exception_preserved_7 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_26 == NULL) {
        exception_keeper_tb_26 = MAKE_TRACEBACK(frame_530e484cf57efd339d50521fc736d4f5, exception_keeper_lineno_26);
    } else if (exception_keeper_lineno_26 != 0) {
        exception_keeper_tb_26 = ADD_TRACEBACK(exception_keeper_tb_26, frame_530e484cf57efd339d50521fc736d4f5, exception_keeper_lineno_26);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_26, &exception_keeper_value_26, &exception_keeper_tb_26);
    // Tried code:
    {
        bool tmp_condition_result_25;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        tmp_cmp_expr_left_18 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_18 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_25 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_25 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    {
        nuitka_bool tmp_assign_source_42;
        tmp_assign_source_42 = NUITKA_BOOL_FALSE;
        tmp_with_6__indicator = tmp_assign_source_42;
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        CHECK_OBJECT(tmp_with_6__exit);
        tmp_called_value_33 = tmp_with_6__exit;
        tmp_args_element_value_30 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_31 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_32 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31, tmp_args_element_value_32};
            tmp_operand_value_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_33, call_args);
        }

        if (tmp_operand_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooo";
            goto try_except_handler_31;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        Py_DECREF(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooo";
            goto try_except_handler_31;
        }
        tmp_condition_result_26 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 109;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_530e484cf57efd339d50521fc736d4f5->m_frame) frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_31;
    branch_no_26:;
    goto branch_end_25;
    branch_no_25:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 109;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_530e484cf57efd339d50521fc736d4f5->m_frame) frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_31;
    branch_end_25:;
    goto try_end_26;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(&exception_preserved_7);

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto try_except_handler_27;
    // End of try:
    try_end_26:;
    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(&exception_preserved_7);

    goto try_end_25;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_25:;
    goto try_end_27;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_27;
        nuitka_bool tmp_cmp_expr_left_19;
        nuitka_bool tmp_cmp_expr_right_19;
        assert(tmp_with_6__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_19 = tmp_with_6__indicator;
        tmp_cmp_expr_right_19 = NUITKA_BOOL_TRUE;
        tmp_condition_result_27 = (tmp_cmp_expr_left_19 == tmp_cmp_expr_right_19) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_call_result_15;
        CHECK_OBJECT(tmp_with_6__exit);
        tmp_called_value_34 = tmp_with_6__exit;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 109;
        tmp_call_result_15 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_34, mod_consts[45]);

        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_28);
            Py_XDECREF(exception_keeper_value_28);
            Py_XDECREF(exception_keeper_tb_28);

            exception_lineno = 109;
            type_description_1 = "ooooooooo";
            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_15);
    }
    branch_no_27:;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto try_except_handler_26;
    // End of try:
    try_end_27:;
    {
        bool tmp_condition_result_28;
        nuitka_bool tmp_cmp_expr_left_20;
        nuitka_bool tmp_cmp_expr_right_20;
        assert(tmp_with_6__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_20 = tmp_with_6__indicator;
        tmp_cmp_expr_right_20 = NUITKA_BOOL_TRUE;
        tmp_condition_result_28 = (tmp_cmp_expr_left_20 == tmp_cmp_expr_right_20) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_call_result_16;
        CHECK_OBJECT(tmp_with_6__exit);
        tmp_called_value_35 = tmp_with_6__exit;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 109;
        tmp_call_result_16 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_35, mod_consts[45]);

        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooo";
            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_16);
    }
    branch_no_28:;
    goto try_end_28;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_6__source);
    tmp_with_6__source = NULL;
    Py_XDECREF(tmp_with_6__enter);
    tmp_with_6__enter = NULL;
    Py_XDECREF(tmp_with_6__exit);
    tmp_with_6__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto try_except_handler_17;
    // End of try:
    try_end_28:;
    CHECK_OBJECT(tmp_with_6__source);
    Py_DECREF(tmp_with_6__source);
    tmp_with_6__source = NULL;
    CHECK_OBJECT(tmp_with_6__enter);
    Py_DECREF(tmp_with_6__enter);
    tmp_with_6__enter = NULL;
    Py_XDECREF(tmp_with_6__exit);
    tmp_with_6__exit = NULL;
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_called_value_37;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooo";
            goto try_except_handler_17;
        }
        if (var_status == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 118;
            type_description_1 = "ooooooooo";
            goto try_except_handler_17;
        }

        tmp_kw_call_value_0_4 = var_status;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 119;
            type_description_1 = "ooooooooo";
            goto try_except_handler_17;
        }

        tmp_kw_call_value_1_4 = var_headers;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooo";
            goto try_except_handler_17;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;
        CHECK_OBJECT(par_request);
        tmp_kw_call_arg_value_1_1 = par_request;
        CHECK_OBJECT(var_stream_id);
        tmp_kw_call_dict_value_0_1 = var_stream_id;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 120;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_kw_call_value_2_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_37, args, kw_values, mod_consts[70]);
        }

        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooo";
            goto try_except_handler_17;
        }
        tmp_dict_key_3 = mod_consts[58];
        CHECK_OBJECT(var_stream_id);
        tmp_dict_value_3 = var_stream_id;
        tmp_kw_call_value_3_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_call_value_3_1, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[71];
        tmp_dict_value_3 = mod_consts[72];
        tmp_res = PyDict_SetItem(tmp_kw_call_value_3_1, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 117;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_36, kw_values, mod_consts[73]);
        }

        Py_DECREF(tmp_kw_call_value_2_1);
        Py_DECREF(tmp_kw_call_value_3_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooo";
            goto try_except_handler_17;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 9.
    exception_preserved_9 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_30 == NULL) {
        exception_keeper_tb_30 = MAKE_TRACEBACK(frame_530e484cf57efd339d50521fc736d4f5, exception_keeper_lineno_30);
    } else if (exception_keeper_lineno_30 != 0) {
        exception_keeper_tb_30 = ADD_TRACEBACK(exception_keeper_tb_30, frame_530e484cf57efd339d50521fc736d4f5, exception_keeper_lineno_30);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_30, &exception_keeper_value_30, &exception_keeper_tb_30);
    // Tried code:
    {
        bool tmp_condition_result_29;
        PyObject *tmp_cmp_expr_left_21;
        PyObject *tmp_cmp_expr_right_21;
        tmp_cmp_expr_left_21 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_21 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
        assert(!(tmp_res == -1));
        tmp_condition_result_29 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = EXC_VALUE(PyThreadState_GET());
        assert(var_exc == NULL);
        Py_INCREF(tmp_assign_source_43);
        var_exc = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_dict_key_4 = mod_consts[58];
        CHECK_OBJECT(var_stream_id);
        tmp_dict_value_4 = var_stream_id;
        tmp_assign_source_44 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_44, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        {
            PyObject *old = var_kwargs;
            assert(old != NULL);
            var_kwargs = tmp_assign_source_44;
            Py_DECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_args_element_value_35;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooo";
            goto try_except_handler_34;
        }
        tmp_args_element_value_33 = mod_consts[74];
        CHECK_OBJECT(par_request);
        tmp_args_element_value_34 = par_request;
        CHECK_OBJECT(var_kwargs);
        tmp_args_element_value_35 = var_kwargs;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34, tmp_args_element_value_35};
            tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_38, call_args);
        }

        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooo";
            goto try_except_handler_34;
        }
        assert(tmp_with_7__source == NULL);
        tmp_with_7__source = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_39;
        CHECK_OBJECT(tmp_with_7__source);
        tmp_expression_value_39 = tmp_with_7__source;
        tmp_called_value_39 = LOOKUP_SPECIAL(tmp_expression_value_39, mod_consts[40]);
        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooo";
            goto try_except_handler_34;
        }
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 125;
        tmp_assign_source_46 = CALL_FUNCTION_NO_ARGS(tmp_called_value_39);
        Py_DECREF(tmp_called_value_39);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooo";
            goto try_except_handler_34;
        }
        assert(tmp_with_7__enter == NULL);
        tmp_with_7__enter = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_expression_value_40;
        CHECK_OBJECT(tmp_with_7__source);
        tmp_expression_value_40 = tmp_with_7__source;
        tmp_assign_source_47 = LOOKUP_SPECIAL(tmp_expression_value_40, mod_consts[41]);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooo";
            goto try_except_handler_34;
        }
        assert(tmp_with_7__exit == NULL);
        tmp_with_7__exit = tmp_assign_source_47;
    }
    {
        nuitka_bool tmp_assign_source_48;
        tmp_assign_source_48 = NUITKA_BOOL_TRUE;
        tmp_with_7__indicator = tmp_assign_source_48;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_call_result_17;
        PyObject *tmp_kw_call_value_0_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_41 = par_self;
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[75]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooo";
            goto try_except_handler_36;
        }
        CHECK_OBJECT(var_stream_id);
        tmp_kw_call_value_0_5 = var_stream_id;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 126;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};

            tmp_call_result_17 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_40, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_40);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooooo";
            goto try_except_handler_36;
        }
        Py_DECREF(tmp_call_result_17);
    }
    goto try_end_29;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 8.
    exception_preserved_8 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_31 == NULL) {
        exception_keeper_tb_31 = MAKE_TRACEBACK(frame_530e484cf57efd339d50521fc736d4f5, exception_keeper_lineno_31);
    } else if (exception_keeper_lineno_31 != 0) {
        exception_keeper_tb_31 = ADD_TRACEBACK(exception_keeper_tb_31, frame_530e484cf57efd339d50521fc736d4f5, exception_keeper_lineno_31);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_31, &exception_keeper_value_31, &exception_keeper_tb_31);
    // Tried code:
    {
        bool tmp_condition_result_30;
        PyObject *tmp_cmp_expr_left_22;
        PyObject *tmp_cmp_expr_right_22;
        tmp_cmp_expr_left_22 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_22 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
        assert(!(tmp_res == -1));
        tmp_condition_result_30 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        nuitka_bool tmp_assign_source_49;
        tmp_assign_source_49 = NUITKA_BOOL_FALSE;
        tmp_with_7__indicator = tmp_assign_source_49;
    }
    {
        bool tmp_condition_result_31;
        PyObject *tmp_operand_value_9;
        PyObject *tmp_called_value_41;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        CHECK_OBJECT(tmp_with_7__exit);
        tmp_called_value_41 = tmp_with_7__exit;
        tmp_args_element_value_36 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_37 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_38 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 125;
        {
            PyObject *call_args[] = {tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_38};
            tmp_operand_value_9 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_41, call_args);
        }

        if (tmp_operand_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooo";
            goto try_except_handler_37;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        Py_DECREF(tmp_operand_value_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooo";
            goto try_except_handler_37;
        }
        tmp_condition_result_31 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_31 != false) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 125;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_530e484cf57efd339d50521fc736d4f5->m_frame) frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_37;
    branch_no_31:;
    goto branch_end_30;
    branch_no_30:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 125;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_530e484cf57efd339d50521fc736d4f5->m_frame) frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_37;
    branch_end_30:;
    goto try_end_30;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 8.
    SET_CURRENT_EXCEPTION(&exception_preserved_8);

    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto try_except_handler_35;
    // End of try:
    try_end_30:;
    // Restore previous exception id 8.
    SET_CURRENT_EXCEPTION(&exception_preserved_8);

    goto try_end_29;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_29:;
    goto try_end_31;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_32;
        nuitka_bool tmp_cmp_expr_left_23;
        nuitka_bool tmp_cmp_expr_right_23;
        assert(tmp_with_7__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_23 = tmp_with_7__indicator;
        tmp_cmp_expr_right_23 = NUITKA_BOOL_TRUE;
        tmp_condition_result_32 = (tmp_cmp_expr_left_23 == tmp_cmp_expr_right_23) ? true : false;
        if (tmp_condition_result_32 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_call_result_18;
        CHECK_OBJECT(tmp_with_7__exit);
        tmp_called_value_42 = tmp_with_7__exit;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 125;
        tmp_call_result_18 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_42, mod_consts[45]);

        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_33);
            Py_XDECREF(exception_keeper_value_33);
            Py_XDECREF(exception_keeper_tb_33);

            exception_lineno = 125;
            type_description_1 = "ooooooooo";
            goto try_except_handler_34;
        }
        Py_DECREF(tmp_call_result_18);
    }
    branch_no_32:;
    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto try_except_handler_34;
    // End of try:
    try_end_31:;
    {
        bool tmp_condition_result_33;
        nuitka_bool tmp_cmp_expr_left_24;
        nuitka_bool tmp_cmp_expr_right_24;
        assert(tmp_with_7__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_24 = tmp_with_7__indicator;
        tmp_cmp_expr_right_24 = NUITKA_BOOL_TRUE;
        tmp_condition_result_33 = (tmp_cmp_expr_left_24 == tmp_cmp_expr_right_24) ? true : false;
        if (tmp_condition_result_33 != false) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        PyObject *tmp_called_value_43;
        PyObject *tmp_call_result_19;
        CHECK_OBJECT(tmp_with_7__exit);
        tmp_called_value_43 = tmp_with_7__exit;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 125;
        tmp_call_result_19 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_43, mod_consts[45]);

        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooooo";
            goto try_except_handler_34;
        }
        Py_DECREF(tmp_call_result_19);
    }
    branch_no_33:;
    goto try_end_32;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_7__source);
    tmp_with_7__source = NULL;
    Py_XDECREF(tmp_with_7__enter);
    tmp_with_7__enter = NULL;
    Py_XDECREF(tmp_with_7__exit);
    tmp_with_7__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto try_except_handler_33;
    // End of try:
    try_end_32:;
    CHECK_OBJECT(tmp_with_7__source);
    Py_DECREF(tmp_with_7__source);
    tmp_with_7__source = NULL;
    CHECK_OBJECT(tmp_with_7__enter);
    Py_DECREF(tmp_with_7__enter);
    tmp_with_7__enter = NULL;
    Py_XDECREF(tmp_with_7__exit);
    tmp_with_7__exit = NULL;
    {
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_expression_value_43;
        CHECK_OBJECT(var_exc);
        tmp_isinstance_inst_1 = var_exc;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooo";
            goto try_except_handler_33;
        }
        tmp_expression_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[56]);
        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooo";
            goto try_except_handler_33;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[76]);
        Py_DECREF(tmp_expression_value_42);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooo";
            goto try_except_handler_33;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooooo";
            goto try_except_handler_33;
        }
        tmp_condition_result_34 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        nuitka_bool tmp_condition_result_35;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_44 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[33]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "ooooooooo";
            goto try_except_handler_33;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 138;
            type_description_1 = "ooooooooo";
            goto try_except_handler_33;
        }
        tmp_condition_result_35 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_called_value_44;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_expression_value_45;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooo";
            goto try_except_handler_33;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_45 = par_self;
        tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[33]);
        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooo";
            goto try_except_handler_33;
        }
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 139;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_39);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_raise_type_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooo";
            goto try_except_handler_33;
        }
        exception_type = tmp_raise_type_4;
        exception_lineno = 139;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto try_except_handler_33;
    }
    branch_no_35:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_element_value_40;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooo";
            goto try_except_handler_33;
        }
        CHECK_OBJECT(var_exc);
        tmp_args_element_value_40 = var_exc;
        frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = 142;
        tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_40);
        if (tmp_raise_type_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooo";
            goto try_except_handler_33;
        }
        exception_type = tmp_raise_type_5;
        exception_lineno = 142;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto try_except_handler_33;
    }
    branch_no_34:;
    {
        PyObject *tmp_raise_type_6;
        CHECK_OBJECT(var_exc);
        tmp_raise_type_6 = var_exc;
        exception_type = tmp_raise_type_6;
        Py_INCREF(tmp_raise_type_6);
        exception_lineno = 144;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto try_except_handler_33;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_exc);
    var_exc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto try_except_handler_32;
    // End of try:
    goto branch_end_29;
    branch_no_29:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 103;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_530e484cf57efd339d50521fc736d4f5->m_frame) frame_530e484cf57efd339d50521fc736d4f5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_32;
    branch_end_29:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 9.
    SET_CURRENT_EXCEPTION(&exception_preserved_9);

    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_530e484cf57efd339d50521fc736d4f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_530e484cf57efd339d50521fc736d4f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_530e484cf57efd339d50521fc736d4f5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_530e484cf57efd339d50521fc736d4f5,
        type_description_1,
        par_self,
        par_request,
        var_kwargs,
        var_max_streams,
        var_stream_id,
        var_trace,
        var_status,
        var_headers,
        var_exc
    );


    // Release cached frame if used for exception.
    if (frame_530e484cf57efd339d50521fc736d4f5 == cache_frame_530e484cf57efd339d50521fc736d4f5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_530e484cf57efd339d50521fc736d4f5);
        cache_frame_530e484cf57efd339d50521fc736d4f5 = NULL;
    }

    assertFrameObject(frame_530e484cf57efd339d50521fc736d4f5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_kwargs);
    Py_DECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_max_streams);
    var_max_streams = NULL;
    CHECK_OBJECT(var_stream_id);
    Py_DECREF(var_stream_id);
    var_stream_id = NULL;
    Py_XDECREF(var_trace);
    var_trace = NULL;
    Py_XDECREF(var_status);
    var_status = NULL;
    Py_XDECREF(var_headers);
    var_headers = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
    Py_XDECREF(var_max_streams);
    var_max_streams = NULL;
    Py_XDECREF(var_stream_id);
    var_stream_id = NULL;
    Py_XDECREF(var_trace);
    var_trace = NULL;
    Py_XDECREF(var_status);
    var_status = NULL;
    Py_XDECREF(var_headers);
    var_headers = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http2$$$function__4__send_connection_init(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    struct Nuitka_FrameObject *frame_6f8a1cd2e052432ed031317d0f758ae3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6f8a1cd2e052432ed031317d0f758ae3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6f8a1cd2e052432ed031317d0f758ae3)) {
        Py_XDECREF(cache_frame_6f8a1cd2e052432ed031317d0f758ae3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6f8a1cd2e052432ed031317d0f758ae3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6f8a1cd2e052432ed031317d0f758ae3 = MAKE_FUNCTION_FRAME(codeobj_6f8a1cd2e052432ed031317d0f758ae3, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6f8a1cd2e052432ed031317d0f758ae3->m_type_description == NULL);
    frame_6f8a1cd2e052432ed031317d0f758ae3 = cache_frame_6f8a1cd2e052432ed031317d0f758ae3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6f8a1cd2e052432ed031317d0f758ae3);
    assert(Py_REFCNT(frame_6f8a1cd2e052432ed031317d0f758ae3) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[79]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[80]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = Py_True;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 159;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[79]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 159;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[81]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 159;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[82]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 159;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = mod_consts[20];
        tmp_kw_call_value_1_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[79]);
            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[81]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[83]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[84];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[79]);
            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[81]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[85]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = mod_consts[86];
            tmp_res = PyDict_SetItem(tmp_kw_call_value_1_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_6f8a1cd2e052432ed031317d0f758ae3->m_frame.f_lineno = 154;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assattr_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[87]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[15]);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_1);

            exception_lineno = 154;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[50], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_delsubscr_subscript_1;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[15]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[50]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_delsubscr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_delsubscr_target_1);

            exception_lineno = 170;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[79]);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_delsubscr_target_1);

            exception_lineno = 170;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[81]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_delsubscr_target_1);

            exception_lineno = 170;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_delsubscr_subscript_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[88]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_delsubscr_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_delsubscr_target_1);

            exception_lineno = 170;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        Py_DECREF(tmp_delsubscr_target_1);
        Py_DECREF(tmp_delsubscr_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_18 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[15]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6f8a1cd2e052432ed031317d0f758ae3->m_frame.f_lineno = 173;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[89]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_19 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[15]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_6f8a1cd2e052432ed031317d0f758ae3->m_frame.f_lineno = 174;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[90],
            PyTuple_GET_ITEM(mod_consts[91], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(par_request);
        tmp_args_element_value_1 = par_request;
        frame_6f8a1cd2e052432ed031317d0f758ae3->m_frame.f_lineno = 175;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[92], tmp_args_element_value_1);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6f8a1cd2e052432ed031317d0f758ae3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6f8a1cd2e052432ed031317d0f758ae3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6f8a1cd2e052432ed031317d0f758ae3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6f8a1cd2e052432ed031317d0f758ae3,
        type_description_1,
        par_self,
        par_request
    );


    // Release cached frame if used for exception.
    if (frame_6f8a1cd2e052432ed031317d0f758ae3 == cache_frame_6f8a1cd2e052432ed031317d0f758ae3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6f8a1cd2e052432ed031317d0f758ae3);
        cache_frame_6f8a1cd2e052432ed031317d0f758ae3 = NULL;
    }

    assertFrameObject(frame_6f8a1cd2e052432ed031317d0f758ae3);

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
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http2$$$function__5__send_request_headers(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *par_stream_id = python_pars[2];
    PyObject *var_end_stream = NULL;
    PyObject *var_authority = NULL;
    PyObject *var_headers = NULL;
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *outline_1_var_k = NULL;
    PyObject *outline_1_var_v = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_c750470ac8d1987cbbbff24ba0a49bd0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_672f9d7d0cede4fbee43ba307348e541_2;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_672f9d7d0cede4fbee43ba307348e541_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    struct Nuitka_FrameObject *frame_9054407a42acb251301f9fa2c59fe00b_3;
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
    static struct Nuitka_FrameObject *cache_frame_9054407a42acb251301f9fa2c59fe00b_3 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c750470ac8d1987cbbbff24ba0a49bd0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c750470ac8d1987cbbbff24ba0a49bd0)) {
        Py_XDECREF(cache_frame_c750470ac8d1987cbbbff24ba0a49bd0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c750470ac8d1987cbbbff24ba0a49bd0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c750470ac8d1987cbbbff24ba0a49bd0 = MAKE_FUNCTION_FRAME(codeobj_c750470ac8d1987cbbbff24ba0a49bd0, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c750470ac8d1987cbbbff24ba0a49bd0->m_type_description == NULL);
    frame_c750470ac8d1987cbbbff24ba0a49bd0 = cache_frame_c750470ac8d1987cbbbff24ba0a49bd0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c750470ac8d1987cbbbff24ba0a49bd0);
    assert(Py_REFCNT(frame_c750470ac8d1987cbbbff24ba0a49bd0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_args_element_value_1 = par_request;
        frame_c750470ac8d1987cbbbff24ba0a49bd0->m_frame.f_lineno = 180;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = (tmp_res == 0) ? Py_True : Py_False;
        assert(var_end_stream == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_end_stream = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(par_request);
            tmp_expression_value_2 = par_request;
            tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_1 = "oooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_4;
        }
        if (isFrameUnusable(cache_frame_672f9d7d0cede4fbee43ba307348e541_2)) {
            Py_XDECREF(cache_frame_672f9d7d0cede4fbee43ba307348e541_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_672f9d7d0cede4fbee43ba307348e541_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_672f9d7d0cede4fbee43ba307348e541_2 = MAKE_FUNCTION_FRAME(codeobj_672f9d7d0cede4fbee43ba307348e541, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_672f9d7d0cede4fbee43ba307348e541_2->m_type_description == NULL);
        frame_672f9d7d0cede4fbee43ba307348e541_2 = cache_frame_672f9d7d0cede4fbee43ba307348e541_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_672f9d7d0cede4fbee43ba307348e541_2);
        assert(Py_REFCNT(frame_672f9d7d0cede4fbee43ba307348e541_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 186;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_2 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
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
                exception_lineno = 186;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
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
                exception_lineno = 186;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_listcomp$tuple_unpack_1__source_iter;
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
                        exception_lineno = 186;
                        goto try_except_handler_5;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[1];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 186;
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

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_9 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_k;
                outline_0_var_k = tmp_assign_source_9;
                Py_INCREF(outline_0_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_10 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_v;
                outline_0_var_v = tmp_assign_source_10;
                Py_INCREF(outline_0_var_v);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_3;
            CHECK_OBJECT(outline_0_var_k);
            tmp_expression_value_3 = outline_0_var_k;
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            frame_672f9d7d0cede4fbee43ba307348e541_2->m_frame.f_lineno = 186;
            tmp_cmp_expr_left_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
            Py_DECREF(tmp_called_value_2);
            if (tmp_cmp_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_cmp_expr_right_1 = mod_consts[95];
            tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            Py_DECREF(tmp_cmp_expr_left_1);
            if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
        }
        branch_yes_1:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_v);
            tmp_append_value_1 = outline_0_var_v;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_expression_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_expression_value_1);
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
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_672f9d7d0cede4fbee43ba307348e541_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_672f9d7d0cede4fbee43ba307348e541_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_672f9d7d0cede4fbee43ba307348e541_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_672f9d7d0cede4fbee43ba307348e541_2,
            type_description_2,
            outline_0_var_k,
            outline_0_var_v
        );


        // Release cached frame if used for exception.
        if (frame_672f9d7d0cede4fbee43ba307348e541_2 == cache_frame_672f9d7d0cede4fbee43ba307348e541_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_672f9d7d0cede4fbee43ba307348e541_2);
            cache_frame_672f9d7d0cede4fbee43ba307348e541_2 = NULL;
        }

        assertFrameObject(frame_672f9d7d0cede4fbee43ba307348e541_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooo";
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
        exception_lineno = 186;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_subscript_value_1 = mod_consts[20];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_authority == NULL);
        var_authority = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[96];
        tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_4;
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_request);
            tmp_expression_value_4 = par_request;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[97]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_list_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_add_expr_left_1 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            PyList_SET_ITEM(tmp_add_expr_left_1, 0, tmp_list_element_1);
            tmp_tuple_element_2 = mod_consts[98];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_authority);
            tmp_tuple_element_2 = var_authority;
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_2);
            PyList_SET_ITEM(tmp_add_expr_left_1, 1, tmp_list_element_1);
            tmp_tuple_element_3 = mod_consts[99];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_5;
                PyObject *tmp_expression_value_6;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_3);
                CHECK_OBJECT(par_request);
                tmp_expression_value_6 = par_request;
                tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[35]);
                if (tmp_expression_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 191;
                    type_description_1 = "oooooo";
                    goto tuple_build_exception_2;
                }
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[100]);
                Py_DECREF(tmp_expression_value_5);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 191;
                    type_description_1 = "oooooo";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            PyList_SET_ITEM(tmp_add_expr_left_1, 2, tmp_list_element_1);
            tmp_tuple_element_4 = mod_consts[101];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_7;
                PyObject *tmp_expression_value_8;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
                CHECK_OBJECT(par_request);
                tmp_expression_value_8 = par_request;
                tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[35]);
                if (tmp_expression_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 192;
                    type_description_1 = "oooooo";
                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[102]);
                Py_DECREF(tmp_expression_value_7);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 192;
                    type_description_1 = "oooooo";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            PyList_SET_ITEM(tmp_add_expr_left_1, 3, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_add_expr_left_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_expression_value_9;
            CHECK_OBJECT(par_request);
            tmp_expression_value_9 = par_request;
            tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[0]);
            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;
                type_description_1 = "oooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_1 = "oooooo";
                goto try_except_handler_6;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_13;
        }
        if (isFrameUnusable(cache_frame_9054407a42acb251301f9fa2c59fe00b_3)) {
            Py_XDECREF(cache_frame_9054407a42acb251301f9fa2c59fe00b_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_9054407a42acb251301f9fa2c59fe00b_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_9054407a42acb251301f9fa2c59fe00b_3 = MAKE_FUNCTION_FRAME(codeobj_9054407a42acb251301f9fa2c59fe00b, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_9054407a42acb251301f9fa2c59fe00b_3->m_type_description == NULL);
        frame_9054407a42acb251301f9fa2c59fe00b_3 = cache_frame_9054407a42acb251301f9fa2c59fe00b_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_9054407a42acb251301f9fa2c59fe00b_3);
        assert(Py_REFCNT(frame_9054407a42acb251301f9fa2c59fe00b_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_2 = tmp_listcomp_2__$0;
            tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_14 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 193;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_iter_arg_4 = tmp_listcomp_2__iter_value_0;
            tmp_assign_source_15 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "oo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__source_iter;
                tmp_listcomp$tuple_unpack_2__source_iter = tmp_assign_source_15;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_3 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
            if (tmp_assign_source_16 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 193;
                goto try_except_handler_9;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_1;
                tmp_listcomp$tuple_unpack_2__element_1 = tmp_assign_source_16;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_4 = tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_17 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
            if (tmp_assign_source_17 == NULL) {
                if (!ERROR_OCCURRED()) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                }


                type_description_2 = "oo";
                exception_lineno = 193;
                goto try_except_handler_9;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_2__element_2;
                tmp_listcomp$tuple_unpack_2__element_2 = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_iterator_name_2 = tmp_listcomp$tuple_unpack_2__source_iter;
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
                        exception_lineno = 193;
                        goto try_except_handler_9;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[1];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 193;
                goto try_except_handler_9;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_8;
        // End of try:
        try_end_3:;
        goto try_end_4;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        try_end_4:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_2__source_iter);
        tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_1);
            tmp_assign_source_18 = tmp_listcomp$tuple_unpack_2__element_1;
            {
                PyObject *old = outline_1_var_k;
                outline_1_var_k = tmp_assign_source_18;
                Py_INCREF(outline_1_var_k);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_1);
        tmp_listcomp$tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_19;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_2__element_2);
            tmp_assign_source_19 = tmp_listcomp$tuple_unpack_2__element_2;
            {
                PyObject *old = outline_1_var_v;
                outline_1_var_v = tmp_assign_source_19;
                Py_INCREF(outline_1_var_v);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_2__element_2);
        tmp_listcomp$tuple_unpack_2__element_2 = NULL;

        {
            bool tmp_condition_result_2;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_10;
            CHECK_OBJECT(outline_1_var_k);
            tmp_expression_value_10 = outline_1_var_k;
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[2]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            frame_9054407a42acb251301f9fa2c59fe00b_3->m_frame.f_lineno = 196;
            tmp_cmp_expr_left_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
            Py_DECREF(tmp_called_value_3);
            if (tmp_cmp_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_cmp_expr_right_2 = mod_consts[103];
            tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
            Py_DECREF(tmp_cmp_expr_left_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 197;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_condition_result_2 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_2 != false) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_11;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_k);
            tmp_expression_value_11 = outline_1_var_k;
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[2]);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            frame_9054407a42acb251301f9fa2c59fe00b_3->m_frame.f_lineno = 194;
            tmp_tuple_element_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
            Py_DECREF(tmp_called_value_4);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            tmp_append_value_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_append_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(outline_1_var_v);
            tmp_tuple_element_5 = outline_1_var_v;
            PyTuple_SET_ITEM0(tmp_append_value_2, 1, tmp_tuple_element_5);
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
        }
        branch_no_2:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_add_expr_right_1 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_add_expr_right_1);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9054407a42acb251301f9fa2c59fe00b_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9054407a42acb251301f9fa2c59fe00b_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9054407a42acb251301f9fa2c59fe00b_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9054407a42acb251301f9fa2c59fe00b_3,
            type_description_2,
            outline_1_var_k,
            outline_1_var_v
        );


        // Release cached frame if used for exception.
        if (frame_9054407a42acb251301f9fa2c59fe00b_3 == cache_frame_9054407a42acb251301f9fa2c59fe00b_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_9054407a42acb251301f9fa2c59fe00b_3);
            cache_frame_9054407a42acb251301f9fa2c59fe00b_3 = NULL;
        }

        assertFrameObject(frame_9054407a42acb251301f9fa2c59fe00b_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "oooooo";
        goto try_except_handler_6;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(outline_1_var_k);
        outline_1_var_k = NULL;
        Py_XDECREF(outline_1_var_v);
        outline_1_var_v = NULL;
        goto outline_result_2;
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

        Py_XDECREF(outline_1_var_k);
        outline_1_var_k = NULL;
        Py_XDECREF(outline_1_var_v);
        outline_1_var_v = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 193;
        goto frame_exception_exit_1;
        outline_result_2:;
        tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_LIST_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_headers == NULL);
        var_headers = tmp_assign_source_11;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[15]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[104]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream_id);
        tmp_kw_call_arg_value_0_1 = par_stream_id;
        CHECK_OBJECT(var_headers);
        tmp_kw_call_arg_value_1_1 = var_headers;
        CHECK_OBJECT(var_end_stream);
        tmp_kw_call_dict_value_0_1 = var_end_stream;
        frame_c750470ac8d1987cbbbff24ba0a49bd0->m_frame.f_lineno = 203;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[105]);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_value_0_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[15]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[90]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream_id);
        tmp_kw_call_value_0_1 = par_stream_id;
        frame_c750470ac8d1987cbbbff24ba0a49bd0->m_frame.f_lineno = 204;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_6, mod_consts[91], kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_request);
        tmp_args_element_value_2 = par_request;
        frame_c750470ac8d1987cbbbff24ba0a49bd0->m_frame.f_lineno = 205;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[92], tmp_args_element_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c750470ac8d1987cbbbff24ba0a49bd0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c750470ac8d1987cbbbff24ba0a49bd0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c750470ac8d1987cbbbff24ba0a49bd0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c750470ac8d1987cbbbff24ba0a49bd0,
        type_description_1,
        par_self,
        par_request,
        par_stream_id,
        var_end_stream,
        var_authority,
        var_headers
    );


    // Release cached frame if used for exception.
    if (frame_c750470ac8d1987cbbbff24ba0a49bd0 == cache_frame_c750470ac8d1987cbbbff24ba0a49bd0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c750470ac8d1987cbbbff24ba0a49bd0);
        cache_frame_c750470ac8d1987cbbbff24ba0a49bd0 = NULL;
    }

    assertFrameObject(frame_c750470ac8d1987cbbbff24ba0a49bd0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_end_stream);
    Py_DECREF(var_end_stream);
    var_end_stream = NULL;
    CHECK_OBJECT(var_authority);
    Py_DECREF(var_authority);
    var_authority = NULL;
    CHECK_OBJECT(var_headers);
    Py_DECREF(var_headers);
    var_headers = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_end_stream);
    var_end_stream = NULL;
    Py_XDECREF(var_authority);
    var_authority = NULL;
    Py_XDECREF(var_headers);
    var_headers = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http2$$$function__6__send_request_body(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *par_stream_id = python_pars[2];
    PyObject *var_data = NULL;
    PyObject *var_max_flow = NULL;
    PyObject *var_chunk_size = NULL;
    PyObject *var_chunk = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4fc307909ce7006c027170088f261df3;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_4fc307909ce7006c027170088f261df3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4fc307909ce7006c027170088f261df3)) {
        Py_XDECREF(cache_frame_4fc307909ce7006c027170088f261df3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4fc307909ce7006c027170088f261df3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4fc307909ce7006c027170088f261df3 = MAKE_FUNCTION_FRAME(codeobj_4fc307909ce7006c027170088f261df3, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4fc307909ce7006c027170088f261df3->m_type_description == NULL);
    frame_4fc307909ce7006c027170088f261df3 = cache_frame_4fc307909ce7006c027170088f261df3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4fc307909ce7006c027170088f261df3);
    assert(Py_REFCNT(frame_4fc307909ce7006c027170088f261df3) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_request);
        tmp_args_element_value_1 = par_request;
        frame_4fc307909ce7006c027170088f261df3->m_frame.f_lineno = 208;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooo";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_request);
        tmp_expression_value_1 = par_request;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[106]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[108]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 211;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 211;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_request);
        tmp_expression_value_3 = par_request;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[106]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooo";
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
                type_description_1 = "ooooooo";
                exception_lineno = 212;
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
            PyObject *old = var_data;
            var_data = tmp_assign_source_3;
            Py_INCREF(var_data);
            Py_XDECREF(old);
        }

    }
    loop_start_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_3;
        if (var_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_operand_value_3 = var_data;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooo";
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
    goto loop_end_2;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 214;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[111]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 214;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_2 = par_request;
        if (par_stream_id == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 214;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = par_stream_id;
        frame_4fc307909ce7006c027170088f261df3->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_max_flow;
            var_max_flow = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[112]);
        assert(tmp_called_value_3 != NULL);
        if (var_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 215;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_len_arg_1 = var_data;
        tmp_args_element_value_4 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_max_flow);
        tmp_args_element_value_5 = var_max_flow;
        frame_4fc307909ce7006c027170088f261df3->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_chunk_size;
            var_chunk_size = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_stop_value_1;
        if (var_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 216;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_5 = var_data;
        CHECK_OBJECT(var_chunk_size);
        tmp_stop_value_1 = var_chunk_size;
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_iter_arg_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_start_value_1;
            PyObject *tmp_stop_value_2;
            PyTuple_SET_ITEM(tmp_iter_arg_2, 0, tmp_tuple_element_1);
            if (var_data == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[109]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 216;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_6 = var_data;
            CHECK_OBJECT(var_chunk_size);
            tmp_start_value_1 = var_chunk_size;
            tmp_stop_value_2 = Py_None;
            tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_2);
            assert(!(tmp_subscript_value_2 == NULL));
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_2);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_6 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        assert(!(tmp_assign_source_6 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF(old);
        }

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


            type_description_1 = "ooooooo";
            exception_lineno = 216;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

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


            type_description_1 = "ooooooo";
            exception_lineno = 216;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 216;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[1];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 216;
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
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_chunk;
            var_chunk = tmp_assign_source_9;
            Py_INCREF(var_chunk);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_data;
            var_data = tmp_assign_source_10;
            Py_INCREF(var_data);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 217;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[15]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[113]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (par_stream_id == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 217;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_6 = par_stream_id;
        CHECK_OBJECT(var_chunk);
        tmp_args_element_value_7 = var_chunk;
        frame_4fc307909ce7006c027170088f261df3->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 218;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_9 = par_self;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[92]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 218;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_8 = par_request;
        frame_4fc307909ce7006c027170088f261df3->m_frame.f_lineno = 218;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 213;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 212;
        type_description_1 = "ooooooo";
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
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_9;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[15]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[114]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_stream_id == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = par_stream_id;
        frame_4fc307909ce7006c027170088f261df3->m_frame.f_lineno = 220;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = par_self;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[92]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_10 = par_request;
        frame_4fc307909ce7006c027170088f261df3->m_frame.f_lineno = 221;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
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
        exception_tb = MAKE_TRACEBACK(frame_4fc307909ce7006c027170088f261df3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4fc307909ce7006c027170088f261df3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4fc307909ce7006c027170088f261df3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4fc307909ce7006c027170088f261df3,
        type_description_1,
        par_self,
        par_request,
        par_stream_id,
        var_data,
        var_max_flow,
        var_chunk_size,
        var_chunk
    );


    // Release cached frame if used for exception.
    if (frame_4fc307909ce7006c027170088f261df3 == cache_frame_4fc307909ce7006c027170088f261df3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4fc307909ce7006c027170088f261df3);
        cache_frame_4fc307909ce7006c027170088f261df3 = NULL;
    }

    assertFrameObject(frame_4fc307909ce7006c027170088f261df3);

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
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_max_flow);
    var_max_flow = NULL;
    Py_XDECREF(var_chunk_size);
    var_chunk_size = NULL;
    Py_XDECREF(var_chunk);
    var_chunk = NULL;
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

    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_max_flow);
    var_max_flow = NULL;
    Py_XDECREF(var_chunk_size);
    var_chunk_size = NULL;
    Py_XDECREF(var_chunk);
    var_chunk = NULL;
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
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http2$$$function__7__receive_response(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *par_stream_id = python_pars[2];
    PyObject *var_event = NULL;
    PyObject *var_status_code = NULL;
    PyObject *var_headers = NULL;
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a526c9fdba19855e750c49259f282eda;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a526c9fdba19855e750c49259f282eda = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a526c9fdba19855e750c49259f282eda)) {
        Py_XDECREF(cache_frame_a526c9fdba19855e750c49259f282eda);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a526c9fdba19855e750c49259f282eda == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a526c9fdba19855e750c49259f282eda = MAKE_FUNCTION_FRAME(codeobj_a526c9fdba19855e750c49259f282eda, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a526c9fdba19855e750c49259f282eda->m_type_description == NULL);
    frame_a526c9fdba19855e750c49259f282eda = cache_frame_a526c9fdba19855e750c49259f282eda;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a526c9fdba19855e750c49259f282eda);
    assert(Py_REFCNT(frame_a526c9fdba19855e750c49259f282eda) == 2);

    // Framed code:
    loop_start_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 229;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[115]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 229;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = par_request;
        if (par_stream_id == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 229;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = par_stream_id;
        frame_a526c9fdba19855e750c49259f282eda->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_event;
            var_event = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_event);
        tmp_isinstance_inst_1 = var_event;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[116]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[117]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooo";
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
    goto loop_end_1;
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 228;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[118];
        assert(var_status_code == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_status_code = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
        assert(var_headers == NULL);
        var_headers = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_event);
        tmp_expression_value_4 = var_event;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[0]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 235;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF(old);
        }

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


            type_description_1 = "oooooooo";
            exception_lineno = 235;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

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


            type_description_1 = "oooooooo";
            exception_lineno = 235;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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

                    type_description_1 = "oooooooo";
                    exception_lineno = 235;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[1];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 235;
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
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_9;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_10;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_k);
        tmp_cmp_expr_left_1 = var_k;
        tmp_cmp_expr_right_1 = mod_consts[119];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_v);
        tmp_expression_value_5 = var_v;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[120]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_a526c9fdba19855e750c49259f282eda->m_frame.f_lineno = 237;
        tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[121], 0), mod_consts[122]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_11 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_status_code;
            var_status_code = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_k);
        tmp_expression_value_6 = var_k;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[123]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_a526c9fdba19855e750c49259f282eda->m_frame.f_lineno = 238;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[124]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oooooooo";
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
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_tuple_element_1;
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 239;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = var_headers;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[125]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_k);
        tmp_tuple_element_1 = var_k;
        tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_3, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_v);
        tmp_tuple_element_1 = var_v;
        PyTuple_SET_ITEM0(tmp_args_element_value_3, 1, tmp_tuple_element_1);
        frame_a526c9fdba19855e750c49259f282eda->m_frame.f_lineno = 239;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    branch_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 235;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
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
        PyObject *tmp_tuple_element_2;
        if (var_status_code == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[126]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 241;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_status_code;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        if (var_headers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 241;
            type_description_1 = "oooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_2 = var_headers;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
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
        exception_tb = MAKE_TRACEBACK(frame_a526c9fdba19855e750c49259f282eda, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a526c9fdba19855e750c49259f282eda->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a526c9fdba19855e750c49259f282eda, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a526c9fdba19855e750c49259f282eda,
        type_description_1,
        par_self,
        par_request,
        par_stream_id,
        var_event,
        var_status_code,
        var_headers,
        var_k,
        var_v
    );


    // Release cached frame if used for exception.
    if (frame_a526c9fdba19855e750c49259f282eda == cache_frame_a526c9fdba19855e750c49259f282eda) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a526c9fdba19855e750c49259f282eda);
        cache_frame_a526c9fdba19855e750c49259f282eda = NULL;
    }

    assertFrameObject(frame_a526c9fdba19855e750c49259f282eda);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_event);
    Py_DECREF(var_event);
    var_event = NULL;
    Py_XDECREF(var_status_code);
    var_status_code = NULL;
    Py_XDECREF(var_headers);
    var_headers = NULL;
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

    Py_XDECREF(var_event);
    var_event = NULL;
    Py_XDECREF(var_status_code);
    var_status_code = NULL;
    Py_XDECREF(var_headers);
    var_headers = NULL;
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
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http2$$$function__8__receive_response_body(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_request = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_stream_id = Nuitka_Cell_New1(python_pars[2]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_request;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_stream_id;
        Py_INCREF(tmp_closure_1[2]);

        tmp_return_value = MAKE_GENERATOR_httpcore$_sync$http2$$$function__8__receive_response_body$$$genobj__1__receive_response_body(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct httpcore$_sync$http2$$$function__8__receive_response_body$$$genobj__1__receive_response_body_locals {
    PyObject *var_event;
    PyObject *var_amount;
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
};
#endif

static PyObject *httpcore$_sync$http2$$$function__8__receive_response_body$$$genobj__1__receive_response_body_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpcore$_sync$http2$$$function__8__receive_response_body$$$genobj__1__receive_response_body_locals *generator_heap = (struct httpcore$_sync$http2$$$function__8__receive_response_body$$$genobj__1__receive_response_body_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_event = NULL;
    generator_heap->var_amount = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_76af70e37bbfe8ec480b97bac5c704ea, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    loop_start_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[110]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 247;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[115]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 247;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[46]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 247;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[58]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 247;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(generator->m_closure[2]);
        generator->m_frame->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 247;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_event;
            generator_heap->var_event = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(generator_heap->var_event);
        tmp_isinstance_inst_1 = generator_heap->var_event;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 248;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[116]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 248;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[127]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 248;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 248;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(generator_heap->var_event);
        tmp_expression_value_4 = generator_heap->var_event;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[128]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 249;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_amount;
            generator_heap->var_amount = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[110]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[15]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[129]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_amount);
        tmp_args_element_value_3 = generator_heap->var_amount;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[58]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = Nuitka_Cell_GET(generator->m_closure[2]);
        generator->m_frame->m_frame.f_lineno = 250;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 250;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[110]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 251;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[92]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 251;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[46]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 251;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 251;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 251;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_event);
        tmp_expression_value_9 = generator_heap->var_event;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[109]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 252;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_8;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 252;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(generator_heap->var_event);
        tmp_isinstance_inst_2 = generator_heap->var_event;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 253;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[116]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 253;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[130]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 253;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            PyTuple_SET_ITEM(tmp_isinstance_cls_2, 0, tmp_tuple_element_1);
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 253;
                generator_heap->type_description_1 = "cccoo";
                goto tuple_build_exception_1;
            }
            tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[116]);
            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 253;
                generator_heap->type_description_1 = "cccoo";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[131]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 253;
                generator_heap->type_description_1 = "cccoo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_isinstance_cls_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_isinstance_cls_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 253;
            generator_heap->type_description_1 = "cccoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (generator_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 246;
        generator_heap->type_description_1 = "cccoo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

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
            generator->m_closure[1],
            generator->m_closure[0],
            generator->m_closure[2],
            generator_heap->var_event,
            generator_heap->var_amount
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
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_event);
    generator_heap->var_event = NULL;
    Py_XDECREF(generator_heap->var_amount);
    generator_heap->var_amount = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(generator_heap->var_event);
    Py_DECREF(generator_heap->var_event);
    generator_heap->var_event = NULL;
    Py_XDECREF(generator_heap->var_amount);
    generator_heap->var_amount = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpcore$_sync$http2$$$function__8__receive_response_body$$$genobj__1__receive_response_body(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpcore$_sync$http2$$$function__8__receive_response_body$$$genobj__1__receive_response_body_context,
        module_httpcore$_sync$http2,
        mod_consts[132],
#if PYTHON_VERSION >= 0x350
        mod_consts[133],
#endif
        codeobj_76af70e37bbfe8ec480b97bac5c704ea,
        closure,
        3,
#if 1
        sizeof(struct httpcore$_sync$http2$$$function__8__receive_response_body$$$genobj__1__receive_response_body_locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_sync$http2$$$function__9__receive_stream_event(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *par_stream_id = python_pars[2];
    PyObject *var_event = NULL;
    struct Nuitka_FrameObject *frame_975eeed9bb4a2a3c8b20eb3944619ef3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_975eeed9bb4a2a3c8b20eb3944619ef3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_975eeed9bb4a2a3c8b20eb3944619ef3)) {
        Py_XDECREF(cache_frame_975eeed9bb4a2a3c8b20eb3944619ef3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_975eeed9bb4a2a3c8b20eb3944619ef3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_975eeed9bb4a2a3c8b20eb3944619ef3 = MAKE_FUNCTION_FRAME(codeobj_975eeed9bb4a2a3c8b20eb3944619ef3, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_975eeed9bb4a2a3c8b20eb3944619ef3->m_type_description == NULL);
    frame_975eeed9bb4a2a3c8b20eb3944619ef3 = cache_frame_975eeed9bb4a2a3c8b20eb3944619ef3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_975eeed9bb4a2a3c8b20eb3944619ef3);
    assert(Py_REFCNT(frame_975eeed9bb4a2a3c8b20eb3944619ef3) == 2);

    // Framed code:
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 259;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[134]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_stream_id == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 259;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = par_stream_id;
        frame_975eeed9bb4a2a3c8b20eb3944619ef3->m_frame.f_lineno = 259;
        tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 260;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[135]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 260;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = par_request;
        if (par_stream_id == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 260;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = par_stream_id;
        frame_975eeed9bb4a2a3c8b20eb3944619ef3->m_frame.f_lineno = 260;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 259;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 261;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[30]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_stream_id == NULL) {
            Py_DECREF(tmp_expression_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 261;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_1 = par_stream_id;
        tmp_expression_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[136]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_975eeed9bb4a2a3c8b20eb3944619ef3->m_frame.f_lineno = 261;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[137]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_event == NULL);
        var_event = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(var_event);
        tmp_expression_value_7 = var_event;
        tmp_attribute_value_1 = mod_consts[138];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_7, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_event);
        tmp_args_element_value_4 = var_event;
        frame_975eeed9bb4a2a3c8b20eb3944619ef3->m_frame.f_lineno = 264;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 264;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_975eeed9bb4a2a3c8b20eb3944619ef3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_975eeed9bb4a2a3c8b20eb3944619ef3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_975eeed9bb4a2a3c8b20eb3944619ef3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_975eeed9bb4a2a3c8b20eb3944619ef3,
        type_description_1,
        par_self,
        par_request,
        par_stream_id,
        var_event
    );


    // Release cached frame if used for exception.
    if (frame_975eeed9bb4a2a3c8b20eb3944619ef3 == cache_frame_975eeed9bb4a2a3c8b20eb3944619ef3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_975eeed9bb4a2a3c8b20eb3944619ef3);
        cache_frame_975eeed9bb4a2a3c8b20eb3944619ef3 = NULL;
    }

    assertFrameObject(frame_975eeed9bb4a2a3c8b20eb3944619ef3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_event);
    tmp_return_value = var_event;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_event);
    Py_DECREF(var_event);
    var_event = NULL;
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

    Py_XDECREF(var_event);
    var_event = NULL;
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
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http2$$$function__10__receive_events(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *par_stream_id = python_pars[2];
    PyObject *var_events = NULL;
    PyObject *var_event = NULL;
    PyObject *var_event_stream_id = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_95004fb6d3cd9cf43c07be6a91212e03;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
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
    static struct Nuitka_FrameObject *cache_frame_95004fb6d3cd9cf43c07be6a91212e03 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_95004fb6d3cd9cf43c07be6a91212e03)) {
        Py_XDECREF(cache_frame_95004fb6d3cd9cf43c07be6a91212e03);

#if _DEBUG_REFCOUNTS
        if (cache_frame_95004fb6d3cd9cf43c07be6a91212e03 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_95004fb6d3cd9cf43c07be6a91212e03 = MAKE_FUNCTION_FRAME(codeobj_95004fb6d3cd9cf43c07be6a91212e03, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_95004fb6d3cd9cf43c07be6a91212e03->m_type_description == NULL);
    frame_95004fb6d3cd9cf43c07be6a91212e03 = cache_frame_95004fb6d3cd9cf43c07be6a91212e03;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_95004fb6d3cd9cf43c07be6a91212e03);
    assert(Py_REFCNT(frame_95004fb6d3cd9cf43c07be6a91212e03) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooo";
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
        tmp_called_value_1 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[40]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_95004fb6d3cd9cf43c07be6a91212e03->m_frame.f_lineno = 270;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooo";
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
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_3, mod_consts[41]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooo";
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
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[33]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[33]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        frame_95004fb6d3cd9cf43c07be6a91212e03->m_frame.f_lineno = 272;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 272;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_stream_id);
        tmp_cmp_expr_left_2 = par_stream_id;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[30]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[134]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_stream_id);
        tmp_args_element_value_2 = par_stream_id;
        frame_95004fb6d3cd9cf43c07be6a91212e03->m_frame.f_lineno = 280;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
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
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_request);
        tmp_args_element_value_3 = par_request;
        frame_95004fb6d3cd9cf43c07be6a91212e03->m_frame.f_lineno = 281;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[139], tmp_args_element_value_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        assert(var_events == NULL);
        var_events = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_events);
        tmp_iter_arg_1 = var_events;
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 282;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_8 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_event;
            var_event = tmp_assign_source_8;
            Py_INCREF(var_event);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(var_event);
        tmp_getattr_target_1 = var_event;
        tmp_getattr_attr_1 = mod_consts[58];
        tmp_getattr_default_1 = mod_consts[20];
        tmp_assign_source_9 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_event_stream_id;
            var_event_stream_id = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_event);
        tmp_expression_value_8 = var_event;
        tmp_attribute_value_1 = mod_consts[138];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_8, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_event_stream_id);
        tmp_cmp_expr_left_3 = var_event_stream_id;
        tmp_cmp_expr_right_3 = mod_consts[20];
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_event);
        tmp_assattr_value_1 = var_event;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 288;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }

        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[33], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
    }
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_event);
        tmp_args_element_value_4 = var_event;
        frame_95004fb6d3cd9cf43c07be6a91212e03->m_frame.f_lineno = 289;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 289;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto try_except_handler_5;
    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_event_stream_id);
        tmp_cmp_expr_left_4 = var_event_stream_id;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 291;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_9 = par_self;
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[30]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 292;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_12 = par_self;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[30]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_event_stream_id);
        tmp_subscript_value_1 = var_event_stream_id;
        tmp_expression_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[125]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_event);
        tmp_args_element_value_5 = var_event;
        frame_95004fb6d3cd9cf43c07be6a91212e03->m_frame.f_lineno = 292;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_4:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 282;
        type_description_1 = "oooooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
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

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    branch_no_2:;
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
        exception_keeper_tb_2 = MAKE_TRACEBACK(frame_95004fb6d3cd9cf43c07be6a91212e03, exception_keeper_lineno_2);
    } else if (exception_keeper_lineno_2 != 0) {
        exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_95004fb6d3cd9cf43c07be6a91212e03, exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_5 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_assign_source_10;
        tmp_assign_source_10 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_10;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        tmp_args_element_value_6 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_7 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_8 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_95004fb6d3cd9cf43c07be6a91212e03->m_frame.f_lineno = 270;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 270;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_95004fb6d3cd9cf43c07be6a91212e03->m_frame) frame_95004fb6d3cd9cf43c07be6a91212e03->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_6;
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 270;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_95004fb6d3cd9cf43c07be6a91212e03->m_frame) frame_95004fb6d3cd9cf43c07be6a91212e03->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_6;
    branch_end_5:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_4;
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

    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_with_1__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_95004fb6d3cd9cf43c07be6a91212e03->m_frame.f_lineno = 270;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_7, mod_consts[45]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_4);
            Py_XDECREF(exception_keeper_value_4);
            Py_XDECREF(exception_keeper_tb_4);

            exception_lineno = 270;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_7:;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    {
        bool tmp_condition_result_8;
        nuitka_bool tmp_cmp_expr_left_7;
        nuitka_bool tmp_cmp_expr_right_7;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_7 = tmp_with_1__indicator;
        tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_8 = tmp_with_1__exit;
        frame_95004fb6d3cd9cf43c07be6a91212e03->m_frame.f_lineno = 270;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_8, mod_consts[45]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_8:;
    goto try_end_5;
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

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_9;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 294;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = par_self;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[92]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 294;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = par_request;
        frame_95004fb6d3cd9cf43c07be6a91212e03->m_frame.f_lineno = 294;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
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
        exception_tb = MAKE_TRACEBACK(frame_95004fb6d3cd9cf43c07be6a91212e03, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_95004fb6d3cd9cf43c07be6a91212e03->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_95004fb6d3cd9cf43c07be6a91212e03, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_95004fb6d3cd9cf43c07be6a91212e03,
        type_description_1,
        par_self,
        par_request,
        par_stream_id,
        var_events,
        var_event,
        var_event_stream_id
    );


    // Release cached frame if used for exception.
    if (frame_95004fb6d3cd9cf43c07be6a91212e03 == cache_frame_95004fb6d3cd9cf43c07be6a91212e03) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_95004fb6d3cd9cf43c07be6a91212e03);
        cache_frame_95004fb6d3cd9cf43c07be6a91212e03 = NULL;
    }

    assertFrameObject(frame_95004fb6d3cd9cf43c07be6a91212e03);

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
    Py_XDECREF(var_events);
    var_events = NULL;
    Py_XDECREF(var_event);
    var_event = NULL;
    Py_XDECREF(var_event_stream_id);
    var_event_stream_id = NULL;
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

    Py_XDECREF(var_events);
    var_events = NULL;
    Py_XDECREF(var_event);
    var_event = NULL;
    Py_XDECREF(var_event_stream_id);
    var_event_stream_id = NULL;
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
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http2$$$function__11__response_closed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_stream_id = python_pars[1];
    PyObject *var_now = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_ce7d1cb4dc16da0871be8e7f161e8347;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_ce7d1cb4dc16da0871be8e7f161e8347 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ce7d1cb4dc16da0871be8e7f161e8347)) {
        Py_XDECREF(cache_frame_ce7d1cb4dc16da0871be8e7f161e8347);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ce7d1cb4dc16da0871be8e7f161e8347 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ce7d1cb4dc16da0871be8e7f161e8347 = MAKE_FUNCTION_FRAME(codeobj_ce7d1cb4dc16da0871be8e7f161e8347, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ce7d1cb4dc16da0871be8e7f161e8347->m_type_description == NULL);
    frame_ce7d1cb4dc16da0871be8e7f161e8347 = cache_frame_ce7d1cb4dc16da0871be8e7f161e8347;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ce7d1cb4dc16da0871be8e7f161e8347);
    assert(Py_REFCNT(frame_ce7d1cb4dc16da0871be8e7f161e8347) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[53]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ce7d1cb4dc16da0871be8e7f161e8347->m_frame.f_lineno = 297;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[140]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_delsubscr_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
        if (tmp_delsubscr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream_id);
        tmp_delsubscr_subscript_1 = par_stream_id;
        tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        Py_DECREF(tmp_delsubscr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[24]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_4 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tmp_expression_value_4, mod_consts[40]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_ce7d1cb4dc16da0871be8e7f161e8347->m_frame.f_lineno = 299;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_5 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL(tmp_expression_value_5, mod_consts[41]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooo";
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
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[18]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 300;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[42]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 300;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[30]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooo";
            goto try_except_handler_4;
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[17]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[9]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        frame_ce7d1cb4dc16da0871be8e7f161e8347->m_frame.f_lineno = 303;
        tmp_assign_source_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[142]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        assert(var_now == NULL);
        var_now = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_now);
        tmp_add_expr_left_1 = var_now;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[9]);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_assattr_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[19], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[28]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 305;
            type_description_1 = "ooo";
            goto try_except_handler_4;
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_ce7d1cb4dc16da0871be8e7f161e8347->m_frame.f_lineno = 306;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[143]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_3:;
    branch_no_1:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_ce7d1cb4dc16da0871be8e7f161e8347, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_ce7d1cb4dc16da0871be8e7f161e8347, exception_keeper_lineno_1);
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
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_2 = tmp_with_1__exit;
        tmp_args_element_value_1 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_2 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_3 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_ce7d1cb4dc16da0871be8e7f161e8347->m_frame.f_lineno = 299;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooo";
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
        exception_lineno = 299;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ce7d1cb4dc16da0871be8e7f161e8347->m_frame) frame_ce7d1cb4dc16da0871be8e7f161e8347->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_5;
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 299;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ce7d1cb4dc16da0871be8e7f161e8347->m_frame) frame_ce7d1cb4dc16da0871be8e7f161e8347->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
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
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_3 = tmp_with_1__exit;
        frame_ce7d1cb4dc16da0871be8e7f161e8347->m_frame.f_lineno = 299;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_3, mod_consts[45]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 299;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_6:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        frame_ce7d1cb4dc16da0871be8e7f161e8347->m_frame.f_lineno = 299;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[45]);

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_7:;
    goto try_end_4;
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ce7d1cb4dc16da0871be8e7f161e8347, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ce7d1cb4dc16da0871be8e7f161e8347->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ce7d1cb4dc16da0871be8e7f161e8347, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ce7d1cb4dc16da0871be8e7f161e8347,
        type_description_1,
        par_self,
        par_stream_id,
        var_now
    );


    // Release cached frame if used for exception.
    if (frame_ce7d1cb4dc16da0871be8e7f161e8347 == cache_frame_ce7d1cb4dc16da0871be8e7f161e8347) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ce7d1cb4dc16da0871be8e7f161e8347);
        cache_frame_ce7d1cb4dc16da0871be8e7f161e8347 = NULL;
    }

    assertFrameObject(frame_ce7d1cb4dc16da0871be8e7f161e8347);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_now);
    var_now = NULL;
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

    Py_XDECREF(var_now);
    var_now = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http2$$$function__12_close(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_497e738988c810ee979d8eb0e769e223;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_497e738988c810ee979d8eb0e769e223 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_497e738988c810ee979d8eb0e769e223)) {
        Py_XDECREF(cache_frame_497e738988c810ee979d8eb0e769e223);

#if _DEBUG_REFCOUNTS
        if (cache_frame_497e738988c810ee979d8eb0e769e223 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_497e738988c810ee979d8eb0e769e223 = MAKE_FUNCTION_FRAME(codeobj_497e738988c810ee979d8eb0e769e223, module_httpcore$_sync$http2, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_497e738988c810ee979d8eb0e769e223->m_type_description == NULL);
    frame_497e738988c810ee979d8eb0e769e223 = cache_frame_497e738988c810ee979d8eb0e769e223;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_497e738988c810ee979d8eb0e769e223);
    assert(Py_REFCNT(frame_497e738988c810ee979d8eb0e769e223) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_497e738988c810ee979d8eb0e769e223->m_frame.f_lineno = 311;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[144]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[145]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[8]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_497e738988c810ee979d8eb0e769e223->m_frame.f_lineno = 313;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[143]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
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
        exception_tb = MAKE_TRACEBACK(frame_497e738988c810ee979d8eb0e769e223, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_497e738988c810ee979d8eb0e769e223->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_497e738988c810ee979d8eb0e769e223, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_497e738988c810ee979d8eb0e769e223,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_497e738988c810ee979d8eb0e769e223 == cache_frame_497e738988c810ee979d8eb0e769e223) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_497e738988c810ee979d8eb0e769e223);
        cache_frame_497e738988c810ee979d8eb0e769e223 = NULL;
    }

    assertFrameObject(frame_497e738988c810ee979d8eb0e769e223);

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


static PyObject *impl_httpcore$_sync$http2$$$function__13__read_incoming_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *var_events = NULL;
    PyObject *var_timeouts = NULL;
    PyObject *var_timeout = NULL;
    PyObject *var_data = NULL;
    PyObject *var_exc = NULL;
    struct Nuitka_FrameObject *frame_b31ba2dcbe10e8c2f20abc1ebc268a51;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_b31ba2dcbe10e8c2f20abc1ebc268a51 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b31ba2dcbe10e8c2f20abc1ebc268a51)) {
        Py_XDECREF(cache_frame_b31ba2dcbe10e8c2f20abc1ebc268a51);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b31ba2dcbe10e8c2f20abc1ebc268a51 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b31ba2dcbe10e8c2f20abc1ebc268a51 = MAKE_FUNCTION_FRAME(codeobj_b31ba2dcbe10e8c2f20abc1ebc268a51, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b31ba2dcbe10e8c2f20abc1ebc268a51->m_type_description == NULL);
    frame_b31ba2dcbe10e8c2f20abc1ebc268a51 = cache_frame_b31ba2dcbe10e8c2f20abc1ebc268a51;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b31ba2dcbe10e8c2f20abc1ebc268a51);
    assert(Py_REFCNT(frame_b31ba2dcbe10e8c2f20abc1ebc268a51) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(par_request);
        tmp_expression_value_2 = par_request;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[146]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[134]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[147];
        tmp_call_arg_element_2 = MAKE_DICT_EMPTY();
        frame_b31ba2dcbe10e8c2f20abc1ebc268a51->m_frame.f_lineno = 320;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_timeouts == NULL);
        var_timeouts = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_timeouts);
        tmp_expression_value_3 = var_timeouts;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[134]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_b31ba2dcbe10e8c2f20abc1ebc268a51->m_frame.f_lineno = 321;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[148]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_timeout == NULL);
        var_timeout = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[31]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_raise_type_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[31]);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 324;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[8]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[149]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[150]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 327;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_timeout);
        tmp_args_element_value_2 = var_timeout;
        frame_b31ba2dcbe10e8c2f20abc1ebc268a51->m_frame.f_lineno = 327;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_data);
        tmp_cmp_expr_left_2 = var_data;
        tmp_cmp_expr_right_2 = mod_consts[151];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_BYTES(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_b31ba2dcbe10e8c2f20abc1ebc268a51->m_frame.f_lineno = 329;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[152]);

        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 329;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    branch_no_2:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_b31ba2dcbe10e8c2f20abc1ebc268a51, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_b31ba2dcbe10e8c2f20abc1ebc268a51, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = EXC_VALUE(PyThreadState_GET());
        assert(var_exc == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_exc = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_exc);
        tmp_assattr_value_1 = var_exc;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[31], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[29], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_raise_type_3;
        CHECK_OBJECT(var_exc);
        tmp_raise_type_3 = var_exc;
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_lineno = 341;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
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
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 326;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b31ba2dcbe10e8c2f20abc1ebc268a51->m_frame) frame_b31ba2dcbe10e8c2f20abc1ebc268a51->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_3;
    branch_end_3:;
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[15]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_args_element_value_3 = var_data;
        frame_b31ba2dcbe10e8c2f20abc1ebc268a51->m_frame.f_lineno = 343;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[153], tmp_args_element_value_3);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_events == NULL);
        var_events = tmp_assign_source_5;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b31ba2dcbe10e8c2f20abc1ebc268a51, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b31ba2dcbe10e8c2f20abc1ebc268a51->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b31ba2dcbe10e8c2f20abc1ebc268a51, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b31ba2dcbe10e8c2f20abc1ebc268a51,
        type_description_1,
        par_self,
        par_request,
        var_events,
        var_timeouts,
        var_timeout,
        var_data,
        var_exc
    );


    // Release cached frame if used for exception.
    if (frame_b31ba2dcbe10e8c2f20abc1ebc268a51 == cache_frame_b31ba2dcbe10e8c2f20abc1ebc268a51) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b31ba2dcbe10e8c2f20abc1ebc268a51);
        cache_frame_b31ba2dcbe10e8c2f20abc1ebc268a51 = NULL;
    }

    assertFrameObject(frame_b31ba2dcbe10e8c2f20abc1ebc268a51);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_events);
    tmp_return_value = var_events;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_events);
    Py_DECREF(var_events);
    var_events = NULL;
    CHECK_OBJECT(var_timeouts);
    Py_DECREF(var_timeouts);
    var_timeouts = NULL;
    CHECK_OBJECT(var_timeout);
    Py_DECREF(var_timeout);
    var_timeout = NULL;
    CHECK_OBJECT(var_data);
    Py_DECREF(var_data);
    var_data = NULL;
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

    Py_XDECREF(var_timeouts);
    var_timeouts = NULL;
    Py_XDECREF(var_timeout);
    var_timeout = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
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
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http2$$$function__14__write_outgoing_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *var_timeouts = NULL;
    PyObject *var_timeout = NULL;
    PyObject *var_data_to_send = NULL;
    PyObject *var_exc = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8;
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
    bool tmp_result;
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
    struct Nuitka_ExceptionStackItem exception_preserved_2;
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
    static struct Nuitka_FrameObject *cache_frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8)) {
        Py_XDECREF(cache_frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8 = MAKE_FUNCTION_FRAME(codeobj_b67220cf6b0a2be9f0c4e4ccf4c09cd8, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8->m_type_description == NULL);
    frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8 = cache_frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8);
    assert(Py_REFCNT(frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(par_request);
        tmp_expression_value_2 = par_request;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[146]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[134]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[147];
        tmp_call_arg_element_2 = MAKE_DICT_EMPTY();
        frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8->m_frame.f_lineno = 348;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_timeouts == NULL);
        var_timeouts = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_timeouts);
        tmp_expression_value_3 = var_timeouts;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[134]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8->m_frame.f_lineno = 349;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[154]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_timeout == NULL);
        var_timeout = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[26]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_5 = tmp_with_1__source;
        tmp_called_value_3 = LOOKUP_SPECIAL(tmp_expression_value_5, mod_consts[40]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8->m_frame.f_lineno = 351;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_6 = tmp_with_1__source;
        tmp_assign_source_5 = LOOKUP_SPECIAL(tmp_expression_value_6, mod_consts[41]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_6;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[15]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8->m_frame.f_lineno = 352;
        tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[155]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        assert(var_data_to_send == NULL);
        var_data_to_send = tmp_assign_source_7;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[32]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_raise_type_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[32]);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 355;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[8]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_data_to_send);
        tmp_args_element_value_1 = var_data_to_send;
        CHECK_OBJECT(var_timeout);
        tmp_args_element_value_2 = var_timeout;
        frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8->m_frame.f_lineno = 358;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[156],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_1);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
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
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = EXC_VALUE(PyThreadState_GET());
        assert(var_exc == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_exc = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_exc);
        tmp_assattr_value_1 = var_exc;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[32], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[29], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "oooooo";
            goto try_except_handler_7;
        }
    }
    {
        PyObject *tmp_raise_type_2;
        CHECK_OBJECT(var_exc);
        tmp_raise_type_2 = var_exc;
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_lineno = 370;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto try_except_handler_7;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_7:;
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

    goto try_except_handler_6;
    // End of try:
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 357;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8->m_frame) frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_6;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_4 == NULL) {
        exception_keeper_tb_4 = MAKE_TRACEBACK(frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8, exception_keeper_lineno_4);
    } else if (exception_keeper_lineno_4 != 0) {
        exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8, exception_keeper_lineno_4);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_assign_source_9;
        tmp_assign_source_9 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_9;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        tmp_args_element_value_3 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_4 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_5 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8->m_frame.f_lineno = 351;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto try_except_handler_8;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 351;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8->m_frame) frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_8;
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 351;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8->m_frame) frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_8;
    branch_end_3:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = tmp_with_1__indicator;
        tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8->m_frame.f_lineno = 351;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[45]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_6);
            Py_XDECREF(exception_keeper_value_6);
            Py_XDECREF(exception_keeper_tb_6);

            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_5:;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    {
        bool tmp_condition_result_6;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = tmp_with_1__indicator;
        tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8->m_frame.f_lineno = 351;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[45]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_6:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8,
        type_description_1,
        par_self,
        par_request,
        var_timeouts,
        var_timeout,
        var_data_to_send,
        var_exc
    );


    // Release cached frame if used for exception.
    if (frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8 == cache_frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8);
        cache_frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8 = NULL;
    }

    assertFrameObject(frame_b67220cf6b0a2be9f0c4e4ccf4c09cd8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_timeouts);
    Py_DECREF(var_timeouts);
    var_timeouts = NULL;
    CHECK_OBJECT(var_timeout);
    Py_DECREF(var_timeout);
    var_timeout = NULL;
    Py_XDECREF(var_data_to_send);
    var_data_to_send = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_timeouts);
    var_timeouts = NULL;
    Py_XDECREF(var_timeout);
    var_timeout = NULL;
    Py_XDECREF(var_data_to_send);
    var_data_to_send = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http2$$$function__15__wait_for_outgoing_flow(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_request = python_pars[1];
    PyObject *par_stream_id = python_pars[2];
    PyObject *var_local_flow = NULL;
    PyObject *var_max_frame_size = NULL;
    PyObject *var_flow = NULL;
    struct Nuitka_FrameObject *frame_4df57d98d0c10f523402f35248b9af00;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4df57d98d0c10f523402f35248b9af00 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4df57d98d0c10f523402f35248b9af00)) {
        Py_XDECREF(cache_frame_4df57d98d0c10f523402f35248b9af00);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4df57d98d0c10f523402f35248b9af00 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4df57d98d0c10f523402f35248b9af00 = MAKE_FUNCTION_FRAME(codeobj_4df57d98d0c10f523402f35248b9af00, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4df57d98d0c10f523402f35248b9af00->m_type_description == NULL);
    frame_4df57d98d0c10f523402f35248b9af00 = cache_frame_4df57d98d0c10f523402f35248b9af00;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4df57d98d0c10f523402f35248b9af00);
    assert(Py_REFCNT(frame_4df57d98d0c10f523402f35248b9af00) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stream_id);
        tmp_args_element_value_1 = par_stream_id;
        frame_4df57d98d0c10f523402f35248b9af00->m_frame.f_lineno = 382;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[157], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_local_flow == NULL);
        var_local_flow = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[15]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[158]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_max_frame_size == NULL);
        var_max_frame_size = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[112]);
        assert(tmp_called_value_1 != NULL);
        CHECK_OBJECT(var_local_flow);
        tmp_args_element_value_2 = var_local_flow;
        CHECK_OBJECT(var_max_frame_size);
        tmp_args_element_value_3 = var_max_frame_size;
        frame_4df57d98d0c10f523402f35248b9af00->m_frame.f_lineno = 384;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_flow == NULL);
        var_flow = tmp_assign_source_3;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (var_flow == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[159]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 385;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = var_flow;
        tmp_cmp_expr_right_1 = mod_consts[20];
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "oooooo";
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
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 386;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_self;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[135]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_request == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 386;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = par_request;
        frame_4df57d98d0c10f523402f35248b9af00->m_frame.f_lineno = 386;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_5;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[15]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[157]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_stream_id == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = par_stream_id;
        frame_4df57d98d0c10f523402f35248b9af00->m_frame.f_lineno = 387;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_local_flow;
            var_local_flow = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 388;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[15]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[158]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_max_frame_size;
            var_max_frame_size = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts[112]);
        assert(tmp_called_value_4 != NULL);
        CHECK_OBJECT(var_local_flow);
        tmp_args_element_value_6 = var_local_flow;
        CHECK_OBJECT(var_max_frame_size);
        tmp_args_element_value_7 = var_max_frame_size;
        frame_4df57d98d0c10f523402f35248b9af00->m_frame.f_lineno = 389;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_flow;
            var_flow = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 385;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    if (var_flow == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[159]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 390;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_flow;
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
        exception_tb = MAKE_TRACEBACK(frame_4df57d98d0c10f523402f35248b9af00, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4df57d98d0c10f523402f35248b9af00->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4df57d98d0c10f523402f35248b9af00, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4df57d98d0c10f523402f35248b9af00,
        type_description_1,
        par_self,
        par_request,
        par_stream_id,
        var_local_flow,
        var_max_frame_size,
        var_flow
    );


    // Release cached frame if used for exception.
    if (frame_4df57d98d0c10f523402f35248b9af00 == cache_frame_4df57d98d0c10f523402f35248b9af00) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4df57d98d0c10f523402f35248b9af00);
        cache_frame_4df57d98d0c10f523402f35248b9af00 = NULL;
    }

    assertFrameObject(frame_4df57d98d0c10f523402f35248b9af00);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_local_flow);
    var_local_flow = NULL;
    Py_XDECREF(var_max_frame_size);
    var_max_frame_size = NULL;
    Py_XDECREF(var_flow);
    var_flow = NULL;
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

    Py_XDECREF(var_local_flow);
    var_local_flow = NULL;
    Py_XDECREF(var_max_frame_size);
    var_max_frame_size = NULL;
    Py_XDECREF(var_flow);
    var_flow = NULL;
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
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http2$$$function__16_can_handle_request(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_origin = python_pars[1];
    struct Nuitka_FrameObject *frame_1a9cfa3190c7b5ff14e8cfdafa230f84;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a9cfa3190c7b5ff14e8cfdafa230f84 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a9cfa3190c7b5ff14e8cfdafa230f84)) {
        Py_XDECREF(cache_frame_1a9cfa3190c7b5ff14e8cfdafa230f84);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a9cfa3190c7b5ff14e8cfdafa230f84 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a9cfa3190c7b5ff14e8cfdafa230f84 = MAKE_FUNCTION_FRAME(codeobj_1a9cfa3190c7b5ff14e8cfdafa230f84, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a9cfa3190c7b5ff14e8cfdafa230f84->m_type_description == NULL);
    frame_1a9cfa3190c7b5ff14e8cfdafa230f84 = cache_frame_1a9cfa3190c7b5ff14e8cfdafa230f84;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1a9cfa3190c7b5ff14e8cfdafa230f84);
    assert(Py_REFCNT(frame_1a9cfa3190c7b5ff14e8cfdafa230f84) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_origin);
        tmp_cmp_expr_left_1 = par_origin;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
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
        exception_tb = MAKE_TRACEBACK(frame_1a9cfa3190c7b5ff14e8cfdafa230f84, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a9cfa3190c7b5ff14e8cfdafa230f84->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a9cfa3190c7b5ff14e8cfdafa230f84, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a9cfa3190c7b5ff14e8cfdafa230f84,
        type_description_1,
        par_self,
        par_origin
    );


    // Release cached frame if used for exception.
    if (frame_1a9cfa3190c7b5ff14e8cfdafa230f84 == cache_frame_1a9cfa3190c7b5ff14e8cfdafa230f84) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a9cfa3190c7b5ff14e8cfdafa230f84);
        cache_frame_1a9cfa3190c7b5ff14e8cfdafa230f84 = NULL;
    }

    assertFrameObject(frame_1a9cfa3190c7b5ff14e8cfdafa230f84);

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
    CHECK_OBJECT(par_origin);
    Py_DECREF(par_origin);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_origin);
    Py_DECREF(par_origin);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http2$$$function__17_is_available(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_10616265dfcffc074bbb6f651d20e09c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_10616265dfcffc074bbb6f651d20e09c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_10616265dfcffc074bbb6f651d20e09c)) {
        Py_XDECREF(cache_frame_10616265dfcffc074bbb6f651d20e09c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_10616265dfcffc074bbb6f651d20e09c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_10616265dfcffc074bbb6f651d20e09c = MAKE_FUNCTION_FRAME(codeobj_10616265dfcffc074bbb6f651d20e09c, module_httpcore$_sync$http2, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_10616265dfcffc074bbb6f651d20e09c->m_type_description == NULL);
    frame_10616265dfcffc074bbb6f651d20e09c = cache_frame_10616265dfcffc074bbb6f651d20e09c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_10616265dfcffc074bbb6f651d20e09c);
    assert(Py_REFCNT(frame_10616265dfcffc074bbb6f651d20e09c) == 2);

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
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 399;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[145]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 399;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 399;
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
        tmp_expression_value_3 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[29]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[28]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        Py_INCREF(tmp_and_right_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_10616265dfcffc074bbb6f651d20e09c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_10616265dfcffc074bbb6f651d20e09c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10616265dfcffc074bbb6f651d20e09c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_10616265dfcffc074bbb6f651d20e09c,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_10616265dfcffc074bbb6f651d20e09c == cache_frame_10616265dfcffc074bbb6f651d20e09c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_10616265dfcffc074bbb6f651d20e09c);
        cache_frame_10616265dfcffc074bbb6f651d20e09c = NULL;
    }

    assertFrameObject(frame_10616265dfcffc074bbb6f651d20e09c);

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


static PyObject *impl_httpcore$_sync$http2$$$function__18_has_expired(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_now = NULL;
    struct Nuitka_FrameObject *frame_a6ce4402918c4c4d5b99a96c6785c135;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a6ce4402918c4c4d5b99a96c6785c135 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a6ce4402918c4c4d5b99a96c6785c135)) {
        Py_XDECREF(cache_frame_a6ce4402918c4c4d5b99a96c6785c135);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a6ce4402918c4c4d5b99a96c6785c135 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a6ce4402918c4c4d5b99a96c6785c135 = MAKE_FUNCTION_FRAME(codeobj_a6ce4402918c4c4d5b99a96c6785c135, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a6ce4402918c4c4d5b99a96c6785c135->m_type_description == NULL);
    frame_a6ce4402918c4c4d5b99a96c6785c135 = cache_frame_a6ce4402918c4c4d5b99a96c6785c135;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a6ce4402918c4c4d5b99a96c6785c135);
    assert(Py_REFCNT(frame_a6ce4402918c4c4d5b99a96c6785c135) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a6ce4402918c4c4d5b99a96c6785c135->m_frame.f_lineno = 405;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[142]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_now == NULL);
        var_now = tmp_assign_source_1;
    }
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_1);
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_now);
        tmp_cmp_expr_left_2 = var_now;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a6ce4402918c4c4d5b99a96c6785c135, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a6ce4402918c4c4d5b99a96c6785c135->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a6ce4402918c4c4d5b99a96c6785c135, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a6ce4402918c4c4d5b99a96c6785c135,
        type_description_1,
        par_self,
        var_now
    );


    // Release cached frame if used for exception.
    if (frame_a6ce4402918c4c4d5b99a96c6785c135 == cache_frame_a6ce4402918c4c4d5b99a96c6785c135) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a6ce4402918c4c4d5b99a96c6785c135);
        cache_frame_a6ce4402918c4c4d5b99a96c6785c135 = NULL;
    }

    assertFrameObject(frame_a6ce4402918c4c4d5b99a96c6785c135);

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


static PyObject *impl_httpcore$_sync$http2$$$function__19_is_idle(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b1380c85a1b4af602fb5cf9cf110375d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b1380c85a1b4af602fb5cf9cf110375d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b1380c85a1b4af602fb5cf9cf110375d)) {
        Py_XDECREF(cache_frame_b1380c85a1b4af602fb5cf9cf110375d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b1380c85a1b4af602fb5cf9cf110375d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b1380c85a1b4af602fb5cf9cf110375d = MAKE_FUNCTION_FRAME(codeobj_b1380c85a1b4af602fb5cf9cf110375d, module_httpcore$_sync$http2, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b1380c85a1b4af602fb5cf9cf110375d->m_type_description == NULL);
    frame_b1380c85a1b4af602fb5cf9cf110375d = cache_frame_b1380c85a1b4af602fb5cf9cf110375d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b1380c85a1b4af602fb5cf9cf110375d);
    assert(Py_REFCNT(frame_b1380c85a1b4af602fb5cf9cf110375d) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 409;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[17]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 409;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
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
        exception_tb = MAKE_TRACEBACK(frame_b1380c85a1b4af602fb5cf9cf110375d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b1380c85a1b4af602fb5cf9cf110375d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b1380c85a1b4af602fb5cf9cf110375d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b1380c85a1b4af602fb5cf9cf110375d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b1380c85a1b4af602fb5cf9cf110375d == cache_frame_b1380c85a1b4af602fb5cf9cf110375d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b1380c85a1b4af602fb5cf9cf110375d);
        cache_frame_b1380c85a1b4af602fb5cf9cf110375d = NULL;
    }

    assertFrameObject(frame_b1380c85a1b4af602fb5cf9cf110375d);

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


static PyObject *impl_httpcore$_sync$http2$$$function__20_is_closed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a22e57d6edb5302e175e3c51f06c7560;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a22e57d6edb5302e175e3c51f06c7560 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a22e57d6edb5302e175e3c51f06c7560)) {
        Py_XDECREF(cache_frame_a22e57d6edb5302e175e3c51f06c7560);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a22e57d6edb5302e175e3c51f06c7560 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a22e57d6edb5302e175e3c51f06c7560 = MAKE_FUNCTION_FRAME(codeobj_a22e57d6edb5302e175e3c51f06c7560, module_httpcore$_sync$http2, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a22e57d6edb5302e175e3c51f06c7560->m_type_description == NULL);
    frame_a22e57d6edb5302e175e3c51f06c7560 = cache_frame_a22e57d6edb5302e175e3c51f06c7560;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a22e57d6edb5302e175e3c51f06c7560);
    assert(Py_REFCNT(frame_a22e57d6edb5302e175e3c51f06c7560) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 412;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[145]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 412;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
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
        exception_tb = MAKE_TRACEBACK(frame_a22e57d6edb5302e175e3c51f06c7560, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a22e57d6edb5302e175e3c51f06c7560->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a22e57d6edb5302e175e3c51f06c7560, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a22e57d6edb5302e175e3c51f06c7560,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a22e57d6edb5302e175e3c51f06c7560 == cache_frame_a22e57d6edb5302e175e3c51f06c7560) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a22e57d6edb5302e175e3c51f06c7560);
        cache_frame_a22e57d6edb5302e175e3c51f06c7560 = NULL;
    }

    assertFrameObject(frame_a22e57d6edb5302e175e3c51f06c7560);

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


static PyObject *impl_httpcore$_sync$http2$$$function__21_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_origin = NULL;
    struct Nuitka_FrameObject *frame_13e13997050b1617caabec6e2d06a002;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_13e13997050b1617caabec6e2d06a002 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_13e13997050b1617caabec6e2d06a002)) {
        Py_XDECREF(cache_frame_13e13997050b1617caabec6e2d06a002);

#if _DEBUG_REFCOUNTS
        if (cache_frame_13e13997050b1617caabec6e2d06a002 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_13e13997050b1617caabec6e2d06a002 = MAKE_FUNCTION_FRAME(codeobj_13e13997050b1617caabec6e2d06a002, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_13e13997050b1617caabec6e2d06a002->m_type_description == NULL);
    frame_13e13997050b1617caabec6e2d06a002 = cache_frame_13e13997050b1617caabec6e2d06a002;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_13e13997050b1617caabec6e2d06a002);
    assert(Py_REFCNT(frame_13e13997050b1617caabec6e2d06a002) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_origin == NULL);
        var_origin = tmp_assign_source_1;
    }
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(var_origin);
        tmp_operand_value_1 = var_origin;
        tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[38];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[161];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[162]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[38];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[163];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[21]);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[38];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[38], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
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
        exception_tb = MAKE_TRACEBACK(frame_13e13997050b1617caabec6e2d06a002, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_13e13997050b1617caabec6e2d06a002->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_13e13997050b1617caabec6e2d06a002, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_13e13997050b1617caabec6e2d06a002,
        type_description_1,
        par_self,
        var_origin
    );


    // Release cached frame if used for exception.
    if (frame_13e13997050b1617caabec6e2d06a002 == cache_frame_13e13997050b1617caabec6e2d06a002) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_13e13997050b1617caabec6e2d06a002);
        cache_frame_13e13997050b1617caabec6e2d06a002 = NULL;
    }

    assertFrameObject(frame_13e13997050b1617caabec6e2d06a002);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_origin);
    Py_DECREF(var_origin);
    var_origin = NULL;
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

    Py_XDECREF(var_origin);
    var_origin = NULL;
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


static PyObject *impl_httpcore$_sync$http2$$$function__22___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_class_name = NULL;
    PyObject *var_origin = NULL;
    struct Nuitka_FrameObject *frame_e0448418e93c73181d47418e60f0595f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e0448418e93c73181d47418e60f0595f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e0448418e93c73181d47418e60f0595f)) {
        Py_XDECREF(cache_frame_e0448418e93c73181d47418e60f0595f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e0448418e93c73181d47418e60f0595f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e0448418e93c73181d47418e60f0595f = MAKE_FUNCTION_FRAME(codeobj_e0448418e93c73181d47418e60f0595f, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e0448418e93c73181d47418e60f0595f->m_type_description == NULL);
    frame_e0448418e93c73181d47418e60f0595f = cache_frame_e0448418e93c73181d47418e60f0595f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e0448418e93c73181d47418e60f0595f);
    assert(Py_REFCNT(frame_e0448418e93c73181d47418e60f0595f) == 2);

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


            exception_lineno = 422;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[164]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_class_name == NULL);
        var_class_name = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_origin == NULL);
        var_origin = tmp_assign_source_2;
    }
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[165];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(9);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_class_name);
            tmp_format_value_1 = var_class_name;
            tmp_format_spec_1 = mod_consts[38];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[166];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(var_origin);
            tmp_operand_value_1 = var_origin;
            tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[38];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[167];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_5 = par_self;
            tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[18]);
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[162]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[38];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 425;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[163];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_6 = par_self;
            tmp_format_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[21]);
            if (tmp_format_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_4 = mod_consts[38];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 426;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[168];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[38], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
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
        exception_tb = MAKE_TRACEBACK(frame_e0448418e93c73181d47418e60f0595f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e0448418e93c73181d47418e60f0595f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e0448418e93c73181d47418e60f0595f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e0448418e93c73181d47418e60f0595f,
        type_description_1,
        par_self,
        var_class_name,
        var_origin
    );


    // Release cached frame if used for exception.
    if (frame_e0448418e93c73181d47418e60f0595f == cache_frame_e0448418e93c73181d47418e60f0595f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e0448418e93c73181d47418e60f0595f);
        cache_frame_e0448418e93c73181d47418e60f0595f = NULL;
    }

    assertFrameObject(frame_e0448418e93c73181d47418e60f0595f);

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
    CHECK_OBJECT(var_origin);
    Py_DECREF(var_origin);
    var_origin = NULL;
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
    Py_XDECREF(var_origin);
    var_origin = NULL;
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


static PyObject *impl_httpcore$_sync$http2$$$function__23___enter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
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


static PyObject *impl_httpcore$_sync$http2$$$function__24___exit__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_exc_type = python_pars[1];
    PyObject *par_exc_value = python_pars[2];
    PyObject *par_traceback = python_pars[3];
    struct Nuitka_FrameObject *frame_8dc402030b04720f73ad0dfac58ff0ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8dc402030b04720f73ad0dfac58ff0ed = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8dc402030b04720f73ad0dfac58ff0ed)) {
        Py_XDECREF(cache_frame_8dc402030b04720f73ad0dfac58ff0ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8dc402030b04720f73ad0dfac58ff0ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8dc402030b04720f73ad0dfac58ff0ed = MAKE_FUNCTION_FRAME(codeobj_8dc402030b04720f73ad0dfac58ff0ed, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8dc402030b04720f73ad0dfac58ff0ed->m_type_description == NULL);
    frame_8dc402030b04720f73ad0dfac58ff0ed = cache_frame_8dc402030b04720f73ad0dfac58ff0ed;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8dc402030b04720f73ad0dfac58ff0ed);
    assert(Py_REFCNT(frame_8dc402030b04720f73ad0dfac58ff0ed) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_8dc402030b04720f73ad0dfac58ff0ed->m_frame.f_lineno = 441;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[143]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
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
        exception_tb = MAKE_TRACEBACK(frame_8dc402030b04720f73ad0dfac58ff0ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8dc402030b04720f73ad0dfac58ff0ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8dc402030b04720f73ad0dfac58ff0ed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8dc402030b04720f73ad0dfac58ff0ed,
        type_description_1,
        par_self,
        par_exc_type,
        par_exc_value,
        par_traceback
    );


    // Release cached frame if used for exception.
    if (frame_8dc402030b04720f73ad0dfac58ff0ed == cache_frame_8dc402030b04720f73ad0dfac58ff0ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8dc402030b04720f73ad0dfac58ff0ed);
        cache_frame_8dc402030b04720f73ad0dfac58ff0ed = NULL;
    }

    assertFrameObject(frame_8dc402030b04720f73ad0dfac58ff0ed);

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
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_value);
    Py_DECREF(par_exc_value);
    CHECK_OBJECT(par_traceback);
    Py_DECREF(par_traceback);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_value);
    Py_DECREF(par_exc_value);
    CHECK_OBJECT(par_traceback);
    Py_DECREF(par_traceback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http2$$$function__25___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_connection = python_pars[1];
    PyObject *par_request = python_pars[2];
    PyObject *par_stream_id = python_pars[3];
    struct Nuitka_FrameObject *frame_88d8b510f287b406e16b171cd7bcac71;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_88d8b510f287b406e16b171cd7bcac71 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_88d8b510f287b406e16b171cd7bcac71)) {
        Py_XDECREF(cache_frame_88d8b510f287b406e16b171cd7bcac71);

#if _DEBUG_REFCOUNTS
        if (cache_frame_88d8b510f287b406e16b171cd7bcac71 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_88d8b510f287b406e16b171cd7bcac71 = MAKE_FUNCTION_FRAME(codeobj_88d8b510f287b406e16b171cd7bcac71, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_88d8b510f287b406e16b171cd7bcac71->m_type_description == NULL);
    frame_88d8b510f287b406e16b171cd7bcac71 = cache_frame_88d8b510f287b406e16b171cd7bcac71;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_88d8b510f287b406e16b171cd7bcac71);
    assert(Py_REFCNT(frame_88d8b510f287b406e16b171cd7bcac71) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_connection);
        tmp_assattr_value_1 = par_connection;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[169], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_request);
        tmp_assattr_value_2 = par_request;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[170], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_stream_id);
        tmp_assattr_value_3 = par_stream_id;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[171], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[172], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_88d8b510f287b406e16b171cd7bcac71, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_88d8b510f287b406e16b171cd7bcac71->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_88d8b510f287b406e16b171cd7bcac71, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_88d8b510f287b406e16b171cd7bcac71,
        type_description_1,
        par_self,
        par_connection,
        par_request,
        par_stream_id
    );


    // Release cached frame if used for exception.
    if (frame_88d8b510f287b406e16b171cd7bcac71 == cache_frame_88d8b510f287b406e16b171cd7bcac71) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_88d8b510f287b406e16b171cd7bcac71);
        cache_frame_88d8b510f287b406e16b171cd7bcac71 = NULL;
    }

    assertFrameObject(frame_88d8b510f287b406e16b171cd7bcac71);

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
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_connection);
    Py_DECREF(par_connection);
    CHECK_OBJECT(par_request);
    Py_DECREF(par_request);
    CHECK_OBJECT(par_stream_id);
    Py_DECREF(par_stream_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_httpcore$_sync$http2$$$function__26___iter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_GENERATOR_httpcore$_sync$http2$$$function__26___iter__$$$genobj__1___iter__(tmp_closure_1);

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
struct httpcore$_sync$http2$$$function__26___iter__$$$genobj__1___iter___locals {
    PyObject *var_kwargs;
    PyObject *var_chunk;
    PyObject *var_exc;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
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
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
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

static PyObject *httpcore$_sync$http2$$$function__26___iter__$$$genobj__1___iter___context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct httpcore$_sync$http2$$$function__26___iter__$$$genobj__1___iter___locals *generator_heap = (struct httpcore$_sync$http2$$$function__26___iter__$$$genobj__1___iter___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_kwargs = NULL;
    generator_heap->var_chunk = NULL;
    generator_heap->var_exc = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_0be06d72827afbb535bd50cee55409b3, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        tmp_dict_key_1 = mod_consts[46];
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[110]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 454;
            generator_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[170]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 454;
            generator_heap->type_description_1 = "cooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_2;
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(generator_heap->tmp_res != 0));
            tmp_dict_key_1 = mod_consts[58];
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[110]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 454;
                generator_heap->type_description_1 = "cooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[171]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 454;
                generator_heap->type_description_1 = "cooo";
                goto dict_build_exception_1;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(generator_heap->tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(generator_heap->var_kwargs == NULL);
        generator_heap->var_kwargs = tmp_assign_source_1;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 456;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_3;
        }
        tmp_args_element_value_1 = mod_consts[173];
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[110]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 456;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[170]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 456;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(generator_heap->var_kwargs);
        tmp_args_element_value_3 = generator_heap->var_kwargs;
        generator->m_frame->m_frame.f_lineno = 456;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 456;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_3;
        }
        assert(generator_heap->tmp_with_1__source == NULL);
        generator_heap->tmp_with_1__source = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(generator_heap->tmp_with_1__source);
        tmp_expression_value_4 = generator_heap->tmp_with_1__source;
        tmp_called_value_2 = LOOKUP_SPECIAL(tmp_expression_value_4, mod_consts[40]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 456;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_3;
        }
        generator->m_frame->m_frame.f_lineno = 456;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 456;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_3;
        }
        assert(generator_heap->tmp_with_1__enter == NULL);
        generator_heap->tmp_with_1__enter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(generator_heap->tmp_with_1__source);
        tmp_expression_value_5 = generator_heap->tmp_with_1__source;
        tmp_assign_source_4 = LOOKUP_SPECIAL(tmp_expression_value_5, mod_consts[41]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 456;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_3;
        }
        assert(generator_heap->tmp_with_1__exit == NULL);
        generator_heap->tmp_with_1__exit = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        generator_heap->tmp_with_1__indicator = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_9;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[110]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 457;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[169]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 457;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_5;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[132]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 457;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_5;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[110]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 458;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[170]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_3);

            generator_heap->exception_lineno = 458;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_5;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_value_0_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[110]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 458;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[171]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_value_0_1);

            generator_heap->exception_lineno = 458;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_5;
        }
        generator->m_frame->m_frame.f_lineno = 457;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_iter_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[61]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 457;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 457;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_5;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_6;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_7 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cooo";
                generator_heap->exception_lineno = 457;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_8 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_chunk;
            generator_heap->var_chunk = tmp_assign_source_8;
            Py_INCREF(generator_heap->var_chunk);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_10;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_chunk);
        tmp_expression_value_10 = generator_heap->var_chunk;
        Py_INCREF(tmp_expression_value_10);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_10;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 460;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_6;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 457;
        generator_heap->type_description_1 = "cooo";
        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_6:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
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
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_5;
    // End of try:
    try_end_1:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_2 == NULL) {
        generator_heap->exception_keeper_tb_2 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_2);
    } else if (generator_heap->exception_keeper_lineno_2 != 0) {
        generator_heap->exception_keeper_tb_2 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_2, generator->m_frame, generator_heap->exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_2, &generator_heap->exception_keeper_value_2, &generator_heap->exception_keeper_tb_2);
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
        nuitka_bool tmp_assign_source_9;
        tmp_assign_source_9 = NUITKA_BOOL_FALSE;
        generator_heap->tmp_with_1__indicator = tmp_assign_source_9;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_4 = generator_heap->tmp_with_1__exit;
        tmp_args_element_value_4 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_5 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_6 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        generator->m_frame->m_frame.f_lineno = 456;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 456;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_7;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 456;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_2 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 456;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "cooo";
    goto try_except_handler_7;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 456;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "cooo";
    goto try_except_handler_7;
    branch_end_1:;
    goto try_end_3;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = generator_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_5 = generator_heap->tmp_with_1__exit;
        generator->m_frame->m_frame.f_lineno = 456;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[45]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

            Py_DECREF(generator_heap->exception_keeper_type_4);
            Py_XDECREF(generator_heap->exception_keeper_value_4);
            Py_XDECREF(generator_heap->exception_keeper_tb_4);

            generator_heap->exception_lineno = 456;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto try_except_handler_3;
    // End of try:
    try_end_4:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = generator_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_6 = generator_heap->tmp_with_1__exit;
        generator->m_frame->m_frame.f_lineno = 456;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[45]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 456;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
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
    generator_heap->exception_type = generator_heap->exception_keeper_type_5;
    generator_heap->exception_value = generator_heap->exception_keeper_value_5;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 2.
    generator_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_6 == NULL) {
        generator_heap->exception_keeper_tb_6 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_6);
    } else if (generator_heap->exception_keeper_lineno_6 != 0) {
        generator_heap->exception_keeper_tb_6 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_6, generator->m_frame, generator_heap->exception_keeper_lineno_6);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_6, &generator_heap->exception_keeper_value_6, &generator_heap->exception_keeper_tb_6);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_BaseException;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_5 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = EXC_VALUE(PyThreadState_GET());
        assert(generator_heap->var_exc == NULL);
        Py_INCREF(tmp_assign_source_10);
        generator_heap->var_exc = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[110]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 465;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_9;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 465;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[143]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 465;
            generator_heap->type_description_1 = "cooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_raise_type_1;
        CHECK_OBJECT(generator_heap->var_exc);
        tmp_raise_type_1 = generator_heap->var_exc;
        generator_heap->exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        generator_heap->exception_lineno = 466;
        RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "cooo";
        goto try_except_handler_9;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_9:;
    generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_exc);
    generator_heap->var_exc = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_7;
    generator_heap->exception_value = generator_heap->exception_keeper_value_7;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

    goto try_except_handler_8;
    // End of try:
    goto branch_end_5;
    branch_no_5:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 455;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "cooo";
    goto try_except_handler_8;
    branch_end_5:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_8:;
    generator_heap->exception_keeper_type_8 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_8 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_8 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_2);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_8;
    generator_heap->exception_value = generator_heap->exception_keeper_value_8;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_8;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
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
            generator_heap->var_kwargs,
            generator_heap->var_chunk,
            generator_heap->var_exc
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

    Py_XDECREF(generator_heap->var_kwargs);
    generator_heap->var_kwargs = NULL;
    Py_XDECREF(generator_heap->var_chunk);
    generator_heap->var_chunk = NULL;
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
    CHECK_OBJECT(generator_heap->var_kwargs);
    Py_DECREF(generator_heap->var_kwargs);
    generator_heap->var_kwargs = NULL;
    Py_XDECREF(generator_heap->var_chunk);
    generator_heap->var_chunk = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_httpcore$_sync$http2$$$function__26___iter__$$$genobj__1___iter__(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        httpcore$_sync$http2$$$function__26___iter__$$$genobj__1___iter___context,
        module_httpcore$_sync$http2,
        mod_consts[174],
#if PYTHON_VERSION >= 0x350
        mod_consts[175],
#endif
        codeobj_0be06d72827afbb535bd50cee55409b3,
        closure,
        1,
#if 1
        sizeof(struct httpcore$_sync$http2$$$function__26___iter__$$$genobj__1___iter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_httpcore$_sync$http2$$$function__27_close(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_kwargs = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_a94c87ffb2741a44e11b796b3b4da2e6;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_a94c87ffb2741a44e11b796b3b4da2e6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a94c87ffb2741a44e11b796b3b4da2e6)) {
        Py_XDECREF(cache_frame_a94c87ffb2741a44e11b796b3b4da2e6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a94c87ffb2741a44e11b796b3b4da2e6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a94c87ffb2741a44e11b796b3b4da2e6 = MAKE_FUNCTION_FRAME(codeobj_a94c87ffb2741a44e11b796b3b4da2e6, module_httpcore$_sync$http2, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a94c87ffb2741a44e11b796b3b4da2e6->m_type_description == NULL);
    frame_a94c87ffb2741a44e11b796b3b4da2e6 = cache_frame_a94c87ffb2741a44e11b796b3b4da2e6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a94c87ffb2741a44e11b796b3b4da2e6);
    assert(Py_REFCNT(frame_a94c87ffb2741a44e11b796b3b4da2e6) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[172]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
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
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[172], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_2;
        tmp_dict_key_1 = mod_consts[58];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[171]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_kwargs == NULL);
        var_kwargs = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = mod_consts[74];
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[170]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_kwargs);
        tmp_args_element_value_3 = var_kwargs;
        frame_a94c87ffb2741a44e11b796b3b4da2e6->m_frame.f_lineno = 472;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_4 = tmp_with_1__source;
        tmp_called_value_2 = LOOKUP_SPECIAL(tmp_expression_value_4, mod_consts[40]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_a94c87ffb2741a44e11b796b3b4da2e6->m_frame.f_lineno = 472;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_5 = tmp_with_1__source;
        tmp_assign_source_4 = LOOKUP_SPECIAL(tmp_expression_value_5, mod_consts[41]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[169]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[75]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[171]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 473;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        frame_a94c87ffb2741a44e11b796b3b4da2e6->m_frame.f_lineno = 473;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "oo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_a94c87ffb2741a44e11b796b3b4da2e6, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_a94c87ffb2741a44e11b796b3b4da2e6, exception_keeper_lineno_1);
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
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        tmp_args_element_value_4 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_5 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_6 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_a94c87ffb2741a44e11b796b3b4da2e6->m_frame.f_lineno = 472;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oo";
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
        exception_lineno = 472;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a94c87ffb2741a44e11b796b3b4da2e6->m_frame) frame_a94c87ffb2741a44e11b796b3b4da2e6->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_5;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 472;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a94c87ffb2741a44e11b796b3b4da2e6->m_frame) frame_a94c87ffb2741a44e11b796b3b4da2e6->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
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
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        frame_a94c87ffb2741a44e11b796b3b4da2e6->m_frame.f_lineno = 472;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[45]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 472;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_a94c87ffb2741a44e11b796b3b4da2e6->m_frame.f_lineno = 472;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[45]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    goto try_end_4;
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
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a94c87ffb2741a44e11b796b3b4da2e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a94c87ffb2741a44e11b796b3b4da2e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a94c87ffb2741a44e11b796b3b4da2e6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a94c87ffb2741a44e11b796b3b4da2e6,
        type_description_1,
        par_self,
        var_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_a94c87ffb2741a44e11b796b3b4da2e6 == cache_frame_a94c87ffb2741a44e11b796b3b4da2e6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a94c87ffb2741a44e11b796b3b4da2e6);
        cache_frame_a94c87ffb2741a44e11b796b3b4da2e6 = NULL;
    }

    assertFrameObject(frame_a94c87ffb2741a44e11b796b3b4da2e6);

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
    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
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

    Py_XDECREF(var_kwargs);
    var_kwargs = NULL;
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



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__10__receive_events(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__10__receive_events,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        mod_consts[241],
#endif
        codeobj_95004fb6d3cd9cf43c07be6a91212e03,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__11__response_closed(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__11__response_closed,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[242],
#endif
        codeobj_ce7d1cb4dc16da0871be8e7f161e8347,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__12_close(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__12_close,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[244],
#endif
        codeobj_497e738988c810ee979d8eb0e769e223,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__13__read_incoming_data(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__13__read_incoming_data,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        mod_consts[245],
#endif
        codeobj_b31ba2dcbe10e8c2f20abc1ebc268a51,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__14__write_outgoing_data(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__14__write_outgoing_data,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[246],
#endif
        codeobj_b67220cf6b0a2be9f0c4e4ccf4c09cd8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__15__wait_for_outgoing_flow(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__15__wait_for_outgoing_flow,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        mod_consts[247],
#endif
        codeobj_4df57d98d0c10f523402f35248b9af00,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        mod_consts[160],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__16_can_handle_request(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__16_can_handle_request,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        mod_consts[249],
#endif
        codeobj_1a9cfa3190c7b5ff14e8cfdafa230f84,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__17_is_available(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__17_is_available,
        mod_consts[250],
#if PYTHON_VERSION >= 0x300
        mod_consts[251],
#endif
        codeobj_10616265dfcffc074bbb6f651d20e09c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__18_has_expired(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__18_has_expired,
        mod_consts[252],
#if PYTHON_VERSION >= 0x300
        mod_consts[253],
#endif
        codeobj_a6ce4402918c4c4d5b99a96c6785c135,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__19_is_idle(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__19_is_idle,
        mod_consts[254],
#if PYTHON_VERSION >= 0x300
        mod_consts[255],
#endif
        codeobj_b1380c85a1b4af602fb5cf9cf110375d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__1_has_body_headers(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__1_has_body_headers,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_407e20b8553acbcb6b8ae8f3d896f29d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__20_is_closed(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__20_is_closed,
        mod_consts[256],
#if PYTHON_VERSION >= 0x300
        mod_consts[257],
#endif
        codeobj_a22e57d6edb5302e175e3c51f06c7560,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__21_info(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__21_info,
        mod_consts[259],
#if PYTHON_VERSION >= 0x300
        mod_consts[260],
#endif
        codeobj_13e13997050b1617caabec6e2d06a002,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__22___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__22___repr__,
        mod_consts[261],
#if PYTHON_VERSION >= 0x300
        mod_consts[262],
#endif
        codeobj_e0448418e93c73181d47418e60f0595f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__23___enter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__23___enter__,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[264],
#endif
        codeobj_c2000d015e5a0c6ac5458e9f7ac529aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__24___exit__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__24___exit__,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[271],
#endif
        codeobj_8dc402030b04720f73ad0dfac58ff0ed,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__25___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__25___init__,
        mod_consts[226],
#if PYTHON_VERSION >= 0x300
        mod_consts[272],
#endif
        codeobj_88d8b510f287b406e16b171cd7bcac71,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__26___iter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__26___iter__,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_0be06d72827afbb535bd50cee55409b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__27_close(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__27_close,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[273],
#endif
        codeobj_a94c87ffb2741a44e11b796b3b4da2e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__2___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__2___init__,
        mod_consts[226],
#if PYTHON_VERSION >= 0x300
        mod_consts[227],
#endif
        codeobj_6199b3db982e001e8d7413b8c6e793c5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__3_handle_request(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__3_handle_request,
        mod_consts[228],
#if PYTHON_VERSION >= 0x300
        mod_consts[229],
#endif
        codeobj_530e484cf57efd339d50521fc736d4f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__4__send_connection_init(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__4__send_connection_init,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        mod_consts[230],
#endif
        codeobj_6f8a1cd2e052432ed031317d0f758ae3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        mod_consts[93],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__5__send_request_headers(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__5__send_request_headers,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        mod_consts[232],
#endif
        codeobj_c750470ac8d1987cbbbff24ba0a49bd0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__6__send_request_body(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__6__send_request_body,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        mod_consts[233],
#endif
        codeobj_4fc307909ce7006c027170088f261df3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__7__receive_response(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__7__receive_response,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        mod_consts[237],
#endif
        codeobj_a526c9fdba19855e750c49259f282eda,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__8__receive_response_body(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__8__receive_response_body,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_76af70e37bbfe8ec480b97bac5c704ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_httpcore$_sync$http2$$$function__9__receive_stream_event(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_httpcore$_sync$http2$$$function__9__receive_stream_event,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        mod_consts[240],
#endif
        codeobj_975eeed9bb4a2a3c8b20eb3944619ef3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_httpcore$_sync$http2,
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

function_impl_code functable_httpcore$_sync$http2[] = {
    impl_httpcore$_sync$http2$$$function__1_has_body_headers,
    impl_httpcore$_sync$http2$$$function__2___init__,
    impl_httpcore$_sync$http2$$$function__3_handle_request,
    impl_httpcore$_sync$http2$$$function__4__send_connection_init,
    impl_httpcore$_sync$http2$$$function__5__send_request_headers,
    impl_httpcore$_sync$http2$$$function__6__send_request_body,
    impl_httpcore$_sync$http2$$$function__7__receive_response,
    impl_httpcore$_sync$http2$$$function__8__receive_response_body,
    impl_httpcore$_sync$http2$$$function__9__receive_stream_event,
    impl_httpcore$_sync$http2$$$function__10__receive_events,
    impl_httpcore$_sync$http2$$$function__11__response_closed,
    impl_httpcore$_sync$http2$$$function__12_close,
    impl_httpcore$_sync$http2$$$function__13__read_incoming_data,
    impl_httpcore$_sync$http2$$$function__14__write_outgoing_data,
    impl_httpcore$_sync$http2$$$function__15__wait_for_outgoing_flow,
    impl_httpcore$_sync$http2$$$function__16_can_handle_request,
    impl_httpcore$_sync$http2$$$function__17_is_available,
    impl_httpcore$_sync$http2$$$function__18_has_expired,
    impl_httpcore$_sync$http2$$$function__19_is_idle,
    impl_httpcore$_sync$http2$$$function__20_is_closed,
    impl_httpcore$_sync$http2$$$function__21_info,
    impl_httpcore$_sync$http2$$$function__22___repr__,
    impl_httpcore$_sync$http2$$$function__23___enter__,
    impl_httpcore$_sync$http2$$$function__24___exit__,
    impl_httpcore$_sync$http2$$$function__25___init__,
    impl_httpcore$_sync$http2$$$function__26___iter__,
    impl_httpcore$_sync$http2$$$function__27_close,
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

    function_impl_code *current = functable_httpcore$_sync$http2;
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

    if (offset > sizeof(functable_httpcore$_sync$http2) || offset < 0) {
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
        functable_httpcore$_sync$http2[offset],
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
        module_httpcore$_sync$http2,
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
PyObject *modulecode_httpcore$_sync$http2(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("httpcore._sync.http2");

    // Store the module for future use.
    module_httpcore$_sync$http2 = module;

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
        PRINT_STRING("httpcore._sync.http2: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpcore._sync.http2: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("httpcore._sync.http2: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inithttpcore$_sync$http2\n");

    moduledict_httpcore$_sync$http2 = MODULE_DICT(module_httpcore$_sync$http2);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_httpcore$_sync$http2,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_httpcore$_sync$http2,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[38]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_httpcore$_sync$http2,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore$_sync$http2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_httpcore$_sync$http2,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_httpcore$_sync$http2);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_httpcore$_sync$http2);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    struct Nuitka_FrameObject *frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f;
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
    PyObject *locals_httpcore$_sync$http2$$$class__1_HTTPConnectionState_31 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_78e48df81ed32f9bbe5fe99700c67b5b_2;
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
    PyObject *locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37 = NULL;
    struct Nuitka_FrameObject *frame_43c74ff6dad3f9a07f6d95a26db71c2e_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_httpcore$_sync$http2$$$class__3_HTTP2ConnectionByteStream_444 = NULL;
    struct Nuitka_FrameObject *frame_c06772c979dd93900f202ea6aaf2674b_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[177];
        UPDATE_STRING_DICT0(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_2);
    }
    frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f = MAKE_MODULE_FRAME(codeobj_09ca3e5ef5a4512a3a9a45db0eb1ae6f, module_httpcore$_sync$http2);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f);
    assert(Py_REFCNT(frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[177];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[179]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[36], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[179]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[180], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[182];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_httpcore$_sync$http2;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[20];
        frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[141];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_httpcore$_sync$http2;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[20];
        frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPES();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_7 == NULL));
        UPDATE_STRING_DICT0(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[184];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_httpcore$_sync$http2;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[20];
        frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f->m_frame.f_lineno = 6;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[185];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_httpcore$_sync$http2;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[20];
        frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f->m_frame.f_lineno = 7;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[186];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_httpcore$_sync$http2;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[20];
        frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f->m_frame.f_lineno = 8;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[187];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_httpcore$_sync$http2;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[20];
        frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f->m_frame.f_lineno = 9;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[188];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_httpcore$_sync$http2;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = Py_None;
        tmp_level_value_7 = mod_consts[20];
        frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f->m_frame.f_lineno = 10;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[189];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_httpcore$_sync$http2;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[190];
        tmp_level_value_8 = mod_consts[191];
        frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f->m_frame.f_lineno = 12;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_httpcore$_sync$http2,
                mod_consts[44],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[44]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_httpcore$_sync$http2,
                mod_consts[78],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[78]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_httpcore$_sync$http2,
                mod_consts[77],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[77]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_16);
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[192];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_httpcore$_sync$http2;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[193];
        tmp_level_value_9 = mod_consts[191];
        frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f->m_frame.f_lineno = 17;
        tmp_assign_source_17 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_httpcore$_sync$http2,
                mod_consts[194],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[194]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_httpcore$_sync$http2,
                mod_consts[195],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[195]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_httpcore$_sync$http2,
                mod_consts[67],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[67]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_20);
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
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[196];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_httpcore$_sync$http2;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[197];
        tmp_level_value_10 = mod_consts[191];
        frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f->m_frame.f_lineno = 18;
        tmp_assign_source_21 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_7 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_httpcore$_sync$http2,
                mod_consts[22],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[22]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_8 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_httpcore$_sync$http2,
                mod_consts[52],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[52]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_23);
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
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[198];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_httpcore$_sync$http2;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[199];
        tmp_level_value_11 = mod_consts[191];
        frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f->m_frame.f_lineno = 19;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_httpcore$_sync$http2,
                mod_consts[47],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[47]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[200];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_httpcore$_sync$http2;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[201];
        tmp_level_value_12 = mod_consts[191];
        frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f->m_frame.f_lineno = 20;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_httpcore$_sync$http2,
                mod_consts[202],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[202]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[203];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_httpcore$_sync$http2;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[204];
        tmp_level_value_13 = mod_consts[43];
        frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f->m_frame.f_lineno = 21;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_httpcore$_sync$http2,
                mod_consts[205],
                mod_consts[20]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[205]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[46];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[206];
        tmp_dict_value_1 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_27 = MAKE_FUNCTION_httpcore$_sync$http2$$$function__1_has_body_headers(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_27);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[182]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[182]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_4;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[207]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_4;
        }
        tmp_assign_source_28 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_28, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_29 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_4;
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
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

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
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[20];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_4;
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


            exception_lineno = 31;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[208]);
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
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[208]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[16];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f->m_frame.f_lineno = 31;
        tmp_assign_source_32 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_32;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[209]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

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
        tmp_mod_expr_left_1 = mod_consts[210];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[164];
        tmp_getattr_default_1 = mod_consts[211];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_4;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[164]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

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


            exception_lineno = 31;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 31;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
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
            locals_httpcore$_sync$http2$$$class__1_HTTPConnectionState_31 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[212];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__1_HTTPConnectionState_31, mod_consts[213], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[16];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__1_HTTPConnectionState_31, mod_consts[214], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_6;
        }
        frame_78e48df81ed32f9bbe5fe99700c67b5b_2 = MAKE_CLASS_FRAME(codeobj_78e48df81ed32f9bbe5fe99700c67b5b, module_httpcore$_sync$http2, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_78e48df81ed32f9bbe5fe99700c67b5b_2);
        assert(Py_REFCNT(frame_78e48df81ed32f9bbe5fe99700c67b5b_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[43];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__1_HTTPConnectionState_31, mod_consts[42], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[191];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__1_HTTPConnectionState_31, mod_consts[17], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[215];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__1_HTTPConnectionState_31, mod_consts[145], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_78e48df81ed32f9bbe5fe99700c67b5b_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_78e48df81ed32f9bbe5fe99700c67b5b_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_78e48df81ed32f9bbe5fe99700c67b5b_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_78e48df81ed32f9bbe5fe99700c67b5b_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_78e48df81ed32f9bbe5fe99700c67b5b_2);

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


                exception_lineno = 31;

                goto try_except_handler_6;
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
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__1_HTTPConnectionState_31, mod_consts[216], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[16];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_httpcore$_sync$http2$$$class__1_HTTPConnectionState_31;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f->m_frame.f_lineno = 31;
            tmp_assign_source_35 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_35;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_34 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_34);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_httpcore$_sync$http2$$$class__1_HTTPConnectionState_31);
        locals_httpcore$_sync$http2$$$class__1_HTTPConnectionState_31 = NULL;
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

        Py_DECREF(locals_httpcore$_sync$http2$$$class__1_HTTPConnectionState_31);
        locals_httpcore$_sync$http2$$$class__1_HTTPConnectionState_31 = NULL;
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
        exception_lineno = 31;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_34);
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
        PyObject *tmp_assign_source_36;
        PyObject *tmp_tuple_element_5;
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[205]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[205]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_7;
        }
        tmp_assign_source_36 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_36, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_37 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_7;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_7 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[20];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_39 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_39;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_8, mod_consts[208]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_9 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[208]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_7;
        }
        tmp_tuple_element_6 = mod_consts[217];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f->m_frame.f_lineno = 37;
        tmp_assign_source_40 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_40;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_10 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_10, mod_consts[209]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_7;
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
        tmp_mod_expr_left_2 = mod_consts[210];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[164];
        tmp_getattr_default_2 = mod_consts[211];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_7;
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
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[164]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 37;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_41;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_42;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[212];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[213], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[217];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[214], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_9;
        }
        frame_43c74ff6dad3f9a07f6d95a26db71c2e_3 = MAKE_CLASS_FRAME(codeobj_43c74ff6dad3f9a07f6d95a26db71c2e, module_httpcore$_sync$http2, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_43c74ff6dad3f9a07f6d95a26db71c2e_3);
        assert(Py_REFCNT(frame_43c74ff6dad3f9a07f6d95a26db71c2e_3) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[86];
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            tmp_expression_value_13 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[10]);

            if (tmp_expression_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10]);

                    if (unlikely(tmp_expression_value_13 == NULL)) {
                        tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                    }

                    if (tmp_expression_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 39;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_13);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[218]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[219]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_43c74ff6dad3f9a07f6d95a26db71c2e_3->m_frame.f_lineno = 39;
            tmp_dictset_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[220], 0), mod_consts[221]);
            Py_DECREF(tmp_called_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_defaults_1 = mod_consts[222];
            tmp_dict_key_2 = mod_consts[36];
            tmp_dict_value_2 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[194]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[194]);

                    if (unlikely(tmp_dict_value_2 == NULL)) {
                        tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
                    }

                    if (tmp_dict_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 43;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_2);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_2 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_14;
                PyObject *tmp_expression_value_15;
                PyObject *tmp_subscript_value_3;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[106];
                tmp_dict_value_2 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[202]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[202]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[202]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 44;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[223];
                tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[107]);

                if (unlikely(tmp_expression_value_15 == NULL)) {
                    tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                }

                assert(!(tmp_expression_value_15 == NULL));
                tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[224]);
                if (tmp_expression_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 45;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_3 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[225]);

                if (tmp_subscript_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_3 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_3);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_3);
                Py_DECREF(tmp_expression_value_14);
                Py_DECREF(tmp_subscript_value_3);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 45;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_2);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__2___init__(tmp_defaults_1, tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[226], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_key_3 = mod_consts[46];
            tmp_dict_value_3 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[195]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[195]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_3 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[206];
            tmp_dict_value_3 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[67]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;
                        type_description_2 = "o";
                        goto dict_build_exception_2;
                    }
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto dict_build_exception_2;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_3);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__3_handle_request(tmp_annotations_3);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[228], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_dict_key_4 = mod_consts[46];
            tmp_dict_value_4 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[195]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[195]);

                    if (unlikely(tmp_dict_value_4 == NULL)) {
                        tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
                    }

                    if (tmp_dict_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 146;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_4 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[206];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__4__send_connection_init(tmp_annotations_4);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[49], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_dict_key_5 = mod_consts[46];
            tmp_dict_value_5 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[195]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[195]);

                    if (unlikely(tmp_dict_value_5 == NULL)) {
                        tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
                    }

                    if (tmp_dict_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 179;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_5 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[58];
            tmp_dict_value_5 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[231]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[206];
            tmp_dict_value_5 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__5__send_request_headers(tmp_annotations_5);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_dict_key_6 = mod_consts[46];
            tmp_dict_value_6 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[195]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[195]);

                    if (unlikely(tmp_dict_value_6 == NULL)) {
                        tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
                    }

                    if (tmp_dict_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 207;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_6 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[58];
            tmp_dict_value_6 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[231]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[206];
            tmp_dict_value_6 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__6__send_request_body(tmp_annotations_6);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[63], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_dict_key_7 = mod_consts[46];
            tmp_dict_value_7 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[195]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[195]);

                    if (unlikely(tmp_dict_value_7 == NULL)) {
                        tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
                    }

                    if (tmp_dict_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 226;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_7 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_16;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_tuple_element_8;
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[58];
                tmp_dict_value_7 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[231]);

                if (tmp_dict_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_7 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_7);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[206];
                tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[107]);

                if (unlikely(tmp_expression_value_17 == NULL)) {
                    tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                }

                assert(!(tmp_expression_value_17 == NULL));
                tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[234]);
                if (tmp_expression_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 227;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_tuple_element_8 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[231]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_8 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_18;
                    PyObject *tmp_expression_value_19;
                    PyObject *tmp_subscript_value_5;
                    PyObject *tmp_expression_value_20;
                    PyObject *tmp_expression_value_21;
                    PyObject *tmp_subscript_value_6;
                    PyObject *tmp_tuple_element_9;
                    PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_8);
                    tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[107]);

                    if (unlikely(tmp_expression_value_19 == NULL)) {
                        tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                    }

                    assert(!(tmp_expression_value_19 == NULL));
                    tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[235]);
                    if (tmp_expression_value_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 227;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[107]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                    }

                    assert(!(tmp_expression_value_21 == NULL));
                    tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[234]);
                    if (tmp_expression_value_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_18);

                        exception_lineno = 227;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    tmp_tuple_element_9 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[236]);

                    if (tmp_tuple_element_9 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_tuple_element_9 = (PyObject *)&PyBytes_Type;
                            Py_INCREF(tmp_tuple_element_9);
                        } else {
                            goto tuple_build_exception_3;
                        }
                    }

                    tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(2);
                    PyTuple_SET_ITEM(tmp_subscript_value_6, 0, tmp_tuple_element_9);
                    tmp_tuple_element_9 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[236]);

                    if (tmp_tuple_element_9 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_tuple_element_9 = (PyObject *)&PyBytes_Type;
                            Py_INCREF(tmp_tuple_element_9);
                        } else {
                            goto tuple_build_exception_3;
                        }
                    }

                    PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_9);
                    tmp_subscript_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_6);
                    Py_DECREF(tmp_expression_value_20);
                    Py_DECREF(tmp_subscript_value_6);
                    if (tmp_subscript_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_18);

                        exception_lineno = 227;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_5);
                    Py_DECREF(tmp_expression_value_18);
                    Py_DECREF(tmp_subscript_value_5);
                    if (tmp_tuple_element_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 227;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_8);
                }
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_expression_value_16);
                Py_DECREF(tmp_subscript_value_4);
                goto dict_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_4);
                Py_DECREF(tmp_expression_value_16);
                Py_DECREF(tmp_subscript_value_4);
                if (tmp_dict_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 227;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_annotations_7);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__7__receive_response(tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_key_8 = mod_consts[46];
            tmp_dict_value_8 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[195]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[195]);

                    if (unlikely(tmp_dict_value_8 == NULL)) {
                        tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
                    }

                    if (tmp_dict_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 244;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_8 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_22;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_subscript_value_7;
                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[58];
                tmp_dict_value_8 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[231]);

                if (tmp_dict_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_8 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_8);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
                tmp_dict_key_8 = mod_consts[206];
                tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[107]);

                if (unlikely(tmp_expression_value_23 == NULL)) {
                    tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                }

                assert(!(tmp_expression_value_23 == NULL));
                tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[238]);
                if (tmp_expression_value_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 245;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_subscript_value_7 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[236]);

                if (tmp_subscript_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_7 = (PyObject *)&PyBytes_Type;
                        Py_INCREF(tmp_subscript_value_7);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_dict_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 245;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
                Py_DECREF(tmp_dict_value_8);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_8);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__8__receive_response_body(tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[132], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            tmp_dict_key_9 = mod_consts[46];
            tmp_dict_value_9 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[195]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[195]);

                    if (unlikely(tmp_dict_value_9 == NULL)) {
                        tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
                    }

                    if (tmp_dict_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 257;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_9 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_24;
                PyObject *tmp_expression_value_25;
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[58];
                tmp_dict_value_9 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[231]);

                if (tmp_dict_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_9 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_9);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[206];
                tmp_expression_value_25 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[10]);

                if (tmp_expression_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_25 == NULL)) {
                            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 258;
                            type_description_2 = "o";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_25);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[116]);
                Py_DECREF(tmp_expression_value_25);
                if (tmp_expression_value_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 258;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[239]);
                Py_DECREF(tmp_expression_value_24);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 258;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_annotations_9);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__9__receive_stream_event(tmp_annotations_9);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[115], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_defaults_2 = mod_consts[222];
            tmp_dict_key_10 = mod_consts[46];
            tmp_dict_value_10 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[195]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[195]);

                    if (unlikely(tmp_dict_value_10 == NULL)) {
                        tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
                    }

                    if (tmp_dict_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 268;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_10 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_26;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_subscript_value_8;
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[58];
                tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[107]);

                if (unlikely(tmp_expression_value_27 == NULL)) {
                    tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                }

                assert(!(tmp_expression_value_27 == NULL));
                tmp_expression_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[224]);
                if (tmp_expression_value_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 268;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_8 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[231]);

                if (tmp_subscript_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_8 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_8);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_26);
                Py_DECREF(tmp_subscript_value_8);
                if (tmp_dict_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 268;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[206];
                tmp_dict_value_10 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_10);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__10__receive_events(tmp_defaults_2, tmp_annotations_10);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[135], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            tmp_dict_key_11 = mod_consts[58];
            tmp_dict_value_11 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[231]);

            if (tmp_dict_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_11 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_11);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_11 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[206];
            tmp_dict_value_11 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__11__response_closed(tmp_annotations_11);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[75], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_12;
            tmp_annotations_12 = DICT_COPY(mod_consts[243]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__12_close(tmp_annotations_12);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[143], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 308;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_dict_key_12 = mod_consts[46];
            tmp_dict_value_12 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[195]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[195]);

                    if (unlikely(tmp_dict_value_12 == NULL)) {
                        tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
                    }

                    if (tmp_dict_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 318;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_12);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_13 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_28;
                PyObject *tmp_expression_value_29;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_expression_value_30;
                PyObject *tmp_expression_value_31;
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[206];
                tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[107]);

                if (unlikely(tmp_expression_value_29 == NULL)) {
                    tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                }

                assert(!(tmp_expression_value_29 == NULL));
                tmp_expression_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[235]);
                if (tmp_expression_value_28 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 319;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_expression_value_31 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[10]);

                if (tmp_expression_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[10]);

                        if (unlikely(tmp_expression_value_31 == NULL)) {
                            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
                        }

                        if (tmp_expression_value_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_28);

                            exception_lineno = 319;
                            type_description_2 = "o";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_31);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[116]);
                Py_DECREF(tmp_expression_value_31);
                if (tmp_expression_value_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_28);

                    exception_lineno = 319;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_subscript_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[239]);
                Py_DECREF(tmp_expression_value_30);
                if (tmp_subscript_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_28);

                    exception_lineno = 319;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_28);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 319;
                    type_description_2 = "o";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_annotations_13);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__13__read_incoming_data(tmp_annotations_13);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[139], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            tmp_dict_key_13 = mod_consts[46];
            tmp_dict_value_13 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[195]);

            if (tmp_dict_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[195]);

                    if (unlikely(tmp_dict_value_13 == NULL)) {
                        tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
                    }

                    if (tmp_dict_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 347;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_13);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_14 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[206];
            tmp_dict_value_13 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__14__write_outgoing_data(tmp_annotations_14);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 347;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            tmp_dict_key_14 = mod_consts[46];
            tmp_dict_value_14 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[195]);

            if (tmp_dict_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[195]);

                    if (unlikely(tmp_dict_value_14 == NULL)) {
                        tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
                    }

                    if (tmp_dict_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 374;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_14);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_15 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[58];
            tmp_dict_value_14 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[231]);

            if (tmp_dict_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_14 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_14);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[206];
            tmp_dict_value_14 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[231]);

            if (tmp_dict_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_14 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_14);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__15__wait_for_outgoing_flow(tmp_annotations_15);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[111], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 374;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            tmp_dict_key_15 = mod_consts[36];
            tmp_dict_value_15 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[194]);

            if (tmp_dict_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[194]);

                    if (unlikely(tmp_dict_value_15 == NULL)) {
                        tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
                    }

                    if (tmp_dict_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 394;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_15);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_16 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[206];
            tmp_dict_value_15 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[248]);

            if (tmp_dict_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_15 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_15);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__16_can_handle_request(tmp_annotations_16);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[34], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_17;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            tmp_dict_key_16 = mod_consts[206];
            tmp_dict_value_16 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[248]);

            if (tmp_dict_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_16 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_16);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_17 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__17_is_available(tmp_annotations_17);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[250], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 397;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            tmp_dict_key_17 = mod_consts[206];
            tmp_dict_value_17 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[248]);

            if (tmp_dict_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_17 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_17);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_18 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__18_has_expired(tmp_annotations_18);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[252], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 404;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            tmp_dict_key_18 = mod_consts[206];
            tmp_dict_value_18 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[248]);

            if (tmp_dict_value_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_18 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_18);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_19 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__19_is_idle(tmp_annotations_19);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[254], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 408;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            tmp_dict_key_19 = mod_consts[206];
            tmp_dict_value_19 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[248]);

            if (tmp_dict_value_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_19 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_dict_value_19);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_20 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__20_is_closed(tmp_annotations_20);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[256], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            tmp_dict_key_20 = mod_consts[206];
            tmp_dict_value_20 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[258]);

            if (tmp_dict_value_20 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_20 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_20);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_21 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_20, tmp_dict_value_20);
            Py_DECREF(tmp_dict_value_20);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__21_info(tmp_annotations_21);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[259], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            tmp_dict_key_21 = mod_consts[206];
            tmp_dict_value_21 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[258]);

            if (tmp_dict_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_21 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_21);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_22 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__22___repr__(tmp_annotations_22);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[261], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 421;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_23;
            tmp_annotations_23 = DICT_COPY(mod_consts[263]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__23___enter__(tmp_annotations_23);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_11;
            tmp_defaults_3 = mod_consts[45];
            tmp_dict_key_22 = mod_consts[265];
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
            }

            assert(!(tmp_expression_value_33 == NULL));
            tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[224]);
            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 437;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
            }

            assert(!(tmp_expression_value_35 == NULL));
            tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[266]);
            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_32);

                exception_lineno = 437;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_11 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[267]);

            if (tmp_subscript_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_11 = PyExc_BaseException;
                    Py_INCREF(tmp_subscript_value_11);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_11);
            Py_DECREF(tmp_expression_value_34);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_subscript_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_32);

                exception_lineno = 437;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_10);
            Py_DECREF(tmp_expression_value_32);
            Py_DECREF(tmp_subscript_value_10);
            if (tmp_dict_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 437;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_24 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_36;
                PyObject *tmp_expression_value_37;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_expression_value_38;
                PyObject *tmp_expression_value_39;
                PyObject *tmp_subscript_value_13;
                PyObject *tmp_expression_value_40;
                tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_22, tmp_dict_value_22);
                Py_DECREF(tmp_dict_value_22);
                assert(!(tmp_res != 0));
                tmp_dict_key_22 = mod_consts[268];
                tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[107]);

                if (unlikely(tmp_expression_value_37 == NULL)) {
                    tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                }

                assert(!(tmp_expression_value_37 == NULL));
                tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[224]);
                if (tmp_expression_value_36 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 438;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_subscript_value_12 = PyObject_GetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[267]);

                if (tmp_subscript_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_12 = PyExc_BaseException;
                        Py_INCREF(tmp_subscript_value_12);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_36);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_dict_value_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 438;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_22, tmp_dict_value_22);
                Py_DECREF(tmp_dict_value_22);
                assert(!(tmp_res != 0));
                tmp_dict_key_22 = mod_consts[269];
                tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[107]);

                if (unlikely(tmp_expression_value_39 == NULL)) {
                    tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
                }

                assert(!(tmp_expression_value_39 == NULL));
                tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[224]);
                if (tmp_expression_value_38 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 439;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[183]);

                if (unlikely(tmp_expression_value_40 == NULL)) {
                    tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
                }

                assert(!(tmp_expression_value_40 == NULL));
                tmp_subscript_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[270]);
                if (tmp_subscript_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_38);

                    exception_lineno = 439;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_dict_value_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 439;
                    type_description_2 = "o";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_22, tmp_dict_value_22);
                Py_DECREF(tmp_dict_value_22);
                assert(!(tmp_res != 0));
                tmp_dict_key_22 = mod_consts[206];
                tmp_dict_value_22 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_22, tmp_dict_value_22);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_annotations_24);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__24___exit__(tmp_defaults_3, tmp_annotations_24);

            tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[41], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_43c74ff6dad3f9a07f6d95a26db71c2e_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_43c74ff6dad3f9a07f6d95a26db71c2e_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_43c74ff6dad3f9a07f6d95a26db71c2e_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_43c74ff6dad3f9a07f6d95a26db71c2e_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_43c74ff6dad3f9a07f6d95a26db71c2e_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_9;
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


                exception_lineno = 37;

                goto try_except_handler_9;
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
        tmp_res = PyObject_SetItem(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37, mod_consts[216], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_9;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_5 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_10 = mod_consts[217];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_10 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f->m_frame.f_lineno = 37;
            tmp_assign_source_43 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_43;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_42 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_42);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37);
        locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37 = NULL;
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

        Py_DECREF(locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37);
        locals_httpcore$_sync$http2$$$class__2_HTTP2Connection_37 = NULL;
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
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 37;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_42);
    }
    goto try_end_5;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_45;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_httpcore$_sync$http2$$$class__3_HTTP2ConnectionByteStream_444 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[212];
        tmp_res = PyDict_SetItem(locals_httpcore$_sync$http2$$$class__3_HTTP2ConnectionByteStream_444, mod_consts[213], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[69];
        tmp_res = PyDict_SetItem(locals_httpcore$_sync$http2$$$class__3_HTTP2ConnectionByteStream_444, mod_consts[214], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_c06772c979dd93900f202ea6aaf2674b_4 = MAKE_CLASS_FRAME(codeobj_c06772c979dd93900f202ea6aaf2674b, module_httpcore$_sync$http2, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c06772c979dd93900f202ea6aaf2674b_4);
        assert(Py_REFCNT(frame_c06772c979dd93900f202ea6aaf2674b_4) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_25;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            tmp_dict_key_23 = mod_consts[11];
            tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[217]);

            if (unlikely(tmp_dict_value_23 == NULL)) {
                tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[217]);
            }

            if (tmp_dict_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_25 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_23, tmp_dict_value_23);
            assert(!(tmp_res != 0));
            tmp_dict_key_23 = mod_consts[46];
            tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[195]);

            if (unlikely(tmp_dict_value_23 == NULL)) {
                tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
            }

            if (tmp_dict_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 446;
                type_description_2 = "o";
                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_23, tmp_dict_value_23);
            assert(!(tmp_res != 0));
            tmp_dict_key_23 = mod_consts[58];
            tmp_dict_value_23 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_23, tmp_dict_value_23);
            assert(!(tmp_res != 0));
            tmp_dict_key_23 = mod_consts[206];
            tmp_dict_value_23 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_23, tmp_dict_value_23);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_annotations_25);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__25___init__(tmp_annotations_25);

            tmp_res = PyDict_SetItem(locals_httpcore$_sync$http2$$$class__3_HTTP2ConnectionByteStream_444, mod_consts[226], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 445;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_26;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_subscript_value_14;
            tmp_dict_key_24 = mod_consts[206];
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
            }

            assert(!(tmp_expression_value_42 == NULL));
            tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[238]);
            if (tmp_expression_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 453;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_subscript_value_14 = (PyObject *)&PyBytes_Type;
            tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_41);
            if (tmp_dict_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 453;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_26 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_24, tmp_dict_value_24);
            Py_DECREF(tmp_dict_value_24);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__26___iter__(tmp_annotations_26);

            tmp_res = PyDict_SetItem(locals_httpcore$_sync$http2$$$class__3_HTTP2ConnectionByteStream_444, mod_consts[174], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 453;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c06772c979dd93900f202ea6aaf2674b_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c06772c979dd93900f202ea6aaf2674b_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c06772c979dd93900f202ea6aaf2674b_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c06772c979dd93900f202ea6aaf2674b_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_c06772c979dd93900f202ea6aaf2674b_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_12;
        skip_nested_handling_3:;
        {
            PyObject *tmp_annotations_27;
            tmp_annotations_27 = DICT_COPY(mod_consts[243]);


            tmp_dictset_value = MAKE_FUNCTION_httpcore$_sync$http2$$$function__27_close(tmp_annotations_27);

            tmp_res = PyDict_SetItem(locals_httpcore$_sync$http2$$$class__3_HTTP2ConnectionByteStream_444, mod_consts[143], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_5;
            tmp_called_value_6 = (PyObject *)&PyType_Type;
            tmp_tuple_element_11 = mod_consts[69];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[274];
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_httpcore$_sync$http2$$$class__3_HTTP2ConnectionByteStream_444;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
            frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f->m_frame.f_lineno = 444;
            tmp_assign_source_47 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;

                goto try_except_handler_12;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_47;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_46 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_46);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_httpcore$_sync$http2$$$class__3_HTTP2ConnectionByteStream_444);
        locals_httpcore$_sync$http2$$$class__3_HTTP2ConnectionByteStream_444 = NULL;
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

        Py_DECREF(locals_httpcore$_sync$http2$$$class__3_HTTP2ConnectionByteStream_444);
        locals_httpcore$_sync$http2$$$class__3_HTTP2ConnectionByteStream_444 = NULL;
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
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
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

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 444;
        goto try_except_handler_10;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_46);
    }
    goto try_end_6;
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

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f, exception_lineno);
    }



    assertFrameObject(frame_09ca3e5ef5a4512a3a9a45db0eb1ae6f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_4:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("httpcore._sync.http2", false);

    Py_INCREF(module_httpcore$_sync$http2);
    return module_httpcore$_sync$http2;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_httpcore$_sync$http2, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("httpcore$_sync$http2", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
