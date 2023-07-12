/* Generated code for Python module 'anyio.streams.tls'
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

/* The "module_anyio$streams$tls" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anyio$streams$tls;
PyDictObject *moduledict_anyio$streams$tls;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[201];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[201];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("anyio.streams.tls"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 201; i++) {
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
void checkModuleConstants_anyio$streams$tls(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 201; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_bd1ef3b28c9c6d854f964791af1b98a1;
static PyCodeObject *codeobj_fcf5f1d7909fe2c684c97a6a6bbad405;
static PyCodeObject *codeobj_c3fd8edea89e690c22141c0de43c613c;
static PyCodeObject *codeobj_9df8c5267cea7fecc56d8564cfb5c139;
static PyCodeObject *codeobj_9b9272661a69b0312cdf405a26b0351e;
static PyCodeObject *codeobj_652b52909351a175e7849fa5a3afa234;
static PyCodeObject *codeobj_d3a2e3b1eaebaf0e891bf641fd6b8e92;
static PyCodeObject *codeobj_78a406e2349b70e53ad745102f493fe2;
static PyCodeObject *codeobj_6e9f8939d9cd4786a0bcce9fb708f74b;
static PyCodeObject *codeobj_de772dbdc7289618555fd07793e3084e;
static PyCodeObject *codeobj_850b81fbd85b73df3a2957c11c308ea4;
static PyCodeObject *codeobj_a249479c5ebc706e0ea7d5ca5c7fa6b1;
static PyCodeObject *codeobj_fa95c374f1e5657e77e666a407b8b54d;
static PyCodeObject *codeobj_edb6cbb5cb537fc6a29b31346ecb7141;
static PyCodeObject *codeobj_69ce05523e5dc91041314178e26d7f9d;
static PyCodeObject *codeobj_7dbb4c066bad0017602bd292ea3ba658;
static PyCodeObject *codeobj_59af2a9076ffb24b8479b28e6a1c13c1;
static PyCodeObject *codeobj_1832f2afae4764e0c4572aad151004a2;
static PyCodeObject *codeobj_c7fceebbdc9931a442ce24b6433f76ac;
static PyCodeObject *codeobj_6fbe8571046f5faaf28db38ed0055b7c;
static PyCodeObject *codeobj_03947b19870226370fa20f806687323c;
static PyCodeObject *codeobj_74c5e92b0375d6a3c42482bed40cda65;
static PyCodeObject *codeobj_789e0c551df1653691afd15a760380e8;
static PyCodeObject *codeobj_9aea6e04276e4d2bacc34093e4bb8511;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[122]; CHECK_OBJECT(module_filename_obj);
    codeobj_bd1ef3b28c9c6d854f964791af1b98a1 = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[81], mod_consts[81], mod_consts[189], mod_consts[189], 0, 0, 0);
    codeobj_fcf5f1d7909fe2c684c97a6a6bbad405 = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[81], mod_consts[81], mod_consts[189], mod_consts[189], 0, 0, 0);
    codeobj_c3fd8edea89e690c22141c0de43c613c = MAKE_CODE_OBJECT(module_filename_obj, 230, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[81], mod_consts[81], mod_consts[189], mod_consts[189], 0, 0, 0);
    codeobj_9df8c5267cea7fecc56d8564cfb5c139 = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[81], mod_consts[81], mod_consts[189], mod_consts[189], 0, 0, 0);
    codeobj_9b9272661a69b0312cdf405a26b0351e = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[81], mod_consts[81], mod_consts[189], mod_consts[189], 0, 0, 0);
    codeobj_652b52909351a175e7849fa5a3afa234 = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[81], mod_consts[81], mod_consts[189], mod_consts[189], 0, 0, 0);
    codeobj_d3a2e3b1eaebaf0e891bf641fd6b8e92 = MAKE_CODE_OBJECT(module_filename_obj, 316, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[81], mod_consts[81], mod_consts[189], mod_consts[189], 0, 0, 0);
    codeobj_78a406e2349b70e53ad745102f493fe2 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[190], mod_consts[190], NULL, NULL, 0, 0, 0);
    codeobj_6e9f8939d9cd4786a0bcce9fb708f74b = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_NOFREE, mod_consts[58], mod_consts[58], mod_consts[191], NULL, 0, 0, 0);
    codeobj_de772dbdc7289618555fd07793e3084e = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_NOFREE, mod_consts[181], mod_consts[181], mod_consts[191], NULL, 0, 0, 0);
    codeobj_850b81fbd85b73df3a2957c11c308ea4 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_NOFREE, mod_consts[115], mod_consts[115], mod_consts[191], NULL, 0, 0, 0);
    codeobj_a249479c5ebc706e0ea7d5ca5c7fa6b1 = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[192], NULL, 2, 0, 0);
    codeobj_fa95c374f1e5657e77e666a407b8b54d = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[51], mod_consts[51], mod_consts[189], NULL, 1, 0, 0);
    codeobj_edb6cbb5cb537fc6a29b31346ecb7141 = MAKE_CODE_OBJECT(module_filename_obj, 310, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[51], mod_consts[51], mod_consts[189], NULL, 1, 0, 0);
    codeobj_69ce05523e5dc91041314178e26d7f9d = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[189], NULL, 1, 0, 0);
    codeobj_7dbb4c066bad0017602bd292ea3ba658 = MAKE_CODE_OBJECT(module_filename_obj, 314, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[189], NULL, 1, 0, 0);
    codeobj_59af2a9076ffb24b8479b28e6a1c13c1 = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[193], NULL, 2, 0, 0);
    codeobj_1832f2afae4764e0c4572aad151004a2 = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[103], mod_consts[103], mod_consts[194], mod_consts[195], 1, 0, 0);
    codeobj_c7fceebbdc9931a442ce24b6433f76ac = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[30], mod_consts[196], NULL, 2, 0, 0);
    codeobj_6fbe8571046f5faaf28db38ed0055b7c = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[197], NULL, 2, 0, 0);
    codeobj_03947b19870226370fa20f806687323c = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[198], NULL, 1, 0, 0);
    codeobj_74c5e92b0375d6a3c42482bed40cda65 = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[199], NULL, 3, 0, 0);
    codeobj_789e0c551df1653691afd15a760380e8 = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[189], NULL, 1, 0, 0);
    codeobj_9aea6e04276e4d2bacc34093e4bb8511 = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[200], NULL, 2, 4, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__1_wrap$$$coroutine__1_wrap(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__2__call_sslobject_method$$$coroutine__1__call_sslobject_method(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__3_unwrap$$$coroutine__1_unwrap(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__4_aclose$$$coroutine__1_aclose(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__5_receive$$$coroutine__1_receive(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__6_send$$$coroutine__1_send(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__7_send_eof$$$coroutine__1_send_eof(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__9_handle_handshake_error$$$coroutine__1_handle_handshake_error(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve$$$function__1_handler_wrapper$$$coroutine__1_handler_wrapper(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__11_aclose$$$coroutine__1_aclose(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1_complex_call_helper_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4__unpack_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__10_serve(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve$$$function__1_handler_wrapper(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__11_aclose(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__12_extra_attributes(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__12_extra_attributes$$$function__1_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__1_wrap(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__2__call_sslobject_method(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__3_unwrap(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__4_aclose(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__5_receive(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__6_send(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__7_send_eof(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes$$$function__1_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes$$$function__2_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes$$$function__3_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes$$$function__4_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes$$$function__5_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes$$$function__6_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__9_handle_handshake_error(PyObject *annotations);


// The module function definitions.
static PyObject *impl_anyio$streams$tls$$$function__1_wrap(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_cls = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_transport_stream = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_server_side = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_hostname = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_ssl_context = Nuitka_Cell_New1(python_pars[4]);
    struct Nuitka_CellObject *par_standard_compatible = Nuitka_Cell_New1(python_pars[5]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[6];

        tmp_closure_1[0] = par_cls;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_hostname;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_server_side;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_ssl_context;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_standard_compatible;
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = par_transport_stream;
        Py_INCREF(tmp_closure_1[5]);

        tmp_return_value = MAKE_COROUTINE_anyio$streams$tls$$$function__1_wrap$$$coroutine__1_wrap(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_server_side);
    Py_DECREF(par_server_side);
    par_server_side = NULL;
    CHECK_OBJECT(par_ssl_context);
    Py_DECREF(par_ssl_context);
    par_ssl_context = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_transport_stream);
    Py_DECREF(par_transport_stream);
    CHECK_OBJECT(par_hostname);
    Py_DECREF(par_hostname);
    CHECK_OBJECT(par_standard_compatible);
    Py_DECREF(par_standard_compatible);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$streams$tls$$$function__1_wrap$$$coroutine__1_wrap_locals {
    PyObject *var_purpose;
    PyObject *var_bio_in;
    PyObject *var_bio_out;
    PyObject *var_ssl_object;
    PyObject *var_wrapper;
    PyObject *tmp_inplace_assign_1__value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *anyio$streams$tls$$$function__1_wrap$$$coroutine__1_wrap_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$streams$tls$$$function__1_wrap$$$coroutine__1_wrap_locals *coroutine_heap = (struct anyio$streams$tls$$$function__1_wrap$$$coroutine__1_wrap_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_purpose = NULL;
    coroutine_heap->var_bio_in = NULL;
    coroutine_heap->var_bio_out = NULL;
    coroutine_heap->var_ssl_object = NULL;
    coroutine_heap->var_wrapper = NULL;
    coroutine_heap->tmp_inplace_assign_1__value = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_9aea6e04276e4d2bacc34093e4bb8511, module_anyio$streams$tls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[1]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 97;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
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
        PyObject *tmp_operand_value_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[2]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 98;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 98;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = (coroutine_heap->tmp_res == 0) ? Py_True : Py_False;
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[2]);
            PyCell_SET(coroutine->m_closure[2], tmp_assign_source_1);
            Py_INCREF(tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 100;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }

        tmp_operand_value_2 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 100;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[1]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 102;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(coroutine->m_closure[2]));
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 102;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 102;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 102;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 102;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 102;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[5]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 102;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 102;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(coroutine_heap->var_purpose == NULL);
        coroutine_heap->var_purpose = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 104;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(coroutine_heap->var_purpose);
        tmp_args_element_value_1 = coroutine_heap->var_purpose;
        coroutine->m_frame->m_frame.f_lineno = 104;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[8], tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 104;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(coroutine->m_closure[3]);
            PyCell_SET(coroutine->m_closure[3], tmp_assign_source_3);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_attribute_value_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 107;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = mod_consts[9];
        coroutine_heap->tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_5, tmp_attribute_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 107;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (coroutine_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[3]));
        tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[10]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 108;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->tmp_inplace_assign_1__value == NULL);
        coroutine_heap->tmp_inplace_assign_1__value = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_ibitxor_expr_left_1;
        PyObject *tmp_ibitxor_expr_right_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(coroutine_heap->tmp_inplace_assign_1__value);
        tmp_ibitxor_expr_left_1 = coroutine_heap->tmp_inplace_assign_1__value;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 108;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto try_except_handler_2;
        }
        tmp_ibitxor_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[9]);
        if (tmp_ibitxor_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 108;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto try_except_handler_2;
        }
        coroutine_heap->tmp_result = INPLACE_OPERATION_BITXOR_OBJECT_OBJECT(&tmp_ibitxor_expr_left_1, tmp_ibitxor_expr_right_1);
        Py_DECREF(tmp_ibitxor_expr_right_1);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 108;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = tmp_ibitxor_expr_left_1;
        coroutine_heap->tmp_inplace_assign_1__value = tmp_assign_source_5;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(coroutine_heap->tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = coroutine_heap->tmp_inplace_assign_1__value;
        CHECK_OBJECT(Nuitka_Cell_GET(coroutine->m_closure[3]));
        tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        coroutine_heap->tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
        if (coroutine_heap->tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 108;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto try_except_handler_2;
        }
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

    CHECK_OBJECT(coroutine_heap->tmp_inplace_assign_1__value);
    Py_DECREF(coroutine_heap->tmp_inplace_assign_1__value);
    coroutine_heap->tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_1;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_1;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_1;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(coroutine_heap->tmp_inplace_assign_1__value);
    Py_DECREF(coroutine_heap->tmp_inplace_assign_1__value);
    coroutine_heap->tmp_inplace_assign_1__value = NULL;
    branch_no_3:;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 110;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 110;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[11]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 110;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_bio_in == NULL);
        coroutine_heap->var_bio_in = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 111;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 111;
        tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[11]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 111;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_bio_out == NULL);
        coroutine_heap->var_bio_out = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[3]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 112;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 112;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(coroutine_heap->var_bio_in);
        tmp_kw_call_arg_value_0_1 = coroutine_heap->var_bio_in;
        CHECK_OBJECT(coroutine_heap->var_bio_out);
        tmp_kw_call_arg_value_1_1 = coroutine_heap->var_bio_out;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[1]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 113;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[2]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 113;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 112;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 112;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_ssl_object == NULL);
        coroutine_heap->var_ssl_object = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[14]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 115;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        if (Nuitka_Cell_GET(coroutine->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[15]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 116;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[5]);
        if (Nuitka_Cell_GET(coroutine->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[16]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 117;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[4]);
        CHECK_OBJECT(coroutine_heap->var_ssl_object);
        tmp_kw_call_value_2_1 = coroutine_heap->var_ssl_object;
        CHECK_OBJECT(coroutine_heap->var_bio_in);
        tmp_kw_call_value_3_1 = coroutine_heap->var_bio_in;
        CHECK_OBJECT(coroutine_heap->var_bio_out);
        tmp_kw_call_value_4_1 = coroutine_heap->var_bio_out;
        coroutine->m_frame->m_frame.f_lineno = 115;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_assign_source_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[17]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 115;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_wrapper == NULL);
        coroutine_heap->var_wrapper = tmp_assign_source_9;
    }
    {
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 122;
        CHECK_OBJECT(coroutine_heap->var_wrapper);
        tmp_expression_value_11 = coroutine_heap->var_wrapper;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[18]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 122;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(coroutine_heap->var_ssl_object);
        tmp_expression_value_12 = coroutine_heap->var_ssl_object;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[19]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_3);

            coroutine_heap->exception_lineno = 122;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 122;
        tmp_expression_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 122;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = ASYNC_AWAIT(tmp_expression_value_10, await_normal);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 122;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_9;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 122;
            coroutine_heap->type_description_1 = "ccccccooooo";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 122;
            coroutine_heap->type_description_1 = "ccccccooooo";
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
            coroutine->m_closure[0],
            coroutine->m_closure[5],
            coroutine->m_closure[2],
            coroutine->m_closure[1],
            coroutine->m_closure[3],
            coroutine->m_closure[4],
            coroutine_heap->var_purpose,
            coroutine_heap->var_bio_in,
            coroutine_heap->var_bio_out,
            coroutine_heap->var_ssl_object,
            coroutine_heap->var_wrapper
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
    CHECK_OBJECT(coroutine_heap->var_wrapper);
    coroutine_heap->tmp_return_value = coroutine_heap->var_wrapper;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(coroutine_heap->var_purpose);
    coroutine_heap->var_purpose = NULL;
    CHECK_OBJECT(coroutine_heap->var_bio_in);
    Py_DECREF(coroutine_heap->var_bio_in);
    coroutine_heap->var_bio_in = NULL;
    CHECK_OBJECT(coroutine_heap->var_bio_out);
    Py_DECREF(coroutine_heap->var_bio_out);
    coroutine_heap->var_bio_out = NULL;
    CHECK_OBJECT(coroutine_heap->var_ssl_object);
    Py_DECREF(coroutine_heap->var_ssl_object);
    coroutine_heap->var_ssl_object = NULL;
    CHECK_OBJECT(coroutine_heap->var_wrapper);
    Py_DECREF(coroutine_heap->var_wrapper);
    coroutine_heap->var_wrapper = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_2 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_2 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_2 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_purpose);
    coroutine_heap->var_purpose = NULL;
    Py_XDECREF(coroutine_heap->var_bio_in);
    coroutine_heap->var_bio_in = NULL;
    Py_XDECREF(coroutine_heap->var_bio_out);
    coroutine_heap->var_bio_out = NULL;
    Py_XDECREF(coroutine_heap->var_ssl_object);
    coroutine_heap->var_ssl_object = NULL;
    Py_XDECREF(coroutine_heap->var_wrapper);
    coroutine_heap->var_wrapper = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_2;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_2;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_2;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

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

static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__1_wrap$$$coroutine__1_wrap(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$streams$tls$$$function__1_wrap$$$coroutine__1_wrap_context,
        module_anyio$streams$tls,
        mod_consts[20],
        mod_consts[21],
        codeobj_9aea6e04276e4d2bacc34093e4bb8511,
        closure,
        6,
#if 1
        sizeof(struct anyio$streams$tls$$$function__1_wrap$$$coroutine__1_wrap_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$streams$tls$$$function__2__call_sslobject_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_func = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_args = Nuitka_Cell_New1(python_pars[2]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_args;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_func;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_self;
        Py_INCREF(tmp_closure_1[2]);

        tmp_return_value = MAKE_COROUTINE_anyio$streams$tls$$$function__2__call_sslobject_method$$$coroutine__1__call_sslobject_method(tmp_closure_1);

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

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$streams$tls$$$function__2__call_sslobject_method$$$coroutine__1__call_sslobject_method_locals {
    PyObject *var_result;
    PyObject *var_data;
    PyObject *var_exc;
    nuitka_bool tmp_try_except_1__unhandled_indicator;
    nuitka_bool tmp_try_except_2__unhandled_indicator;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    bool tmp_result;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
};
#endif

static PyObject *anyio$streams$tls$$$function__2__call_sslobject_method$$$coroutine__1__call_sslobject_method_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$streams$tls$$$function__2__call_sslobject_method$$$coroutine__1__call_sslobject_method_locals *coroutine_heap = (struct anyio$streams$tls$$$function__2__call_sslobject_method$$$coroutine__1__call_sslobject_method_locals *)coroutine->m_heap_storage;
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
    coroutine_heap->var_result = NULL;
    coroutine_heap->var_data = NULL;
    coroutine_heap->var_exc = NULL;
    coroutine_heap->tmp_try_except_1__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
    coroutine_heap->tmp_try_except_2__unhandled_indicator = NUITKA_BOOL_UNASSIGNED;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_a249479c5ebc706e0ea7d5ca5c7fa6b1, module_anyio$streams$tls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    loop_start_1:;
    {
        nuitka_bool tmp_assign_source_1;
        tmp_assign_source_1 = NUITKA_BOOL_TRUE;
        coroutine_heap->tmp_try_except_2__unhandled_indicator = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[22]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 130;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_2;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[23]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 130;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_2;
        }

        tmp_dircall_arg2_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_2 = impl___main__$$$function__1_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 130;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = coroutine_heap->var_result;
            coroutine_heap->var_result = tmp_assign_source_2;
            Py_XDECREF(old);
        }

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

    {
        nuitka_bool tmp_assign_source_3;
        tmp_assign_source_3 = NUITKA_BOOL_FALSE;
        coroutine_heap->tmp_try_except_2__unhandled_indicator = tmp_assign_source_3;
    }
    // Preserve existing published exception id 2.
    coroutine_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION();

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
        PyObject *tmp_expression_value_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 131;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 131;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 131;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        coroutine_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_4;
    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 134;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[26]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 134;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[27]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 134;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            coroutine_heap->exception_lineno = 134;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 135;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 135;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[15]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 135;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[28]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 135;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 135;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[26]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 135;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        coroutine->m_frame->m_frame.f_lineno = 135;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[29]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 135;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        coroutine->m_frame->m_frame.f_lineno = 135;
        tmp_expression_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 135;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_4 = ASYNC_AWAIT(tmp_expression_value_5, await_normal);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 135;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), NULL);
        SAVE_COROUTINE_EXCEPTION(coroutine);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_4;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        RESTORE_COROUTINE_EXCEPTION(coroutine);
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 135;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 135;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_await_result_1);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_11;
        coroutine->m_frame->m_frame.f_lineno = 137;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 137;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_11 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[15]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 137;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        coroutine->m_frame->m_frame.f_lineno = 137;
        tmp_expression_value_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[30]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 137;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_9 = ASYNC_AWAIT(tmp_expression_value_10, await_normal);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 137;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), NULL);
        SAVE_COROUTINE_EXCEPTION(coroutine);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yieldfrom = tmp_expression_value_9;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        RESTORE_COROUTINE_EXCEPTION(coroutine);
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 137;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_5 = yield_return_value;
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 137;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = coroutine_heap->var_data;
            coroutine_heap->var_data = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    goto try_end_2;
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

    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_FALSE;
        coroutine_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_6;
    }
    // Preserve existing published exception id 1.
    coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (coroutine_heap->exception_keeper_tb_2 == NULL) {
        coroutine_heap->exception_keeper_tb_2 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_2);
    } else if (coroutine_heap->exception_keeper_lineno_2 != 0) {
        coroutine_heap->exception_keeper_tb_2 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_2, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_2);
    }

    PUBLISH_CURRENT_EXCEPTION(&coroutine_heap->exception_keeper_type_2, &coroutine_heap->exception_keeper_value_2, &coroutine_heap->exception_keeper_tb_2);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 138;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_5;
        }
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 138;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_3 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 139;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_12 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[32]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 139;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_5;
        }
        coroutine->m_frame->m_frame.f_lineno = 139;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[33]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 139;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_OSError;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_4 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = EXC_VALUE(PyThreadState_GET());
        assert(coroutine_heap->var_exc == NULL);
        Py_INCREF(tmp_assign_source_7);
        coroutine_heap->var_exc = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 141;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_13 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[32]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 141;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_6;
        }
        coroutine->m_frame->m_frame.f_lineno = 141;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[33]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 141;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 142;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_14 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[26]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 142;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_6;
        }
        coroutine->m_frame->m_frame.f_lineno = 142;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[33]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 142;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_cause_1;
        tmp_raise_type_1 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_raise_type_1 == NULL)) {
            tmp_raise_type_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 143;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(coroutine_heap->var_exc);
        tmp_raise_cause_1 = coroutine_heap->var_exc;
        coroutine_heap->exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        coroutine_heap->exception_value = NULL;
        Py_INCREF(tmp_raise_cause_1);
        coroutine_heap->exception_lineno = 143;
        RAISE_EXCEPTION_WITH_CAUSE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb, tmp_raise_cause_1);
        coroutine_heap->type_description_1 = "cccooo";
        goto try_except_handler_6;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_6:;
    coroutine_heap->exception_keeper_type_3 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_3 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_3 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_exc);
    coroutine_heap->var_exc = NULL;

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_3;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_3;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_3;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    goto branch_end_4;
    branch_no_4:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 132;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_5;
    branch_end_4:;
    branch_end_3:;
    goto try_end_3;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_1);

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_4;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_4;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_4;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    {
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(coroutine_heap->tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = coroutine_heap->tmp_try_except_1__unhandled_indicator;
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 145;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_16 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[32]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 145;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[35]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 145;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        if (coroutine_heap->var_data == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[36]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 145;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_2 = coroutine_heap->var_data;
        coroutine->m_frame->m_frame.f_lineno = 145;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 145;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_5:;
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_17;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 146;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[37]);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 146;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 146;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_6 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_await_result_2;
        coroutine->m_frame->m_frame.f_lineno = 147;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 147;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_21 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[15]);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 147;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[28]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 147;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 147;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_22 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[26]);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_3);

            coroutine_heap->exception_lineno = 147;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        coroutine->m_frame->m_frame.f_lineno = 147;
        tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[29]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_3);

            coroutine_heap->exception_lineno = 147;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        coroutine->m_frame->m_frame.f_lineno = 147;
        tmp_expression_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 147;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_18 = ASYNC_AWAIT(tmp_expression_value_19, await_normal);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 147;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_19, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_20, sizeof(PyObject *), &tmp_expression_value_21, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_called_instance_6, sizeof(PyObject *), &tmp_expression_value_22, sizeof(PyObject *), NULL);
        SAVE_COROUTINE_EXCEPTION(coroutine);
        coroutine->m_yield_return_index = 3;
        coroutine->m_yieldfrom = tmp_expression_value_18;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_3:
        RESTORE_COROUTINE_EXCEPTION(coroutine);
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_19, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_20, sizeof(PyObject *), &tmp_expression_value_21, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_called_instance_6, sizeof(PyObject *), &tmp_expression_value_22, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 147;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        tmp_await_result_2 = yield_return_value;
        if (tmp_await_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 147;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_await_result_2);
    }
    goto branch_end_6;
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_23;
        tmp_cmp_expr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 148;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[38]);
        if (tmp_cmp_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 148;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 148;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
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
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = EXC_VALUE(PyThreadState_GET());
        assert(coroutine_heap->var_exc == NULL);
        Py_INCREF(tmp_assign_source_8);
        coroutine_heap->var_exc = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_5;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 149;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_24 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[32]);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 149;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_7;
        }
        coroutine->m_frame->m_frame.f_lineno = 149;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[33]);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 149;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_6;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 150;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_25 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_instance_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[26]);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 150;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_7;
        }
        coroutine->m_frame->m_frame.f_lineno = 150;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[33]);
        Py_DECREF(tmp_called_instance_8);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 150;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_cause_2;
        tmp_raise_type_2 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_raise_type_2 == NULL)) {
            tmp_raise_type_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_raise_type_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 151;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(coroutine_heap->var_exc);
        tmp_raise_cause_2 = coroutine_heap->var_exc;
        coroutine_heap->exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        coroutine_heap->exception_value = NULL;
        Py_INCREF(tmp_raise_cause_2);
        coroutine_heap->exception_lineno = 151;
        RAISE_EXCEPTION_WITH_CAUSE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb, tmp_raise_cause_2);
        coroutine_heap->type_description_1 = "cccooo";
        goto try_except_handler_7;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_7:;
    coroutine_heap->exception_keeper_type_5 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_5 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_5 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_exc);
    coroutine_heap->var_exc = NULL;

    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_5;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_5;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_5;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_7;
    branch_no_7:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_26;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 152;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[39]);
        if (tmp_cmp_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 152;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_right_7);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 152;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_8 = (coroutine_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = EXC_VALUE(PyThreadState_GET());
        assert(coroutine_heap->var_exc == NULL);
        Py_INCREF(tmp_assign_source_9);
        coroutine_heap->var_exc = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_7;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 153;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_27 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_instance_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[32]);
        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 153;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 153;
        tmp_call_result_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[33]);
        Py_DECREF(tmp_called_instance_9);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 153;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_8;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 154;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_28 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_instance_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[26]);
        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 154;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_8;
        }
        coroutine->m_frame->m_frame.f_lineno = 154;
        tmp_call_result_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[33]);
        Py_DECREF(tmp_called_instance_10);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 154;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_30;
        CHECK_OBJECT(coroutine_heap->var_exc);
        tmp_isinstance_inst_1 = coroutine_heap->var_exc;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 156;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_8;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[40]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 156;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_8;
        }
        coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 156;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_8;
        }
        tmp_or_left_value_1 = (coroutine_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 156;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_8;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_cmp_expr_left_8 = mod_consts[41];
        CHECK_OBJECT(coroutine_heap->var_exc);
        tmp_expression_value_30 = coroutine_heap->var_exc;
        tmp_cmp_expr_right_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[42]);
        if (tmp_cmp_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 157;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_8;
        }
        coroutine_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
        Py_DECREF(tmp_cmp_expr_right_8);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 157;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_8;
        }
        tmp_or_right_value_1 = (coroutine_heap->tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_9 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_9 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 159;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_31 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[16]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 159;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_8;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            coroutine_heap->exception_lineno = 159;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_10 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_cause_3;
        tmp_raise_type_3 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_raise_type_3 == NULL)) {
            tmp_raise_type_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_raise_type_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_8;
        }
        if (coroutine_heap->var_exc == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 160;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_8;
        }

        tmp_raise_cause_3 = coroutine_heap->var_exc;
        coroutine_heap->exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        coroutine_heap->exception_value = NULL;
        Py_INCREF(tmp_raise_cause_3);
        coroutine_heap->exception_lineno = 160;
        RAISE_EXCEPTION_WITH_CAUSE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb, tmp_raise_cause_3);
        coroutine_heap->type_description_1 = "cccooo";
        goto try_except_handler_8;
    }
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_cause_4;
        tmp_raise_type_4 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_raise_type_4 == NULL)) {
            tmp_raise_type_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_raise_type_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 162;
            coroutine_heap->type_description_1 = "cccooo";
            goto try_except_handler_8;
        }
        tmp_raise_cause_4 = Py_None;
        coroutine_heap->exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        coroutine_heap->exception_value = NULL;
        Py_INCREF(tmp_raise_cause_4);
        coroutine_heap->exception_lineno = 162;
        RAISE_EXCEPTION_WITH_CAUSE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb, tmp_raise_cause_4);
        coroutine_heap->type_description_1 = "cccooo";
        goto try_except_handler_8;
    }
    branch_end_10:;
    branch_no_9:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 164;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_8;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_8:;
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

    goto try_except_handler_3;
    // End of try:
    goto branch_end_8;
    branch_no_8:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 129;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cccooo";
    goto try_except_handler_3;
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&coroutine_heap->exception_preserved_2);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_11;
        nuitka_bool tmp_cmp_expr_left_9;
        nuitka_bool tmp_cmp_expr_right_9;
        assert(coroutine_heap->tmp_try_except_2__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_9 = coroutine_heap->tmp_try_except_2__unhandled_indicator;
        tmp_cmp_expr_right_9 = NUITKA_BOOL_TRUE;
        tmp_condition_result_11 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_attribute_value_3;
        int tmp_truth_name_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 167;
            coroutine_heap->type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_33 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[26]);
        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 167;
            coroutine_heap->type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[27]);
        Py_DECREF(tmp_expression_value_32);
        if (tmp_attribute_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 167;
            coroutine_heap->type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_3);

            coroutine_heap->exception_lineno = 167;
            coroutine_heap->type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_3);
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_expression_value_34;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_await_result_3;
        coroutine->m_frame->m_frame.f_lineno = 168;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 168;
            coroutine_heap->type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_37 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_expression_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[15]);
        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 168;
            coroutine_heap->type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[28]);
        Py_DECREF(tmp_expression_value_36);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 168;
            coroutine_heap->type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 168;
            coroutine_heap->type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_38 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        tmp_called_instance_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[26]);
        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_4);

            coroutine_heap->exception_lineno = 168;
            coroutine_heap->type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 168;
        tmp_args_element_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[29]);
        Py_DECREF(tmp_called_instance_11);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_4);

            coroutine_heap->exception_lineno = 168;
            coroutine_heap->type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 168;
        tmp_expression_value_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 168;
            coroutine_heap->type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = ASYNC_AWAIT(tmp_expression_value_35, await_normal);
        Py_DECREF(tmp_expression_value_35);
        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 168;
            coroutine_heap->type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_35, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_36, sizeof(PyObject *), &tmp_expression_value_37, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_called_instance_11, sizeof(PyObject *), &tmp_expression_value_38, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 4;
        coroutine->m_yieldfrom = tmp_expression_value_34;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_4:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_35, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_expression_value_36, sizeof(PyObject *), &tmp_expression_value_37, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), &tmp_called_instance_11, sizeof(PyObject *), &tmp_expression_value_38, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 168;
            coroutine_heap->type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }
        tmp_await_result_3 = yield_return_value;
        if (tmp_await_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 168;
            coroutine_heap->type_description_1 = "cccooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_await_result_3);
    }
    branch_no_12:;
    if (coroutine_heap->var_result == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[44]);
        coroutine_heap->exception_tb = NULL;
        NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        CHAIN_EXCEPTION(coroutine_heap->exception_value);

        coroutine_heap->exception_lineno = 170;
        coroutine_heap->type_description_1 = "cccooo";
        goto frame_exception_exit_1;
    }

    coroutine_heap->tmp_return_value = coroutine_heap->var_result;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto frame_return_exit_1;
    branch_no_11:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


        coroutine_heap->exception_lineno = 128;
        coroutine_heap->type_description_1 = "cccooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

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
            coroutine->m_closure[2],
            coroutine->m_closure[1],
            coroutine->m_closure[0],
            coroutine_heap->var_result,
            coroutine_heap->var_data,
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
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(coroutine_heap->var_result);
    coroutine_heap->var_result = NULL;
    Py_XDECREF(coroutine_heap->var_data);
    coroutine_heap->var_data = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_8 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_8 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_8 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_8 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_result);
    coroutine_heap->var_result = NULL;
    Py_XDECREF(coroutine_heap->var_data);
    coroutine_heap->var_data = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_8;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_8;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_8;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_8;

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

static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__2__call_sslobject_method$$$coroutine__1__call_sslobject_method(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$streams$tls$$$function__2__call_sslobject_method$$$coroutine__1__call_sslobject_method_context,
        module_anyio$streams$tls,
        mod_consts[18],
        mod_consts[45],
        codeobj_a249479c5ebc706e0ea7d5ca5c7fa6b1,
        closure,
        3,
#if 1
        sizeof(struct anyio$streams$tls$$$function__2__call_sslobject_method$$$coroutine__1__call_sslobject_method_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$streams$tls$$$function__3_unwrap(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_anyio$streams$tls$$$function__3_unwrap$$$coroutine__1_unwrap(tmp_closure_1);

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
struct anyio$streams$tls$$$function__3_unwrap$$$coroutine__1_unwrap_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$streams$tls$$$function__3_unwrap$$$coroutine__1_unwrap_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$streams$tls$$$function__3_unwrap$$$coroutine__1_unwrap_locals *coroutine_heap = (struct anyio$streams$tls$$$function__3_unwrap$$$coroutine__1_unwrap_locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_789e0c551df1653691afd15a760380e8, module_anyio$streams$tls, sizeof(void *));
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
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 179;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 179;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 179;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 179;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[47]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 179;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[48]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 179;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 179;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 179;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 179;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 179;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 179;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_await_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 180;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[32]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 180;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 180;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[33]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 180;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 181;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[26]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 181;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 181;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[33]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 181;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_8;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 182;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[15]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 182;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_expression_value_9;
            PyTuple_SET_ITEM(coroutine_heap->tmp_return_value, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 182;
                coroutine_heap->type_description_1 = "c";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_9 = Nuitka_Cell_GET(coroutine->m_closure[0]);
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[32]);
            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 182;
                coroutine_heap->type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            coroutine->m_frame->m_frame.f_lineno = 182;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[29]);
            Py_DECREF(tmp_called_instance_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 182;
                coroutine_heap->type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(coroutine_heap->tmp_return_value, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(coroutine_heap->tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
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

static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__3_unwrap$$$coroutine__1_unwrap(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$streams$tls$$$function__3_unwrap$$$coroutine__1_unwrap_context,
        module_anyio$streams$tls,
        mod_consts[48],
        mod_consts[49],
        codeobj_789e0c551df1653691afd15a760380e8,
        closure,
        1,
#if 1
        sizeof(struct anyio$streams$tls$$$function__3_unwrap$$$coroutine__1_unwrap_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$streams$tls$$$function__4_aclose(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_anyio$streams$tls$$$function__4_aclose$$$coroutine__1_aclose(tmp_closure_1);

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
struct anyio$streams$tls$$$function__4_aclose$$$coroutine__1_aclose_locals {
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
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$streams$tls$$$function__4_aclose$$$coroutine__1_aclose_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$streams$tls$$$function__4_aclose$$$coroutine__1_aclose_locals *coroutine_heap = (struct anyio$streams$tls$$$function__4_aclose$$$coroutine__1_aclose_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 3: goto yield_return_3;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_fa95c374f1e5657e77e666a407b8b54d, module_anyio$streams$tls, sizeof(void *));
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
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 185;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 185;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            coroutine_heap->exception_lineno = 185;
            coroutine_heap->type_description_1 = "c";
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
    // Tried code:
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 187;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 187;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 187;
        tmp_expression_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[48]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 187;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_1;
        }
        tmp_expression_value_2 = ASYNC_AWAIT(tmp_expression_value_3, await_normal);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 187;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_2;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_3, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 187;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 187;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_await_result_1);
    }
    goto try_end_1;
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
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_await_result_2;
        coroutine->m_frame->m_frame.f_lineno = 189;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 189;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 189;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[15]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 189;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_2;
        }
        coroutine->m_frame->m_frame.f_lineno = 189;
        tmp_expression_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 189;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_2;
        }
        tmp_expression_value_4 = ASYNC_AWAIT(tmp_expression_value_5, await_normal);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 189;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
        SAVE_COROUTINE_EXCEPTION(coroutine);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yieldfrom = tmp_expression_value_4;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        RESTORE_COROUTINE_EXCEPTION(coroutine);
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 189;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_2;
        }
        tmp_await_result_2 = yield_return_value;
        if (tmp_await_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 189;
            coroutine_heap->type_description_1 = "c";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_await_result_2);
    }
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 190;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "c";
    goto try_except_handler_2;
    goto branch_end_2;
    branch_no_2:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 186;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "c";
    goto try_except_handler_2;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
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

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_await_result_3;
        coroutine->m_frame->m_frame.f_lineno = 192;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 192;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[15]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 192;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 192;
        tmp_expression_value_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[51]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 192;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = ASYNC_AWAIT(tmp_expression_value_8, await_normal);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 192;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_8, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 3;
        coroutine->m_yieldfrom = tmp_expression_value_7;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_3:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_8, sizeof(PyObject *), &tmp_called_instance_2, sizeof(PyObject *), &tmp_expression_value_9, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 192;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_await_result_3 = yield_return_value;
        if (tmp_await_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 192;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_await_result_3);
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

static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__4_aclose$$$coroutine__1_aclose(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$streams$tls$$$function__4_aclose$$$coroutine__1_aclose_context,
        module_anyio$streams$tls,
        mod_consts[51],
        mod_consts[52],
        codeobj_fa95c374f1e5657e77e666a407b8b54d,
        closure,
        1,
#if 1
        sizeof(struct anyio$streams$tls$$$function__4_aclose$$$coroutine__1_aclose_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$streams$tls$$$function__5_receive(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_max_bytes = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_max_bytes;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_COROUTINE_anyio$streams$tls$$$function__5_receive$$$coroutine__1_receive(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_max_bytes);
    Py_DECREF(par_max_bytes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$streams$tls$$$function__5_receive$$$coroutine__1_receive_locals {
    PyObject *var_data;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
};
#endif

static PyObject *anyio$streams$tls$$$function__5_receive$$$coroutine__1_receive_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$streams$tls$$$function__5_receive$$$coroutine__1_receive_locals *coroutine_heap = (struct anyio$streams$tls$$$function__5_receive$$$coroutine__1_receive_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_data = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_c7fceebbdc9931a442ce24b6433f76ac, module_anyio$streams$tls, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_2;
        coroutine->m_frame->m_frame.f_lineno = 195;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 195;
            coroutine_heap->type_description_1 = "cco";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 195;
            coroutine_heap->type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 195;
            coroutine_heap->type_description_1 = "cco";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[47]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 195;
            coroutine_heap->type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[29]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 195;
            coroutine_heap->type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[53]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 195;
            coroutine_heap->type_description_1 = "cco";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 195;
            coroutine_heap->type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 195;
            coroutine_heap->type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 195;
            coroutine_heap->type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = yield_return_value;
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 195;
            coroutine_heap->type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_data == NULL);
        coroutine_heap->var_data = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(coroutine_heap->var_data);
        tmp_operand_value_1 = coroutine_heap->var_data;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 196;
            coroutine_heap->type_description_1 = "cco";
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
        tmp_raise_type_1 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_raise_type_1 == NULL)) {
            tmp_raise_type_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 197;
            coroutine_heap->type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        coroutine_heap->exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        coroutine_heap->exception_lineno = 197;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "cco";
        goto frame_exception_exit_1;
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
            coroutine->m_closure[0],
            coroutine_heap->var_data
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
    CHECK_OBJECT(coroutine_heap->var_data);
    coroutine_heap->tmp_return_value = coroutine_heap->var_data;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(coroutine_heap->var_data);
    Py_DECREF(coroutine_heap->var_data);
    coroutine_heap->var_data = NULL;
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

    Py_XDECREF(coroutine_heap->var_data);
    coroutine_heap->var_data = NULL;
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

static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__5_receive$$$coroutine__1_receive(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$streams$tls$$$function__5_receive$$$coroutine__1_receive_context,
        module_anyio$streams$tls,
        mod_consts[30],
        mod_consts[54],
        codeobj_c7fceebbdc9931a442ce24b6433f76ac,
        closure,
        2,
#if 1
        sizeof(struct anyio$streams$tls$$$function__5_receive$$$coroutine__1_receive_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$streams$tls$$$function__6_send(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_item = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_item;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_COROUTINE_anyio$streams$tls$$$function__6_send$$$coroutine__1_send(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$streams$tls$$$function__6_send$$$coroutine__1_send_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$streams$tls$$$function__6_send$$$coroutine__1_send_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$streams$tls$$$function__6_send$$$coroutine__1_send_locals *coroutine_heap = (struct anyio$streams$tls$$$function__6_send$$$coroutine__1_send_locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_6fbe8571046f5faaf28db38ed0055b7c, module_anyio$streams$tls, sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 202;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 202;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 202;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 202;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[47]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 202;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[35]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 202;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[55]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 202;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 202;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 202;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 202;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 202;
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

static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__6_send$$$coroutine__1_send(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$streams$tls$$$function__6_send$$$coroutine__1_send_context,
        module_anyio$streams$tls,
        mod_consts[28],
        mod_consts[56],
        codeobj_6fbe8571046f5faaf28db38ed0055b7c,
        closure,
        2,
#if 1
        sizeof(struct anyio$streams$tls$$$function__6_send$$$coroutine__1_send_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$streams$tls$$$function__7_send_eof(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_anyio$streams$tls$$$function__7_send_eof$$$coroutine__1_send_eof(tmp_closure_1);

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
struct anyio$streams$tls$$$function__7_send_eof$$$coroutine__1_send_eof_locals {
    PyObject *var_tls_version;
    PyObject *var_match;
    PyObject *var_major;
    PyObject *var_minor;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
};
#endif

static PyObject *anyio$streams$tls$$$function__7_send_eof$$$coroutine__1_send_eof_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$streams$tls$$$function__7_send_eof$$$coroutine__1_send_eof_locals *coroutine_heap = (struct anyio$streams$tls$$$function__7_send_eof$$$coroutine__1_send_eof_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_tls_version = NULL;
    coroutine_heap->var_match = NULL;
    coroutine_heap->var_major = NULL;
    coroutine_heap->var_minor = NULL;
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
    coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_03947b19870226370fa20f806687323c, module_anyio$streams$tls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 205;
            coroutine_heap->type_description_1 = "coooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[57]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 205;
            coroutine_heap->type_description_1 = "coooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 205;
            coroutine_heap->type_description_1 = "coooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[59]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 205;
            coroutine_heap->type_description_1 = "coooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 205;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 205;
            coroutine_heap->type_description_1 = "coooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_tls_version == NULL);
        coroutine_heap->var_tls_version = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 206;
            coroutine_heap->type_description_1 = "coooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[62];
        CHECK_OBJECT(coroutine_heap->var_tls_version);
        tmp_args_element_value_3 = coroutine_heap->var_tls_version;
        coroutine->m_frame->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[61],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 206;
            coroutine_heap->type_description_1 = "coooo";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_match == NULL);
        coroutine_heap->var_match = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(coroutine_heap->var_match);
        tmp_truth_name_1 = CHECK_IF_TRUE(coroutine_heap->var_match);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 207;
            coroutine_heap->type_description_1 = "coooo";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(coroutine_heap->var_match);
        tmp_called_instance_2 = coroutine_heap->var_match;
        coroutine->m_frame->m_frame.f_lineno = 208;
        tmp_int_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[63],
            PyTuple_GET_ITEM(mod_consts[64], 0)
        );

        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 208;
            coroutine_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 208;
            coroutine_heap->type_description_1 = "coooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_int_arg_2;
            int tmp_or_left_truth_1;
            PyObject *tmp_or_left_value_1;
            PyObject *tmp_or_right_value_1;
            PyObject *tmp_called_instance_3;
            PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(coroutine_heap->var_match);
            tmp_called_instance_3 = coroutine_heap->var_match;
            coroutine->m_frame->m_frame.f_lineno = 208;
            tmp_or_left_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_3,
                mod_consts[63],
                PyTuple_GET_ITEM(mod_consts[65], 0)
            );

            if (tmp_or_left_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 208;
                coroutine_heap->type_description_1 = "coooo";
                goto tuple_build_exception_1;
            }
            tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
            if (tmp_or_left_truth_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                Py_DECREF(tmp_or_left_value_1);

                coroutine_heap->exception_lineno = 208;
                coroutine_heap->type_description_1 = "coooo";
                goto tuple_build_exception_1;
            }
            if (tmp_or_left_truth_1 == 1) {
                goto or_left_1;
            } else {
                goto or_right_1;
            }
            or_right_1:;
            Py_DECREF(tmp_or_left_value_1);
            tmp_or_right_value_1 = mod_consts[66];
            Py_INCREF(tmp_or_right_value_1);
            tmp_int_arg_2 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_int_arg_2 = tmp_or_left_value_1;
            or_end_1:;
            tmp_tuple_element_1 = PyNumber_Int(tmp_int_arg_2);
            Py_DECREF(tmp_int_arg_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 208;
                coroutine_heap->type_description_1 = "coooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_3 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_3 == NULL));
        assert(coroutine_heap->tmp_tuple_unpack_1__source_iter == NULL);
        coroutine_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_1 = "coooo";
            coroutine_heap->exception_lineno = 208;
            goto try_except_handler_3;
        }
        assert(coroutine_heap->tmp_tuple_unpack_1__element_1 == NULL);
        coroutine_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                coroutine_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(coroutine_heap->exception_type);
                coroutine_heap->exception_value = NULL;
                coroutine_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            }


            coroutine_heap->type_description_1 = "coooo";
            coroutine_heap->exception_lineno = 208;
            goto try_except_handler_3;
        }
        assert(coroutine_heap->tmp_tuple_unpack_1__element_2 == NULL);
        coroutine_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = coroutine_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        coroutine_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(coroutine_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

                    coroutine_heap->type_description_1 = "coooo";
                    coroutine_heap->exception_lineno = 208;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(coroutine_heap->tmp_iterator_attempt);

            coroutine_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            coroutine_heap->exception_value = mod_consts[67];
            Py_INCREF(coroutine_heap->exception_value);
            coroutine_heap->exception_tb = NULL;

            coroutine_heap->type_description_1 = "coooo";
            coroutine_heap->exception_lineno = 208;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    coroutine_heap->exception_keeper_type_1 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_1 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_1 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_1;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_1;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_1;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    coroutine_heap->exception_keeper_type_2 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_2 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_2 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_2;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_2;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_2;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(coroutine_heap->tmp_tuple_unpack_1__source_iter);
    coroutine_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = coroutine_heap->tmp_tuple_unpack_1__element_1;
        assert(coroutine_heap->var_major == NULL);
        Py_INCREF(tmp_assign_source_6);
        coroutine_heap->var_major = tmp_assign_source_6;
    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_1);
    coroutine_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(coroutine_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = coroutine_heap->tmp_tuple_unpack_1__element_2;
        assert(coroutine_heap->var_minor == NULL);
        Py_INCREF(tmp_assign_source_7);
        coroutine_heap->var_minor = tmp_assign_source_7;
    }
    Py_XDECREF(coroutine_heap->tmp_tuple_unpack_1__element_2);
    coroutine_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(coroutine_heap->var_major);
        tmp_tuple_element_2 = coroutine_heap->var_major;
        tmp_cmp_expr_left_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_left_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(coroutine_heap->var_minor);
        tmp_tuple_element_2 = coroutine_heap->var_minor;
        PyTuple_SET_ITEM0(tmp_cmp_expr_left_1, 1, tmp_tuple_element_2);
        tmp_cmp_expr_right_1 = mod_consts[68];
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_TUPLE_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 209;
            coroutine_heap->type_description_1 = "coooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[69];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(coroutine_heap->var_tls_version);
            tmp_format_value_1 = coroutine_heap->var_tls_version;
            tmp_format_spec_1 = mod_consts[70];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 212;
                coroutine_heap->type_description_1 = "coooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[70], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 211;
            coroutine_heap->type_description_1 = "coooo";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 210;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_1;
        coroutine_heap->exception_lineno = 210;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "coooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    branch_no_1:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[71];
        coroutine->m_frame->m_frame.f_lineno = 215;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        coroutine_heap->exception_type = tmp_raise_type_2;
        coroutine_heap->exception_lineno = 215;
        RAISE_EXCEPTION_WITH_TYPE(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
        coroutine_heap->type_description_1 = "coooo";
        goto frame_exception_exit_1;
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
            coroutine->m_closure[0],
            coroutine_heap->var_tls_version,
            coroutine_heap->var_match,
            coroutine_heap->var_major,
            coroutine_heap->var_minor
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
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_3 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_3 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_3 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_tls_version);
    coroutine_heap->var_tls_version = NULL;
    Py_XDECREF(coroutine_heap->var_match);
    coroutine_heap->var_match = NULL;
    Py_XDECREF(coroutine_heap->var_major);
    coroutine_heap->var_major = NULL;
    Py_XDECREF(coroutine_heap->var_minor);
    coroutine_heap->var_minor = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_3;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_3;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_3;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;

}

static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__7_send_eof$$$coroutine__1_send_eof(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$streams$tls$$$function__7_send_eof$$$coroutine__1_send_eof_context,
        module_anyio$streams$tls,
        mod_consts[72],
        mod_consts[73],
        codeobj_03947b19870226370fa20f806687323c,
        closure,
        1,
#if 1
        sizeof(struct anyio$streams$tls$$$function__7_send_eof$$$coroutine__1_send_eof_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$streams$tls$$$function__8_extra_attributes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_FrameObject *frame_69ce05523e5dc91041314178e26d7f9d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_69ce05523e5dc91041314178e26d7f9d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_69ce05523e5dc91041314178e26d7f9d)) {
        Py_XDECREF(cache_frame_69ce05523e5dc91041314178e26d7f9d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_69ce05523e5dc91041314178e26d7f9d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_69ce05523e5dc91041314178e26d7f9d = MAKE_FUNCTION_FRAME(codeobj_69ce05523e5dc91041314178e26d7f9d, module_anyio$streams$tls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_69ce05523e5dc91041314178e26d7f9d->m_type_description == NULL);
    frame_69ce05523e5dc91041314178e26d7f9d = cache_frame_69ce05523e5dc91041314178e26d7f9d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_69ce05523e5dc91041314178e26d7f9d);
    assert(Py_REFCNT(frame_69ce05523e5dc91041314178e26d7f9d) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(Nuitka_Cell_GET(par_self));
        tmp_expression_value_2 = Nuitka_Cell_GET(par_self);
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[15]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[74]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = MAKE_TUPLE_EMPTY(11);
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_12;
            struct Nuitka_CellObject *tmp_closure_1[1];
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_expression_value_13;
            struct Nuitka_CellObject *tmp_closure_2[1];
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_14;
            struct Nuitka_CellObject *tmp_closure_3[1];
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_15;
            struct Nuitka_CellObject *tmp_closure_4[1];
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_value_16;
            struct Nuitka_CellObject *tmp_closure_5[1];
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_17;
            struct Nuitka_CellObject *tmp_closure_6[1];
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_expression_value_20;
            PyTuple_SET_ITEM(tmp_dircall_arg1_1, 0, tmp_tuple_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[75]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(Nuitka_Cell_GET(par_self));
            tmp_expression_value_5 = Nuitka_Cell_GET(par_self);
            tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[47]);
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 223;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[76]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 223;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_1 = "c";
                goto dict_build_exception_1;
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            PyTuple_SET_ITEM(tmp_dircall_arg1_1, 1, tmp_tuple_element_1);
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[77]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(Nuitka_Cell_GET(par_self));
            tmp_expression_value_8 = Nuitka_Cell_GET(par_self);
            tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[47]);
            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 224;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[78]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 224;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "c";
                goto dict_build_exception_2;
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            PyTuple_SET_ITEM(tmp_dircall_arg1_1, 2, tmp_tuple_element_1);
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[79]);
            if (tmp_dict_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(Nuitka_Cell_GET(par_self));
            tmp_expression_value_11 = Nuitka_Cell_GET(par_self);
            tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[47]);
            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 225;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[79]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 225;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            Py_DECREF(tmp_dict_key_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 225;
                type_description_1 = "c";
                goto dict_build_exception_3;
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;
            PyTuple_SET_ITEM(tmp_dircall_arg1_1, 3, tmp_tuple_element_1);
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_dict_key_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[80]);
            if (tmp_dict_key_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }

            tmp_closure_1[0] = par_self;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dict_value_4 = MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes$$$function__1_lambda(tmp_closure_1);

            tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            Py_DECREF(tmp_dict_key_4);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 226;
                type_description_1 = "c";
                goto dict_build_exception_4;
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;
            PyTuple_SET_ITEM(tmp_dircall_arg1_1, 4, tmp_tuple_element_1);
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[83]);
            if (tmp_dict_key_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }

            tmp_closure_2[0] = par_self;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dict_value_5 = MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes$$$function__2_lambda(tmp_closure_2);

            tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            Py_DECREF(tmp_dict_key_5);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_1 = "c";
                goto dict_build_exception_5;
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;
            PyTuple_SET_ITEM(tmp_dircall_arg1_1, 5, tmp_tuple_element_1);
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_dict_key_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[1]);
            if (tmp_dict_key_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }

            tmp_closure_3[0] = par_self;
            Py_INCREF(tmp_closure_3[0]);

            tmp_dict_value_6 = MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes$$$function__3_lambda(tmp_closure_3);

            tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            Py_DECREF(tmp_dict_key_6);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_1 = "c";
                goto dict_build_exception_6;
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;
            PyTuple_SET_ITEM(tmp_dircall_arg1_1, 6, tmp_tuple_element_1);
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_dict_key_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[84]);
            if (tmp_dict_key_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }

            tmp_closure_4[0] = par_self;
            Py_INCREF(tmp_closure_4[0]);

            tmp_dict_value_7 = MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes$$$function__4_lambda(tmp_closure_4);

            tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            Py_DECREF(tmp_dict_key_7);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "c";
                goto dict_build_exception_7;
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;
            PyTuple_SET_ITEM(tmp_dircall_arg1_1, 7, tmp_tuple_element_1);
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_dict_key_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[16]);
            if (tmp_dict_key_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }

            tmp_closure_5[0] = par_self;
            Py_INCREF(tmp_closure_5[0]);

            tmp_dict_value_8 = MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes$$$function__5_lambda(tmp_closure_5);

            tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            Py_DECREF(tmp_dict_key_8);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "c";
                goto dict_build_exception_8;
            }
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;
            PyTuple_SET_ITEM(tmp_dircall_arg1_1, 8, tmp_tuple_element_1);
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_dict_key_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[85]);
            if (tmp_dict_key_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }

            tmp_closure_6[0] = par_self;
            Py_INCREF(tmp_closure_6[0]);

            tmp_dict_value_9 = MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes$$$function__6_lambda(tmp_closure_6);

            tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            Py_DECREF(tmp_dict_key_9);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_1 = "c";
                goto dict_build_exception_9;
            }
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;
            PyTuple_SET_ITEM(tmp_dircall_arg1_1, 9, tmp_tuple_element_1);
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_dict_key_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[59]);
            if (tmp_dict_key_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(Nuitka_Cell_GET(par_self));
            tmp_expression_value_20 = Nuitka_Cell_GET(par_self);
            tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[47]);
            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_10);

                exception_lineno = 234;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[86]);
            Py_DECREF(tmp_expression_value_19);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_10);

                exception_lineno = 234;
                type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_tuple_element_1, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            Py_DECREF(tmp_dict_key_10);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "c";
                goto dict_build_exception_10;
            }
            goto dict_build_noexception_10;
            // Exception handling pass through code for dict_build:
            dict_build_exception_10:;
            Py_DECREF(tmp_tuple_element_1);
            goto tuple_build_exception_1;
            // Finished with no exception for dict_build:
            dict_build_noexception_10:;
            PyTuple_SET_ITEM(tmp_dircall_arg1_1, 10, tmp_tuple_element_1);
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
            tmp_return_value = impl___main__$$$function__4__unpack_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_69ce05523e5dc91041314178e26d7f9d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_69ce05523e5dc91041314178e26d7f9d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_69ce05523e5dc91041314178e26d7f9d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_69ce05523e5dc91041314178e26d7f9d,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_69ce05523e5dc91041314178e26d7f9d == cache_frame_69ce05523e5dc91041314178e26d7f9d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_69ce05523e5dc91041314178e26d7f9d);
        cache_frame_69ce05523e5dc91041314178e26d7f9d = NULL;
    }

    assertFrameObject(frame_69ce05523e5dc91041314178e26d7f9d);

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


static PyObject *impl_anyio$streams$tls$$$function__8_extra_attributes$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_bd1ef3b28c9c6d854f964791af1b98a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bd1ef3b28c9c6d854f964791af1b98a1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bd1ef3b28c9c6d854f964791af1b98a1)) {
        Py_XDECREF(cache_frame_bd1ef3b28c9c6d854f964791af1b98a1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bd1ef3b28c9c6d854f964791af1b98a1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bd1ef3b28c9c6d854f964791af1b98a1 = MAKE_FUNCTION_FRAME(codeobj_bd1ef3b28c9c6d854f964791af1b98a1, module_anyio$streams$tls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bd1ef3b28c9c6d854f964791af1b98a1->m_type_description == NULL);
    frame_bd1ef3b28c9c6d854f964791af1b98a1 = cache_frame_bd1ef3b28c9c6d854f964791af1b98a1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bd1ef3b28c9c6d854f964791af1b98a1);
    assert(Py_REFCNT(frame_bd1ef3b28c9c6d854f964791af1b98a1) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 226;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[47]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        frame_bd1ef3b28c9c6d854f964791af1b98a1->m_frame.f_lineno = 226;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[87],
            PyTuple_GET_ITEM(mod_consts[88], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_bd1ef3b28c9c6d854f964791af1b98a1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bd1ef3b28c9c6d854f964791af1b98a1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bd1ef3b28c9c6d854f964791af1b98a1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bd1ef3b28c9c6d854f964791af1b98a1,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_bd1ef3b28c9c6d854f964791af1b98a1 == cache_frame_bd1ef3b28c9c6d854f964791af1b98a1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bd1ef3b28c9c6d854f964791af1b98a1);
        cache_frame_bd1ef3b28c9c6d854f964791af1b98a1 = NULL;
    }

    assertFrameObject(frame_bd1ef3b28c9c6d854f964791af1b98a1);

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


static PyObject *impl_anyio$streams$tls$$$function__8_extra_attributes$$$function__2_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_fcf5f1d7909fe2c684c97a6a6bbad405;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fcf5f1d7909fe2c684c97a6a6bbad405 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fcf5f1d7909fe2c684c97a6a6bbad405)) {
        Py_XDECREF(cache_frame_fcf5f1d7909fe2c684c97a6a6bbad405);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fcf5f1d7909fe2c684c97a6a6bbad405 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fcf5f1d7909fe2c684c97a6a6bbad405 = MAKE_FUNCTION_FRAME(codeobj_fcf5f1d7909fe2c684c97a6a6bbad405, module_anyio$streams$tls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fcf5f1d7909fe2c684c97a6a6bbad405->m_type_description == NULL);
    frame_fcf5f1d7909fe2c684c97a6a6bbad405 = cache_frame_fcf5f1d7909fe2c684c97a6a6bbad405;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fcf5f1d7909fe2c684c97a6a6bbad405);
    assert(Py_REFCNT(frame_fcf5f1d7909fe2c684c97a6a6bbad405) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 227;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[47]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        frame_fcf5f1d7909fe2c684c97a6a6bbad405->m_frame.f_lineno = 227;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[87],
            PyTuple_GET_ITEM(mod_consts[89], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_fcf5f1d7909fe2c684c97a6a6bbad405, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fcf5f1d7909fe2c684c97a6a6bbad405->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fcf5f1d7909fe2c684c97a6a6bbad405, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fcf5f1d7909fe2c684c97a6a6bbad405,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_fcf5f1d7909fe2c684c97a6a6bbad405 == cache_frame_fcf5f1d7909fe2c684c97a6a6bbad405) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fcf5f1d7909fe2c684c97a6a6bbad405);
        cache_frame_fcf5f1d7909fe2c684c97a6a6bbad405 = NULL;
    }

    assertFrameObject(frame_fcf5f1d7909fe2c684c97a6a6bbad405);

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


static PyObject *impl_anyio$streams$tls$$$function__8_extra_attributes$$$function__3_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_c3fd8edea89e690c22141c0de43c613c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c3fd8edea89e690c22141c0de43c613c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c3fd8edea89e690c22141c0de43c613c)) {
        Py_XDECREF(cache_frame_c3fd8edea89e690c22141c0de43c613c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c3fd8edea89e690c22141c0de43c613c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c3fd8edea89e690c22141c0de43c613c = MAKE_FUNCTION_FRAME(codeobj_c3fd8edea89e690c22141c0de43c613c, module_anyio$streams$tls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c3fd8edea89e690c22141c0de43c613c->m_type_description == NULL);
    frame_c3fd8edea89e690c22141c0de43c613c = cache_frame_c3fd8edea89e690c22141c0de43c613c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c3fd8edea89e690c22141c0de43c613c);
    assert(Py_REFCNT(frame_c3fd8edea89e690c22141c0de43c613c) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 230;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[47]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_c3fd8edea89e690c22141c0de43c613c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c3fd8edea89e690c22141c0de43c613c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c3fd8edea89e690c22141c0de43c613c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c3fd8edea89e690c22141c0de43c613c,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_c3fd8edea89e690c22141c0de43c613c == cache_frame_c3fd8edea89e690c22141c0de43c613c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c3fd8edea89e690c22141c0de43c613c);
        cache_frame_c3fd8edea89e690c22141c0de43c613c = NULL;
    }

    assertFrameObject(frame_c3fd8edea89e690c22141c0de43c613c);

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


static PyObject *impl_anyio$streams$tls$$$function__8_extra_attributes$$$function__4_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_9df8c5267cea7fecc56d8564cfb5c139;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9df8c5267cea7fecc56d8564cfb5c139 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9df8c5267cea7fecc56d8564cfb5c139)) {
        Py_XDECREF(cache_frame_9df8c5267cea7fecc56d8564cfb5c139);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9df8c5267cea7fecc56d8564cfb5c139 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9df8c5267cea7fecc56d8564cfb5c139 = MAKE_FUNCTION_FRAME(codeobj_9df8c5267cea7fecc56d8564cfb5c139, module_anyio$streams$tls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9df8c5267cea7fecc56d8564cfb5c139->m_type_description == NULL);
    frame_9df8c5267cea7fecc56d8564cfb5c139 = cache_frame_9df8c5267cea7fecc56d8564cfb5c139;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9df8c5267cea7fecc56d8564cfb5c139);
    assert(Py_REFCNT(frame_9df8c5267cea7fecc56d8564cfb5c139) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 231;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[47]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        frame_9df8c5267cea7fecc56d8564cfb5c139->m_frame.f_lineno = 231;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[84]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_9df8c5267cea7fecc56d8564cfb5c139, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9df8c5267cea7fecc56d8564cfb5c139->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9df8c5267cea7fecc56d8564cfb5c139, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9df8c5267cea7fecc56d8564cfb5c139,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_9df8c5267cea7fecc56d8564cfb5c139 == cache_frame_9df8c5267cea7fecc56d8564cfb5c139) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9df8c5267cea7fecc56d8564cfb5c139);
        cache_frame_9df8c5267cea7fecc56d8564cfb5c139 = NULL;
    }

    assertFrameObject(frame_9df8c5267cea7fecc56d8564cfb5c139);

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


static PyObject *impl_anyio$streams$tls$$$function__8_extra_attributes$$$function__5_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_9b9272661a69b0312cdf405a26b0351e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9b9272661a69b0312cdf405a26b0351e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9b9272661a69b0312cdf405a26b0351e)) {
        Py_XDECREF(cache_frame_9b9272661a69b0312cdf405a26b0351e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9b9272661a69b0312cdf405a26b0351e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9b9272661a69b0312cdf405a26b0351e = MAKE_FUNCTION_FRAME(codeobj_9b9272661a69b0312cdf405a26b0351e, module_anyio$streams$tls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9b9272661a69b0312cdf405a26b0351e->m_type_description == NULL);
    frame_9b9272661a69b0312cdf405a26b0351e = cache_frame_9b9272661a69b0312cdf405a26b0351e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9b9272661a69b0312cdf405a26b0351e);
    assert(Py_REFCNT(frame_9b9272661a69b0312cdf405a26b0351e) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 232;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_9b9272661a69b0312cdf405a26b0351e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9b9272661a69b0312cdf405a26b0351e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b9272661a69b0312cdf405a26b0351e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9b9272661a69b0312cdf405a26b0351e,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_9b9272661a69b0312cdf405a26b0351e == cache_frame_9b9272661a69b0312cdf405a26b0351e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9b9272661a69b0312cdf405a26b0351e);
        cache_frame_9b9272661a69b0312cdf405a26b0351e = NULL;
    }

    assertFrameObject(frame_9b9272661a69b0312cdf405a26b0351e);

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


static PyObject *impl_anyio$streams$tls$$$function__8_extra_attributes$$$function__6_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_652b52909351a175e7849fa5a3afa234;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_652b52909351a175e7849fa5a3afa234 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_652b52909351a175e7849fa5a3afa234)) {
        Py_XDECREF(cache_frame_652b52909351a175e7849fa5a3afa234);

#if _DEBUG_REFCOUNTS
        if (cache_frame_652b52909351a175e7849fa5a3afa234 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_652b52909351a175e7849fa5a3afa234 = MAKE_FUNCTION_FRAME(codeobj_652b52909351a175e7849fa5a3afa234, module_anyio$streams$tls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_652b52909351a175e7849fa5a3afa234->m_type_description == NULL);
    frame_652b52909351a175e7849fa5a3afa234 = cache_frame_652b52909351a175e7849fa5a3afa234;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_652b52909351a175e7849fa5a3afa234);
    assert(Py_REFCNT(frame_652b52909351a175e7849fa5a3afa234) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 233;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[47]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_652b52909351a175e7849fa5a3afa234, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_652b52909351a175e7849fa5a3afa234->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_652b52909351a175e7849fa5a3afa234, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_652b52909351a175e7849fa5a3afa234,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_652b52909351a175e7849fa5a3afa234 == cache_frame_652b52909351a175e7849fa5a3afa234) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_652b52909351a175e7849fa5a3afa234);
        cache_frame_652b52909351a175e7849fa5a3afa234 = NULL;
    }

    assertFrameObject(frame_652b52909351a175e7849fa5a3afa234);

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


static PyObject *impl_anyio$streams$tls$$$function__9_handle_handshake_error(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_exc = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_stream = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_exc;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_stream;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_COROUTINE_anyio$streams$tls$$$function__9_handle_handshake_error$$$coroutine__1_handle_handshake_error(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_exc);
    Py_DECREF(par_exc);
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$streams$tls$$$function__9_handle_handshake_error$$$coroutine__1_handle_handshake_error_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$streams$tls$$$function__9_handle_handshake_error$$$coroutine__1_handle_handshake_error_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$streams$tls$$$function__9_handle_handshake_error$$$coroutine__1_handle_handshake_error_locals *coroutine_heap = (struct anyio$streams$tls$$$function__9_handle_handshake_error$$$coroutine__1_handle_handshake_error_locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_59af2a9076ffb24b8479b28e6a1c13c1, module_anyio$streams$tls, sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 277;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 277;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[90]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 277;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        coroutine->m_frame->m_frame.f_lineno = 277;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 277;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 277;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 277;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 277;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_await_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_called_value_2;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 280;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 280;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 280;
        tmp_isinstance_cls_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 280;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 280;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (coroutine_heap->tmp_res != 0) ? Py_True : Py_False;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 280;
            coroutine_heap->type_description_1 = "cc";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 281;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 281;
        tmp_called_instance_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[93],
            PyTuple_GET_ITEM(mod_consts[94], 0)
        );

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 281;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 281;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[95],
            PyTuple_GET_ITEM(mod_consts[96], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 281;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        PyObject *tmp_called_value_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 284;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_isinstance_cls_2 = PyExc_Exception;
        coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 284;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = (coroutine_heap->tmp_res != 0) ? Py_True : Py_False;
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 284;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (coroutine_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 284;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 284;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 284;
        tmp_isinstance_cls_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 284;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        Py_DECREF(tmp_isinstance_cls_3);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 284;
            coroutine_heap->type_description_1 = "cc";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (coroutine_heap->tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 285;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cc";
    goto frame_exception_exit_1;
    branch_no_2:;

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
            coroutine->m_closure[0],
            coroutine->m_closure[1]
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

static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__9_handle_handshake_error$$$coroutine__1_handle_handshake_error(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$streams$tls$$$function__9_handle_handshake_error$$$coroutine__1_handle_handshake_error_context,
        module_anyio$streams$tls,
        mod_consts[97],
        mod_consts[98],
        codeobj_59af2a9076ffb24b8479b28e6a1c13c1,
        closure,
        2,
#if 1
        sizeof(struct anyio$streams$tls$$$function__9_handle_handshake_error$$$coroutine__1_handle_handshake_error_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$streams$tls$$$function__10_serve(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_handler = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_task_group = Nuitka_Cell_New1(python_pars[2]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_handler;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_self;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_task_group;
        Py_INCREF(tmp_closure_1[2]);

        tmp_return_value = MAKE_COROUTINE_anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);
    CHECK_OBJECT(par_task_group);
    Py_DECREF(par_task_group);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve_locals {
    PyObject *var_handler_wrapper;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
};
#endif

static PyObject *anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve_locals *coroutine_heap = (struct anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_handler_wrapper = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_74c5e92b0375d6a3c42482bed40cda65, module_anyio$streams$tls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        struct Nuitka_CellObject *tmp_closure_1[2];
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 292;
            coroutine_heap->type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[100]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 292;
            coroutine_heap->type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 292;
        tmp_called_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 292;
            coroutine_heap->type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[90];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            coroutine_heap->exception_lineno = 293;
            coroutine_heap->type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(coroutine_heap->tmp_res != 0));
        tmp_dict_key_1 = mod_consts[102];
        tmp_dict_value_1 = Py_None;
        coroutine_heap->tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(coroutine_heap->tmp_res != 0));

        tmp_closure_1[0] = coroutine->m_closure[0];
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = coroutine->m_closure[1];
        Py_INCREF(tmp_closure_1[1]);

        tmp_args_element_value_2 = MAKE_FUNCTION_anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve$$$function__1_handler_wrapper(tmp_annotations_1, tmp_closure_1);

        coroutine->m_frame->m_frame.f_lineno = 292;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 292;
            coroutine_heap->type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_handler_wrapper == NULL);
        coroutine_heap->var_handler_wrapper = tmp_assign_source_1;
    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 308;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 308;
            coroutine_heap->type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[105]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 308;
            coroutine_heap->type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[106]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 308;
            coroutine_heap->type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(coroutine_heap->var_handler_wrapper);
        tmp_args_element_value_3 = coroutine_heap->var_handler_wrapper;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[107]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 308;
            coroutine_heap->type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 308;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 308;
            coroutine_heap->type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 308;
            coroutine_heap->type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_1;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 308;
            coroutine_heap->type_description_1 = "ccco";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 308;
            coroutine_heap->type_description_1 = "ccco";
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
            coroutine->m_closure[0],
            coroutine->m_closure[2],
            coroutine_heap->var_handler_wrapper
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
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(coroutine_heap->var_handler_wrapper);
    Py_DECREF(coroutine_heap->var_handler_wrapper);
    coroutine_heap->var_handler_wrapper = NULL;
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

    Py_XDECREF(coroutine_heap->var_handler_wrapper);
    coroutine_heap->var_handler_wrapper = NULL;
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

static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve_context,
        module_anyio$streams$tls,
        mod_consts[106],
        mod_consts[108],
        codeobj_74c5e92b0375d6a3c42482bed40cda65,
        closure,
        3,
#if 1
        sizeof(struct anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve$$$function__1_handler_wrapper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_stream = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = self->m_closure[0];
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = self->m_closure[1];
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_stream;
        Py_INCREF(tmp_closure_1[2]);

        tmp_return_value = MAKE_COROUTINE_anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve$$$function__1_handler_wrapper$$$coroutine__1_handler_wrapper(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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



#if 1
struct anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve$$$function__1_handler_wrapper$$$coroutine__1_handler_wrapper_locals {
    PyObject *var_fail_after;
    PyObject *var_wrapped_stream;
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
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
};
#endif

static PyObject *anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve$$$function__1_handler_wrapper$$$coroutine__1_handler_wrapper_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve$$$function__1_handler_wrapper$$$coroutine__1_handler_wrapper_locals *coroutine_heap = (struct anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve$$$function__1_handler_wrapper$$$coroutine__1_handler_wrapper_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(coroutine->m_yield_return_index) {
    case 3: goto yield_return_3;
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->var_fail_after = NULL;
    coroutine_heap->var_wrapped_stream = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_1832f2afae4764e0c4572aad151004a2, module_anyio$streams$tls, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[70];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$streams$tls;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[109];
        tmp_level_value_1 = mod_consts[110];
        coroutine->m_frame->m_frame.f_lineno = 294;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 294;
            coroutine_heap->type_description_1 = "cooocc";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[111],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[111]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 294;
            coroutine_heap->type_description_1 = "cooocc";
            goto frame_exception_exit_1;
        }
        assert(coroutine_heap->var_fail_after == NULL);
        coroutine_heap->var_fail_after = tmp_assign_source_1;
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(coroutine_heap->var_fail_after);
        tmp_called_value_1 = coroutine_heap->var_fail_after;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 297;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_3;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[112]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 297;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_3;
        }
        coroutine->m_frame->m_frame.f_lineno = 297;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 297;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_3;
        }
        assert(coroutine_heap->tmp_with_1__source == NULL);
        coroutine_heap->tmp_with_1__source = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
        tmp_expression_value_2 = coroutine_heap->tmp_with_1__source;
        tmp_called_value_2 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[113]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 297;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_3;
        }
        coroutine->m_frame->m_frame.f_lineno = 297;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 297;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_3;
        }
        assert(coroutine_heap->tmp_with_1__enter == NULL);
        coroutine_heap->tmp_with_1__enter = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
        tmp_expression_value_3 = coroutine_heap->tmp_with_1__source;
        tmp_assign_source_5 = LOOKUP_SPECIAL(tmp_expression_value_3, mod_consts[114]);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 297;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_3;
        }
        assert(coroutine_heap->tmp_with_1__exit == NULL);
        coroutine_heap->tmp_with_1__exit = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        coroutine_heap->tmp_with_1__indicator = tmp_assign_source_6;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_8;
        coroutine->m_frame->m_frame.f_lineno = 298;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 298;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_5;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[20]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 298;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_5;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[90]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 299;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_5;
        }

        tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 300;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_5;
        }

        tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[3]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_3);

            coroutine_heap->exception_lineno = 300;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_5;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 301;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_5;
        }

        tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[16]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            coroutine_heap->exception_lineno = 301;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_5;
        }
        coroutine->m_frame->m_frame.f_lineno = 298;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_expression_value_5 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[116]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 298;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_5;
        }
        tmp_expression_value_4 = ASYNC_AWAIT(tmp_expression_value_5, await_normal);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 298;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_5;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 1;
        coroutine->m_yieldfrom = tmp_expression_value_4;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), &tmp_expression_value_8, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 298;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_5;
        }
        tmp_assign_source_7 = yield_return_value;
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 298;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_5;
        }
        assert(coroutine_heap->var_wrapped_stream == NULL);
        coroutine_heap->var_wrapped_stream = tmp_assign_source_7;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
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
        nuitka_bool tmp_assign_source_8;
        tmp_assign_source_8 = NUITKA_BOOL_FALSE;
        coroutine_heap->tmp_with_1__indicator = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
        tmp_called_value_4 = coroutine_heap->tmp_with_1__exit;
        tmp_args_element_value_2 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_3 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_4 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        coroutine->m_frame->m_frame.f_lineno = 297;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 297;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_6;
        }
        coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (coroutine_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 297;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_6;
        }
        tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 297;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cooocc";
    goto try_except_handler_6;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 297;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cooocc";
    goto try_except_handler_6;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
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

    goto try_except_handler_4;
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
    try_except_handler_4:;
    coroutine_heap->exception_keeper_type_3 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_3 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_3 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = coroutine_heap->tmp_with_1__indicator;
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
        CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
        tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
        coroutine->m_frame->m_frame.f_lineno = 297;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[117]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

            Py_DECREF(coroutine_heap->exception_keeper_type_3);
            Py_XDECREF(coroutine_heap->exception_keeper_value_3);
            Py_XDECREF(coroutine_heap->exception_keeper_tb_3);

            coroutine_heap->exception_lineno = 297;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_3;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_3;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_3;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = coroutine_heap->tmp_with_1__indicator;
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
        CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
        tmp_called_value_6 = coroutine_heap->tmp_with_1__exit;
        coroutine->m_frame->m_frame.f_lineno = 297;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[117]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 297;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
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
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    coroutine_heap->exception_keeper_type_5 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_5 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_5 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    {
        nuitka_bool tmp_assign_source_9;
        tmp_assign_source_9 = NUITKA_BOOL_FALSE;
        coroutine_heap->tmp_try_except_1__unhandled_indicator = tmp_assign_source_9;
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
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_BaseException;
        coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(coroutine_heap->tmp_res == -1));
        tmp_condition_result_5 = (coroutine_heap->tmp_res != 0) ? true : false;
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
        assert(coroutine_heap->var_exc == NULL);
        Py_INCREF(tmp_assign_source_10);
        coroutine_heap->var_exc = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_await_result_1;
        coroutine->m_frame->m_frame.f_lineno = 304;
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 304;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_8;
        }

        tmp_expression_value_11 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[97]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 304;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(coroutine_heap->var_exc);
        tmp_args_element_value_5 = coroutine_heap->var_exc;
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[90]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 304;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_8;
        }

        tmp_args_element_value_6 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        coroutine->m_frame->m_frame.f_lineno = 304;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_expression_value_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 304;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_8;
        }
        tmp_expression_value_9 = ASYNC_AWAIT(tmp_expression_value_10, await_normal);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 304;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_8;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), NULL);
        SAVE_COROUTINE_EXCEPTION(coroutine);
        coroutine->m_yield_return_index = 2;
        coroutine->m_yieldfrom = tmp_expression_value_9;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_2:
        RESTORE_COROUTINE_EXCEPTION(coroutine);
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 304;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_8;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 304;
            coroutine_heap->type_description_1 = "cooocc";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_await_result_1);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
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

    goto try_except_handler_7;
    // End of try:
    try_end_6:;
    Py_XDECREF(coroutine_heap->var_exc);
    coroutine_heap->var_exc = NULL;

    goto branch_end_5;
    branch_no_5:;
    coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
    if (unlikely(coroutine_heap->tmp_result == false)) {
        coroutine_heap->exception_lineno = 296;
    }

    if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
    coroutine_heap->type_description_1 = "cooocc";
    goto try_except_handler_7;
    branch_end_5:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
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

    goto frame_exception_exit_1;
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
        bool tmp_condition_result_6;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(coroutine_heap->tmp_try_except_1__unhandled_indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = coroutine_heap->tmp_try_except_1__unhandled_indicator;
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
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_await_result_2;
        coroutine->m_frame->m_frame.f_lineno = 306;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[100]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 306;
            coroutine_heap->type_description_1 = "cooocc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_8 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        if (coroutine_heap->var_wrapped_stream == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[118]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 306;
            coroutine_heap->type_description_1 = "cooocc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = coroutine_heap->var_wrapped_stream;
        coroutine->m_frame->m_frame.f_lineno = 306;
        tmp_expression_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_7);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 306;
            coroutine_heap->type_description_1 = "cooocc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = ASYNC_AWAIT(tmp_expression_value_13, await_normal);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 306;
            coroutine_heap->type_description_1 = "cooocc";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_13, sizeof(PyObject *), &tmp_called_value_8, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), NULL);
        coroutine->m_yield_return_index = 3;
        coroutine->m_yieldfrom = tmp_expression_value_12;
        coroutine->m_awaiting = true;
        return NULL;

        yield_return_3:
        Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_13, sizeof(PyObject *), &tmp_called_value_8, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), NULL);
        coroutine->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 306;
            coroutine_heap->type_description_1 = "cooocc";
            goto frame_exception_exit_1;
        }
        tmp_await_result_2 = yield_return_value;
        if (tmp_await_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 306;
            coroutine_heap->type_description_1 = "cooocc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_await_result_2);
    }
    branch_no_6:;

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
            coroutine->m_closure[2],
            coroutine_heap->var_fail_after,
            coroutine_heap->var_wrapped_stream,
            coroutine_heap->var_exc,
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
    goto try_except_handler_1;

    frame_no_exception_1:;
    coroutine_heap->tmp_return_value = Py_None;
    Py_INCREF(coroutine_heap->tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(coroutine_heap->var_fail_after);
    Py_DECREF(coroutine_heap->var_fail_after);
    coroutine_heap->var_fail_after = NULL;
    Py_XDECREF(coroutine_heap->var_wrapped_stream);
    coroutine_heap->var_wrapped_stream = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    coroutine_heap->exception_keeper_type_8 = coroutine_heap->exception_type;
    coroutine_heap->exception_keeper_value_8 = coroutine_heap->exception_value;
    coroutine_heap->exception_keeper_tb_8 = coroutine_heap->exception_tb;
    coroutine_heap->exception_keeper_lineno_8 = coroutine_heap->exception_lineno;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

    Py_XDECREF(coroutine_heap->var_fail_after);
    coroutine_heap->var_fail_after = NULL;
    Py_XDECREF(coroutine_heap->var_wrapped_stream);
    coroutine_heap->var_wrapped_stream = NULL;
    // Re-raise.
    coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_8;
    coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_8;
    coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_8;
    coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_8;

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

static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve$$$function__1_handler_wrapper$$$coroutine__1_handler_wrapper(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve$$$function__1_handler_wrapper$$$coroutine__1_handler_wrapper_context,
        module_anyio$streams$tls,
        mod_consts[103],
        mod_consts[104],
        codeobj_1832f2afae4764e0c4572aad151004a2,
        closure,
        3,
#if 1
        sizeof(struct anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve$$$function__1_handler_wrapper$$$coroutine__1_handler_wrapper_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$streams$tls$$$function__11_aclose(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_anyio$streams$tls$$$function__11_aclose$$$coroutine__1_aclose(tmp_closure_1);

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
struct anyio$streams$tls$$$function__11_aclose$$$coroutine__1_aclose_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$streams$tls$$$function__11_aclose$$$coroutine__1_aclose_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$streams$tls$$$function__11_aclose$$$coroutine__1_aclose_locals *coroutine_heap = (struct anyio$streams$tls$$$function__11_aclose$$$coroutine__1_aclose_locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_edb6cbb5cb537fc6a29b31346ecb7141, module_anyio$streams$tls, sizeof(void *));
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
        coroutine->m_frame->m_frame.f_lineno = 311;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[25]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 311;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[105]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 311;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 311;
        tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[51]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 311;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = ASYNC_AWAIT(tmp_expression_value_2, await_normal);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 311;
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


            coroutine_heap->exception_lineno = 311;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_await_result_1 = yield_return_value;
        if (tmp_await_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 311;
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

static PyObject *MAKE_COROUTINE_anyio$streams$tls$$$function__11_aclose$$$coroutine__1_aclose(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$streams$tls$$$function__11_aclose$$$coroutine__1_aclose_context,
        module_anyio$streams$tls,
        mod_consts[51],
        mod_consts[119],
        codeobj_edb6cbb5cb537fc6a29b31346ecb7141,
        closure,
        1,
#if 1
        sizeof(struct anyio$streams$tls$$$function__11_aclose$$$coroutine__1_aclose_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$streams$tls$$$function__12_extra_attributes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_FrameObject *frame_7dbb4c066bad0017602bd292ea3ba658;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7dbb4c066bad0017602bd292ea3ba658 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7dbb4c066bad0017602bd292ea3ba658)) {
        Py_XDECREF(cache_frame_7dbb4c066bad0017602bd292ea3ba658);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7dbb4c066bad0017602bd292ea3ba658 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7dbb4c066bad0017602bd292ea3ba658 = MAKE_FUNCTION_FRAME(codeobj_7dbb4c066bad0017602bd292ea3ba658, module_anyio$streams$tls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7dbb4c066bad0017602bd292ea3ba658->m_type_description == NULL);
    frame_7dbb4c066bad0017602bd292ea3ba658 = cache_frame_7dbb4c066bad0017602bd292ea3ba658;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7dbb4c066bad0017602bd292ea3ba658);
    assert(Py_REFCNT(frame_7dbb4c066bad0017602bd292ea3ba658) == 2);

    // Framed code:
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_dict_value_1 = MAKE_FUNCTION_anyio$streams$tls$$$function__12_extra_attributes$$$function__1_lambda(tmp_closure_1);

        tmp_return_value = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        Py_DECREF(tmp_dict_key_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "c";
            goto dict_build_exception_1;
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_7dbb4c066bad0017602bd292ea3ba658, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7dbb4c066bad0017602bd292ea3ba658->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7dbb4c066bad0017602bd292ea3ba658, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7dbb4c066bad0017602bd292ea3ba658,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_7dbb4c066bad0017602bd292ea3ba658 == cache_frame_7dbb4c066bad0017602bd292ea3ba658) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7dbb4c066bad0017602bd292ea3ba658);
        cache_frame_7dbb4c066bad0017602bd292ea3ba658 = NULL;
    }

    assertFrameObject(frame_7dbb4c066bad0017602bd292ea3ba658);

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


static PyObject *impl_anyio$streams$tls$$$function__12_extra_attributes$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_d3a2e3b1eaebaf0e891bf641fd6b8e92;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d3a2e3b1eaebaf0e891bf641fd6b8e92 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d3a2e3b1eaebaf0e891bf641fd6b8e92)) {
        Py_XDECREF(cache_frame_d3a2e3b1eaebaf0e891bf641fd6b8e92);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d3a2e3b1eaebaf0e891bf641fd6b8e92 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d3a2e3b1eaebaf0e891bf641fd6b8e92 = MAKE_FUNCTION_FRAME(codeobj_d3a2e3b1eaebaf0e891bf641fd6b8e92, module_anyio$streams$tls, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d3a2e3b1eaebaf0e891bf641fd6b8e92->m_type_description == NULL);
    frame_d3a2e3b1eaebaf0e891bf641fd6b8e92 = cache_frame_d3a2e3b1eaebaf0e891bf641fd6b8e92;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d3a2e3b1eaebaf0e891bf641fd6b8e92);
    assert(Py_REFCNT(frame_d3a2e3b1eaebaf0e891bf641fd6b8e92) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 316;
            type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "c";
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
        exception_tb = MAKE_TRACEBACK(frame_d3a2e3b1eaebaf0e891bf641fd6b8e92, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d3a2e3b1eaebaf0e891bf641fd6b8e92->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d3a2e3b1eaebaf0e891bf641fd6b8e92, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d3a2e3b1eaebaf0e891bf641fd6b8e92,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_d3a2e3b1eaebaf0e891bf641fd6b8e92 == cache_frame_d3a2e3b1eaebaf0e891bf641fd6b8e92) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d3a2e3b1eaebaf0e891bf641fd6b8e92);
        cache_frame_d3a2e3b1eaebaf0e891bf641fd6b8e92 = NULL;
    }

    assertFrameObject(frame_d3a2e3b1eaebaf0e891bf641fd6b8e92);

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



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__10_serve(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__10_serve,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_74c5e92b0375d6a3c42482bed40cda65,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$streams$tls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve$$$function__1_handler_wrapper(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve$$$function__1_handler_wrapper,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_1832f2afae4764e0c4572aad151004a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$streams$tls,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__11_aclose(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__11_aclose,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_edb6cbb5cb537fc6a29b31346ecb7141,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$streams$tls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__12_extra_attributes(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__12_extra_attributes,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        mod_consts[188],
#endif
        codeobj_7dbb4c066bad0017602bd292ea3ba658,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$streams$tls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__12_extra_attributes$$$function__1_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__12_extra_attributes$$$function__1_lambda,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_d3a2e3b1eaebaf0e891bf641fd6b8e92,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$streams$tls,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__1_wrap(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__1_wrap,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[21],
#endif
        codeobj_9aea6e04276e4d2bacc34093e4bb8511,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_anyio$streams$tls,
        mod_consts[0],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__2__call_sslobject_method(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__2__call_sslobject_method,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[45],
#endif
        codeobj_a249479c5ebc706e0ea7d5ca5c7fa6b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$streams$tls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__3_unwrap(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__3_unwrap,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[49],
#endif
        codeobj_789e0c551df1653691afd15a760380e8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$streams$tls,
        mod_consts[46],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__4_aclose(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__4_aclose,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[52],
#endif
        codeobj_fa95c374f1e5657e77e666a407b8b54d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$streams$tls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__5_receive(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__5_receive,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        mod_consts[54],
#endif
        codeobj_c7fceebbdc9931a442ce24b6433f76ac,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$streams$tls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__6_send(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__6_send,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[56],
#endif
        codeobj_6fbe8571046f5faaf28db38ed0055b7c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$streams$tls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__7_send_eof(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__7_send_eof,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        codeobj_03947b19870226370fa20f806687323c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$streams$tls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__8_extra_attributes,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        mod_consts[180],
#endif
        codeobj_69ce05523e5dc91041314178e26d7f9d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$streams$tls,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes$$$function__1_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__8_extra_attributes$$$function__1_lambda,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_bd1ef3b28c9c6d854f964791af1b98a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$streams$tls,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes$$$function__2_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__8_extra_attributes$$$function__2_lambda,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_fcf5f1d7909fe2c684c97a6a6bbad405,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$streams$tls,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes$$$function__3_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__8_extra_attributes$$$function__3_lambda,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_c3fd8edea89e690c22141c0de43c613c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$streams$tls,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes$$$function__4_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__8_extra_attributes$$$function__4_lambda,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_9df8c5267cea7fecc56d8564cfb5c139,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$streams$tls,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes$$$function__5_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__8_extra_attributes$$$function__5_lambda,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_9b9272661a69b0312cdf405a26b0351e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$streams$tls,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes$$$function__6_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__8_extra_attributes$$$function__6_lambda,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_652b52909351a175e7849fa5a3afa234,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_anyio$streams$tls,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$streams$tls$$$function__9_handle_handshake_error(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$streams$tls$$$function__9_handle_handshake_error,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        mod_consts[98],
#endif
        codeobj_59af2a9076ffb24b8479b28e6a1c13c1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$streams$tls,
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

function_impl_code functable_anyio$streams$tls[] = {
    impl_anyio$streams$tls$$$function__8_extra_attributes$$$function__1_lambda,
    impl_anyio$streams$tls$$$function__8_extra_attributes$$$function__2_lambda,
    impl_anyio$streams$tls$$$function__8_extra_attributes$$$function__3_lambda,
    impl_anyio$streams$tls$$$function__8_extra_attributes$$$function__4_lambda,
    impl_anyio$streams$tls$$$function__8_extra_attributes$$$function__5_lambda,
    impl_anyio$streams$tls$$$function__8_extra_attributes$$$function__6_lambda,
    impl_anyio$streams$tls$$$function__10_serve$$$coroutine__1_serve$$$function__1_handler_wrapper,
    impl_anyio$streams$tls$$$function__12_extra_attributes$$$function__1_lambda,
    impl_anyio$streams$tls$$$function__1_wrap,
    impl_anyio$streams$tls$$$function__2__call_sslobject_method,
    impl_anyio$streams$tls$$$function__3_unwrap,
    impl_anyio$streams$tls$$$function__4_aclose,
    impl_anyio$streams$tls$$$function__5_receive,
    impl_anyio$streams$tls$$$function__6_send,
    impl_anyio$streams$tls$$$function__7_send_eof,
    impl_anyio$streams$tls$$$function__8_extra_attributes,
    impl_anyio$streams$tls$$$function__9_handle_handshake_error,
    impl_anyio$streams$tls$$$function__10_serve,
    impl_anyio$streams$tls$$$function__11_aclose,
    impl_anyio$streams$tls$$$function__12_extra_attributes,
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

    function_impl_code *current = functable_anyio$streams$tls;
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

    if (offset > sizeof(functable_anyio$streams$tls) || offset < 0) {
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
        functable_anyio$streams$tls[offset],
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
        module_anyio$streams$tls,
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
PyObject *modulecode_anyio$streams$tls(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anyio.streams.tls");

    // Store the module for future use.
    module_anyio$streams$tls = module;

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
        PRINT_STRING("anyio.streams.tls: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio.streams.tls: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio.streams.tls: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initanyio$streams$tls\n");

    moduledict_anyio$streams$tls = MODULE_DICT(module_anyio$streams$tls);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anyio$streams$tls,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anyio$streams$tls,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[70]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anyio$streams$tls,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$streams$tls,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$streams$tls,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anyio$streams$tls);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anyio$streams$tls, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_anyio$streams$tls, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anyio$streams$tls, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_anyio$streams$tls);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    struct Nuitka_FrameObject *frame_78a406e2349b70e53ad745102f493fe2;
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
    int tmp_res;
    PyObject *locals_anyio$streams$tls$$$class__1_TLSAttribute_22 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_6e9f8939d9cd4786a0bcce9fb708f74b_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_anyio$streams$tls$$$class__2_TLSStream_52 = NULL;
    struct Nuitka_FrameObject *frame_850b81fbd85b73df3a2957c11c308ea4_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_anyio$streams$tls$$$class__3_TLSListener_239 = NULL;
    struct Nuitka_FrameObject *frame_de772dbdc7289618555fd07793e3084e_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[122];
        UPDATE_STRING_DICT0(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_2);
    }
    frame_78a406e2349b70e53ad745102f493fe2 = MAKE_MODULE_FRAME(codeobj_78a406e2349b70e53ad745102f493fe2, module_anyio$streams$tls);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_78a406e2349b70e53ad745102f493fe2);
    assert(Py_REFCNT(frame_78a406e2349b70e53ad745102f493fe2) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[122];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[125], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[126], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[92];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$streams$tls;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[66];
        frame_78a406e2349b70e53ad745102f493fe2->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[60];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_anyio$streams$tls;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[66];
        frame_78a406e2349b70e53ad745102f493fe2->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[4];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_anyio$streams$tls;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[66];
        frame_78a406e2349b70e53ad745102f493fe2->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[128];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_anyio$streams$tls;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[129];
        tmp_level_value_4 = mod_consts[66];
        frame_78a406e2349b70e53ad745102f493fe2->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[130],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[130]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        tmp_import_name_from_2 = IMPORT_HARD_FUNCTOOLS();
        assert(!(tmp_import_name_from_2 == NULL));
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[99],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[99]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_9 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_9);
        tmp_import_from_1__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[131],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[131]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[132],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[132]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[133],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[133]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[134],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[134]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[135],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[135]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[136],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[136]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[137],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[137]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[138],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[138]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[139],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[139]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_18);
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[70];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_anyio$streams$tls;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[140];
        tmp_level_value_5 = mod_consts[110];
        frame_78a406e2349b70e53ad745102f493fe2->m_frame.f_lineno = 8;
        tmp_assign_source_19 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[34],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[34]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[31],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[31]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[50],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[50]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[91],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[91]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_23);
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
        PyObject *tmp_assign_source_24;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[141];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_anyio$streams$tls;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[142];
        tmp_level_value_6 = mod_consts[110];
        frame_78a406e2349b70e53ad745102f493fe2->m_frame.f_lineno = 14;
        tmp_assign_source_24 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_24;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_16 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[143],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_16, mod_consts[143]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_17 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[144],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_17, mod_consts[144]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_26);
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
        PyObject *tmp_assign_source_27;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[145];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_anyio$streams$tls;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[146];
        tmp_level_value_7 = mod_consts[110];
        frame_78a406e2349b70e53ad745102f493fe2->m_frame.f_lineno = 15;
        tmp_assign_source_27 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_27;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_18 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[101],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_18, mod_consts[101]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_19 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[147],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_19, mod_consts[147]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_20 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[148],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_20, mod_consts[148]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_21 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_anyio$streams$tls,
                mod_consts[149],
                mod_consts[66]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_21, mod_consts[149]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_31);
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
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[138]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        frame_78a406e2349b70e53ad745102f493fe2->m_frame.f_lineno = 17;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[150]);

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[152];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_subscript_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_Ellipsis;
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
        tmp_assign_source_33 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_tuple_element_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[153]);
        }

        assert(!(tmp_tuple_element_2 == NULL));
        tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = Py_Ellipsis;
        PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_2);
        tmp_assign_source_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_34);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        tmp_assign_source_35 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_35, 0, tmp_tuple_element_3);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_36 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_4 = tmp_class_creation_1__bases;
        tmp_subscript_value_4 = mod_consts[66];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_4, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_38 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_38;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[155]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[155]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        tmp_tuple_element_4 = mod_consts[58];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_4 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_4);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_78a406e2349b70e53ad745102f493fe2->m_frame.f_lineno = 22;
        tmp_assign_source_39 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_39;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_7 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[156]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
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
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[157];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[158];
        tmp_getattr_default_1 = mod_consts[159];
        tmp_tuple_element_5 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_8 == NULL));
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[158]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 22;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_40;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_41;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_anyio$streams$tls$$$class__1_TLSAttribute_22 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[160];
        tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[162];
        tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[121], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[163], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_7;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[164], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_7;
        }
        frame_6e9f8939d9cd4786a0bcce9fb708f74b_2 = MAKE_CLASS_FRAME(codeobj_6e9f8939d9cd4786a0bcce9fb708f74b, module_anyio$streams$tls, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_6e9f8939d9cd4786a0bcce9fb708f74b_2);
        assert(Py_REFCNT(frame_6e9f8939d9cd4786a0bcce9fb708f74b_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_3;
            tmp_called_value_3 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[144]);

            if (tmp_called_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[144]);

                    if (unlikely(tmp_called_value_3 == NULL)) {
                        tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                    }

                    if (tmp_called_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 26;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_6e9f8939d9cd4786a0bcce9fb708f74b_2->m_frame.f_lineno = 26;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
            Py_DECREF(tmp_called_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[75], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_expression_value_9 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[136]);

            if (tmp_expression_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[136]);

                    if (unlikely(tmp_expression_value_9 == NULL)) {
                        tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                    }

                    if (tmp_expression_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 26;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_5 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[165]);

            if (tmp_subscript_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_5 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_subscript_value_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_5);
            Py_DECREF(tmp_expression_value_9);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_ass_subvalue_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_1 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[164]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_1);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[164]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_1);

                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_1 = mod_consts[75];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            Py_DECREF(tmp_ass_subvalue_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_4;
            tmp_called_value_4 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[144]);

            if (tmp_called_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[144]);

                    if (unlikely(tmp_called_value_4 == NULL)) {
                        tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                    }

                    if (tmp_called_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 28;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_6e9f8939d9cd4786a0bcce9fb708f74b_2->m_frame.f_lineno = 28;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
            Py_DECREF(tmp_called_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[77], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            tmp_ass_subvalue_2 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[166]);

            if (tmp_ass_subvalue_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_2 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_ass_subvalue_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_ass_subscribed_2 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[164]);

            if (unlikely(tmp_ass_subscribed_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[164]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_2);

                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_2 = mod_consts[77];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);
            Py_DECREF(tmp_ass_subvalue_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 28;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_5;
            tmp_called_value_5 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[144]);

            if (tmp_called_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[144]);

                    if (unlikely(tmp_called_value_5 == NULL)) {
                        tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                    }

                    if (tmp_called_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 30;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_6e9f8939d9cd4786a0bcce9fb708f74b_2->m_frame.f_lineno = 30;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
            Py_DECREF(tmp_called_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            tmp_expression_value_10 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[137]);

            if (tmp_expression_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[137]);

                    if (unlikely(tmp_expression_value_10 == NULL)) {
                        tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                    }

                    if (tmp_expression_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 30;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_6 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[165]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_tuple_element_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_subscript_value_6, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[165]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_tuple_element_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_6, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[167]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_6 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_tuple_element_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_6, 2, tmp_tuple_element_6);
            tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_6);
            Py_DECREF(tmp_expression_value_10);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_ass_subvalue_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_3 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[164]);

            if (unlikely(tmp_ass_subscribed_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_3);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[164]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_3);

                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_3 = mod_consts[79];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
            Py_DECREF(tmp_ass_subscribed_3);
            Py_DECREF(tmp_ass_subvalue_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_6;
            tmp_called_value_6 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[144]);

            if (tmp_called_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[144]);

                    if (unlikely(tmp_called_value_6 == NULL)) {
                        tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                    }

                    if (tmp_called_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 35;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_6e9f8939d9cd4786a0bcce9fb708f74b_2->m_frame.f_lineno = 35;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
            Py_DECREF(tmp_called_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 35;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[80], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            tmp_expression_value_11 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[136]);

            if (tmp_expression_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[136]);

                    if (unlikely(tmp_expression_value_11 == NULL)) {
                        tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                    }

                    if (tmp_expression_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 33;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_12 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[133]);

            if (tmp_expression_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[133]);

                    if (unlikely(tmp_expression_value_12 == NULL)) {
                        tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
                    }

                    if (tmp_expression_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_11);

                        exception_lineno = 34;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_12);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_7 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[165]);

            if (tmp_tuple_element_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_7 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_tuple_element_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_13;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_tuple_element_8;
                PyTuple_SET_ITEM(tmp_subscript_value_8, 0, tmp_tuple_element_7);
                tmp_expression_value_13 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[139]);

                if (tmp_expression_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[139]);

                        if (unlikely(tmp_expression_value_13 == NULL)) {
                            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
                        }

                        if (tmp_expression_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 34;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_13);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                tmp_tuple_element_8 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[165]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_8 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_subscript_value_9, 0, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[154]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[154]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 34;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_9, 1, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[153]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[153]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[153]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 34;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_9, 2, tmp_tuple_element_8);
                goto tuple_build_noexception_2;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_expression_value_13);
                Py_DECREF(tmp_subscript_value_9);
                goto tuple_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_2:;
                tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_13);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 34;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_8, 1, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_expression_value_11);
            Py_DECREF(tmp_expression_value_12);
            Py_DECREF(tmp_subscript_value_8);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_subscript_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_8);
            Py_DECREF(tmp_expression_value_12);
            Py_DECREF(tmp_subscript_value_8);
            if (tmp_subscript_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_11);

                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_7);
            Py_DECREF(tmp_expression_value_11);
            Py_DECREF(tmp_subscript_value_7);
            if (tmp_ass_subvalue_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 34;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_4 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[164]);

            if (unlikely(tmp_ass_subscribed_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_4);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[164]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_4);

                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_4 = mod_consts[80];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
            Py_DECREF(tmp_ass_subscribed_4);
            Py_DECREF(tmp_ass_subvalue_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 33;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_7;
            tmp_called_value_7 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[144]);

            if (tmp_called_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[144]);

                    if (unlikely(tmp_called_value_7 == NULL)) {
                        tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                    }

                    if (tmp_called_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 37;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_6e9f8939d9cd4786a0bcce9fb708f74b_2->m_frame.f_lineno = 37;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
            Py_DECREF(tmp_called_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[83], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_10;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            tmp_expression_value_14 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[136]);

            if (tmp_expression_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[136]);

                    if (unlikely(tmp_expression_value_14 == NULL)) {
                        tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                    }

                    if (tmp_expression_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 37;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_10 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[166]);

            if (tmp_subscript_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_10 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_subscript_value_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_ass_subvalue_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_10);
            Py_DECREF(tmp_expression_value_14);
            Py_DECREF(tmp_subscript_value_10);
            if (tmp_ass_subvalue_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_5 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[164]);

            if (unlikely(tmp_ass_subscribed_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_5);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[164]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_5);

                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_5 = mod_consts[83];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
            Py_DECREF(tmp_ass_subscribed_5);
            Py_DECREF(tmp_ass_subvalue_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_8;
            tmp_called_value_8 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[144]);

            if (tmp_called_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[144]);

                    if (unlikely(tmp_called_value_8 == NULL)) {
                        tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                    }

                    if (tmp_called_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 39;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_6e9f8939d9cd4786a0bcce9fb708f74b_2->m_frame.f_lineno = 39;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
            Py_DECREF(tmp_called_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            tmp_ass_subvalue_6 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[168]);

            if (tmp_ass_subvalue_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_6 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_ass_subvalue_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_ass_subscribed_6 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[164]);

            if (unlikely(tmp_ass_subscribed_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_6);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[164]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_6);

                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_6 = mod_consts[1];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
            Py_DECREF(tmp_ass_subscribed_6);
            Py_DECREF(tmp_ass_subvalue_6);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_9;
            tmp_called_value_9 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[144]);

            if (tmp_called_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[144]);

                    if (unlikely(tmp_called_value_9 == NULL)) {
                        tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                    }

                    if (tmp_called_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_6e9f8939d9cd4786a0bcce9fb708f74b_2->m_frame.f_lineno = 41;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_9);
            Py_DECREF(tmp_called_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[84], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_ass_subscript_7;
            tmp_expression_value_15 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[134]);

            if (tmp_expression_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[134]);

                    if (unlikely(tmp_expression_value_15 == NULL)) {
                        tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
                    }

                    if (tmp_expression_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 41;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_15);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_16 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[137]);

            if (tmp_expression_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[137]);

                    if (unlikely(tmp_expression_value_16 == NULL)) {
                        tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                    }

                    if (tmp_expression_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_15);

                        exception_lineno = 41;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_9 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[165]);

            if (tmp_tuple_element_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_9 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_tuple_element_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_subscript_value_12, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[165]);

            if (tmp_tuple_element_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_9 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_tuple_element_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_12, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[167]);

            if (tmp_tuple_element_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_9 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_tuple_element_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_12, 2, tmp_tuple_element_9);
            tmp_subscript_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_12);
            Py_DECREF(tmp_expression_value_16);
            Py_DECREF(tmp_subscript_value_12);
            if (tmp_subscript_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_15);

                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subvalue_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_11);
            Py_DECREF(tmp_expression_value_15);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_ass_subvalue_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_7 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[164]);

            if (unlikely(tmp_ass_subscribed_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_7);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[164]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_7);

                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_7 = mod_consts[84];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
            Py_DECREF(tmp_ass_subscribed_7);
            Py_DECREF(tmp_ass_subvalue_7);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_10;
            tmp_called_value_10 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[144]);

            if (tmp_called_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[144]);

                    if (unlikely(tmp_called_value_10 == NULL)) {
                        tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                    }

                    if (tmp_called_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 43;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_6e9f8939d9cd4786a0bcce9fb708f74b_2->m_frame.f_lineno = 43;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_10);
            Py_DECREF(tmp_called_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[85], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_8;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_ass_subscribed_8;
            PyObject *tmp_ass_subscript_8;
            tmp_expression_value_17 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[4]);

            if (tmp_expression_value_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4]);

                    if (unlikely(tmp_expression_value_17 == NULL)) {
                        tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
                    }

                    if (tmp_expression_value_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 43;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_17);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_ass_subvalue_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[169]);
            Py_DECREF(tmp_expression_value_17);
            if (tmp_ass_subvalue_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscribed_8 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[164]);

            if (unlikely(tmp_ass_subscribed_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_8);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[164]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_8);

                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_8 = mod_consts[85];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
            Py_DECREF(tmp_ass_subscribed_8);
            Py_DECREF(tmp_ass_subvalue_8);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_11;
            tmp_called_value_11 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[144]);

            if (tmp_called_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[144]);

                    if (unlikely(tmp_called_value_11 == NULL)) {
                        tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                    }

                    if (tmp_called_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 46;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_6e9f8939d9cd4786a0bcce9fb708f74b_2->m_frame.f_lineno = 46;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_11);
            Py_DECREF(tmp_called_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_9;
            PyObject *tmp_ass_subscribed_9;
            PyObject *tmp_ass_subscript_9;
            tmp_ass_subvalue_9 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[168]);

            if (tmp_ass_subvalue_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_9 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_ass_subvalue_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_ass_subscribed_9 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[164]);

            if (unlikely(tmp_ass_subscribed_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_9);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[164]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_9);

                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_9 = mod_consts[16];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
            Py_DECREF(tmp_ass_subscribed_9);
            Py_DECREF(tmp_ass_subvalue_9);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_12;
            tmp_called_value_12 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[144]);

            if (tmp_called_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[144]);

                    if (unlikely(tmp_called_value_12 == NULL)) {
                        tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
                    }

                    if (tmp_called_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 48;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_12);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_6e9f8939d9cd4786a0bcce9fb708f74b_2->m_frame.f_lineno = 48;
            tmp_dictset_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_12);
            Py_DECREF(tmp_called_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[59], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_ass_subvalue_10;
            PyObject *tmp_ass_subscribed_10;
            PyObject *tmp_ass_subscript_10;
            tmp_ass_subvalue_10 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[165]);

            if (tmp_ass_subvalue_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_10 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_ass_subvalue_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_ass_subscribed_10 = PyObject_GetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[164]);

            if (unlikely(tmp_ass_subscribed_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_10);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[164]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_10);

                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_10 = mod_consts[59];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
            Py_DECREF(tmp_ass_subscribed_10);
            Py_DECREF(tmp_ass_subvalue_10);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6e9f8939d9cd4786a0bcce9fb708f74b_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6e9f8939d9cd4786a0bcce9fb708f74b_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6e9f8939d9cd4786a0bcce9fb708f74b_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6e9f8939d9cd4786a0bcce9fb708f74b_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_6e9f8939d9cd4786a0bcce9fb708f74b_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_7;
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


                exception_lineno = 22;

                goto try_except_handler_7;
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
        tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__1_TLSAttribute_22, mod_consts[170], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_7;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_13 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_10 = mod_consts[58];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_10 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_anyio$streams$tls$$$class__1_TLSAttribute_22;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_78a406e2349b70e53ad745102f493fe2->m_frame.f_lineno = 22;
            tmp_assign_source_42 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 22;

                goto try_except_handler_7;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_42;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_41 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_41);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_anyio$streams$tls$$$class__1_TLSAttribute_22);
        locals_anyio$streams$tls$$$class__1_TLSAttribute_22 = NULL;
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

        Py_DECREF(locals_anyio$streams$tls$$$class__1_TLSAttribute_22);
        locals_anyio$streams$tls$$$class__1_TLSAttribute_22 = NULL;
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
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 22;
        goto try_except_handler_5;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_41);
    }
    goto try_end_5;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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
        PyObject *tmp_assign_source_43;
        PyObject *tmp_tuple_element_11;
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[147]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[147]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_8;
        }
        tmp_assign_source_43 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_43, 0, tmp_tuple_element_11);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_44 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_8;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_18 = tmp_class_creation_2__bases;
        tmp_subscript_value_13 = mod_consts[66];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_18, tmp_subscript_value_13, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_8;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_46 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_46;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_19 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_19, mod_consts[155]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_20 = tmp_class_creation_2__metaclass;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[155]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_8;
        }
        tmp_tuple_element_12 = mod_consts[115];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_12 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_78a406e2349b70e53ad745102f493fe2->m_frame.f_lineno = 52;
        tmp_assign_source_47 = CALL_FUNCTION(tmp_called_value_14, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_47;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_21 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_21, mod_consts[156]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_8;
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
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[157];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[158];
        tmp_getattr_default_2 = mod_consts[159];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_22;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_22 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[158]);
            Py_DECREF(tmp_expression_value_22);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 52;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_48;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_15;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_8;
        }
        frame_78a406e2349b70e53ad745102f493fe2->m_frame.f_lineno = 51;
        tmp_called_value_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[88], 0), mod_consts[171]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_8;
        }
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_anyio$streams$tls$$$class__2_TLSStream_52 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[160];
        tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[172];
        tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[121], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[163], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_10;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[164], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_10;
        }
        frame_850b81fbd85b73df3a2957c11c308ea4_3 = MAKE_CLASS_FRAME(codeobj_850b81fbd85b73df3a2957c11c308ea4, module_anyio$streams$tls, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_850b81fbd85b73df3a2957c11c308ea4_3);
        assert(Py_REFCNT(frame_850b81fbd85b73df3a2957c11c308ea4_3) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_11;
            PyObject *tmp_ass_subscribed_11;
            PyObject *tmp_ass_subscript_11;
            tmp_ass_subvalue_11 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[101]);

            if (tmp_ass_subvalue_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_11 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[101]);

                    if (unlikely(tmp_ass_subvalue_11 == NULL)) {
                        tmp_ass_subvalue_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
                    }

                    if (tmp_ass_subvalue_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 63;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_ass_subvalue_11);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_ass_subscribed_11 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[164]);

            if (unlikely(tmp_ass_subscribed_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_11);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[164]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_11);

                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_11 = mod_consts[15];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
            Py_DECREF(tmp_ass_subscribed_11);
            Py_DECREF(tmp_ass_subvalue_11);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_12;
            PyObject *tmp_ass_subscribed_12;
            PyObject *tmp_ass_subscript_12;
            tmp_ass_subvalue_12 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[168]);

            if (tmp_ass_subvalue_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_12 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_ass_subvalue_12);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_ass_subscribed_12 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[164]);

            if (unlikely(tmp_ass_subscribed_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_12);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[164]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_12);

                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_12 = mod_consts[16];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
            Py_DECREF(tmp_ass_subscribed_12);
            Py_DECREF(tmp_ass_subvalue_12);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_13;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_ass_subscribed_13;
            PyObject *tmp_ass_subscript_13;
            tmp_expression_value_23 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[4]);

            if (tmp_expression_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4]);

                    if (unlikely(tmp_expression_value_23 == NULL)) {
                        tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
                    }

                    if (tmp_expression_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 65;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_23);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_ass_subvalue_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[169]);
            Py_DECREF(tmp_expression_value_23);
            if (tmp_ass_subvalue_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscribed_13 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[164]);

            if (unlikely(tmp_ass_subscribed_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_13);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[164]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_13);

                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_13 = mod_consts[47];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
            Py_DECREF(tmp_ass_subscribed_13);
            Py_DECREF(tmp_ass_subvalue_13);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_14;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_ass_subscribed_14;
            PyObject *tmp_ass_subscript_14;
            tmp_expression_value_24 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[4]);

            if (tmp_expression_value_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4]);

                    if (unlikely(tmp_expression_value_24 == NULL)) {
                        tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
                    }

                    if (tmp_expression_value_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 66;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_24);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_ass_subvalue_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[11]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_ass_subvalue_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscribed_14 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[164]);

            if (unlikely(tmp_ass_subscribed_14 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_14);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[164]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_14);

                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_14 = mod_consts[32];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
            Py_DECREF(tmp_ass_subscribed_14);
            Py_DECREF(tmp_ass_subvalue_14);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_ass_subvalue_15;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_ass_subscribed_15;
            PyObject *tmp_ass_subscript_15;
            tmp_expression_value_25 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[4]);

            if (tmp_expression_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4]);

                    if (unlikely(tmp_expression_value_25 == NULL)) {
                        tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
                    }

                    if (tmp_expression_value_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 67;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_25);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_ass_subvalue_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[11]);
            Py_DECREF(tmp_expression_value_25);
            if (tmp_ass_subvalue_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscribed_15 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[164]);

            if (unlikely(tmp_ass_subscribed_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_15);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[164]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_ass_subscribed_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_15);

                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_ass_subscript_15 = mod_consts[26];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
            Py_DECREF(tmp_ass_subscribed_15);
            Py_DECREF(tmp_ass_subvalue_15);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_17;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_kw_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_classmethod_arg_1;
            PyObject *tmp_kw_defaults_2;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_res = MAPPING_HAS_ITEM(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[173]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
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
            tmp_called_value_17 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[173]);

            if (unlikely(tmp_called_value_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[173]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_kw_defaults_1 = DICT_COPY(mod_consts[174]);
            tmp_dict_key_1 = mod_consts[15];
            tmp_dict_value_1 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[101]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[101]);

                    if (unlikely(tmp_dict_value_1 == NULL)) {
                        tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
                    }

                    if (tmp_dict_value_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_17);
                        Py_DECREF(tmp_kw_defaults_1);

                        exception_lineno = 72;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_1 = _PyDict_NewPresized( 6 );
            {
                PyObject *tmp_expression_value_26;
                PyObject *tmp_subscript_value_14;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_subscript_value_15;
                PyObject *tmp_expression_value_28;
                PyObject *tmp_subscript_value_16;
                PyObject *tmp_expression_value_29;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[1];
                tmp_expression_value_26 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[136]);

                if (tmp_expression_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[136]);

                        if (unlikely(tmp_expression_value_26 == NULL)) {
                            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                        }

                        if (tmp_expression_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 74;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_26);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_14 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[168]);

                if (tmp_subscript_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_14 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_14);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_26);
                Py_DECREF(tmp_subscript_value_14);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[2];
                tmp_expression_value_27 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[136]);

                if (tmp_expression_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[136]);

                        if (unlikely(tmp_expression_value_27 == NULL)) {
                            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                        }

                        if (tmp_expression_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 75;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_27);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_15 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[165]);

                if (tmp_subscript_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_15 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_15);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_27);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 75;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[3];
                tmp_expression_value_28 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[136]);

                if (tmp_expression_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[136]);

                        if (unlikely(tmp_expression_value_28 == NULL)) {
                            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                        }

                        if (tmp_expression_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 76;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_28);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_expression_value_29 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[4]);

                if (tmp_expression_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4]);

                        if (unlikely(tmp_expression_value_29 == NULL)) {
                            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
                        }

                        if (tmp_expression_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_28);

                            exception_lineno = 76;
                            type_description_2 = "o";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_29);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_subscript_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[175]);
                Py_DECREF(tmp_expression_value_29);
                if (tmp_subscript_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_28);

                    exception_lineno = 76;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_16);
                Py_DECREF(tmp_expression_value_28);
                Py_DECREF(tmp_subscript_value_16);
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
                tmp_dict_key_1 = mod_consts[16];
                tmp_dict_value_1 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[168]);

                if (tmp_dict_value_1 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_1 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_1);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[102];
                tmp_dict_value_1 = mod_consts[115];
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_kw_defaults_1);
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_args_element_value_2 = MAKE_FUNCTION_anyio$streams$tls$$$function__1_wrap(tmp_kw_defaults_1, tmp_annotations_1);

            frame_850b81fbd85b73df3a2957c11c308ea4_3->m_frame.f_lineno = 69;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_17);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_kw_defaults_2 = DICT_COPY(mod_consts[174]);
            tmp_dict_key_2 = mod_consts[15];
            tmp_dict_value_2 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[101]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[101]);

                    if (unlikely(tmp_dict_value_2 == NULL)) {
                        tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
                    }

                    if (tmp_dict_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_kw_defaults_2);

                        exception_lineno = 72;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_2);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_2 = _PyDict_NewPresized( 6 );
            {
                PyObject *tmp_expression_value_30;
                PyObject *tmp_subscript_value_17;
                PyObject *tmp_expression_value_31;
                PyObject *tmp_subscript_value_18;
                PyObject *tmp_expression_value_32;
                PyObject *tmp_subscript_value_19;
                PyObject *tmp_expression_value_33;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[1];
                tmp_expression_value_30 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[136]);

                if (tmp_expression_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[136]);

                        if (unlikely(tmp_expression_value_30 == NULL)) {
                            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                        }

                        if (tmp_expression_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 74;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_30);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_17 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[168]);

                if (tmp_subscript_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_17 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_17);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_17);
                Py_DECREF(tmp_expression_value_30);
                Py_DECREF(tmp_subscript_value_17);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[2];
                tmp_expression_value_31 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[136]);

                if (tmp_expression_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[136]);

                        if (unlikely(tmp_expression_value_31 == NULL)) {
                            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                        }

                        if (tmp_expression_value_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 75;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_31);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_18 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[165]);

                if (tmp_subscript_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_18 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_subscript_value_18);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_18);
                Py_DECREF(tmp_expression_value_31);
                Py_DECREF(tmp_subscript_value_18);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 75;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[3];
                tmp_expression_value_32 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[136]);

                if (tmp_expression_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[136]);

                        if (unlikely(tmp_expression_value_32 == NULL)) {
                            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                        }

                        if (tmp_expression_value_32 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 76;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_32);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_33 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[4]);

                if (tmp_expression_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4]);

                        if (unlikely(tmp_expression_value_33 == NULL)) {
                            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
                        }

                        if (tmp_expression_value_33 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_32);

                            exception_lineno = 76;
                            type_description_2 = "o";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_33);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[175]);
                Py_DECREF(tmp_expression_value_33);
                if (tmp_subscript_value_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_32);

                    exception_lineno = 76;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_19);
                Py_DECREF(tmp_expression_value_32);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[16];
                tmp_dict_value_2 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[168]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[102];
                tmp_dict_value_2 = mod_consts[115];
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_kw_defaults_2);
            Py_DECREF(tmp_annotations_2);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;


            tmp_classmethod_arg_1 = MAKE_FUNCTION_anyio$streams$tls$$$function__1_wrap(tmp_kw_defaults_2, tmp_annotations_2);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[20], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_subscript_value_20;
            PyObject *tmp_tuple_element_14;
            tmp_dict_key_3 = mod_consts[22];
            tmp_expression_value_34 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[132]);

            if (tmp_expression_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[132]);

                    if (unlikely(tmp_expression_value_34 == NULL)) {
                        tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
                    }

                    if (tmp_expression_value_34 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 126;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_34);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_tuple_element_14 = Py_Ellipsis;
            tmp_subscript_value_20 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_20, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[151]);

            if (tmp_tuple_element_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[151]);

                    if (unlikely(tmp_tuple_element_14 == NULL)) {
                        tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
                    }

                    if (tmp_tuple_element_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 126;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }
                    Py_INCREF(tmp_tuple_element_14);
                } else {
                    goto tuple_build_exception_5;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_20, 1, tmp_tuple_element_14);
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_expression_value_34);
            Py_DECREF(tmp_subscript_value_20);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_20);
            Py_DECREF(tmp_expression_value_34);
            Py_DECREF(tmp_subscript_value_20);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[23];
            tmp_dict_value_3 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[176]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = (PyObject *)&PyBaseObject_Type;
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto dict_build_exception_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[102];
            tmp_dict_value_3 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[151]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[151]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 127;
                        type_description_2 = "o";
                        goto dict_build_exception_3;
                    }
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto dict_build_exception_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_annotations_3);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;


            tmp_dictset_value = MAKE_FUNCTION_anyio$streams$tls$$$function__2__call_sslobject_method(tmp_annotations_3);

            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_tuple_element_15;
            tmp_dict_key_4 = mod_consts[102];
            tmp_expression_value_35 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[137]);

            if (tmp_expression_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[137]);

                    if (unlikely(tmp_expression_value_35 == NULL)) {
                        tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
                    }

                    if (tmp_expression_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 172;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_35);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_tuple_element_15 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[101]);

            if (tmp_tuple_element_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[101]);

                    if (unlikely(tmp_tuple_element_15 == NULL)) {
                        tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
                    }

                    if (tmp_tuple_element_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_35);

                        exception_lineno = 172;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_tuple_element_15);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_21 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_21, 0, tmp_tuple_element_15);
            tmp_tuple_element_15 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[166]);

            if (tmp_tuple_element_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_15 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_tuple_element_15);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_21, 1, tmp_tuple_element_15);
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_21);
            Py_DECREF(tmp_expression_value_35);
            Py_DECREF(tmp_subscript_value_21);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$streams$tls$$$function__3_unwrap(tmp_annotations_4);

            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[48], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_5;
            tmp_annotations_5 = DICT_COPY(mod_consts[177]);


            tmp_dictset_value = MAKE_FUNCTION_anyio$streams$tls$$$function__4_aclose(tmp_annotations_5);

            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[51], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_defaults_1 = mod_consts[178];
            tmp_dict_key_5 = mod_consts[53];
            tmp_dict_value_5 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[167]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_6 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[102];
            tmp_dict_value_5 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[166]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_anyio$streams$tls$$$function__5_receive(tmp_defaults_1, tmp_annotations_6);

            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[30], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_dict_key_6 = mod_consts[55];
            tmp_dict_value_6 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[166]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = (PyObject *)&PyBytes_Type;
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_7 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[102];
            tmp_dict_value_6 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$streams$tls$$$function__6_send(tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[28], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_8;
            tmp_annotations_8 = DICT_COPY(mod_consts[177]);


            tmp_dictset_value = MAKE_FUNCTION_anyio$streams$tls$$$function__7_send_eof(tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[72], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_called_value_19;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_tuple_element_18;
            tmp_res = MAPPING_HAS_ITEM(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[179]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
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
            tmp_called_value_18 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[179]);

            if (unlikely(tmp_called_value_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[179]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_7 = mod_consts[102];
            tmp_expression_value_36 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[135]);

            if (tmp_expression_value_36 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[135]);

                    if (unlikely(tmp_expression_value_36 == NULL)) {
                        tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
                    }

                    if (tmp_expression_value_36 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);

                        exception_lineno = 220;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_36);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_tuple_element_16 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[131]);

            if (tmp_tuple_element_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[131]);

                    if (unlikely(tmp_tuple_element_16 == NULL)) {
                        tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
                    }

                    if (tmp_tuple_element_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_18);
                        Py_DECREF(tmp_expression_value_36);

                        exception_lineno = 220;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_tuple_element_16);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_37;
                PyObject *tmp_subscript_value_23;
                PyObject *tmp_tuple_element_17;
                PyTuple_SET_ITEM(tmp_subscript_value_22, 0, tmp_tuple_element_16);
                tmp_expression_value_37 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[132]);

                if (tmp_expression_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[132]);

                        if (unlikely(tmp_expression_value_37 == NULL)) {
                            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
                        }

                        if (tmp_expression_value_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 220;
                            type_description_2 = "o";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_37);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                tmp_tuple_element_17 = MAKE_LIST_EMPTY(0);
                tmp_subscript_value_23 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_23, 0, tmp_tuple_element_17);
                tmp_tuple_element_17 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[131]);

                if (tmp_tuple_element_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[131]);

                        if (unlikely(tmp_tuple_element_17 == NULL)) {
                            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
                        }

                        if (tmp_tuple_element_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 220;
                            type_description_2 = "o";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_17);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_23, 1, tmp_tuple_element_17);
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_expression_value_37);
                Py_DECREF(tmp_subscript_value_23);
                goto tuple_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                tmp_tuple_element_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_23);
                Py_DECREF(tmp_expression_value_37);
                Py_DECREF(tmp_subscript_value_23);
                if (tmp_tuple_element_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 220;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_22, 1, tmp_tuple_element_16);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_expression_value_36);
            Py_DECREF(tmp_subscript_value_22);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_22);
            Py_DECREF(tmp_expression_value_36);
            Py_DECREF(tmp_subscript_value_22);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_18);

                exception_lineno = 220;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_9 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));


            tmp_args_element_value_3 = MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes(tmp_annotations_9);

            frame_850b81fbd85b73df3a2957c11c308ea4_3->m_frame.f_lineno = 219;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_called_value_19 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_8 = mod_consts[102];
            tmp_expression_value_38 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[135]);

            if (tmp_expression_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[135]);

                    if (unlikely(tmp_expression_value_38 == NULL)) {
                        tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
                    }

                    if (tmp_expression_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 220;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_38);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_tuple_element_18 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[131]);

            if (tmp_tuple_element_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[131]);

                    if (unlikely(tmp_tuple_element_18 == NULL)) {
                        tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
                    }

                    if (tmp_tuple_element_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_38);

                        exception_lineno = 220;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_tuple_element_18);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_24 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_39;
                PyObject *tmp_subscript_value_25;
                PyObject *tmp_tuple_element_19;
                PyTuple_SET_ITEM(tmp_subscript_value_24, 0, tmp_tuple_element_18);
                tmp_expression_value_39 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[132]);

                if (tmp_expression_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[132]);

                        if (unlikely(tmp_expression_value_39 == NULL)) {
                            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
                        }

                        if (tmp_expression_value_39 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 220;
                            type_description_2 = "o";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_39);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                tmp_tuple_element_19 = MAKE_LIST_EMPTY(0);
                tmp_subscript_value_25 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_25, 0, tmp_tuple_element_19);
                tmp_tuple_element_19 = PyObject_GetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[131]);

                if (tmp_tuple_element_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[131]);

                        if (unlikely(tmp_tuple_element_19 == NULL)) {
                            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
                        }

                        if (tmp_tuple_element_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 220;
                            type_description_2 = "o";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_19);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_25, 1, tmp_tuple_element_19);
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_expression_value_39);
                Py_DECREF(tmp_subscript_value_25);
                goto tuple_build_exception_8;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                tmp_tuple_element_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_25);
                Py_DECREF(tmp_expression_value_39);
                Py_DECREF(tmp_subscript_value_25);
                if (tmp_tuple_element_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 220;
                    type_description_2 = "o";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_24, 1, tmp_tuple_element_18);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_expression_value_38);
            Py_DECREF(tmp_subscript_value_24);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_24);
            Py_DECREF(tmp_expression_value_38);
            Py_DECREF(tmp_subscript_value_24);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_args_element_value_4 = MAKE_FUNCTION_anyio$streams$tls$$$function__8_extra_attributes(tmp_annotations_10);

            frame_850b81fbd85b73df3a2957c11c308ea4_3->m_frame.f_lineno = 219;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            condexpr_end_4:;
            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[74], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_850b81fbd85b73df3a2957c11c308ea4_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_850b81fbd85b73df3a2957c11c308ea4_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_850b81fbd85b73df3a2957c11c308ea4_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_850b81fbd85b73df3a2957c11c308ea4_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_850b81fbd85b73df3a2957c11c308ea4_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_10;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__2_TLSStream_52, mod_consts[170], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto try_except_handler_10;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_20 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_20 = mod_consts[115];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_20 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = locals_anyio$streams$tls$$$class__2_TLSStream_52;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_78a406e2349b70e53ad745102f493fe2->m_frame.f_lineno = 52;
            tmp_assign_source_50 = CALL_FUNCTION(tmp_called_value_20, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto try_except_handler_10;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_50;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_args_element_value_1 = outline_1_var___class__;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_anyio$streams$tls$$$class__2_TLSStream_52);
        locals_anyio$streams$tls$$$class__2_TLSStream_52 = NULL;
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

        Py_DECREF(locals_anyio$streams$tls$$$class__2_TLSStream_52);
        locals_anyio$streams$tls$$$class__2_TLSStream_52 = NULL;
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
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 52;
        goto try_except_handler_8;
        outline_result_2:;
        frame_78a406e2349b70e53ad745102f493fe2->m_frame.f_lineno = 51;
        tmp_assign_source_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_49);
    }
    goto try_end_6;
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
    try_end_6:;
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
        PyObject *tmp_assign_source_51;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_26;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_11;
        }
        tmp_subscript_value_26 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_subscript_value_26 == NULL)) {
            tmp_subscript_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_subscript_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_11;
        }
        tmp_tuple_element_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_26);
        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_11;
        }
        tmp_assign_source_51 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_51, 0, tmp_tuple_element_21);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_52 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_subscript_value_27;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_11;
        }
        tmp_condition_result_11 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_41 = tmp_class_creation_3__bases;
        tmp_subscript_value_27 = mod_consts[66];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_41, tmp_subscript_value_27, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_11;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_11;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_54 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_54;
    }
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_expression_value_42;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_42 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_42, mod_consts[155]);
        tmp_condition_result_12 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_43 = tmp_class_creation_3__metaclass;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[155]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_11;
        }
        tmp_tuple_element_22 = mod_consts[181];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_22 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_78a406e2349b70e53ad745102f493fe2->m_frame.f_lineno = 239;
        tmp_assign_source_55 = CALL_FUNCTION(tmp_called_value_21, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_55;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_44;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_44 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_44, mod_consts[156]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_11;
        }
        tmp_condition_result_13 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[157];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[158];
        tmp_getattr_default_3 = mod_consts[159];
        tmp_tuple_element_23 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_11;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_45;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_45 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_45 == NULL));
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[158]);
            Py_DECREF(tmp_expression_value_45);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 239;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_56;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_22;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_11;
        }
        frame_78a406e2349b70e53ad745102f493fe2->m_frame.f_lineno = 238;
        tmp_called_value_22 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_23, &PyTuple_GET_ITEM(mod_consts[88], 0), mod_consts[171]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_11;
        }
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_anyio$streams$tls$$$class__3_TLSListener_239 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[160];
        tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[161], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[182];
        tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[121], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[181];
        tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[163], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_13;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[164], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_13;
        }
        frame_de772dbdc7289618555fd07793e3084e_4 = MAKE_CLASS_FRAME(codeobj_de772dbdc7289618555fd07793e3084e, module_anyio$streams$tls, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_de772dbdc7289618555fd07793e3084e_4);
        assert(Py_REFCNT(frame_de772dbdc7289618555fd07793e3084e_4) == 2);

        // Framed code:
        {
            PyObject *tmp_ass_subvalue_16;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_28;
            PyObject *tmp_ass_subscribed_16;
            PyObject *tmp_ass_subscript_16;
            tmp_expression_value_46 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[148]);

            if (tmp_expression_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[148]);

                    if (unlikely(tmp_expression_value_46 == NULL)) {
                        tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
                    }

                    if (tmp_expression_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 256;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_46);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_28 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[131]);

            if (tmp_subscript_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_28 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[131]);

                    if (unlikely(tmp_subscript_value_28 == NULL)) {
                        tmp_subscript_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
                    }

                    if (tmp_subscript_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_46);

                        exception_lineno = 256;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_subscript_value_28);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_ass_subvalue_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_28);
            Py_DECREF(tmp_expression_value_46);
            Py_DECREF(tmp_subscript_value_28);
            if (tmp_ass_subvalue_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscribed_16 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[164]);

            if (unlikely(tmp_ass_subscribed_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_16);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[164]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 256;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_16);

                exception_lineno = 256;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_16 = mod_consts[105];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
            Py_DECREF(tmp_ass_subscribed_16);
            Py_DECREF(tmp_ass_subvalue_16);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 256;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_17;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_ass_subscribed_17;
            PyObject *tmp_ass_subscript_17;
            tmp_expression_value_47 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[4]);

            if (tmp_expression_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[4]);

                    if (unlikely(tmp_expression_value_47 == NULL)) {
                        tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
                    }

                    if (tmp_expression_value_47 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 257;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_47);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_ass_subvalue_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[175]);
            Py_DECREF(tmp_expression_value_47);
            if (tmp_ass_subvalue_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscribed_17 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[164]);

            if (unlikely(tmp_ass_subscribed_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_17);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[164]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_17);

                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_17 = mod_consts[3];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
            Py_DECREF(tmp_ass_subscribed_17);
            Py_DECREF(tmp_ass_subvalue_17);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = Py_True;
        tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[16], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_ass_subvalue_18;
            PyObject *tmp_ass_subscribed_18;
            PyObject *tmp_ass_subscript_18;
            tmp_ass_subvalue_18 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[168]);

            if (tmp_ass_subvalue_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_18 = (PyObject *)&PyBool_Type;
                    Py_INCREF(tmp_ass_subvalue_18);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_ass_subscribed_18 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[164]);

            if (unlikely(tmp_ass_subscribed_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_18);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[164]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_18);

                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_18 = mod_consts[16];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
            Py_DECREF(tmp_ass_subscribed_18);
            Py_DECREF(tmp_ass_subvalue_18);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        tmp_dictset_value = mod_consts[183];
        tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[112], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }
        {
            PyObject *tmp_ass_subvalue_19;
            PyObject *tmp_ass_subscribed_19;
            PyObject *tmp_ass_subscript_19;
            tmp_ass_subvalue_19 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[184]);

            if (tmp_ass_subvalue_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_ass_subvalue_19 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_ass_subvalue_19);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_ass_subscribed_19 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[164]);

            if (unlikely(tmp_ass_subscribed_19 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_ass_subvalue_19);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[164]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 259;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_ass_subscribed_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_ass_subvalue_19);

                exception_lineno = 259;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_ass_subscript_19 = mod_consts[112];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
            Py_DECREF(tmp_ass_subscribed_19);
            Py_DECREF(tmp_ass_subvalue_19);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 259;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_called_value_24;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_staticmethod_arg_1;
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_res = MAPPING_HAS_ITEM(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[185]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_14 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            tmp_called_value_24 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[185]);

            if (unlikely(tmp_called_value_24 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[185]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_9 = mod_consts[43];
            tmp_dict_value_9 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[186]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = PyExc_BaseException;
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_11 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[90];
            tmp_dict_value_9 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[101]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[101]);

                    if (unlikely(tmp_dict_value_9 == NULL)) {
                        tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
                    }

                    if (tmp_dict_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 262;
                        type_description_2 = "o";
                        goto dict_build_exception_4;
                    }
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto dict_build_exception_4;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[102];
            tmp_dict_value_9 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_annotations_11);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;


            tmp_args_element_value_6 = MAKE_FUNCTION_anyio$streams$tls$$$function__9_handle_handshake_error(tmp_annotations_11);

            frame_de772dbdc7289618555fd07793e3084e_4->m_frame.f_lineno = 261;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_dict_key_10 = mod_consts[43];
            tmp_dict_value_10 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[186]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = PyExc_BaseException;
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_12 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[90];
            tmp_dict_value_10 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[101]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[101]);

                    if (unlikely(tmp_dict_value_10 == NULL)) {
                        tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
                    }

                    if (tmp_dict_value_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 262;
                        type_description_2 = "o";
                        goto dict_build_exception_5;
                    }
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto dict_build_exception_5;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[102];
            tmp_dict_value_10 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_annotations_12);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;


            tmp_staticmethod_arg_1 = MAKE_FUNCTION_anyio$streams$tls$$$function__9_handle_handshake_error(tmp_annotations_12);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tmp_staticmethod_arg_1);
            Py_DECREF(tmp_staticmethod_arg_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_6:;
            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[97], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_subscript_value_29;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_list_element_1;
            tmp_defaults_2 = mod_consts[187];
            tmp_dict_key_11 = mod_consts[100];
            tmp_expression_value_48 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[132]);

            if (tmp_expression_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[132]);

                    if (unlikely(tmp_expression_value_48 == NULL)) {
                        tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
                    }

                    if (tmp_expression_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 289;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_48);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_list_element_1 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[115]);

            if (tmp_list_element_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[115]);

                    if (unlikely(tmp_list_element_1 == NULL)) {
                        tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
                    }

                    if (tmp_list_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_48);

                        exception_lineno = 289;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_list_element_1);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_tuple_element_24 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_tuple_element_24, 0, tmp_list_element_1);
            tmp_subscript_value_29 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_29, 0, tmp_tuple_element_24);
            tmp_tuple_element_24 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[131]);

            if (tmp_tuple_element_24 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[131]);

                    if (unlikely(tmp_tuple_element_24 == NULL)) {
                        tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
                    }

                    if (tmp_tuple_element_24 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 289;
                        type_description_2 = "o";
                        goto tuple_build_exception_11;
                    }
                    Py_INCREF(tmp_tuple_element_24);
                } else {
                    goto tuple_build_exception_11;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_29, 1, tmp_tuple_element_24);
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_expression_value_48);
            Py_DECREF(tmp_subscript_value_29);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_29);
            Py_DECREF(tmp_expression_value_48);
            Py_DECREF(tmp_subscript_value_29);
            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_13 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_49;
                PyObject *tmp_subscript_value_30;
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[107];
                tmp_expression_value_49 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[136]);

                if (tmp_expression_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[136]);

                        if (unlikely(tmp_expression_value_49 == NULL)) {
                            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
                        }

                        if (tmp_expression_value_49 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 290;
                            type_description_2 = "o";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_49);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_30 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[149]);

                if (tmp_subscript_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_30 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[149]);

                        if (unlikely(tmp_subscript_value_30 == NULL)) {
                            tmp_subscript_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
                        }

                        if (tmp_subscript_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_49);

                            exception_lineno = 290;
                            type_description_2 = "o";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_subscript_value_30);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_30);
                Py_DECREF(tmp_expression_value_49);
                Py_DECREF(tmp_subscript_value_30);
                if (tmp_dict_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 290;
                    type_description_2 = "o";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[102];
                tmp_dict_value_11 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_11, tmp_dict_value_11);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_13);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_anyio$streams$tls$$$function__10_serve(tmp_defaults_2, tmp_annotations_13);

            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[106], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_14;
            tmp_annotations_14 = DICT_COPY(mod_consts[177]);


            tmp_dictset_value = MAKE_FUNCTION_anyio$streams$tls$$$function__11_aclose(tmp_annotations_14);

            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[51], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 310;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_called_value_25;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_subscript_value_31;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_subscript_value_33;
            PyObject *tmp_tuple_element_27;
            tmp_res = MAPPING_HAS_ITEM(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[179]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_condition_result_15 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_7;
            } else {
                goto condexpr_false_7;
            }
            condexpr_true_7:;
            tmp_called_value_25 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[179]);

            if (unlikely(tmp_called_value_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[179]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 313;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }

            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_dict_key_12 = mod_consts[102];
            tmp_expression_value_50 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[135]);

            if (tmp_expression_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[135]);

                    if (unlikely(tmp_expression_value_50 == NULL)) {
                        tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
                    }

                    if (tmp_expression_value_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_25);

                        exception_lineno = 314;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_50);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_tuple_element_25 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[131]);

            if (tmp_tuple_element_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[131]);

                    if (unlikely(tmp_tuple_element_25 == NULL)) {
                        tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
                    }

                    if (tmp_tuple_element_25 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_25);
                        Py_DECREF(tmp_expression_value_50);

                        exception_lineno = 314;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_tuple_element_25);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_31 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_51;
                PyObject *tmp_subscript_value_32;
                PyObject *tmp_tuple_element_26;
                PyTuple_SET_ITEM(tmp_subscript_value_31, 0, tmp_tuple_element_25);
                tmp_expression_value_51 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[132]);

                if (tmp_expression_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[132]);

                        if (unlikely(tmp_expression_value_51 == NULL)) {
                            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
                        }

                        if (tmp_expression_value_51 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 314;
                            type_description_2 = "o";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_expression_value_51);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                tmp_tuple_element_26 = MAKE_LIST_EMPTY(0);
                tmp_subscript_value_32 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_32, 0, tmp_tuple_element_26);
                tmp_tuple_element_26 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[131]);

                if (tmp_tuple_element_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[131]);

                        if (unlikely(tmp_tuple_element_26 == NULL)) {
                            tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
                        }

                        if (tmp_tuple_element_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 314;
                            type_description_2 = "o";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_tuple_element_26);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_32, 1, tmp_tuple_element_26);
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_expression_value_51);
                Py_DECREF(tmp_subscript_value_32);
                goto tuple_build_exception_12;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                tmp_tuple_element_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_32);
                Py_DECREF(tmp_expression_value_51);
                Py_DECREF(tmp_subscript_value_32);
                if (tmp_tuple_element_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 314;
                    type_description_2 = "o";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_31, 1, tmp_tuple_element_25);
            }
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_expression_value_50);
            Py_DECREF(tmp_subscript_value_31);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_31);
            Py_DECREF(tmp_expression_value_50);
            Py_DECREF(tmp_subscript_value_31);
            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_25);

                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_15 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_args_element_value_7 = MAKE_FUNCTION_anyio$streams$tls$$$function__12_extra_attributes(tmp_annotations_15);

            frame_de772dbdc7289618555fd07793e3084e_4->m_frame.f_lineno = 313;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            goto condexpr_end_7;
            condexpr_false_7:;
            tmp_called_value_26 = (PyObject *)&PyProperty_Type;
            tmp_dict_key_13 = mod_consts[102];
            tmp_expression_value_52 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[135]);

            if (tmp_expression_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[135]);

                    if (unlikely(tmp_expression_value_52 == NULL)) {
                        tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
                    }

                    if (tmp_expression_value_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 314;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_52);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_tuple_element_27 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[131]);

            if (tmp_tuple_element_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[131]);

                    if (unlikely(tmp_tuple_element_27 == NULL)) {
                        tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
                    }

                    if (tmp_tuple_element_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_52);

                        exception_lineno = 314;
                        type_description_2 = "o";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_tuple_element_27);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_33 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_53;
                PyObject *tmp_subscript_value_34;
                PyObject *tmp_tuple_element_28;
                PyTuple_SET_ITEM(tmp_subscript_value_33, 0, tmp_tuple_element_27);
                tmp_expression_value_53 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[132]);

                if (tmp_expression_value_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[132]);

                        if (unlikely(tmp_expression_value_53 == NULL)) {
                            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
                        }

                        if (tmp_expression_value_53 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 314;
                            type_description_2 = "o";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_expression_value_53);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                tmp_tuple_element_28 = MAKE_LIST_EMPTY(0);
                tmp_subscript_value_34 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_34, 0, tmp_tuple_element_28);
                tmp_tuple_element_28 = PyObject_GetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[131]);

                if (tmp_tuple_element_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[131]);

                        if (unlikely(tmp_tuple_element_28 == NULL)) {
                            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
                        }

                        if (tmp_tuple_element_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 314;
                            type_description_2 = "o";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_tuple_element_28);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_34, 1, tmp_tuple_element_28);
                goto tuple_build_noexception_14;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_15:;
                Py_DECREF(tmp_expression_value_53);
                Py_DECREF(tmp_subscript_value_34);
                goto tuple_build_exception_14;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_14:;
                tmp_tuple_element_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_34);
                Py_DECREF(tmp_expression_value_53);
                Py_DECREF(tmp_subscript_value_34);
                if (tmp_tuple_element_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 314;
                    type_description_2 = "o";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_33, 1, tmp_tuple_element_27);
            }
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_expression_value_52);
            Py_DECREF(tmp_subscript_value_33);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_33);
            Py_DECREF(tmp_expression_value_52);
            Py_DECREF(tmp_subscript_value_33);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_16 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_args_element_value_8 = MAKE_FUNCTION_anyio$streams$tls$$$function__12_extra_attributes(tmp_annotations_16);

            frame_de772dbdc7289618555fd07793e3084e_4->m_frame.f_lineno = 313;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_8);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            condexpr_end_7:;
            tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[74], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_de772dbdc7289618555fd07793e3084e_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_de772dbdc7289618555fd07793e3084e_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_de772dbdc7289618555fd07793e3084e_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_de772dbdc7289618555fd07793e3084e_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_de772dbdc7289618555fd07793e3084e_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_13;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_anyio$streams$tls$$$class__3_TLSListener_239, mod_consts[170], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_13;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_27 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_29 = mod_consts[181];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_29 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_29);
            tmp_tuple_element_29 = locals_anyio$streams$tls$$$class__3_TLSListener_239;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_29);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_78a406e2349b70e53ad745102f493fe2->m_frame.f_lineno = 239;
            tmp_assign_source_58 = CALL_FUNCTION(tmp_called_value_27, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;

                goto try_except_handler_13;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_58;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_args_element_value_5 = outline_2_var___class__;
        Py_INCREF(tmp_args_element_value_5);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_anyio$streams$tls$$$class__3_TLSListener_239);
        locals_anyio$streams$tls$$$class__3_TLSListener_239 = NULL;
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

        Py_DECREF(locals_anyio$streams$tls$$$class__3_TLSListener_239);
        locals_anyio$streams$tls$$$class__3_TLSListener_239 = NULL;
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
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
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

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 239;
        goto try_except_handler_11;
        outline_result_3:;
        frame_78a406e2349b70e53ad745102f493fe2->m_frame.f_lineno = 238;
        tmp_assign_source_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$streams$tls, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_57);
    }
    goto try_end_7;
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_78a406e2349b70e53ad745102f493fe2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_78a406e2349b70e53ad745102f493fe2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_78a406e2349b70e53ad745102f493fe2, exception_lineno);
    }



    assertFrameObject(frame_78a406e2349b70e53ad745102f493fe2);

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
    PGO_onModuleExit("anyio.streams.tls", false);

    Py_INCREF(module_anyio$streams$tls);
    return module_anyio$streams$tls;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$streams$tls, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("anyio$streams$tls", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
