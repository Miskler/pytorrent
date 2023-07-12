/* Generated code for Python module 'anyio._core._compat'
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

/* The "module_anyio$_core$_compat" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_anyio$_core$_compat;
PyDictObject *moduledict_anyio$_core$_compat;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[141];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[141];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("anyio._core._compat"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 141; i++) {
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
void checkModuleConstants_anyio$_core$_compat(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 141; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_3c0d41cbb6a32dac4c84754f1b26f752;
static PyCodeObject *codeobj_c0de53d5988536db742b148b76383a4c;
static PyCodeObject *codeobj_49d089d39797bbcc145d608b7e958e53;
static PyCodeObject *codeobj_86cfad06bb43b2bc8264a0dd0769c869;
static PyCodeObject *codeobj_7795ef1f6766793a12d47ad2f1592b02;
static PyCodeObject *codeobj_c49da8622fafba0eda565bc7c46b734f;
static PyCodeObject *codeobj_c368d442953c8f144f52f6a1f7aa1459;
static PyCodeObject *codeobj_2b4016c20bbce8f5ed84eb629d0e10cc;
static PyCodeObject *codeobj_9a6ab1705f5cd542afd3108be5798951;
static PyCodeObject *codeobj_fe03a6f42ba5dd0c648de58ae1c37e9a;
static PyCodeObject *codeobj_30cc7f4e222476f362806276056a4264;
static PyCodeObject *codeobj_373c0eccd992bb183ed82b1be5caf554;
static PyCodeObject *codeobj_4659f8eeaa0ef7e251b1740fdebac717;
static PyCodeObject *codeobj_efb11e017bd82318cd6ba8804b01a183;
static PyCodeObject *codeobj_654a2c036b3d2d571e9b615c56340c43;
static PyCodeObject *codeobj_1173996cce4e937e7acd058713e1e347;
static PyCodeObject *codeobj_0997eea91bc740fcbb3d5f6ff3fe24d1;
static PyCodeObject *codeobj_e67ef19fa93d721f8885c3c8b7e3dde3;
static PyCodeObject *codeobj_9fa3def6e05ecc893832cb739700dee0;
static PyCodeObject *codeobj_70efb11cd3d8c59befd679d23faa41ef;
static PyCodeObject *codeobj_0ef290d7bdb70b74c163c21fc1f4b295;
static PyCodeObject *codeobj_b518ba3f60e4b99a8fd4bd0a104aeb09;
static PyCodeObject *codeobj_01f6997bdd3d84555471cce58519cabd;
static PyCodeObject *codeobj_4f2b389964909697a570acb494c9a6c5;
static PyCodeObject *codeobj_906b89081dee4421804cdb6be4219939;
static PyCodeObject *codeobj_bd37c21e48e0d04b62046c3dfc5f27e3;
static PyCodeObject *codeobj_54f95f92227b3a314e8abd49268b7aa1;
static PyCodeObject *codeobj_a719ac1d89ace724fb2a1c121c05cbc6;
static PyCodeObject *codeobj_e5fe20e603ac159b1d679d81b0836217;
static PyCodeObject *codeobj_f3cc0bc4f0c8e8f302d0398da83a0db7;
static PyCodeObject *codeobj_5417fd1009fd0cb4feade6a85ced6959;
static PyCodeObject *codeobj_315ace7411553d087ad772457f787041;
static PyCodeObject *codeobj_0f1283c839f314a5d3c77647c95a7d59;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[45]; CHECK_OBJECT(module_filename_obj);
    codeobj_3c0d41cbb6a32dac4c84754f1b26f752 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[129], mod_consts[129], NULL, NULL, 0, 0, 0);
    codeobj_c0de53d5988536db742b148b76383a4c = MAKE_CODE_OBJECT(module_filename_obj, 188, CO_NOFREE, mod_consts[124], mod_consts[124], mod_consts[130], NULL, 0, 0, 0);
    codeobj_49d089d39797bbcc145d608b7e958e53 = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[130], NULL, 0, 0, 0);
    codeobj_86cfad06bb43b2bc8264a0dd0769c869 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_NOFREE, mod_consts[80], mod_consts[80], mod_consts[130], NULL, 0, 0, 0);
    codeobj_7795ef1f6766793a12d47ad2f1592b02 = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[130], NULL, 0, 0, 0);
    codeobj_c49da8622fafba0eda565bc7c46b734f = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[130], NULL, 0, 0, 0);
    codeobj_c368d442953c8f144f52f6a1f7aa1459 = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[131], NULL, 1, 0, 0);
    codeobj_2b4016c20bbce8f5ed84eb629d0e10cc = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[131], NULL, 1, 0, 0);
    codeobj_9a6ab1705f5cd542afd3108be5798951 = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[132], NULL, 4, 0, 0);
    codeobj_fe03a6f42ba5dd0c648de58ae1c37e9a = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[132], NULL, 4, 0, 0);
    codeobj_30cc7f4e222476f362806276056a4264 = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[131], NULL, 1, 0, 0);
    codeobj_373c0eccd992bb183ed82b1be5caf554 = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[131], NULL, 1, 0, 0);
    codeobj_4659f8eeaa0ef7e251b1740fdebac717 = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[32], mod_consts[32], mod_consts[131], NULL, 1, 0, 0);
    codeobj_efb11e017bd82318cd6ba8804b01a183 = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_NOFREE, mod_consts[6], mod_consts[6], mod_consts[131], NULL, 1, 0, 0);
    codeobj_654a2c036b3d2d571e9b615c56340c43 = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[132], NULL, 4, 0, 0);
    codeobj_1173996cce4e937e7acd058713e1e347 = MAKE_CODE_OBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[133], NULL, 2, 0, 0);
    codeobj_0997eea91bc740fcbb3d5f6ff3fe24d1 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[134], NULL, 2, 0, 0);
    codeobj_e67ef19fa93d721f8885c3c8b7e3dde3 = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[37], mod_consts[37], mod_consts[135], mod_consts[130], 2, 1, 0);
    codeobj_9fa3def6e05ecc893832cb739700dee0 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[136], NULL, 3, 0, 0);
    codeobj_70efb11cd3d8c59befd679d23faa41ef = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[35], mod_consts[35], mod_consts[137], mod_consts[130], 3, 0, 0);
    codeobj_0ef290d7bdb70b74c163c21fc1f4b295 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[131], NULL, 1, 0, 0);
    codeobj_b518ba3f60e4b99a8fd4bd0a104aeb09 = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[131], NULL, 1, 0, 0);
    codeobj_01f6997bdd3d84555471cce58519cabd = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[131], NULL, 1, 0, 0);
    codeobj_4f2b389964909697a570acb494c9a6c5 = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[131], NULL, 1, 0, 0);
    codeobj_906b89081dee4421804cdb6be4219939 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[131], NULL, 1, 0, 0);
    codeobj_bd37c21e48e0d04b62046c3dfc5f27e3 = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[131], NULL, 1, 0, 0);
    codeobj_54f95f92227b3a314e8abd49268b7aa1 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[138], NULL, 2, 0, 0);
    codeobj_a719ac1d89ace724fb2a1c121c05cbc6 = MAKE_CODE_OBJECT(module_filename_obj, 38, CO_COROUTINE | CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[139], NULL, 1, 0, 0);
    codeobj_e5fe20e603ac159b1d679d81b0836217 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_COROUTINE | CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[139], NULL, 1, 0, 0);
    codeobj_f3cc0bc4f0c8e8f302d0398da83a0db7 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_COROUTINE | CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[139], NULL, 1, 0, 0);
    codeobj_5417fd1009fd0cb4feade6a85ced6959 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_COROUTINE | CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[139], NULL, 1, 0, 0);
    codeobj_315ace7411553d087ad772457f787041 = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[0], mod_consts[0], mod_consts[139], NULL, 1, 0, 0);
    codeobj_0f1283c839f314a5d3c77647c95a7d59 = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[140], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_anyio$_core$_compat$$$function__1_maybe_async$$$coroutine__1_maybe_async();


static PyObject *MAKE_COROUTINE_anyio$_core$_compat$$$function__2_maybe_async$$$coroutine__1_maybe_async();


static PyObject *MAKE_COROUTINE_anyio$_core$_compat$$$function__3_maybe_async$$$coroutine__1_maybe_async();


static PyObject *MAKE_COROUTINE_anyio$_core$_compat$$$function__4_maybe_async$$$coroutine__1_maybe_async();


static PyObject *MAKE_COROUTINE_anyio$_core$_compat$$$function__5_maybe_async$$$coroutine__1_maybe_async(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_compat$$$function__7___aenter__$$$coroutine__1___aenter__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_compat$$$function__8___aexit__$$$coroutine__1___aexit__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_anyio$_core$_compat$$$function__12___await__$$$genobj__1___await__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_anyio$_core$_compat$$$function__17___await__$$$genobj__1___await__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_anyio$_core$_compat$$$function__21___await__$$$genobj__1___await__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_compat$$$function__26___aenter__$$$coroutine__1___aenter__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_anyio$_core$_compat$$$function__27___aexit__$$$coroutine__1___aexit__(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__10__warn_deprecation(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__11___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__12___await__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__13___reduce__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__14__unwrap(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__15___new__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__16___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__17___await__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__18___reduce__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__19__unwrap(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__1_maybe_async(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__20___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__21___await__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__22___reduce__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__23__unwrap(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__24___enter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__25___exit__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__26___aenter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__27___aexit__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__2_maybe_async(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__3_maybe_async(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__4_maybe_async(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__5_maybe_async(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__6___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__7___aenter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__8___aexit__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__9_maybe_async_cm(PyObject *annotations);


// The module function definitions.
static PyObject *impl_anyio$_core$_compat$$$function__1_maybe_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par___obj = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$_core$_compat$$$function__1_maybe_async$$$coroutine__1_maybe_async();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___obj);
    Py_DECREF(par___obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$_core$_compat$$$function__1_maybe_async$$$coroutine__1_maybe_async_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_compat$$$function__1_maybe_async$$$coroutine__1_maybe_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_compat$$$function__1_maybe_async$$$coroutine__1_maybe_async_locals *coroutine_heap = (struct anyio$_core$_compat$$$function__1_maybe_async$$$coroutine__1_maybe_async_locals *)coroutine->m_heap_storage;
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

static PyObject *MAKE_COROUTINE_anyio$_core$_compat$$$function__1_maybe_async$$$coroutine__1_maybe_async() {
    return Nuitka_Coroutine_New(
        anyio$_core$_compat$$$function__1_maybe_async$$$coroutine__1_maybe_async_context,
        module_anyio$_core$_compat,
        mod_consts[0],
        NULL,
        codeobj_a719ac1d89ace724fb2a1c121c05cbc6,
        NULL,
        0,
#if 1
        sizeof(struct anyio$_core$_compat$$$function__1_maybe_async$$$coroutine__1_maybe_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_compat$$$function__2_maybe_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par___obj = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$_core$_compat$$$function__2_maybe_async$$$coroutine__1_maybe_async();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___obj);
    Py_DECREF(par___obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$_core$_compat$$$function__2_maybe_async$$$coroutine__1_maybe_async_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_compat$$$function__2_maybe_async$$$coroutine__1_maybe_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_compat$$$function__2_maybe_async$$$coroutine__1_maybe_async_locals *coroutine_heap = (struct anyio$_core$_compat$$$function__2_maybe_async$$$coroutine__1_maybe_async_locals *)coroutine->m_heap_storage;
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

static PyObject *MAKE_COROUTINE_anyio$_core$_compat$$$function__2_maybe_async$$$coroutine__1_maybe_async() {
    return Nuitka_Coroutine_New(
        anyio$_core$_compat$$$function__2_maybe_async$$$coroutine__1_maybe_async_context,
        module_anyio$_core$_compat,
        mod_consts[0],
        NULL,
        codeobj_e5fe20e603ac159b1d679d81b0836217,
        NULL,
        0,
#if 1
        sizeof(struct anyio$_core$_compat$$$function__2_maybe_async$$$coroutine__1_maybe_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_compat$$$function__3_maybe_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par___obj = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$_core$_compat$$$function__3_maybe_async$$$coroutine__1_maybe_async();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___obj);
    Py_DECREF(par___obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$_core$_compat$$$function__3_maybe_async$$$coroutine__1_maybe_async_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_compat$$$function__3_maybe_async$$$coroutine__1_maybe_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_compat$$$function__3_maybe_async$$$coroutine__1_maybe_async_locals *coroutine_heap = (struct anyio$_core$_compat$$$function__3_maybe_async$$$coroutine__1_maybe_async_locals *)coroutine->m_heap_storage;
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

static PyObject *MAKE_COROUTINE_anyio$_core$_compat$$$function__3_maybe_async$$$coroutine__1_maybe_async() {
    return Nuitka_Coroutine_New(
        anyio$_core$_compat$$$function__3_maybe_async$$$coroutine__1_maybe_async_context,
        module_anyio$_core$_compat,
        mod_consts[0],
        NULL,
        codeobj_f3cc0bc4f0c8e8f302d0398da83a0db7,
        NULL,
        0,
#if 1
        sizeof(struct anyio$_core$_compat$$$function__3_maybe_async$$$coroutine__1_maybe_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_compat$$$function__4_maybe_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par___obj = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_COROUTINE_anyio$_core$_compat$$$function__4_maybe_async$$$coroutine__1_maybe_async();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___obj);
    Py_DECREF(par___obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$_core$_compat$$$function__4_maybe_async$$$coroutine__1_maybe_async_locals {
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_compat$$$function__4_maybe_async$$$coroutine__1_maybe_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_compat$$$function__4_maybe_async$$$coroutine__1_maybe_async_locals *coroutine_heap = (struct anyio$_core$_compat$$$function__4_maybe_async$$$coroutine__1_maybe_async_locals *)coroutine->m_heap_storage;
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

static PyObject *MAKE_COROUTINE_anyio$_core$_compat$$$function__4_maybe_async$$$coroutine__1_maybe_async() {
    return Nuitka_Coroutine_New(
        anyio$_core$_compat$$$function__4_maybe_async$$$coroutine__1_maybe_async_context,
        module_anyio$_core$_compat,
        mod_consts[0],
        NULL,
        codeobj_5417fd1009fd0cb4feade6a85ced6959,
        NULL,
        0,
#if 1
        sizeof(struct anyio$_core$_compat$$$function__4_maybe_async$$$coroutine__1_maybe_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_compat$$$function__5_maybe_async(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par___obj = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par___obj;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_COROUTINE_anyio$_core$_compat$$$function__5_maybe_async$$$coroutine__1_maybe_async(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par___obj);
    Py_DECREF(par___obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



#if 1
struct anyio$_core$_compat$$$function__5_maybe_async$$$coroutine__1_maybe_async_locals {
    char const *type_description_1;
    PyObject *tmp_return_value;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *anyio$_core$_compat$$$function__5_maybe_async$$$coroutine__1_maybe_async_context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_compat$$$function__5_maybe_async$$$coroutine__1_maybe_async_locals *coroutine_heap = (struct anyio$_core$_compat$$$function__5_maybe_async$$$coroutine__1_maybe_async_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->tmp_return_value = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_315ace7411553d087ad772457f787041, module_anyio$_core$_compat, sizeof(void *));
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
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[2]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 73;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 73;
        coroutine_heap->tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[3]);
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 73;
            coroutine_heap->type_description_1 = "c";
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

static PyObject *MAKE_COROUTINE_anyio$_core$_compat$$$function__5_maybe_async$$$coroutine__1_maybe_async(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$_core$_compat$$$function__5_maybe_async$$$coroutine__1_maybe_async_context,
        module_anyio$_core$_compat,
        mod_consts[0],
        NULL,
        codeobj_315ace7411553d087ad772457f787041,
        closure,
        1,
#if 1
        sizeof(struct anyio$_core$_compat$$$function__5_maybe_async$$$coroutine__1_maybe_async_locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_compat$$$function__6___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cm = python_pars[1];
    struct Nuitka_FrameObject *frame_1173996cce4e937e7acd058713e1e347;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1173996cce4e937e7acd058713e1e347 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1173996cce4e937e7acd058713e1e347)) {
        Py_XDECREF(cache_frame_1173996cce4e937e7acd058713e1e347);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1173996cce4e937e7acd058713e1e347 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1173996cce4e937e7acd058713e1e347 = MAKE_FUNCTION_FRAME(codeobj_1173996cce4e937e7acd058713e1e347, module_anyio$_core$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1173996cce4e937e7acd058713e1e347->m_type_description == NULL);
    frame_1173996cce4e937e7acd058713e1e347 = cache_frame_1173996cce4e937e7acd058713e1e347;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1173996cce4e937e7acd058713e1e347);
    assert(Py_REFCNT(frame_1173996cce4e937e7acd058713e1e347) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_cm);
        tmp_assattr_value_1 = par_cm;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1173996cce4e937e7acd058713e1e347, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1173996cce4e937e7acd058713e1e347->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1173996cce4e937e7acd058713e1e347, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1173996cce4e937e7acd058713e1e347,
        type_description_1,
        par_self,
        par_cm
    );


    // Release cached frame if used for exception.
    if (frame_1173996cce4e937e7acd058713e1e347 == cache_frame_1173996cce4e937e7acd058713e1e347) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1173996cce4e937e7acd058713e1e347);
        cache_frame_1173996cce4e937e7acd058713e1e347 = NULL;
    }

    assertFrameObject(frame_1173996cce4e937e7acd058713e1e347);

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


static PyObject *impl_anyio$_core$_compat$$$function__7___aenter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_anyio$_core$_compat$$$function__7___aenter__$$$coroutine__1___aenter__(tmp_closure_1);

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
struct anyio$_core$_compat$$$function__7___aenter__$$$coroutine__1___aenter___locals {
    char const *type_description_1;
    PyObject *tmp_return_value;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *anyio$_core$_compat$$$function__7___aenter__$$$coroutine__1___aenter___context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_compat$$$function__7___aenter__$$$coroutine__1___aenter___locals *coroutine_heap = (struct anyio$_core$_compat$$$function__7___aenter__$$$coroutine__1___aenter___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->tmp_return_value = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_c368d442953c8f144f52f6a1f7aa1459, module_anyio$_core$_compat, sizeof(void *));
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[5]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 81;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 81;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 81;
        coroutine_heap->tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[6]);
        Py_DECREF(tmp_called_instance_1);
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 81;
            coroutine_heap->type_description_1 = "c";
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

static PyObject *MAKE_COROUTINE_anyio$_core$_compat$$$function__7___aenter__$$$coroutine__1___aenter__(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$_core$_compat$$$function__7___aenter__$$$coroutine__1___aenter___context,
        module_anyio$_core$_compat,
        mod_consts[7],
        mod_consts[8],
        codeobj_c368d442953c8f144f52f6a1f7aa1459,
        closure,
        1,
#if 1
        sizeof(struct anyio$_core$_compat$$$function__7___aenter__$$$coroutine__1___aenter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_compat$$$function__8___aexit__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_anyio$_core$_compat$$$function__8___aexit__$$$coroutine__1___aexit__(tmp_closure_1);

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
struct anyio$_core$_compat$$$function__8___aexit__$$$coroutine__1___aexit___locals {
    char const *type_description_1;
    PyObject *tmp_return_value;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *anyio$_core$_compat$$$function__8___aexit__$$$coroutine__1___aexit___context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_compat$$$function__8___aexit__$$$coroutine__1___aexit___locals *coroutine_heap = (struct anyio$_core$_compat$$$function__8___aexit__$$$coroutine__1___aexit___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->tmp_return_value = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_9a6ab1705f5cd542afd3108be5798951, module_anyio$_core$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[5]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 89;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 89;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 89;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[10]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 89;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[11]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 89;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[12]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 89;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 89;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 89;
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

static PyObject *MAKE_COROUTINE_anyio$_core$_compat$$$function__8___aexit__$$$coroutine__1___aexit__(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$_core$_compat$$$function__8___aexit__$$$coroutine__1___aexit___context,
        module_anyio$_core$_compat,
        mod_consts[13],
        mod_consts[14],
        codeobj_9a6ab1705f5cd542afd3108be5798951,
        closure,
        4,
#if 1
        sizeof(struct anyio$_core$_compat$$$function__8___aexit__$$$coroutine__1___aexit___locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_compat$$$function__9_maybe_async_cm(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cm = python_pars[0];
    struct Nuitka_FrameObject *frame_0f1283c839f314a5d3c77647c95a7d59;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0f1283c839f314a5d3c77647c95a7d59 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0f1283c839f314a5d3c77647c95a7d59)) {
        Py_XDECREF(cache_frame_0f1283c839f314a5d3c77647c95a7d59);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0f1283c839f314a5d3c77647c95a7d59 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0f1283c839f314a5d3c77647c95a7d59 = MAKE_FUNCTION_FRAME(codeobj_0f1283c839f314a5d3c77647c95a7d59, module_anyio$_core$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0f1283c839f314a5d3c77647c95a7d59->m_type_description == NULL);
    frame_0f1283c839f314a5d3c77647c95a7d59 = cache_frame_0f1283c839f314a5d3c77647c95a7d59;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0f1283c839f314a5d3c77647c95a7d59);
    assert(Py_REFCNT(frame_0f1283c839f314a5d3c77647c95a7d59) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_cm);
        tmp_isinstance_inst_1 = par_cm;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
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
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[16];
        frame_0f1283c839f314a5d3c77647c95a7d59->m_frame.f_lineno = 108;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 108;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cm);
        tmp_args_element_value_1 = par_cm;
        frame_0f1283c839f314a5d3c77647c95a7d59->m_frame.f_lineno = 110;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
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
        exception_tb = MAKE_TRACEBACK(frame_0f1283c839f314a5d3c77647c95a7d59, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0f1283c839f314a5d3c77647c95a7d59->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0f1283c839f314a5d3c77647c95a7d59, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0f1283c839f314a5d3c77647c95a7d59,
        type_description_1,
        par_cm
    );


    // Release cached frame if used for exception.
    if (frame_0f1283c839f314a5d3c77647c95a7d59 == cache_frame_0f1283c839f314a5d3c77647c95a7d59) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0f1283c839f314a5d3c77647c95a7d59);
        cache_frame_0f1283c839f314a5d3c77647c95a7d59 = NULL;
    }

    assertFrameObject(frame_0f1283c839f314a5d3c77647c95a7d59);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cm);
    Py_DECREF(par_cm);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cm);
    Py_DECREF(par_cm);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_compat$$$function__10__warn_deprecation(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_awaitable = python_pars[0];
    PyObject *par_stacklevel = python_pars[1];
    struct Nuitka_FrameObject *frame_54f95f92227b3a314e8abd49268b7aa1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_54f95f92227b3a314e8abd49268b7aa1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_54f95f92227b3a314e8abd49268b7aa1)) {
        Py_XDECREF(cache_frame_54f95f92227b3a314e8abd49268b7aa1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_54f95f92227b3a314e8abd49268b7aa1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_54f95f92227b3a314e8abd49268b7aa1 = MAKE_FUNCTION_FRAME(codeobj_54f95f92227b3a314e8abd49268b7aa1, module_anyio$_core$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_54f95f92227b3a314e8abd49268b7aa1->m_type_description == NULL);
    frame_54f95f92227b3a314e8abd49268b7aa1 = cache_frame_54f95f92227b3a314e8abd49268b7aa1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_54f95f92227b3a314e8abd49268b7aa1);
    assert(Py_REFCNT(frame_54f95f92227b3a314e8abd49268b7aa1) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[20];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_awaitable);
            tmp_expression_value_1 = par_awaitable;
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[22];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[23];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_awaitable);
            tmp_expression_value_2 = par_awaitable;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[21]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[22];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[24];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kw_call_arg_value_0_1 = PyUnicode_Join(mod_consts[22], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_kw_call_arg_value_1_1 == NULL)) {
            tmp_kw_call_arg_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 120;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stacklevel);
        tmp_add_expr_left_1 = par_stacklevel;
        tmp_add_expr_right_1 = mod_consts[26];
        tmp_kw_call_dict_value_0_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 121;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_54f95f92227b3a314e8abd49268b7aa1->m_frame.f_lineno = 116;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[27]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
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
        exception_tb = MAKE_TRACEBACK(frame_54f95f92227b3a314e8abd49268b7aa1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_54f95f92227b3a314e8abd49268b7aa1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_54f95f92227b3a314e8abd49268b7aa1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_54f95f92227b3a314e8abd49268b7aa1,
        type_description_1,
        par_awaitable,
        par_stacklevel
    );


    // Release cached frame if used for exception.
    if (frame_54f95f92227b3a314e8abd49268b7aa1 == cache_frame_54f95f92227b3a314e8abd49268b7aa1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_54f95f92227b3a314e8abd49268b7aa1);
        cache_frame_54f95f92227b3a314e8abd49268b7aa1 = NULL;
    }

    assertFrameObject(frame_54f95f92227b3a314e8abd49268b7aa1);

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
    CHECK_OBJECT(par_awaitable);
    Py_DECREF(par_awaitable);
    CHECK_OBJECT(par_stacklevel);
    Py_DECREF(par_stacklevel);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_awaitable);
    Py_DECREF(par_awaitable);
    CHECK_OBJECT(par_stacklevel);
    Py_DECREF(par_stacklevel);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_compat$$$function__11___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_func = python_pars[1];
    struct Nuitka_FrameObject *frame_0997eea91bc740fcbb3d5f6ff3fe24d1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0997eea91bc740fcbb3d5f6ff3fe24d1 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0997eea91bc740fcbb3d5f6ff3fe24d1)) {
        Py_XDECREF(cache_frame_0997eea91bc740fcbb3d5f6ff3fe24d1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0997eea91bc740fcbb3d5f6ff3fe24d1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0997eea91bc740fcbb3d5f6ff3fe24d1 = MAKE_FUNCTION_FRAME(codeobj_0997eea91bc740fcbb3d5f6ff3fe24d1, module_anyio$_core$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0997eea91bc740fcbb3d5f6ff3fe24d1->m_type_description == NULL);
    frame_0997eea91bc740fcbb3d5f6ff3fe24d1 = cache_frame_0997eea91bc740fcbb3d5f6ff3fe24d1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0997eea91bc740fcbb3d5f6ff3fe24d1);
    assert(Py_REFCNT(frame_0997eea91bc740fcbb3d5f6ff3fe24d1) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_format_spec_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_func);
        tmp_expression_value_1 = par_func;
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[22];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[29];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_func);
            tmp_expression_value_2 = par_func;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[22];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_1 = "oo";
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
        tmp_assattr_value_1 = PyUnicode_Join(mod_consts[22], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[21], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0997eea91bc740fcbb3d5f6ff3fe24d1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0997eea91bc740fcbb3d5f6ff3fe24d1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0997eea91bc740fcbb3d5f6ff3fe24d1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0997eea91bc740fcbb3d5f6ff3fe24d1,
        type_description_1,
        par_self,
        par_func
    );


    // Release cached frame if used for exception.
    if (frame_0997eea91bc740fcbb3d5f6ff3fe24d1 == cache_frame_0997eea91bc740fcbb3d5f6ff3fe24d1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0997eea91bc740fcbb3d5f6ff3fe24d1);
        cache_frame_0997eea91bc740fcbb3d5f6ff3fe24d1 = NULL;
    }

    assertFrameObject(frame_0997eea91bc740fcbb3d5f6ff3fe24d1);

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
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_compat$$$function__12___await__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_GENERATOR_anyio$_core$_compat$$$function__12___await__$$$genobj__1___await__(tmp_closure_1);

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
struct anyio$_core$_compat$$$function__12___await__$$$genobj__1___await___locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *anyio$_core$_compat$$$function__12___await__$$$genobj__1___await___context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$_core$_compat$$$function__12___await__$$$genobj__1___await___locals *generator_heap = (struct anyio$_core$_compat$$$function__12___await__$$$genobj__1___await___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_30cc7f4e222476f362806276056a4264, module_anyio$_core$_compat, sizeof(void *));
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 130;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 130;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 130;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 130;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

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
    goto function_exception_exit;

    frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_anyio$_core$_compat$$$function__12___await__$$$genobj__1___await__(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        anyio$_core$_compat$$$function__12___await__$$$genobj__1___await___context,
        module_anyio$_core$_compat,
        mod_consts[32],
#if PYTHON_VERSION >= 0x350
        mod_consts[33],
#endif
        codeobj_30cc7f4e222476f362806276056a4264,
        closure,
        1,
#if 1
        sizeof(struct anyio$_core$_compat$$$function__12___await__$$$genobj__1___await___locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_compat$$$function__15___new__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_func = python_pars[2];
    struct Nuitka_FrameObject *frame_70efb11cd3d8c59befd679d23faa41ef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_70efb11cd3d8c59befd679d23faa41ef = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_70efb11cd3d8c59befd679d23faa41ef)) {
        Py_XDECREF(cache_frame_70efb11cd3d8c59befd679d23faa41ef);

#if _DEBUG_REFCOUNTS
        if (cache_frame_70efb11cd3d8c59befd679d23faa41ef == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_70efb11cd3d8c59befd679d23faa41ef = MAKE_FUNCTION_FRAME(codeobj_70efb11cd3d8c59befd679d23faa41ef, module_anyio$_core$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_70efb11cd3d8c59befd679d23faa41ef->m_type_description == NULL);
    frame_70efb11cd3d8c59befd679d23faa41ef = cache_frame_70efb11cd3d8c59befd679d23faa41ef;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_70efb11cd3d8c59befd679d23faa41ef);
    assert(Py_REFCNT(frame_70efb11cd3d8c59befd679d23faa41ef) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 145;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_cls);
        tmp_object_arg_value_1 = par_cls;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_anyio$_core$_compat, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_1 = par_cls;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_70efb11cd3d8c59befd679d23faa41ef->m_frame.f_lineno = 145;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[35],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_70efb11cd3d8c59befd679d23faa41ef, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_70efb11cd3d8c59befd679d23faa41ef->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_70efb11cd3d8c59befd679d23faa41ef, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_70efb11cd3d8c59befd679d23faa41ef,
        type_description_1,
        par_cls,
        par_x,
        par_func,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_70efb11cd3d8c59befd679d23faa41ef == cache_frame_70efb11cd3d8c59befd679d23faa41ef) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_70efb11cd3d8c59befd679d23faa41ef);
        cache_frame_70efb11cd3d8c59befd679d23faa41ef = NULL;
    }

    assertFrameObject(frame_70efb11cd3d8c59befd679d23faa41ef);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_compat$$$function__16___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    PyObject *par_func = python_pars[2];
    struct Nuitka_FrameObject *frame_9fa3def6e05ecc893832cb739700dee0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9fa3def6e05ecc893832cb739700dee0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9fa3def6e05ecc893832cb739700dee0)) {
        Py_XDECREF(cache_frame_9fa3def6e05ecc893832cb739700dee0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9fa3def6e05ecc893832cb739700dee0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9fa3def6e05ecc893832cb739700dee0 = MAKE_FUNCTION_FRAME(codeobj_9fa3def6e05ecc893832cb739700dee0, module_anyio$_core$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9fa3def6e05ecc893832cb739700dee0->m_type_description == NULL);
    frame_9fa3def6e05ecc893832cb739700dee0 = cache_frame_9fa3def6e05ecc893832cb739700dee0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9fa3def6e05ecc893832cb739700dee0);
    assert(Py_REFCNT(frame_9fa3def6e05ecc893832cb739700dee0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_format_spec_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_func);
        tmp_expression_value_1 = par_func;
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[22];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[29];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_func);
            tmp_expression_value_2 = par_func;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[22];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;
                type_description_1 = "ooo";
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
        tmp_assattr_value_1 = PyUnicode_Join(mod_consts[22], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[21], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9fa3def6e05ecc893832cb739700dee0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9fa3def6e05ecc893832cb739700dee0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9fa3def6e05ecc893832cb739700dee0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9fa3def6e05ecc893832cb739700dee0,
        type_description_1,
        par_self,
        par_x,
        par_func
    );


    // Release cached frame if used for exception.
    if (frame_9fa3def6e05ecc893832cb739700dee0 == cache_frame_9fa3def6e05ecc893832cb739700dee0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9fa3def6e05ecc893832cb739700dee0);
        cache_frame_9fa3def6e05ecc893832cb739700dee0 = NULL;
    }

    assertFrameObject(frame_9fa3def6e05ecc893832cb739700dee0);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_compat$$$function__17___await__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_GENERATOR_anyio$_core$_compat$$$function__17___await__$$$genobj__1___await__(tmp_closure_1);

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
struct anyio$_core$_compat$$$function__17___await__$$$genobj__1___await___locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_compat$$$function__17___await__$$$genobj__1___await___context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$_core$_compat$$$function__17___await__$$$genobj__1___await___locals *generator_heap = (struct anyio$_core$_compat$$$function__17___await__$$$genobj__1___await___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;
    generator_heap->tmp_return_value = NULL;

    // Actual generator function body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_373c0eccd992bb183ed82b1be5caf554, module_anyio$_core$_compat, sizeof(void *));
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 151;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 151;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 151;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 151;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_float_arg_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_float_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator_heap->tmp_return_value = TO_FLOAT(tmp_float_arg_1);
        if (generator_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    goto function_return_exit;

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
    goto function_exception_exit;

    frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;
    NUITKA_CANNOT_GET_HERE("Generator must have exited already.");
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 0x300
    generator->m_returned = generator_heap->tmp_return_value;
#endif

    return NULL;

}

static PyObject *MAKE_GENERATOR_anyio$_core$_compat$$$function__17___await__$$$genobj__1___await__(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        anyio$_core$_compat$$$function__17___await__$$$genobj__1___await___context,
        module_anyio$_core$_compat,
        mod_consts[32],
#if PYTHON_VERSION >= 0x350
        mod_consts[36],
#endif
        codeobj_373c0eccd992bb183ed82b1be5caf554,
        closure,
        1,
#if 1
        sizeof(struct anyio$_core$_compat$$$function__17___await__$$$genobj__1___await___locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_compat$$$function__18___reduce__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_b518ba3f60e4b99a8fd4bd0a104aeb09;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b518ba3f60e4b99a8fd4bd0a104aeb09 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b518ba3f60e4b99a8fd4bd0a104aeb09)) {
        Py_XDECREF(cache_frame_b518ba3f60e4b99a8fd4bd0a104aeb09);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b518ba3f60e4b99a8fd4bd0a104aeb09 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b518ba3f60e4b99a8fd4bd0a104aeb09 = MAKE_FUNCTION_FRAME(codeobj_b518ba3f60e4b99a8fd4bd0a104aeb09, module_anyio$_core$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b518ba3f60e4b99a8fd4bd0a104aeb09->m_type_description == NULL);
    frame_b518ba3f60e4b99a8fd4bd0a104aeb09 = cache_frame_b518ba3f60e4b99a8fd4bd0a104aeb09;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b518ba3f60e4b99a8fd4bd0a104aeb09);
    assert(Py_REFCNT(frame_b518ba3f60e4b99a8fd4bd0a104aeb09) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = (PyObject *)&PyFloat_Type;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_float_arg_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_float_arg_1 = par_self;
            tmp_tuple_element_2 = TO_FLOAT(tmp_float_arg_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b518ba3f60e4b99a8fd4bd0a104aeb09, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b518ba3f60e4b99a8fd4bd0a104aeb09->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b518ba3f60e4b99a8fd4bd0a104aeb09, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b518ba3f60e4b99a8fd4bd0a104aeb09,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_b518ba3f60e4b99a8fd4bd0a104aeb09 == cache_frame_b518ba3f60e4b99a8fd4bd0a104aeb09) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b518ba3f60e4b99a8fd4bd0a104aeb09);
        cache_frame_b518ba3f60e4b99a8fd4bd0a104aeb09 = NULL;
    }

    assertFrameObject(frame_b518ba3f60e4b99a8fd4bd0a104aeb09);

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


static PyObject *impl_anyio$_core$_compat$$$function__19__unwrap(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_906b89081dee4421804cdb6be4219939;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_906b89081dee4421804cdb6be4219939 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_906b89081dee4421804cdb6be4219939)) {
        Py_XDECREF(cache_frame_906b89081dee4421804cdb6be4219939);

#if _DEBUG_REFCOUNTS
        if (cache_frame_906b89081dee4421804cdb6be4219939 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_906b89081dee4421804cdb6be4219939 = MAKE_FUNCTION_FRAME(codeobj_906b89081dee4421804cdb6be4219939, module_anyio$_core$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_906b89081dee4421804cdb6be4219939->m_type_description == NULL);
    frame_906b89081dee4421804cdb6be4219939 = cache_frame_906b89081dee4421804cdb6be4219939;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_906b89081dee4421804cdb6be4219939);
    assert(Py_REFCNT(frame_906b89081dee4421804cdb6be4219939) == 2);

    // Framed code:
    {
        PyObject *tmp_float_arg_1;
        CHECK_OBJECT(par_self);
        tmp_float_arg_1 = par_self;
        tmp_return_value = TO_FLOAT(tmp_float_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
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
        exception_tb = MAKE_TRACEBACK(frame_906b89081dee4421804cdb6be4219939, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_906b89081dee4421804cdb6be4219939->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_906b89081dee4421804cdb6be4219939, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_906b89081dee4421804cdb6be4219939,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_906b89081dee4421804cdb6be4219939 == cache_frame_906b89081dee4421804cdb6be4219939) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_906b89081dee4421804cdb6be4219939);
        cache_frame_906b89081dee4421804cdb6be4219939 = NULL;
    }

    assertFrameObject(frame_906b89081dee4421804cdb6be4219939);

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


static PyObject *impl_anyio$_core$_compat$$$function__20___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_iterable = python_pars[1];
    PyObject *par_func = python_pars[2];
    struct Nuitka_FrameObject *frame_e67ef19fa93d721f8885c3c8b7e3dde3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e67ef19fa93d721f8885c3c8b7e3dde3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e67ef19fa93d721f8885c3c8b7e3dde3)) {
        Py_XDECREF(cache_frame_e67ef19fa93d721f8885c3c8b7e3dde3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e67ef19fa93d721f8885c3c8b7e3dde3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e67ef19fa93d721f8885c3c8b7e3dde3 = MAKE_FUNCTION_FRAME(codeobj_e67ef19fa93d721f8885c3c8b7e3dde3, module_anyio$_core$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e67ef19fa93d721f8885c3c8b7e3dde3->m_type_description == NULL);
    frame_e67ef19fa93d721f8885c3c8b7e3dde3 = cache_frame_e67ef19fa93d721f8885c3c8b7e3dde3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e67ef19fa93d721f8885c3c8b7e3dde3);
    assert(Py_REFCNT(frame_e67ef19fa93d721f8885c3c8b7e3dde3) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_anyio$_core$_compat, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_iterable);
        tmp_args_element_value_1 = par_iterable;
        frame_e67ef19fa93d721f8885c3c8b7e3dde3->m_frame.f_lineno = 171;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[37], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_format_spec_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_func);
        tmp_expression_value_1 = par_func;
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[22];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[29];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_func);
            tmp_expression_value_2 = par_func;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_1 = "oooc";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[22];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_1 = "oooc";
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
        tmp_assattr_value_1 = PyUnicode_Join(mod_consts[22], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[21], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e67ef19fa93d721f8885c3c8b7e3dde3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e67ef19fa93d721f8885c3c8b7e3dde3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e67ef19fa93d721f8885c3c8b7e3dde3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e67ef19fa93d721f8885c3c8b7e3dde3,
        type_description_1,
        par_self,
        par_iterable,
        par_func,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e67ef19fa93d721f8885c3c8b7e3dde3 == cache_frame_e67ef19fa93d721f8885c3c8b7e3dde3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e67ef19fa93d721f8885c3c8b7e3dde3);
        cache_frame_e67ef19fa93d721f8885c3c8b7e3dde3 = NULL;
    }

    assertFrameObject(frame_e67ef19fa93d721f8885c3c8b7e3dde3);

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
    CHECK_OBJECT(par_iterable);
    Py_DECREF(par_iterable);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_iterable);
    Py_DECREF(par_iterable);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_anyio$_core$_compat$$$function__21___await__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_GENERATOR_anyio$_core$_compat$$$function__21___await__$$$genobj__1___await__(tmp_closure_1);

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
struct anyio$_core$_compat$$$function__21___await__$$$genobj__1___await___locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_compat$$$function__21___await__$$$genobj__1___await___context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct anyio$_core$_compat$$$function__21___await__$$$genobj__1___await___locals *generator_heap = (struct anyio$_core$_compat$$$function__21___await__$$$genobj__1___await___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;
    generator_heap->tmp_return_value = NULL;

    // Actual generator function body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_4659f8eeaa0ef7e251b1740fdebac717, module_anyio$_core$_compat, sizeof(void *));
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 175;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 175;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 175;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 175;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_list_arg_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 179;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator_heap->tmp_return_value = MAKE_LIST(tmp_list_arg_1);
        if (generator_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 179;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    goto function_return_exit;

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
    goto function_exception_exit;

    frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;
    NUITKA_CANNOT_GET_HERE("Generator must have exited already.");
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 0x300
    generator->m_returned = generator_heap->tmp_return_value;
#endif

    return NULL;

}

static PyObject *MAKE_GENERATOR_anyio$_core$_compat$$$function__21___await__$$$genobj__1___await__(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        anyio$_core$_compat$$$function__21___await__$$$genobj__1___await___context,
        module_anyio$_core$_compat,
        mod_consts[32],
#if PYTHON_VERSION >= 0x350
        mod_consts[38],
#endif
        codeobj_4659f8eeaa0ef7e251b1740fdebac717,
        closure,
        1,
#if 1
        sizeof(struct anyio$_core$_compat$$$function__21___await__$$$genobj__1___await___locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_compat$$$function__22___reduce__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_01f6997bdd3d84555471cce58519cabd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_01f6997bdd3d84555471cce58519cabd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_01f6997bdd3d84555471cce58519cabd)) {
        Py_XDECREF(cache_frame_01f6997bdd3d84555471cce58519cabd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_01f6997bdd3d84555471cce58519cabd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_01f6997bdd3d84555471cce58519cabd = MAKE_FUNCTION_FRAME(codeobj_01f6997bdd3d84555471cce58519cabd, module_anyio$_core$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_01f6997bdd3d84555471cce58519cabd->m_type_description == NULL);
    frame_01f6997bdd3d84555471cce58519cabd = cache_frame_01f6997bdd3d84555471cce58519cabd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_01f6997bdd3d84555471cce58519cabd);
    assert(Py_REFCNT(frame_01f6997bdd3d84555471cce58519cabd) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = (PyObject *)&PyList_Type;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_list_arg_1;
            PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_list_arg_1 = par_self;
            tmp_tuple_element_2 = MAKE_LIST(tmp_list_arg_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_tuple_element_1, 0, tmp_tuple_element_2);
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_01f6997bdd3d84555471cce58519cabd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_01f6997bdd3d84555471cce58519cabd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_01f6997bdd3d84555471cce58519cabd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_01f6997bdd3d84555471cce58519cabd,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_01f6997bdd3d84555471cce58519cabd == cache_frame_01f6997bdd3d84555471cce58519cabd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_01f6997bdd3d84555471cce58519cabd);
        cache_frame_01f6997bdd3d84555471cce58519cabd = NULL;
    }

    assertFrameObject(frame_01f6997bdd3d84555471cce58519cabd);

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


static PyObject *impl_anyio$_core$_compat$$$function__23__unwrap(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_bd37c21e48e0d04b62046c3dfc5f27e3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bd37c21e48e0d04b62046c3dfc5f27e3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bd37c21e48e0d04b62046c3dfc5f27e3)) {
        Py_XDECREF(cache_frame_bd37c21e48e0d04b62046c3dfc5f27e3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bd37c21e48e0d04b62046c3dfc5f27e3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bd37c21e48e0d04b62046c3dfc5f27e3 = MAKE_FUNCTION_FRAME(codeobj_bd37c21e48e0d04b62046c3dfc5f27e3, module_anyio$_core$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bd37c21e48e0d04b62046c3dfc5f27e3->m_type_description == NULL);
    frame_bd37c21e48e0d04b62046c3dfc5f27e3 = cache_frame_bd37c21e48e0d04b62046c3dfc5f27e3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bd37c21e48e0d04b62046c3dfc5f27e3);
    assert(Py_REFCNT(frame_bd37c21e48e0d04b62046c3dfc5f27e3) == 2);

    // Framed code:
    {
        PyObject *tmp_list_arg_1;
        CHECK_OBJECT(par_self);
        tmp_list_arg_1 = par_self;
        tmp_return_value = MAKE_LIST(tmp_list_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
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
        exception_tb = MAKE_TRACEBACK(frame_bd37c21e48e0d04b62046c3dfc5f27e3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bd37c21e48e0d04b62046c3dfc5f27e3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bd37c21e48e0d04b62046c3dfc5f27e3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bd37c21e48e0d04b62046c3dfc5f27e3,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_bd37c21e48e0d04b62046c3dfc5f27e3 == cache_frame_bd37c21e48e0d04b62046c3dfc5f27e3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bd37c21e48e0d04b62046c3dfc5f27e3);
        cache_frame_bd37c21e48e0d04b62046c3dfc5f27e3 = NULL;
    }

    assertFrameObject(frame_bd37c21e48e0d04b62046c3dfc5f27e3);

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


static PyObject *impl_anyio$_core$_compat$$$function__26___aenter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_anyio$_core$_compat$$$function__26___aenter__$$$coroutine__1___aenter__(tmp_closure_1);

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
struct anyio$_core$_compat$$$function__26___aenter__$$$coroutine__1___aenter___locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_return_value;
};
#endif

static PyObject *anyio$_core$_compat$$$function__26___aenter__$$$coroutine__1___aenter___context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_compat$$$function__26___aenter__$$$coroutine__1___aenter___locals *coroutine_heap = (struct anyio$_core$_compat$$$function__26___aenter__$$$coroutine__1___aenter___locals *)coroutine->m_heap_storage;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_2b4016c20bbce8f5ed84eb629d0e10cc, module_anyio$_core$_compat, sizeof(void *));
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
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 203;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[39];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[5]);
                coroutine_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
                CHAIN_EXCEPTION(coroutine_heap->exception_value);

                coroutine_heap->exception_lineno = 204;
                coroutine_heap->type_description_1 = "c";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
            tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 204;
                coroutine_heap->type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[40]);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 204;
                coroutine_heap->type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[22];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


                coroutine_heap->exception_lineno = 204;
                coroutine_heap->type_description_1 = "c";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[41];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_args_element_value_1 = PyUnicode_Join(mod_consts[22], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 204;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            coroutine_heap->exception_lineno = 208;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        coroutine->m_frame->m_frame.f_lineno = 203;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 203;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[5]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 210;
            coroutine_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 210;
        coroutine_heap->tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[6]);
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 210;
            coroutine_heap->type_description_1 = "c";
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

static PyObject *MAKE_COROUTINE_anyio$_core$_compat$$$function__26___aenter__$$$coroutine__1___aenter__(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$_core$_compat$$$function__26___aenter__$$$coroutine__1___aenter___context,
        module_anyio$_core$_compat,
        mod_consts[7],
        mod_consts[42],
        codeobj_2b4016c20bbce8f5ed84eb629d0e10cc,
        closure,
        1,
#if 1
        sizeof(struct anyio$_core$_compat$$$function__26___aenter__$$$coroutine__1___aenter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_anyio$_core$_compat$$$function__27___aexit__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

        tmp_return_value = MAKE_COROUTINE_anyio$_core$_compat$$$function__27___aexit__$$$coroutine__1___aexit__(tmp_closure_1);

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
struct anyio$_core$_compat$$$function__27___aexit__$$$coroutine__1___aexit___locals {
    char const *type_description_1;
    PyObject *tmp_return_value;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};
#endif

static PyObject *anyio$_core$_compat$$$function__27___aexit__$$$coroutine__1___aexit___context(struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));

#if 1
    // Heap access.
    struct anyio$_core$_compat$$$function__27___aexit__$$$coroutine__1___aexit___locals *coroutine_heap = (struct anyio$_core$_compat$$$function__27___aexit__$$$coroutine__1___aexit___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    coroutine_heap->type_description_1 = NULL;
    coroutine_heap->tmp_return_value = NULL;
    coroutine_heap->exception_type = NULL;
    coroutine_heap->exception_value = NULL;
    coroutine_heap->exception_tb = NULL;
    coroutine_heap->exception_lineno = 0;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_fe03a6f42ba5dd0c648de58ae1c37e9a, module_anyio$_core$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[5]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 218;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[3]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 218;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[10]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 218;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
        if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[11]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 218;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
        if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[12]);
            coroutine_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
            CHAIN_EXCEPTION(coroutine_heap->exception_value);

            coroutine_heap->exception_lineno = 218;
            coroutine_heap->type_description_1 = "cccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
        coroutine->m_frame->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (coroutine_heap->tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


            coroutine_heap->exception_lineno = 218;
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

static PyObject *MAKE_COROUTINE_anyio$_core$_compat$$$function__27___aexit__$$$coroutine__1___aexit__(struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        anyio$_core$_compat$$$function__27___aexit__$$$coroutine__1___aexit___context,
        module_anyio$_core$_compat,
        mod_consts[13],
        mod_consts[43],
        codeobj_fe03a6f42ba5dd0c648de58ae1c37e9a,
        closure,
        4,
#if 1
        sizeof(struct anyio$_core$_compat$$$function__27___aexit__$$$coroutine__1___aexit___locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__10__warn_deprecation(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__10__warn_deprecation,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_54f95f92227b3a314e8abd49268b7aa1,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__11___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__11___init__,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_0997eea91bc740fcbb3d5f6ff3fe24d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__12___await__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__12___await__,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[33],
#endif
        codeobj_30cc7f4e222476f362806276056a4264,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__13___reduce__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[100],
#endif
        codeobj_0ef290d7bdb70b74c163c21fc1f4b295,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[98]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__14__unwrap(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_4f2b389964909697a570acb494c9a6c5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__15___new__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__15___new__,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_70efb11cd3d8c59befd679d23faa41ef,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__16___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__16___init__,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_9fa3def6e05ecc893832cb739700dee0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__17___await__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__17___await__,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[36],
#endif
        codeobj_373c0eccd992bb183ed82b1be5caf554,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__18___reduce__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__18___reduce__,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_b518ba3f60e4b99a8fd4bd0a104aeb09,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__19__unwrap(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__19__unwrap,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[114],
#endif
        codeobj_906b89081dee4421804cdb6be4219939,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__1_maybe_async(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__1_maybe_async,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a719ac1d89ace724fb2a1c121c05cbc6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__20___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__20___init__,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_e67ef19fa93d721f8885c3c8b7e3dde3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__21___await__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__21___await__,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[38],
#endif
        codeobj_4659f8eeaa0ef7e251b1740fdebac717,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__22___reduce__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__22___reduce__,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_01f6997bdd3d84555471cce58519cabd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__23__unwrap(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__23__unwrap,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_bd37c21e48e0d04b62046c3dfc5f27e3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__24___enter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_efb11e017bd82318cd6ba8804b01a183,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__25___exit__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_654a2c036b3d2d571e9b615c56340c43,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__26___aenter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__26___aenter__,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[42],
#endif
        codeobj_2b4016c20bbce8f5ed84eb629d0e10cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__27___aexit__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__27___aexit__,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[43],
#endif
        codeobj_fe03a6f42ba5dd0c648de58ae1c37e9a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__2_maybe_async(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__2_maybe_async,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e5fe20e603ac159b1d679d81b0836217,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__3_maybe_async(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__3_maybe_async,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f3cc0bc4f0c8e8f302d0398da83a0db7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__4_maybe_async(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__4_maybe_async,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5417fd1009fd0cb4feade6a85ced6959,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__5_maybe_async(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__5_maybe_async,
        mod_consts[0],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_315ace7411553d087ad772457f787041,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__6___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__6___init__,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[89],
#endif
        codeobj_1173996cce4e937e7acd058713e1e347,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__7___aenter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__7___aenter__,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[8],
#endif
        codeobj_c368d442953c8f144f52f6a1f7aa1459,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__8___aexit__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__8___aexit__,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[14],
#endif
        codeobj_9a6ab1705f5cd542afd3108be5798951,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_anyio$_core$_compat$$$function__9_maybe_async_cm(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_anyio$_core$_compat$$$function__9_maybe_async_cm,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0f1283c839f314a5d3c77647c95a7d59,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_anyio$_core$_compat,
        mod_consts[18],
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

function_impl_code functable_anyio$_core$_compat[] = {
    impl_anyio$_core$_compat$$$function__1_maybe_async,
    impl_anyio$_core$_compat$$$function__2_maybe_async,
    impl_anyio$_core$_compat$$$function__3_maybe_async,
    impl_anyio$_core$_compat$$$function__4_maybe_async,
    impl_anyio$_core$_compat$$$function__5_maybe_async,
    impl_anyio$_core$_compat$$$function__6___init__,
    impl_anyio$_core$_compat$$$function__7___aenter__,
    impl_anyio$_core$_compat$$$function__8___aexit__,
    impl_anyio$_core$_compat$$$function__9_maybe_async_cm,
    impl_anyio$_core$_compat$$$function__10__warn_deprecation,
    impl_anyio$_core$_compat$$$function__11___init__,
    impl_anyio$_core$_compat$$$function__12___await__,
    NULL,
    NULL,
    impl_anyio$_core$_compat$$$function__15___new__,
    impl_anyio$_core$_compat$$$function__16___init__,
    impl_anyio$_core$_compat$$$function__17___await__,
    impl_anyio$_core$_compat$$$function__18___reduce__,
    impl_anyio$_core$_compat$$$function__19__unwrap,
    impl_anyio$_core$_compat$$$function__20___init__,
    impl_anyio$_core$_compat$$$function__21___await__,
    impl_anyio$_core$_compat$$$function__22___reduce__,
    impl_anyio$_core$_compat$$$function__23__unwrap,
    NULL,
    NULL,
    impl_anyio$_core$_compat$$$function__26___aenter__,
    impl_anyio$_core$_compat$$$function__27___aexit__,
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

    function_impl_code *current = functable_anyio$_core$_compat;
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

    if (offset > sizeof(functable_anyio$_core$_compat) || offset < 0) {
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
        functable_anyio$_core$_compat[offset],
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
        module_anyio$_core$_compat,
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
PyObject *modulecode_anyio$_core$_compat(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("anyio._core._compat");

    // Store the module for future use.
    module_anyio$_core$_compat = module;

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
        PRINT_STRING("anyio._core._compat: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio._core._compat: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("anyio._core._compat: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initanyio$_core$_compat\n");

    moduledict_anyio$_core$_compat = MODULE_DICT(module_anyio$_core$_compat);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_anyio$_core$_compat,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_anyio$_core$_compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[22]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_anyio$_core$_compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$_core$_compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_anyio$_core$_compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_anyio$_core$_compat);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_anyio$_core$_compat);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    struct Nuitka_CellObject *outline_2_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_3_var___class__ = Nuitka_Cell_Empty();
    PyObject *outline_4_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_3c0d41cbb6a32dac4c84754f1b26f752;
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
    PyObject *locals_anyio$_core$_compat$$$class__1__ContextManagerWrapper_76 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_c49da8622fafba0eda565bc7c46b734f_2;
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
    PyObject *locals_anyio$_core$_compat$$$class__2_DeprecatedAwaitable_125 = NULL;
    struct Nuitka_FrameObject *frame_49d089d39797bbcc145d608b7e958e53_3;
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
    PyObject *locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141 = NULL;
    struct Nuitka_FrameObject *frame_86cfad06bb43b2bc8264a0dd0769c869_4;
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
    PyObject *locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164 = NULL;
    struct Nuitka_FrameObject *frame_7795ef1f6766793a12d47ad2f1592b02_5;
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
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188 = NULL;
    struct Nuitka_FrameObject *frame_c0de53d5988536db742b148b76383a4c_6;
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
        UPDATE_STRING_DICT0(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[45];
        UPDATE_STRING_DICT0(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_2);
    }
    frame_3c0d41cbb6a32dac4c84754f1b26f752 = MAKE_MODULE_FRAME(codeobj_3c0d41cbb6a32dac4c84754f1b26f752, module_anyio$_core$_compat);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3c0d41cbb6a32dac4c84754f1b26f752);
    assert(Py_REFCNT(frame_3c0d41cbb6a32dac4c84754f1b26f752) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[45];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[48], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[49], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[51];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_anyio$_core$_compat;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[52];
        tmp_level_value_1 = mod_consts[53];
        frame_3c0d41cbb6a32dac4c84754f1b26f752->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_anyio$_core$_compat,
                mod_consts[54],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[54]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_anyio$_core$_compat,
                mod_consts[55],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[55]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_6);
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[56];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_anyio$_core$_compat;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[57];
        tmp_level_value_2 = mod_consts[53];
        frame_3c0d41cbb6a32dac4c84754f1b26f752->m_frame.f_lineno = 2;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_anyio$_core$_compat,
                mod_consts[15],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[15]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        tmp_import_name_from_4 = IMPORT_HARD_TYPES();
        assert(!(tmp_import_name_from_4 == NULL));
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_anyio$_core$_compat,
                mod_consts[58],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[58]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_9 == NULL));
        assert(tmp_import_from_2__module == NULL);
        Py_INCREF(tmp_assign_source_9);
        tmp_import_from_2__module = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = Py_False;
        UPDATE_STRING_DICT0(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_10);
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
                (PyObject *)moduledict_anyio$_core$_compat,
                mod_consts[60],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[60]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_anyio$_core$_compat,
                mod_consts[61],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[61]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_anyio$_core$_compat,
                mod_consts[62],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[62]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_anyio$_core$_compat,
                mod_consts[63],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[63]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_anyio$_core$_compat,
                mod_consts[64],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[64]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_anyio$_core$_compat,
                mod_consts[65],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[65]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_anyio$_core$_compat,
                mod_consts[66],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[66]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_anyio$_core$_compat,
                mod_consts[67],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[67]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_anyio$_core$_compat,
                mod_consts[68],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[68]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_anyio$_core$_compat,
                mod_consts[69],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[69]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_anyio$_core$_compat,
                mod_consts[70],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[70]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_anyio$_core$_compat,
                mod_consts[71],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_16, mod_consts[71]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_17 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_anyio$_core$_compat,
                mod_consts[72],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_17, mod_consts[72]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_18 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_anyio$_core$_compat,
                mod_consts[73],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_18, mod_consts[73]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_24);
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
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[74];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_anyio$_core$_compat;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[75];
        tmp_level_value_3 = mod_consts[53];
        frame_3c0d41cbb6a32dac4c84754f1b26f752->m_frame.f_lineno = 21;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_anyio$_core$_compat,
                mod_consts[19],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_19, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = (PyObject *)&PyBaseObject_Type;
        UPDATE_STRING_DICT0(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        frame_3c0d41cbb6a32dac4c84754f1b26f752->m_frame.f_lineno = 28;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[77]);

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[79];
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[80];
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[81];
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 2, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 3, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[2];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[83];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

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


        tmp_args_element_value_1 = MAKE_FUNCTION_anyio$_core$_compat$$$function__1_maybe_async(tmp_annotations_1);

        frame_3c0d41cbb6a32dac4c84754f1b26f752->m_frame.f_lineno = 37;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_annotations_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = DICT_COPY(mod_consts[84]);


        tmp_args_element_value_2 = MAKE_FUNCTION_anyio$_core$_compat$$$function__2_maybe_async(tmp_annotations_2);

        frame_3c0d41cbb6a32dac4c84754f1b26f752->m_frame.f_lineno = 42;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = mod_consts[2];
        tmp_dict_value_2 = mod_consts[81];
        tmp_annotations_3 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[83];
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[78]);

            if (unlikely(tmp_subscript_value_2 == NULL)) {
                tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
            }

            if (tmp_subscript_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_args_element_value_3 = MAKE_FUNCTION_anyio$_core$_compat$$$function__3_maybe_async(tmp_annotations_3);

        frame_3c0d41cbb6a32dac4c84754f1b26f752->m_frame.f_lineno = 47;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_annotations_4;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = DICT_COPY(mod_consts[85]);


        tmp_args_element_value_4 = MAKE_FUNCTION_anyio$_core$_compat$$$function__4_maybe_async(tmp_annotations_4);

        frame_3c0d41cbb6a32dac4c84754f1b26f752->m_frame.f_lineno = 52;
        tmp_assign_source_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[2];
        tmp_dict_value_3 = mod_consts[86];
        tmp_annotations_5 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_tuple_element_2;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[83];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[72]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_3;
            }
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_tuple_element_2 == NULL)) {
                tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(4);
            {
                PyObject *tmp_expression_value_4;
                PyObject *tmp_subscript_value_4;
                PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_2);
                tmp_tuple_element_2 = (PyObject *)&PyFloat_Type;
                PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_2);
                tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[67]);

                if (unlikely(tmp_expression_value_4 == NULL)) {
                    tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                }

                if (tmp_expression_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 59;

                    goto tuple_build_exception_2;
                }
                tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[78]);

                if (unlikely(tmp_subscript_value_4 == NULL)) {
                    tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                }

                if (tmp_subscript_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 59;

                    goto tuple_build_exception_2;
                }
                tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
                if (tmp_tuple_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 59;

                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_3, 2, tmp_tuple_element_2);
                tmp_tuple_element_2 = Py_None;
                PyTuple_SET_ITEM0(tmp_subscript_value_3, 3, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_subscript_value_3);
            goto dict_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
            Py_DECREF(tmp_subscript_value_3);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_33 = MAKE_FUNCTION_anyio$_core$_compat$$$function__5_maybe_async(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_35;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_anyio$_core$_compat$$$class__1__ContextManagerWrapper_76 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyDict_SetItem(locals_anyio$_core$_compat$$$class__1__ContextManagerWrapper_76, mod_consts[28], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[17];
        tmp_res = PyDict_SetItem(locals_anyio$_core$_compat$$$class__1__ContextManagerWrapper_76, mod_consts[30], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_c49da8622fafba0eda565bc7c46b734f_2 = MAKE_CLASS_FRAME(codeobj_c49da8622fafba0eda565bc7c46b734f, module_anyio$_core$_compat, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c49da8622fafba0eda565bc7c46b734f_2);
        assert(Py_REFCNT(frame_c49da8622fafba0eda565bc7c46b734f_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_5;
            tmp_dict_key_4 = mod_consts[88];
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[78]);

            if (unlikely(tmp_subscript_value_5 == NULL)) {
                tmp_subscript_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
            }

            if (tmp_subscript_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_compat$$$function__6___init__(tmp_annotations_6);

            tmp_res = PyDict_SetItem(locals_anyio$_core$_compat$$$class__1__ContextManagerWrapper_76, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_dict_key_5 = mod_consts[83];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[78]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_compat$$$function__7___aenter__(tmp_annotations_7);

            tmp_res = PyDict_SetItem(locals_anyio$_core$_compat$$$class__1__ContextManagerWrapper_76, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_7;
            tmp_dict_key_6 = mod_consts[10];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_7 = PyExc_BaseException;
            tmp_subscript_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_7);
            if (tmp_subscript_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_6);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_8;
                PyObject *tmp_subscript_value_8;
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_subscript_value_10;
                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[11];
                tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[68]);

                if (unlikely(tmp_expression_value_8 == NULL)) {
                    tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                }

                if (tmp_expression_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 86;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_subscript_value_8 = PyExc_BaseException;
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_8);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 86;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[12];
                tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[68]);

                if (unlikely(tmp_expression_value_9 == NULL)) {
                    tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                }

                if (tmp_expression_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 87;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[58]);

                if (unlikely(tmp_subscript_value_9 == NULL)) {
                    tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
                }

                if (tmp_subscript_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 87;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_9);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 87;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[83];
                tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[68]);

                if (unlikely(tmp_expression_value_10 == NULL)) {
                    tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                }

                if (tmp_expression_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 88;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_subscript_value_10 = (PyObject *)&PyBool_Type;
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_10);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 88;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_8);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_compat$$$function__8___aexit__(tmp_annotations_8);

            tmp_res = PyDict_SetItem(locals_anyio$_core$_compat$$$class__1__ContextManagerWrapper_76, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c49da8622fafba0eda565bc7c46b734f_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c49da8622fafba0eda565bc7c46b734f_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c49da8622fafba0eda565bc7c46b734f_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c49da8622fafba0eda565bc7c46b734f_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_c49da8622fafba0eda565bc7c46b734f_2);

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
            PyObject *tmp_assign_source_37;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_6 = (PyObject *)&PyType_Type;
            tmp_tuple_element_3 = mod_consts[17];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[90];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_anyio$_core$_compat$$$class__1__ContextManagerWrapper_76;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_3c0d41cbb6a32dac4c84754f1b26f752->m_frame.f_lineno = 76;
            tmp_assign_source_37 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_37;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_36 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_36);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_anyio$_core$_compat$$$class__1__ContextManagerWrapper_76);
        locals_anyio$_core$_compat$$$class__1__ContextManagerWrapper_76 = NULL;
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

        Py_DECREF(locals_anyio$_core$_compat$$$class__1__ContextManagerWrapper_76);
        locals_anyio$_core$_compat$$$class__1__ContextManagerWrapper_76 = NULL;
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
        exception_lineno = 76;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_36);
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
        PyObject *tmp_assign_source_38;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_12;
        tmp_dict_key_7 = mod_consts[88];
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_12 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_subscript_value_12 == NULL)) {
            tmp_subscript_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_subscript_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_12);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_13;
            PyTuple_SET_ITEM(tmp_subscript_value_11, 0, tmp_tuple_element_4);
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_3;
            }
            tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[78]);

            if (unlikely(tmp_subscript_value_13 == NULL)) {
                tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
            }

            if (tmp_subscript_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_13);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_11, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_subscript_value_11);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_11);
        Py_DECREF(tmp_subscript_value_11);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_14;
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[83];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_14 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[78]);

            if (unlikely(tmp_subscript_value_14 == NULL)) {
                tmp_subscript_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
            }

            if (tmp_subscript_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_5;
            }
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_14);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_annotations_9);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;


        tmp_assign_source_38 = MAKE_FUNCTION_anyio$_core$_compat$$$function__9_maybe_async_cm(tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_10;
        tmp_defaults_1 = mod_consts[92];
        tmp_annotations_10 = DICT_COPY(mod_consts[93]);
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_39 = MAKE_FUNCTION_anyio$_core$_compat$$$function__10__warn_deprecation(tmp_defaults_1, tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_41;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_anyio$_core$_compat$$$class__2_DeprecatedAwaitable_125 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyDict_SetItem(locals_anyio$_core$_compat$$$class__2_DeprecatedAwaitable_125, mod_consts[28], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyDict_SetItem(locals_anyio$_core$_compat$$$class__2_DeprecatedAwaitable_125, mod_consts[30], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_49d089d39797bbcc145d608b7e958e53_3 = MAKE_CLASS_FRAME(codeobj_49d089d39797bbcc145d608b7e958e53, module_anyio$_core$_compat, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_49d089d39797bbcc145d608b7e958e53_3);
        assert(Py_REFCNT(frame_49d089d39797bbcc145d608b7e958e53_3) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_15;
            tmp_dict_key_8 = mod_consts[94];
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_15 = mod_consts[95];
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_15);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_compat$$$function__11___init__(tmp_annotations_11);

            tmp_res = PyDict_SetItem(locals_anyio$_core$_compat$$$class__2_DeprecatedAwaitable_125, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_16;
            tmp_dict_key_9 = mod_consts[83];
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_16 = mod_consts[97];
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_16);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_compat$$$function__12___await__(tmp_annotations_12);

            tmp_res = PyDict_SetItem(locals_anyio$_core$_compat$$$class__2_DeprecatedAwaitable_125, mod_consts[32], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_18;
            tmp_dict_key_10 = mod_consts[83];
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_18 = Py_None;
            tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_18);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_17 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_19;
                PyObject *tmp_subscript_value_19;
                PyTuple_SET_ITEM(tmp_subscript_value_17, 0, tmp_tuple_element_5);
                tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[69]);

                if (unlikely(tmp_expression_value_19 == NULL)) {
                    tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                }

                if (tmp_expression_value_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 134;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                tmp_subscript_value_19 = mod_consts[90];
                tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_19);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 134;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_17, 1, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_subscript_value_17);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_17);
            Py_DECREF(tmp_subscript_value_17);
            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_13 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_10, tmp_dict_value_10);
            Py_DECREF(tmp_dict_value_10);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_compat$$$function__13___reduce__(tmp_annotations_13);

            tmp_res = PyDict_SetItem(locals_anyio$_core$_compat$$$class__2_DeprecatedAwaitable_125, mod_consts[99], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_49d089d39797bbcc145d608b7e958e53_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_49d089d39797bbcc145d608b7e958e53_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_49d089d39797bbcc145d608b7e958e53_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_49d089d39797bbcc145d608b7e958e53_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_49d089d39797bbcc145d608b7e958e53_3);

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
            PyObject *tmp_annotations_14;
            tmp_annotations_14 = DICT_COPY(mod_consts[101]);


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_compat$$$function__14__unwrap(tmp_annotations_14);

            tmp_res = PyDict_SetItem(locals_anyio$_core$_compat$$$class__2_DeprecatedAwaitable_125, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_7 = (PyObject *)&PyType_Type;
            tmp_tuple_element_6 = mod_consts[79];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[90];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_anyio$_core$_compat$$$class__2_DeprecatedAwaitable_125;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_3c0d41cbb6a32dac4c84754f1b26f752->m_frame.f_lineno = 125;
            tmp_assign_source_43 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_43;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_42 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_42);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_anyio$_core$_compat$$$class__2_DeprecatedAwaitable_125);
        locals_anyio$_core$_compat$$$class__2_DeprecatedAwaitable_125 = NULL;
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

        Py_DECREF(locals_anyio$_core$_compat$$$class__2_DeprecatedAwaitable_125);
        locals_anyio$_core$_compat$$$class__2_DeprecatedAwaitable_125 = NULL;
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
        exception_lineno = 125;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_42);
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

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[103];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_44 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_9;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_20 = tmp_class_creation_3__bases;
        tmp_subscript_value_20 = mod_consts[53];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_20, tmp_subscript_value_20, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_9;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_1 = tmp_class_creation_3__bases;
        tmp_assign_source_46 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_46;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_21 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_21, mod_consts[104]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_22 = tmp_class_creation_3__metaclass;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[104]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_9;
        }
        tmp_tuple_element_7 = mod_consts[80];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_7 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_3__class_decl_dict;
        frame_3c0d41cbb6a32dac4c84754f1b26f752->m_frame.f_lineno = 141;
        tmp_assign_source_47 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_47;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_23;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_23 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_23, mod_consts[105]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_9;
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
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[106];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_1 = mod_consts[40];
        tmp_getattr_default_1 = mod_consts[107];
        tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_24;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_2 = tmp_class_creation_3__prepared;
            tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_24 == NULL));
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[40]);
            Py_DECREF(tmp_expression_value_24);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 141;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_48;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_49;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[80];
        tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_11;
        }
        frame_86cfad06bb43b2bc8264a0dd0769c869_4 = MAKE_CLASS_FRAME(codeobj_86cfad06bb43b2bc8264a0dd0769c869, module_anyio$_core$_compat, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_86cfad06bb43b2bc8264a0dd0769c869_4);
        assert(Py_REFCNT(frame_86cfad06bb43b2bc8264a0dd0769c869_4) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_dict_key_11 = mod_consts[108];
            tmp_dict_value_11 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[109]);

            if (tmp_dict_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_11 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_dict_value_11);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_15 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_25;
                PyObject *tmp_subscript_value_21;
                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[94];
                tmp_expression_value_25 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[62]);

                if (tmp_expression_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_25 == NULL)) {
                            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 143;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_25);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_21 = mod_consts[110];
                tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_21);
                Py_DECREF(tmp_expression_value_25);
                if (tmp_dict_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 143;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_11, tmp_dict_value_11);
                Py_DECREF(tmp_dict_value_11);
                assert(!(tmp_res != 0));
                tmp_dict_key_11 = mod_consts[83];
                tmp_dict_value_11 = mod_consts[80];
                tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_11, tmp_dict_value_11);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_15);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;

            tmp_closure_1[0] = outline_2_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_compat$$$function__15___new__(tmp_annotations_15, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[35], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_dict_key_12 = mod_consts[108];
            tmp_dict_value_12 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[109]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_12 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_dict_value_12);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_16 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_26;
                PyObject *tmp_subscript_value_22;
                tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
                tmp_dict_key_12 = mod_consts[94];
                tmp_expression_value_26 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[62]);

                if (tmp_expression_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_26 == NULL)) {
                            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 147;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_26);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_subscript_value_22 = mod_consts[110];
                tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_22);
                Py_DECREF(tmp_expression_value_26);
                if (tmp_dict_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 147;
                    type_description_2 = "c";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_12, tmp_dict_value_12);
                Py_DECREF(tmp_dict_value_12);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_annotations_16);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_compat$$$function__16___init__(tmp_annotations_16);

            tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_17;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_23;
            PyObject *tmp_tuple_element_9;
            tmp_dict_key_13 = mod_consts[83];
            tmp_expression_value_27 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[64]);

            if (tmp_expression_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_expression_value_27 == NULL)) {
                        tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_expression_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 150;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_27);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_tuple_element_9 = Py_None;
            tmp_subscript_value_23 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_subscript_value_23, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = Py_None;
            PyTuple_SET_ITEM0(tmp_subscript_value_23, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[109]);

            if (tmp_tuple_element_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_9 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_tuple_element_9);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            PyTuple_SET_ITEM(tmp_subscript_value_23, 2, tmp_tuple_element_9);
            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_23);
            Py_DECREF(tmp_expression_value_27);
            Py_DECREF(tmp_subscript_value_23);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_17 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_compat$$$function__17___await__(tmp_annotations_17);

            tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[32], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_18;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_subscript_value_25;
            tmp_dict_key_14 = mod_consts[83];
            tmp_expression_value_28 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[69]);

            if (tmp_expression_value_28 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[69]);

                    if (unlikely(tmp_expression_value_28 == NULL)) {
                        tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                    }

                    if (tmp_expression_value_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 157;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_28);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_expression_value_29 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[70]);

            if (tmp_expression_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_expression_value_29 == NULL)) {
                        tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_expression_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_28);

                        exception_lineno = 157;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_expression_value_29);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_subscript_value_25 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[109]);

            if (tmp_subscript_value_25 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_25 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_subscript_value_25);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_25);
            Py_DECREF(tmp_expression_value_29);
            Py_DECREF(tmp_subscript_value_25);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_28);

                exception_lineno = 157;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_subscript_value_24 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_30;
                PyObject *tmp_subscript_value_26;
                PyTuple_SET_ITEM(tmp_subscript_value_24, 0, tmp_tuple_element_10);
                tmp_expression_value_30 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[69]);

                if (tmp_expression_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_expression_value_30 == NULL)) {
                            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_expression_value_30 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 157;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_30);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                tmp_subscript_value_26 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[109]);

                if (tmp_subscript_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_26 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_26);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_30, tmp_subscript_value_26);
                Py_DECREF(tmp_expression_value_30);
                Py_DECREF(tmp_subscript_value_26);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_24, 1, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_expression_value_28);
            Py_DECREF(tmp_subscript_value_24);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_24);
            Py_DECREF(tmp_expression_value_28);
            Py_DECREF(tmp_subscript_value_24);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
            tmp_annotations_18 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_compat$$$function__18___reduce__(tmp_annotations_18);

            tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[99], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_19;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            tmp_dict_key_15 = mod_consts[83];
            tmp_dict_value_15 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[109]);

            if (tmp_dict_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_15 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_dict_value_15);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_19 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_compat$$$function__19__unwrap(tmp_annotations_19);

            tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_86cfad06bb43b2bc8264a0dd0769c869_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_86cfad06bb43b2bc8264a0dd0769c869_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_86cfad06bb43b2bc8264a0dd0769c869_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_86cfad06bb43b2bc8264a0dd0769c869_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_86cfad06bb43b2bc8264a0dd0769c869_4);

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
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_3__bases;
            tmp_cmp_expr_right_1 = mod_consts[103];
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[103];
        tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141, mod_consts[115], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto try_except_handler_11;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_9 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_11 = mod_consts[80];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_11 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
            frame_3c0d41cbb6a32dac4c84754f1b26f752->m_frame.f_lineno = 141;
            tmp_assign_source_50 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto try_except_handler_11;
            }
            assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
            PyCell_SET(outline_2_var___class__, tmp_assign_source_50);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
        tmp_assign_source_49 = Nuitka_Cell_GET(outline_2_var___class__);
        Py_INCREF(tmp_assign_source_49);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141);
        locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141 = NULL;
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

        Py_DECREF(locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141);
        locals_anyio$_core$_compat$$$class__3_DeprecatedAwaitableFloat_141 = NULL;
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
        exception_lineno = 141;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_49);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_27;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_12;
        }
        tmp_subscript_value_27 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_subscript_value_27 == NULL)) {
            tmp_subscript_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_subscript_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_12;
        }
        tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_27);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_12;
        }
        tmp_assign_source_51 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_51, 0, tmp_tuple_element_12);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_52 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_28;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_12;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_32 = tmp_class_creation_4__bases;
        tmp_subscript_value_28 = mod_consts[53];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_32, tmp_subscript_value_28, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_12;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_12;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_2 = tmp_class_creation_4__bases;
        tmp_assign_source_54 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_54;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_33;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_33 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_33, mod_consts[104]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_34 = tmp_class_creation_4__metaclass;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[104]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_12;
        }
        tmp_tuple_element_13 = mod_consts[116];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_13 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_4__class_decl_dict;
        frame_3c0d41cbb6a32dac4c84754f1b26f752->m_frame.f_lineno = 164;
        tmp_assign_source_55 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_55;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_35 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_35, mod_consts[105]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_12;
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
        tmp_mod_expr_left_2 = mod_consts[106];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_2 = mod_consts[40];
        tmp_getattr_default_2 = mod_consts[107];
        tmp_tuple_element_14 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_12;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_36;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_4 = tmp_class_creation_4__prepared;
            tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_36 == NULL));
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[40]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_12;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 164;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_12;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_56;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_14;
        }
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_14;
        }
        frame_7795ef1f6766793a12d47ad2f1592b02_5 = MAKE_CLASS_FRAME(codeobj_7795ef1f6766793a12d47ad2f1592b02, module_anyio$_core$_compat, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7795ef1f6766793a12d47ad2f1592b02_5);
        assert(Py_REFCNT(frame_7795ef1f6766793a12d47ad2f1592b02_5) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_20;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_subscript_value_29;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_defaults_2 = mod_consts[117];
            tmp_dict_key_16 = mod_consts[118];
            tmp_expression_value_37 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[66]);

            if (tmp_expression_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_expression_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 167;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_37);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_subscript_value_29 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[78]);

            if (tmp_subscript_value_29 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_29 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[78]);

                    if (unlikely(tmp_subscript_value_29 == NULL)) {
                        tmp_subscript_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                    }

                    if (tmp_subscript_value_29 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_37);

                        exception_lineno = 167;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_subscript_value_29);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_29);
            Py_DECREF(tmp_expression_value_37);
            Py_DECREF(tmp_subscript_value_29);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
            tmp_annotations_20 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_38;
                PyObject *tmp_subscript_value_30;
                tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
                tmp_dict_key_16 = mod_consts[94];
                tmp_expression_value_38 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[62]);

                if (tmp_expression_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[62]);

                        if (unlikely(tmp_expression_value_38 == NULL)) {
                            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                        }

                        if (tmp_expression_value_38 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 169;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_38);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_subscript_value_30 = mod_consts[119];
                tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_30);
                Py_DECREF(tmp_expression_value_38);
                if (tmp_dict_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 169;
                    type_description_2 = "c";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_16, tmp_dict_value_16);
                Py_DECREF(tmp_dict_value_16);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_annotations_20);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;
            Py_INCREF(tmp_defaults_2);

            tmp_closure_2[0] = outline_3_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_compat$$$function__20___init__(tmp_defaults_2, tmp_annotations_20, tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 165;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_21;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_31;
            PyObject *tmp_tuple_element_15;
            tmp_dict_key_17 = mod_consts[83];
            tmp_expression_value_39 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[64]);

            if (tmp_expression_value_39 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[64]);

                    if (unlikely(tmp_expression_value_39 == NULL)) {
                        tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                    }

                    if (tmp_expression_value_39 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 174;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_39);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_tuple_element_15 = Py_None;
            tmp_subscript_value_31 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_40;
                PyObject *tmp_subscript_value_32;
                PyTuple_SET_ITEM0(tmp_subscript_value_31, 0, tmp_tuple_element_15);
                tmp_tuple_element_15 = Py_None;
                PyTuple_SET_ITEM0(tmp_subscript_value_31, 1, tmp_tuple_element_15);
                tmp_expression_value_40 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[67]);

                if (tmp_expression_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_expression_value_40 == NULL)) {
                            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_expression_value_40 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 174;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_40);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                tmp_subscript_value_32 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[78]);

                if (tmp_subscript_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_32 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[78]);

                        if (unlikely(tmp_subscript_value_32 == NULL)) {
                            tmp_subscript_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                        }

                        if (tmp_subscript_value_32 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_40);

                            exception_lineno = 174;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_subscript_value_32);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_32);
                Py_DECREF(tmp_expression_value_40);
                Py_DECREF(tmp_subscript_value_32);
                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 174;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_31, 2, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_expression_value_39);
            Py_DECREF(tmp_subscript_value_31);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_31);
            Py_DECREF(tmp_expression_value_39);
            Py_DECREF(tmp_subscript_value_31);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
            tmp_annotations_21 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_compat$$$function__21___await__(tmp_annotations_21);

            tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[32], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_22;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_33;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_subscript_value_34;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_subscript_value_35;
            tmp_dict_key_18 = mod_consts[83];
            tmp_expression_value_41 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[69]);

            if (tmp_expression_value_41 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[69]);

                    if (unlikely(tmp_expression_value_41 == NULL)) {
                        tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                    }

                    if (tmp_expression_value_41 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 181;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_41);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_42 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[70]);

            if (tmp_expression_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_expression_value_42 == NULL)) {
                        tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_expression_value_42 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_41);

                        exception_lineno = 181;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_42);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_43 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[67]);

            if (tmp_expression_value_43 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_43 == NULL)) {
                        tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_43 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_41);
                        Py_DECREF(tmp_expression_value_42);

                        exception_lineno = 181;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_43);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_subscript_value_35 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[78]);

            if (tmp_subscript_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_35 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[78]);

                    if (unlikely(tmp_subscript_value_35 == NULL)) {
                        tmp_subscript_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                    }

                    if (tmp_subscript_value_35 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_41);
                        Py_DECREF(tmp_expression_value_42);
                        Py_DECREF(tmp_expression_value_43);

                        exception_lineno = 181;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_subscript_value_35);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_subscript_value_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_35);
            Py_DECREF(tmp_expression_value_43);
            Py_DECREF(tmp_subscript_value_35);
            if (tmp_subscript_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_41);
                Py_DECREF(tmp_expression_value_42);

                exception_lineno = 181;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
            tmp_tuple_element_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_34);
            Py_DECREF(tmp_expression_value_42);
            Py_DECREF(tmp_subscript_value_34);
            if (tmp_tuple_element_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_41);

                exception_lineno = 181;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
            tmp_subscript_value_33 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_44;
                PyObject *tmp_subscript_value_36;
                PyObject *tmp_expression_value_45;
                PyObject *tmp_subscript_value_37;
                PyTuple_SET_ITEM(tmp_subscript_value_33, 0, tmp_tuple_element_16);
                tmp_expression_value_44 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[69]);

                if (tmp_expression_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_expression_value_44 == NULL)) {
                            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_expression_value_44 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 181;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_44);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                tmp_expression_value_45 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[67]);

                if (tmp_expression_value_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_expression_value_45 == NULL)) {
                            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_expression_value_45 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_44);

                            exception_lineno = 181;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_45);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                tmp_subscript_value_37 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[78]);

                if (tmp_subscript_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_37 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[78]);

                        if (unlikely(tmp_subscript_value_37 == NULL)) {
                            tmp_subscript_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                        }

                        if (tmp_subscript_value_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_44);
                            Py_DECREF(tmp_expression_value_45);

                            exception_lineno = 181;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_subscript_value_37);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                tmp_subscript_value_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_37);
                Py_DECREF(tmp_expression_value_45);
                Py_DECREF(tmp_subscript_value_37);
                if (tmp_subscript_value_36 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_44);

                    exception_lineno = 181;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                tmp_tuple_element_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_36);
                Py_DECREF(tmp_expression_value_44);
                Py_DECREF(tmp_subscript_value_36);
                if (tmp_tuple_element_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 181;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_33, 1, tmp_tuple_element_16);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_expression_value_41);
            Py_DECREF(tmp_subscript_value_33);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_33);
            Py_DECREF(tmp_expression_value_41);
            Py_DECREF(tmp_subscript_value_33);
            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
            tmp_annotations_22 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_18, tmp_dict_value_18);
            Py_DECREF(tmp_dict_value_18);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_compat$$$function__22___reduce__(tmp_annotations_22);

            tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[99], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_23;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_38;
            tmp_dict_key_19 = mod_consts[83];
            tmp_expression_value_46 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[67]);

            if (tmp_expression_value_46 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[67]);

                    if (unlikely(tmp_expression_value_46 == NULL)) {
                        tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                    }

                    if (tmp_expression_value_46 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 184;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_46);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_subscript_value_38 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[78]);

            if (tmp_subscript_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_38 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[78]);

                    if (unlikely(tmp_subscript_value_38 == NULL)) {
                        tmp_subscript_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                    }

                    if (tmp_subscript_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_46);

                        exception_lineno = 184;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_subscript_value_38);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_38);
            Py_DECREF(tmp_expression_value_46);
            Py_DECREF(tmp_subscript_value_38);
            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
            tmp_annotations_23 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_19, tmp_dict_value_19);
            Py_DECREF(tmp_dict_value_19);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_compat$$$function__23__unwrap(tmp_annotations_23);

            tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[3], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 184;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7795ef1f6766793a12d47ad2f1592b02_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7795ef1f6766793a12d47ad2f1592b02_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7795ef1f6766793a12d47ad2f1592b02_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7795ef1f6766793a12d47ad2f1592b02_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_7795ef1f6766793a12d47ad2f1592b02_5);

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
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto try_except_handler_14;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164, mod_consts[115], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto try_except_handler_14;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_11 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_17 = mod_consts[116];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_17 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_17);
            tmp_tuple_element_17 = locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_4__class_decl_dict;
            frame_3c0d41cbb6a32dac4c84754f1b26f752->m_frame.f_lineno = 164;
            tmp_assign_source_58 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto try_except_handler_14;
            }
            assert(Nuitka_Cell_GET(outline_3_var___class__) == NULL);
            PyCell_SET(outline_3_var___class__, tmp_assign_source_58);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_3_var___class__));
        tmp_assign_source_57 = Nuitka_Cell_GET(outline_3_var___class__);
        Py_INCREF(tmp_assign_source_57);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164);
        locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164 = NULL;
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

        Py_DECREF(locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164);
        locals_anyio$_core$_compat$$$class__4_DeprecatedAwaitableList_164 = NULL;
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
        exception_lineno = 164;
        goto try_except_handler_12;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_57);
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

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_subscript_value_39;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_expression_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_15;
        }
        tmp_subscript_value_39 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_subscript_value_39 == NULL)) {
            tmp_subscript_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_subscript_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_15;
        }
        tmp_tuple_element_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_39);
        if (tmp_tuple_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_15;
        }
        tmp_assign_source_59 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_59, 0, tmp_tuple_element_18);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_60 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        tmp_dict_key_20 = mod_consts[123];
        tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_dict_value_20 == NULL)) {
            tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_15;
        }
        tmp_assign_source_61 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_61, tmp_dict_key_20, tmp_dict_value_20);
        assert(!(tmp_res != 0));
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_metaclass_value_3;
        bool tmp_condition_result_9;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_subscript_value_40;
        PyObject *tmp_bases_value_3;
        tmp_key_value_1 = mod_consts[123];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_5__class_decl_dict;
        tmp_key_value_2 = mod_consts[123];
        tmp_metaclass_value_3 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_3 == NULL) {
            tmp_metaclass_value_3 = Py_None;
        }
        assert(!(tmp_metaclass_value_3 == NULL));
        Py_INCREF(tmp_metaclass_value_3);
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_15;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_48 = tmp_class_creation_5__bases;
        tmp_subscript_value_40 = mod_consts[53];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_48, tmp_subscript_value_40, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_15;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_15;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_3 = tmp_class_creation_5__bases;
        tmp_assign_source_62 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_62;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[123];
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_5__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;
    tmp_dictdel_key = mod_consts[123];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 188;

        goto try_except_handler_15;
    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_expression_value_49;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_49 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_49, mod_consts[104]);
        tmp_condition_result_12 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_50 = tmp_class_creation_5__metaclass;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[104]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_15;
        }
        tmp_tuple_element_19 = mod_consts[124];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_19);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_19 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_19);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_5__class_decl_dict;
        frame_3c0d41cbb6a32dac4c84754f1b26f752->m_frame.f_lineno = 188;
        tmp_assign_source_63 = CALL_FUNCTION(tmp_called_value_12, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_63;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_51;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_51 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_51, mod_consts[105]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_15;
        }
        tmp_condition_result_13 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
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
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[106];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_3 = mod_consts[40];
        tmp_getattr_default_3 = mod_consts[107];
        tmp_tuple_element_20 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_15;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_52;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_6 = tmp_class_creation_5__prepared;
            tmp_expression_value_52 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_52 == NULL));
            tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[40]);
            Py_DECREF(tmp_expression_value_52);
            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_20);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_15;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_15;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 188;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_15;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_64;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_65;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[87];
        tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[28], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_17;
        }
        tmp_dictset_value = mod_consts[124];
        tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[30], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_17;
        }
        frame_c0de53d5988536db742b148b76383a4c_6 = MAKE_CLASS_FRAME(codeobj_c0de53d5988536db742b148b76383a4c, module_anyio$_core$_compat, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c0de53d5988536db742b148b76383a4c_6);
        assert(Py_REFCNT(frame_c0de53d5988536db742b148b76383a4c_6) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_annotations_24;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            tmp_called_value_13 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[55]);

            if (tmp_called_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[55]);

                    if (unlikely(tmp_called_value_13 == NULL)) {
                        tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
                    }

                    if (tmp_called_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 189;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_value_13);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_dict_key_21 = mod_consts[83];
            tmp_dict_value_21 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[78]);

            if (tmp_dict_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[78]);

                    if (unlikely(tmp_dict_value_21 == NULL)) {
                        tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                    }

                    if (tmp_dict_value_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_13);

                        exception_lineno = 190;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_dict_value_21);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_annotations_24 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_21, tmp_dict_value_21);
            Py_DECREF(tmp_dict_value_21);
            assert(!(tmp_res != 0));


            tmp_args_element_value_5 = MAKE_FUNCTION_anyio$_core$_compat$$$function__24___enter__(tmp_annotations_24);

            frame_c0de53d5988536db742b148b76383a4c_6->m_frame.f_lineno = 189;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 190;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_annotations_25;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_subscript_value_41;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_subscript_value_42;
            tmp_called_value_14 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[55]);

            if (tmp_called_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[55]);

                    if (unlikely(tmp_called_value_14 == NULL)) {
                        tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
                    }

                    if (tmp_called_value_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 193;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_called_value_14);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_dict_key_22 = mod_consts[10];
            tmp_expression_value_53 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[68]);

            if (tmp_expression_value_53 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[68]);

                    if (unlikely(tmp_expression_value_53 == NULL)) {
                        tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                    }

                    if (tmp_expression_value_53 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);

                        exception_lineno = 196;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_53);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_expression_value_54 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[70]);

            if (tmp_expression_value_54 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_expression_value_54 == NULL)) {
                        tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_expression_value_54 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_14);
                        Py_DECREF(tmp_expression_value_53);

                        exception_lineno = 196;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_54);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_subscript_value_42 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[126]);

            if (tmp_subscript_value_42 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_42 = PyExc_BaseException;
                    Py_INCREF(tmp_subscript_value_42);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_subscript_value_41 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_42);
            Py_DECREF(tmp_expression_value_54);
            Py_DECREF(tmp_subscript_value_42);
            if (tmp_subscript_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);
                Py_DECREF(tmp_expression_value_53);

                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_41);
            Py_DECREF(tmp_expression_value_53);
            Py_DECREF(tmp_subscript_value_41);
            if (tmp_dict_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_14);

                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_annotations_25 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_55;
                PyObject *tmp_subscript_value_43;
                PyObject *tmp_expression_value_56;
                PyObject *tmp_subscript_value_44;
                PyObject *tmp_expression_value_57;
                PyObject *tmp_subscript_value_45;
                tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_22, tmp_dict_value_22);
                Py_DECREF(tmp_dict_value_22);
                assert(!(tmp_res != 0));
                tmp_dict_key_22 = mod_consts[11];
                tmp_expression_value_55 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[68]);

                if (tmp_expression_value_55 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_expression_value_55 == NULL)) {
                            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_expression_value_55 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 197;
                            type_description_2 = "o";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_55);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_subscript_value_43 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[126]);

                if (tmp_subscript_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_43 = PyExc_BaseException;
                        Py_INCREF(tmp_subscript_value_43);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_43);
                Py_DECREF(tmp_expression_value_55);
                Py_DECREF(tmp_subscript_value_43);
                if (tmp_dict_value_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 197;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_22, tmp_dict_value_22);
                Py_DECREF(tmp_dict_value_22);
                assert(!(tmp_res != 0));
                tmp_dict_key_22 = mod_consts[12];
                tmp_expression_value_56 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[68]);

                if (tmp_expression_value_56 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_expression_value_56 == NULL)) {
                            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_expression_value_56 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 198;
                            type_description_2 = "o";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_56);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_subscript_value_44 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[58]);

                if (tmp_subscript_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_44 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[58]);

                        if (unlikely(tmp_subscript_value_44 == NULL)) {
                            tmp_subscript_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
                        }

                        if (tmp_subscript_value_44 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_56);

                            exception_lineno = 198;
                            type_description_2 = "o";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_subscript_value_44);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_56, tmp_subscript_value_44);
                Py_DECREF(tmp_expression_value_56);
                Py_DECREF(tmp_subscript_value_44);
                if (tmp_dict_value_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 198;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_22, tmp_dict_value_22);
                Py_DECREF(tmp_dict_value_22);
                assert(!(tmp_res != 0));
                tmp_dict_key_22 = mod_consts[83];
                tmp_expression_value_57 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[68]);

                if (tmp_expression_value_57 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_expression_value_57 == NULL)) {
                            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_expression_value_57 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 199;
                            type_description_2 = "o";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_57);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_subscript_value_45 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[127]);

                if (tmp_subscript_value_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_45 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_45);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_57, tmp_subscript_value_45);
                Py_DECREF(tmp_expression_value_57);
                Py_DECREF(tmp_subscript_value_45);
                if (tmp_dict_value_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 199;
                    type_description_2 = "o";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_22, tmp_dict_value_22);
                Py_DECREF(tmp_dict_value_22);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_annotations_25);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;


            tmp_args_element_value_6 = MAKE_FUNCTION_anyio$_core$_compat$$$function__25___exit__(tmp_annotations_25);

            frame_c0de53d5988536db742b148b76383a4c_6->m_frame.f_lineno = 193;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[9], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_26;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            tmp_dict_key_23 = mod_consts[83];
            tmp_dict_value_23 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[78]);

            if (tmp_dict_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[78]);

                    if (unlikely(tmp_dict_value_23 == NULL)) {
                        tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
                    }

                    if (tmp_dict_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 202;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_dict_value_23);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_annotations_26 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_compat$$$function__26___aenter__(tmp_annotations_26);

            tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_27;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_subscript_value_46;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_subscript_value_47;
            tmp_dict_key_24 = mod_consts[10];
            tmp_expression_value_58 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[68]);

            if (tmp_expression_value_58 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[68]);

                    if (unlikely(tmp_expression_value_58 == NULL)) {
                        tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                    }

                    if (tmp_expression_value_58 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 214;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_58);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_expression_value_59 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[70]);

            if (tmp_expression_value_59 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[70]);

                    if (unlikely(tmp_expression_value_59 == NULL)) {
                        tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                    }

                    if (tmp_expression_value_59 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_58);

                        exception_lineno = 214;
                        type_description_2 = "o";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_59);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_subscript_value_47 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[126]);

            if (tmp_subscript_value_47 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_47 = PyExc_BaseException;
                    Py_INCREF(tmp_subscript_value_47);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_subscript_value_46 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_47);
            Py_DECREF(tmp_expression_value_59);
            Py_DECREF(tmp_subscript_value_47);
            if (tmp_subscript_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_58);

                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_58, tmp_subscript_value_46);
            Py_DECREF(tmp_expression_value_58);
            Py_DECREF(tmp_subscript_value_46);
            if (tmp_dict_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_annotations_27 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_60;
                PyObject *tmp_subscript_value_48;
                PyObject *tmp_expression_value_61;
                PyObject *tmp_subscript_value_49;
                PyObject *tmp_expression_value_62;
                PyObject *tmp_subscript_value_50;
                tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_24, tmp_dict_value_24);
                Py_DECREF(tmp_dict_value_24);
                assert(!(tmp_res != 0));
                tmp_dict_key_24 = mod_consts[11];
                tmp_expression_value_60 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[68]);

                if (tmp_expression_value_60 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_expression_value_60 == NULL)) {
                            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_expression_value_60 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 215;
                            type_description_2 = "o";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_60);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_subscript_value_48 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[126]);

                if (tmp_subscript_value_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_48 = PyExc_BaseException;
                        Py_INCREF(tmp_subscript_value_48);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_60, tmp_subscript_value_48);
                Py_DECREF(tmp_expression_value_60);
                Py_DECREF(tmp_subscript_value_48);
                if (tmp_dict_value_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 215;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_24, tmp_dict_value_24);
                Py_DECREF(tmp_dict_value_24);
                assert(!(tmp_res != 0));
                tmp_dict_key_24 = mod_consts[12];
                tmp_expression_value_61 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[68]);

                if (tmp_expression_value_61 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_expression_value_61 == NULL)) {
                            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_expression_value_61 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 216;
                            type_description_2 = "o";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_61);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_subscript_value_49 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[58]);

                if (tmp_subscript_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_49 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[58]);

                        if (unlikely(tmp_subscript_value_49 == NULL)) {
                            tmp_subscript_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
                        }

                        if (tmp_subscript_value_49 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_61);

                            exception_lineno = 216;
                            type_description_2 = "o";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_subscript_value_49);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_49);
                Py_DECREF(tmp_expression_value_61);
                Py_DECREF(tmp_subscript_value_49);
                if (tmp_dict_value_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 216;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_24, tmp_dict_value_24);
                Py_DECREF(tmp_dict_value_24);
                assert(!(tmp_res != 0));
                tmp_dict_key_24 = mod_consts[83];
                tmp_expression_value_62 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[68]);

                if (tmp_expression_value_62 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_expression_value_62 == NULL)) {
                            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_expression_value_62 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 217;
                            type_description_2 = "o";
                            goto dict_build_exception_10;
                        }
                        Py_INCREF(tmp_expression_value_62);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_subscript_value_50 = PyObject_GetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[127]);

                if (tmp_subscript_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_50 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_subscript_value_50);
                    } else {
                        goto dict_build_exception_10;
                    }
                }

                tmp_dict_value_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_62, tmp_subscript_value_50);
                Py_DECREF(tmp_expression_value_62);
                Py_DECREF(tmp_subscript_value_50);
                if (tmp_dict_value_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 217;
                    type_description_2 = "o";
                    goto dict_build_exception_10;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_24, tmp_dict_value_24);
                Py_DECREF(tmp_dict_value_24);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_10;
            // Exception handling pass through code for dict_build:
            dict_build_exception_10:;
            Py_DECREF(tmp_annotations_27);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_10:;


            tmp_dictset_value = MAKE_FUNCTION_anyio$_core$_compat$$$function__27___aexit__(tmp_annotations_27);

            tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c0de53d5988536db742b148b76383a4c_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c0de53d5988536db742b148b76383a4c_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c0de53d5988536db742b148b76383a4c_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c0de53d5988536db742b148b76383a4c_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_c0de53d5988536db742b148b76383a4c_6);

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
            nuitka_bool tmp_condition_result_14;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto try_except_handler_17;
            }
            if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188, mod_consts[115], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;

            goto try_except_handler_17;
        }
        branch_no_10:;
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_15 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_21 = mod_consts[124];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_21 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_5__class_decl_dict;
            frame_3c0d41cbb6a32dac4c84754f1b26f752->m_frame.f_lineno = 188;
            tmp_assign_source_66 = CALL_FUNCTION(tmp_called_value_15, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto try_except_handler_17;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_66;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_65 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_65);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188);
        locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188 = NULL;
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

        Py_DECREF(locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188);
        locals_anyio$_core$_compat$$$class__5_DeprecatedAsyncContextManager_188 = NULL;
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
        exception_lineno = 188;
        goto try_except_handler_15;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_65);
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

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
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
        exception_tb = MAKE_TRACEBACK(frame_3c0d41cbb6a32dac4c84754f1b26f752, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3c0d41cbb6a32dac4c84754f1b26f752->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3c0d41cbb6a32dac4c84754f1b26f752, exception_lineno);
    }



    assertFrameObject(frame_3c0d41cbb6a32dac4c84754f1b26f752);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("anyio._core._compat", false);

    Py_INCREF(module_anyio$_core$_compat);
    return module_anyio$_core$_compat;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_anyio$_core$_compat, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("anyio$_core$_compat", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
